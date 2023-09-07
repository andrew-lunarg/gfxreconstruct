/*
** Copyright (c) 2022-2023 LunarG, Inc.
<<<<<<< HEAD
** Copyright (c) 2023 Valve Corporation.
=======
>>>>>>> cd035c3d (Moved json_util.h from decode to util)
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

/// @file API-agnostic options and helpers for outputting JSON used by all
/// the JSON-generating components such as the Consumers in.

#ifndef GFXRECON_UTIL_JSON_UTIL_H
#define GFXRECON_UTIL_JSON_UTIL_H

#include "util/defines.h"
#include "format/format.h"
#include "nlohmann/json.hpp"

#include <sstream>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)

static constexpr int kJsonIndentWidth = 2;

enum class JsonFormat
{
    JSON,
    JSONL
};

struct JsonOptions
{
    JsonFormat  format = JsonFormat::JSON;
    std::string root_dir;
    std::string data_sub_dir;
    bool        dump_binaries = false;
    bool        expand_flags  = false;
    bool        hex_handles   = false;
};

/// @todo No JSON involved here so move to a to_string header.
template <typename T>
std::string to_hex_variable_width(T value)
{
    std::ostringstream stream;
    stream << "0x" << std::hex << value;
    return stream.str();
}

/// @todo No JSON involved here so move to a to_string header.
template <typename T>
std::string to_hex_fixed_width(T value)
{
    std::ostringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(T) * 2) << std::hex << value;
    return stream.str();
}

/// @todo No JSON involved here so move to a to_string header.
/// @todo Move to .cpp. No need to inline this.
inline std::string uuid_to_string(uint32_t size, const uint8_t* uuid)
{
    std::ostringstream stream;
    stream << std::setfill('0') << std::setw(2) << std::hex;
    for (size_t i = 0; i < size; ++i)
    {
        stream << (uint32_t)uuid[i];
    }
    return stream.str();
}

/// @brief Convert the integer representation of a handle in capture files into
/// either a JSON number or a JSON string with the number represented in
/// hexadecimal.
/// @todo Move to .cpp. No need to inline this.
inline void HandleToJson(nlohmann::ordered_json& jdata, const format::HandleId handle, const JsonOptions& options)
{
    if (options.hex_handles)
    {
        // A JSON string
        jdata = util::to_hex_variable_width(handle);
    }
    else
    {
        // A JSON number
        jdata = handle;
    }
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_UTIL_JSON_UTIL_H
