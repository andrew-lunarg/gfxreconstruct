#!/usr/bin/python3 -i
#
# Copyright (c) 2021 LunarG, Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to
# deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
# sell copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
# IN THE SOFTWARE.

import os, re, sys, inspect
from base_generator import *


class VulkanStructDecodersToStringBodyGeneratorOptions(BaseGeneratorOptions):
    """Options for generating C++ functions for Decoded versions of Vulkan struct ToString() functions"""

    def __init__(
        self,
        blacklists=None,  # Path to JSON file listing apicalls and structs to ignore.
        platformTypes=None,  # Path to JSON file listing platform (WIN32, X11, etc.) defined types.
        filename=None,
        directory='.',
        prefixText='',
        protectFile=False,
        protectFeature=True,
        extraVulkanHeaders=[]
    ):
        BaseGeneratorOptions.__init__(
            self,
            blacklists,
            platformTypes,
            filename,
            directory,
            prefixText,
            protectFile,
            protectFeature,
            extraVulkanHeaders=extraVulkanHeaders
        )


# VulkanStructDecodersToStringBodyGenerator - subclass of BaseGenerator.
# Generates C++ functions for stringifying Vulkan API structures.
class VulkanStructDecodersToStringBodyGenerator(BaseGenerator):
    """Generate C++ functions for Vulkan ToString() functions"""

    def __init__(
        self, err_file=sys.stderr, warn_file=sys.stderr, diag_file=sys.stdout
    ):
        BaseGenerator.__init__(
            self,
            process_cmds=False,
            process_structs=True,
            feature_break=True,
            err_file=err_file,
            warn_file=warn_file,
            diag_file=diag_file
        )

        # The following structures require custom implementations for ToString()
        self.customImplementationRequired = {
            'VkAccelerationStructureBuildGeometryInfoKHR',
            'VkAccelerationStructureVersionInfoKHR',
            'VkPhysicalDeviceMemoryProperties',
            'VkPipelineExecutableStatisticKHR',
            'VkPipelineMultisampleStateCreateInfo',
            'VkShaderModuleCreateInfo',
            'VkTransformMatrixKHR',
        }

    # Method override
    # yapf: disable
    def beginFile(self, genOpts):
        BaseGenerator.beginFile(self, genOpts)
        body = inspect.cleandoc('''
            #include "decode/custom_vulkan_struct_decoders_to_string.h"
            #include "generated_vulkan_struct_to_string.h"
            #include "generated_vulkan_struct_decoders_to_string.h"
            #include "generated_vulkan_enum_to_string.h"

            GFXRECON_BEGIN_NAMESPACE(gfxrecon)
            GFXRECON_BEGIN_NAMESPACE(util)
            ''')
        write(body, file=self.outFile)
    # yapf: enable

    # Method override
    # yapf: disable
    def endFile(self):
        body = inspect.cleandoc('''
            GFXRECON_END_NAMESPACE(util)
            GFXRECON_END_NAMESPACE(gfxrecon)
            ''')
        write(body, file=self.outFile)

        # Finish processing in superclass
        BaseGenerator.endFile(self)
    # yapf: enable

    #
    # Indicates that the current feature has C++ code to generate.
    def need_feature_generation(self):
        self.feature_break = False
        if self.feature_struct_members:
            return True
        return False

    #
    # Performs C++ code generation for the feature.
    # yapf: disable
    def generate_feature(self):
        for struct in self.get_filtered_struct_names():
            if not struct in self.customImplementationRequired:
                body = inspect.cleandoc('''
                    template <> std::string ToString<decode::Decoded_{0}>(const decode::Decoded_{0}& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
                    {{
                        assert(decoded_obj.decoded_value != nullptr);
                        if(decoded_obj.decoded_value == nullptr)
                        {{
                            return "";
                        }}
                        const {0}& obj = *decoded_obj.decoded_value;
                        return ObjectToString(toStringFlags, tabCount, tabSize,
                            [&](std::stringstream& strStrm)
                            {{
                    '''.format(struct))
                body += '\n'
                body += self.makeStructBody(struct, self.feature_struct_members[struct])
                body += inspect.cleandoc('''
                            }
                        );
                    }
                    ''')
                body += '\n'
                write(body, file=self.outFile)
    # yapf: enable

    #
    # Command definition
    # yapf: disable
    def makeStructBody(self, name, values):
        body = ''
        hasHandle = False
        hasSingleHandle = False
        hasArrayPtrHandle = False
        for value in values:

            # Start with a static_assert() so that if any values make it through the logic
            #   below without being handled the generated code will fail to compile
            toString = 'static_assert(false, "Unhandled value in `vulkan_struct_decoders_to_string_body_generator.py`")'

            if 'pAttachments' in value.name:
                print("Set breakpoint here.")

            # pNext requires custom handling
            if 'pNext' in value.name:
                # Original: toString = 'PNextToString(obj.pNext, toStringFlags, tabCount, tabSize)'
                # FixMe: Need a new version of this generated function.
                toString = 'PNextToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize) /* <----------------- ToDo: Generate pnext to strings for decoded types.*/'


            # Function pointers and void data pointers simply write the address
            elif 'pfn' in value.name:
                # toString = '"\\"" + PtrToString(obj.{0}) + "\\""'
                # In decoded types these are uint64_ts:
                toString = '"\\"" + ToString(decoded_obj.{0}) + "\\"" /* <--------- function pointer case. */'
            elif 'void' in value.full_type:
                # Original: toString = '"\\"" + PtrToString(obj.{0}) + "\\""'
                toString = '"\\"" + PtrToString(obj.{0}) + "\\"" /* <---------- \"void\" in full_type [ToDo!]*/'
                # In decoded types these are PointerDecoder<T>s:
                # This should be for some members: toString = '"\\"" + PtrToString(decoded_obj.{0}.GetPointer()) + "\\"" /* <--------- void pointer case. [ToDo: GetOutputPointer() instead?] */'
                # toString = '"\\"" + ToString(decoded_obj.{0}) + "\\"" /* <--------- void pointer case. */'
                # ToDo:
                # 1. This is hitting pointer to initial data in Decoded_VkPipelineCacheCreateInfo (PointerDecoder<uint8_t> pInitialData;_)
                #    which was a `const void* pInitialData;` in the raw struct.
                #    Discriminate this!

            # C strings require custom handling
            elif 'const char*' in value.full_type:
                if 'const char* const*' in value.full_type:
                    toString = 'CStrArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize) /* <--------- Pointer to C strings case */'
                else:
                    toString = '(obj.{0} ? ("\\"" + std::string(obj.{0}) + "\\"") : "null") /* <--------- C string case */'

            # There's some repeated code in this if/else block...for instance, arrays of
            #   structs, enums, and primitives all route through ArrayToString()...It's
            #   easier (imo) to reason about each case when they're all listed explictly
            elif value.is_pointer:
                if value.is_array:
                    if self.is_handle(value.base_type):
                        # BOOKMARK <-------------------------------------------------------------------------------------- Keep working through these making good choices.
                        # Original: toString = 'VkHandleArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                        toString = 'VkHandleArrayToString(decoded_obj.{0}, toStringFlags, tabCount, tabSize) /* <-------- Pointer to array of handles case. */ '
                        hasHandle = True
                        hasArrayPtrHandle = True
                    elif self.is_struct(value.base_type):
                        toString = 'ArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                    elif self.is_enum(value.base_type):
                        toString = 'VkEnumArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                    else:
                        toString = 'ArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                else:
                    if self.is_handle(value.base_type):
                        toString = 'static_assert(false, "Unhandled pointer to VkHandle in `vulkan_struct_decoders_to_string_body_generator.py`")'
                        hasHandle = True
                    elif self.is_struct(value.base_type):
                        toString = '(obj.{0} ? ToString(*obj.{0}, toStringFlags, tabCount, tabSize) : "\\"null\\"")'
                    elif self.is_enum(value.base_type):
                        toString = 'static_assert(false, "Unhandled pointer to VkEnum in `vulkan_struct_decoders_to_string_body_generator.py`")'
                    else:
                        toString = '(obj.{0} ? ToString(*obj.{0}, toStringFlags, tabCount, tabSize) : "\\"null\\"")'
            else:
                if value.is_array:
                    if self.is_handle(value.base_type):
                        #toString = 'VkHandleArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                        toString = 'VkHandleArrayToString(obj.{1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                        hasHandle = True
                    elif self.is_struct(value.base_type):
                        toString = 'ArrayToString({1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                    elif self.is_enum(value.base_type):
                        toString = 'ArrayToString({1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                    elif 'char' in value.base_type:
                        toString = '\'"\' + std::string(obj.{0}) + \'"\''
                    elif 'UUID' in value.array_length or 'LUID' in value.array_length:
                        toString = '\'"\' + UIDToString({1}, obj.{0}) + \'"\''
                    else:
                        toString = 'ArrayToString({1}, obj.{0}, toStringFlags, tabCount, tabSize)'
                else:
                    if self.is_handle(value.base_type):
                        # Version accessing the null handle in the raw vulkan struct: toString = '\'"\' + VkHandleToString(obj.{0}) + \'"\''
                        # Outputs a hex value:
                        toString = '\'"\' + VkHandleToString(decoded_obj.{0}) + \'"\' /* < ------------ handle case*/'
                        # Outputs decimal value, not hex: toString = '\'"\' + ToString(decoded_obj.{0}) + \'"\''
                        hasHandle = True
                        hasSingleHandle = True
                    elif self.is_struct(value.base_type):
                        # Raw struct: toString = 'ToString(obj.{0}, toStringFlags, tabCount, tabSize)'
                        # Fails: toString = 'ToString(decoded_obj.{0}, toStringFlags, tabCount, tabSize) /* < ------------ struct case*/'
                        toString = 'ToString(*(decoded_obj.{0}), toStringFlags, tabCount, tabSize) /* < ------------ struct case*/'
                    elif self.is_enum(value.base_type):
                        toString = '\'"\' + ToString(obj.{0}, toStringFlags, tabCount, tabSize) + \'"\' /* < ------------ enum case*/'
                    else:
                        toString = 'ToString(obj.{0}, toStringFlags, tabCount, tabSize) /* < ------------ else case*/'

            firstField = 'true' if not body else 'false'
            toString = toString.format(value.name, value.array_length)
            body += '            FieldToString(strStrm, {0}, "{1}", toStringFlags, tabCount, tabSize, {2});\n'.format(firstField, value.name, toString)
        if(hasHandle == True):
                body += '            /* Struct has at least one handle - Andy */\n'
        if(hasSingleHandle == True):
                body += '            /* Struct has at least one single handle - Andy */\n'
        if(hasArrayPtrHandle == True):
                body += '            /* Struct has at least one pointer to an array of handles - Andy */\n'

        return body
    # yapf: enable
