/*
** Copyright (c) 2022 Valve Corporation
** Copyright (c) 2022 LunarG, Inc.
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

#include "util/strings.h"
#include <algorithm>
#include <sstream>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
GFXRECON_BEGIN_NAMESPACE(strings)

/// @note A deliberately simple, slow implementation for low-frequency use.
///       Feel free to tune it if it shows up in a profile.
std::string TabRight(const std::string& str)
{
    auto   tabbed = "\t" + str;
    size_t match  = 0;
    while ((match = tabbed.find('\n', match + 1)) != std::string::npos)
    {
        tabbed.replace(match, 1, "\n\t");
    }
    return tabbed;
}

std::vector<std::string> SplitString(const std::string_view compound, const char separator)
{
    std::vector<std::string> values;

    if (!compound.empty())
    {
        // Avoid most of the work if the string doesn't need splitting:
        if (std::count(compound.begin(), compound.end(), separator) < 1)
        {
            values.emplace_back(compound);
            return values;
        }
        else
        {
            // Split string on separator.
            bool               invalid = false;
            std::istringstream range_input;
            range_input.str(std::string{ compound });

            for (std::string token; std::getline(range_input, token, separator);)
            {
                if (!token.empty())
                {
                    values.push_back(token);
                }
            }
        }
    }
    return values;
}

GFXRECON_END_NAMESPACE(strings)
GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)