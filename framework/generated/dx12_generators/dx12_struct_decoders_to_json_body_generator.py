#!/usr/bin/env python3
#
# Copyright (c) 2023 Valve Corporation
# Copyright (c) 2021-2023 LunarG, Inc.
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

import sys
from base_generator import write
from dx12_base_generator import Dx12BaseGenerator
from reformat_code import format_cpp_code

class Dx12StructDecodersToJsonBodyGenerator(Dx12BaseGenerator):
    """Generates C++ functions responsible for converting structs to JSON."""

    def __init__(
        self,
        source_dict,
        dx12_prefix_strings,
        err_file=sys.stderr,
        warn_file=sys.stderr,
        diag_file=sys.stdout
    ):
        Dx12BaseGenerator.__init__(
            self, source_dict, dx12_prefix_strings, err_file, warn_file,
            diag_file
        )

    def beginFile(self, gen_opts):
        Dx12BaseGenerator.beginFile(self, gen_opts)
        ## @todo De-duplicate this list.
        '''self.STRUCT_BLACKLIST.append('DXGI_DISPLAY_COLOR_SPACE')
        self.STRUCT_BLACKLIST.append('D3D12_RAYTRACING_INSTANCE_DESC')
        self.STRUCT_BLACKLIST.append('D3D12_CPU_DESCRIPTOR_HANDLE')
        self.STRUCT_BLACKLIST.append('D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION')
        self.STRUCT_BLACKLIST.append('D3D12_GPU_DESCRIPTOR_HANDLE')
        self.STRUCT_BLACKLIST.append('_SECURITY_ATTRIBUTES')
        self.STRUCT_BLACKLIST.remove('D3D12_CPU_DESCRIPTOR_HANDLE')'''
        self.STRUCT_BLACKLIST.append('GUID')

        code = format_cpp_code('''
            #include "generated_dx12_struct_decoders_to_json.h"
            #include "generated_dx12_struct_to_json.h"
            #include "generated_dx12_struct_decoders.h"
            #include "decode/custom_dx12_struct_decoders.h"
            #include "decode/decode_json_util.h"
            #include "graphics/dx12_util.h"
            #include "util/json_util.h"

            GFXRECON_BEGIN_NAMESPACE(gfxrecon)
            GFXRECON_BEGIN_NAMESPACE(decode)

            using util::JsonOptions;
        ''')
        write(code, file=self.outFile)
        self.newline()

    def generate_feature(self):
        struct_dict = self.source_dict['struct_dict']
        for k, v in struct_dict.items():
            if not self.is_struct_black_listed(k):
                body = format_cpp_code('''
                    void FieldToJson(nlohmann::ordered_json& jdata, const Decoded_{0}* data, const JsonOptions& options)
                    {{
                        using namespace util;
                        if (data && data->decoded_value)
                        {{
                            const {0}& decoded_value = *data->decoded_value;
                            const Decoded_{0}& meta_struct = *data;
                    '''.format(k))
                body += '\n'
                body += self.makeStructBody(k, v)
                body += format_cpp_code('''
                    }
                }
                ''', 2)
                body += '\n'
                write(body, file=self.outFile)

    # yapf: disable
    def makeStructBody(self, name, values):
        body = ''
        for property_type, properties in values['properties'].items():
            for p in properties:
                value = self.get_value_info(p)
                type = p['type']
                # @todo BOOL type?  FieldToJson(jdata["RectsCoalesced"], obj.RectsCoalesced ???
                field_to_json = '        ; ///< @todo Generate for {0}[{1}]: ' + str(value.base_type)
                if "anon-union" in type:
                    message = "ALERT: Union member of {0} with type {1} needs special handling.".format(name, type)
                    print(message)
                    field_to_json = '        ; ///< @todo ' + message
                elif not (value.is_pointer or value.is_array or self.is_handle(value.base_type) or self.is_struct(value.base_type)):
                    field_to_json = '        FieldToJson(jdata["{0}"], decoded_value.{0}, options); //'

                if value.is_pointer:
                    field_to_json += " [is_pointer]"
                if value.is_array:
                        field_to_json += " [is_array]"
                if self.is_handle(value.base_type):
                    field_to_json += " [is_handle]"
                elif self.is_struct(value.base_type):
                    field_to_json += " [is_struct]"
                elif self.is_enum(value.base_type):
                    field_to_json += " [is_enum]"
                field_to_json = field_to_json.format(value.name, value.array_length)
                body += field_to_json + '\n'
        return body
    # yapf: enable

    def endFile(self):
        """Method override."""
        custom_impls = format_cpp_code('''
            /// @todo Put the custom implementations in the generator Python here rather than
            /// creating a whole new compilation unit for them.

            void FieldToJson(nlohmann::ordered_json& jdata, const Decoded_D3D12_BARRIER_GROUP* data, const JsonOptions& options)
            {
                using namespace util;
                if (data && data->decoded_value)
                {
                    const D3D12_BARRIER_GROUP& decoded_value = *data->decoded_value;
                    const Decoded_D3D12_BARRIER_GROUP& meta_struct = *data;
                    FieldToJson(jdata["Type"], decoded_value.Type, options); // [is_enum]
                    FieldToJson(jdata["NumBarriers"], decoded_value.NumBarriers, options); //
                    /// @todo Implement this union: FieldToJson(jdata[""], decoded_value., options); //
                }
            }

            // D3D12_CLEAR_VALUE contains a union so we need to output depending on the format.
            void FieldToJson(nlohmann::ordered_json& jdata, const Decoded_D3D12_CLEAR_VALUE* data, const JsonOptions& options)
            {
                using namespace util;

                if (data && data->decoded_value)
                {
                    const D3D12_CLEAR_VALUE& decoded_value = *data->decoded_value;
                    const Decoded_D3D12_CLEAR_VALUE& meta_struct = *data;
                    FieldToJson(jdata["Format"], decoded_value.Format, options);
                    if(graphics::dx12::IsDepthStencilFormat(decoded_value.Format))
                    {
                        FieldToJson(jdata["DepthStencil"], decoded_value.DepthStencil, options);
                    }
                    else
                    {
                        auto& color = jdata["Color"];
                        FieldToJson(color[0], decoded_value.Color[0], options);
                        FieldToJson(color[1], decoded_value.Color[1], options);
                        FieldToJson(color[2], decoded_value.Color[2], options);
                        FieldToJson(color[3], decoded_value.Color[3], options);
                        FieldToJson(color, &meta_struct.Color, options);
                        FieldToJson(color, decoded_value.Color, options);
                        FieldToJson(color, decoded_value.Color, 4, options);

                        /// @todo look at this in the debugger and choose one of the compact options.
                    }
                }
            }

            void FieldToJson(nlohmann::ordered_json& jdata, const Decoded_D3D12_RESOURCE_BARRIER* data, const JsonOptions& options)
            {
                using namespace util;
                if (data && data->decoded_value)
                {
                    const D3D12_RESOURCE_BARRIER& decoded_value = *data->decoded_value;
                    const Decoded_D3D12_RESOURCE_BARRIER& meta_struct = *data;
                    FieldToJson(jdata["Type"], decoded_value.Type, options); // [is_enum]
                    FieldToJson(jdata["Flags"], decoded_value.Flags, options); // [is_enum]
                    /// @todo Implement this union: FieldToJson(jdata[""], decoded_value., options);
                }
            }

            void FieldToJson(nlohmann::ordered_json& jdata, const Decoded_D3D12_TEXTURE_COPY_LOCATION* data, const JsonOptions& options)
            {
                using namespace util;
                if (data && data->decoded_value)
                {
                    const D3D12_TEXTURE_COPY_LOCATION& decoded_value = *data->decoded_value;
                    const Decoded_D3D12_TEXTURE_COPY_LOCATION& meta_struct = *data;
                    ; ///< @todo Generate for pResource[None]: ID3D12Resource [is_pointer]
                    FieldToJson(jdata["Type"], decoded_value.Type, options); // [is_enum]
                    /// @todo Implement this union: FieldToJson(jdata[""], decoded_value., options); //
                }
            }
        ''') + '\n'
        write(custom_impls, file=self.outFile)
        write('GFXRECON_END_NAMESPACE(decode)', file=self.outFile)
        write('GFXRECON_END_NAMESPACE(gfxrecon)', file=self.outFile)

        # Finish processing in superclass
        Dx12BaseGenerator.endFile(self)
