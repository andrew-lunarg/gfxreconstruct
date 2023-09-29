#!/usr/bin/env python3
#
# Copyright (c) 2021-2023 LunarG, Inc.
# Copyright (c) 2023 Valve Corporation
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

import sys, inspect
from base_generator import write
from dx12_base_generator import Dx12BaseGenerator

class Dx12StructToJsonBodyGenerator(Dx12BaseGenerator):
    """TODO : Generates C++ functions responsible for Convert to texts."""

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
        self.STRUCT_BLACKLIST.append('DXGI_DISPLAY_COLOR_SPACE')
        self.STRUCT_BLACKLIST.append('D3D12_RAYTRACING_INSTANCE_DESC')
        self.STRUCT_BLACKLIST.append('D3D12_CPU_DESCRIPTOR_HANDLE')
        self.STRUCT_BLACKLIST.append('D3D12_DXIL_SUBOBJECT_TO_EXPORTS_ASSOCIATION')
        self.STRUCT_BLACKLIST.append('D3D12_GPU_DESCRIPTOR_HANDLE')
        self.STRUCT_BLACKLIST.append('_SECURITY_ATTRIBUTES')
        self.STRUCT_BLACKLIST.append('GUID')
        Dx12BaseGenerator.beginFile(self, gen_opts)

        code = '#include "generated_dx12_struct_to_json.h"\n'
        code += '#include "decode/custom_dx12_to_string.h"\n'
        code += '#include "generated_dx12_enum_to_string.h"\n'
        write(code, file=self.outFile)

        write('GFXRECON_BEGIN_NAMESPACE(gfxrecon)', file=self.outFile)
        write('GFXRECON_BEGIN_NAMESPACE(util)', file=self.outFile)
        self.newline()

    def generate_feature(self):
        struct_dict = self.source_dict['struct_dict']
        for k, v in struct_dict.items():
            if not self.is_struct_black_listed(k):
                body = inspect.cleandoc('''
                    void FieldToJson(nlohmann::ordered_json& jdata, const {0}& obj, const JsonOptions& options)
                    {{
                    '''.format(k))
                body += '\n'
                body += self.makeStructBody(k, v)
                body += inspect.cleandoc('''
                    }
                    ''')
                body += '\n'
                write(body, file=self.outFile)

    # yapf: disable
    def makeStructBody(self, name, values):
        body = ''
        for property_type, properties in values['properties'].items():
            for p in properties:
                value = self.get_value_info(p)

                # Start with a static_assert() so that if any values make it through the logic
                #   below without being handled the generated code will fail to compile
                to_string = '    ;\n'
                # to_string = '    static_assert(false, "Unhandled value in `dx12_struct_to_string_body_generator.py`");'
                # to_string = '    FieldToJson(jdata["{0}"], obj.{0}, options);\n'
                to_string = to_string.format(value.name, value.array_length)
                body += to_string
        return body
    # yapf: enable

    def endFile(self):
        """Methond override."""
        self.newline()
        write('GFXRECON_END_NAMESPACE(util)', file=self.outFile)
        write('GFXRECON_END_NAMESPACE(gfxrecon)', file=self.outFile)

        # Finish processing in superclass
        Dx12BaseGenerator.endFile(self)
