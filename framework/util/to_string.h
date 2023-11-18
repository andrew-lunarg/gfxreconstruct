/*
** Copyright (c) 2021-2023 LunarG, Inc.
** Copyright (c) 2022-2023 Valve Corporation
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
/// @file Facilities for the conversion of types to strings, oriented  towards
/// JSON Lines output.

#ifndef GFXRECON_TO_STRING_H
#define GFXRECON_TO_STRING_H

#include "format/format.h"
#include "util/defines.h"

#include <iomanip>
#include <sstream>
#include <string>
#include <utility>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)

enum ToStringFlagBits
{
    kToString_Unformatted = 0,
    kToString_Formatted   = 1,
    kToString_Default     = kToString_Unformatted,
};

constexpr uint32_t kToStringDefaultTabCount = 0;
constexpr uint32_t kToStringDefaultTabSize  = 4;

typedef uint32_t ToStringFlags;

/// Convert a value to a string in hexadecimal form.
template <typename T>
std::string to_hex_variable_width(T value)
{
    std::ostringstream stream;
    stream << "0x" << std::hex << value;
    return stream.str();
}

/// Convert a value to a string in hexadecimal form, filling with leading zeros
/// to make a fixed-width for a given parameter type.
template <typename T>
std::string to_hex_fixed_width(T value)
{
    std::ostringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(T) * 2) << std::hex << value;
    return stream.str();
}

std::string uuid_to_string(uint32_t size, const uint8_t* uuid);

/// @brief  A template ToString to take care of simple POD cases like the many
/// types of integers.
/// It contains the three parameters that are unused for unstructured types like
/// scalars and strings so that calling code doesn't have to care whether it is
/// dealing with a simple type or a multi-line struct or array which tabs itself
/// out.
template <typename T>
inline std::string ToString(const T&      obj,
                            ToStringFlags toStringFlags = kToString_Default,
                            uint32_t      tabCount      = kToStringDefaultTabCount,
                            uint32_t      tabSize       = kToStringDefaultTabSize)
{
    GFXRECON_UNREFERENCED_PARAMETER(toStringFlags);
    GFXRECON_UNREFERENCED_PARAMETER(tabCount);
    GFXRECON_UNREFERENCED_PARAMETER(tabSize);
    return std::to_string(obj);
}

/// @brief A template that exists only to allow the ToStrings for 32 bit sets of
/// flags to be template specializations.
/// It is never called and its return value of "0" is a meaningless placeholder
/// to allow compilation to succeed.
/// @note There seems to be no reason for those ToStrings to be template
/// function specializations since a caller has to explicitly spell out a type
/// to call one of them and there is no function resolution based on argument
/// types going on.
/// @todo This may not be necessary: try deleting it after #1321 lands.
template <typename T>
inline std::string ToString(uint32_t      apiFlags,
                            ToStringFlags toStringFlags = kToString_Default,
                            uint32_t      tabCount      = kToStringDefaultTabCount,
                            uint32_t      tabSize       = kToStringDefaultTabSize)
{
    GFXRECON_UNREFERENCED_PARAMETER(apiFlags);
    GFXRECON_UNREFERENCED_PARAMETER(toStringFlags);
    GFXRECON_UNREFERENCED_PARAMETER(tabCount);
    GFXRECON_UNREFERENCED_PARAMETER(tabSize);

    return "0";
}

#if defined(WIN32)
inline std::string WCharArrayToString(const wchar_t* pStr)
{
    int required_size = 0;
    if (pStr != nullptr)
    {
        required_size = WideCharToMultiByte(CP_UTF8, 0, pStr, -1, nullptr, 0, nullptr, nullptr);

        // Don't include null-terminator in output.
        --required_size;
    }

    if (required_size > 0)
    {
        std::string result_str;
        result_str.resize(required_size);
        required_size = WideCharToMultiByte(
            CP_UTF8, 0, pStr, -1, result_str.data(), static_cast<int>(result_str.size()), nullptr, nullptr);
        return result_str;
    }
    else
    {
        return "";
    }
}
#endif

/// Widely used in Vulkan and DX12 enum to string functions.
template <typename BitmaskType, typename FlagsType>
inline std::string BitmaskToString(FlagsType flags)
{
    std::string str;
    FlagsType   index = 0;
    while (flags)
    {
        if (flags & 1)
        {
            if (!str.empty())
            {
                str.append("|");
            }
            str.append(ToString(static_cast<BitmaskType>(1 << index)));
        }
        ++index;
        flags >>= 1;
    }
    if (str.empty())
    {
        str.append(ToString(static_cast<BitmaskType>(0)));
    }
    return str;
}

/// @brief Make a copy of the input string with double quotes at start and end.
/// @note Dead code only used in its unit test. Keep _just in case_?
inline std::string Quote(const std::string& str)
{
    std::string quoted{ '"' };
    quoted += str;
    quoted += '"';
    return quoted;
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_TO_STRING_H
