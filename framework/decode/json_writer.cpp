/*
** Copyright (c) 2023 Valve Corporation
** Copyright (c) 2023 LunarG, Inc.
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

/// @file Common features for writing decoded items to a single json stream, be
/// they from Vulkan, D3D12, metadata, annotations, or any other source.

#include "decode/json_writer.h"
#include "util/output_stream.h"
#include "util/logging.h"
#include "json_writer.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

JsonWriter::JsonWriter(const JsonOptions&     options,
                       const std::string_view gfxrVersion,
                       const std::string_view inputFilepath) :
    json_options_(options)
{
    header_["source-path"]      = inputFilepath;
    header_["gfxrecon-version"] = std::string(gfxrVersion);
}

JsonWriter::~JsonWriter()
{
    if (os_)
    {
        os_->Flush();
    }
}

void JsonWriter::StartStream(util::OutputStream* os)
{
    GFXRECON_ASSERT(os);
    first_ = true;
    os_    = os;

    if (json_options_.format == JsonFormat::JSON)
    {
        Write(*os_, "[\n");
    }

    // Emit the header object as the first line of the file:
    WriteBlockStart();
    json_data_["header"] = header_;
    WriteBlockEnd();

    ++num_streams_;
}

void JsonWriter::EndStream()
{
    if (os_ != nullptr)
    {
        if (json_options_.format == JsonFormat::JSON)
        {
            Write(*os_, "\n]\n");
        }
        else
        {
            Write(*os_, "\n");
        }
        os_->Flush();
        os_ = nullptr;
    }
}

void JsonWriter::Destroy()
{
    EndStream();
}

bool JsonWriter::IsValid() const
{
    return os_ != nullptr && os_->IsValid();
}

nlohmann::ordered_json& JsonWriter::WriteBlockStart()
{
    // Dominates profiling (1/2):
    json_data_.clear();
    return json_data_;
}

void JsonWriter::WriteBlockEnd()
{
    using namespace util::platform;

    if (!first_)
    {
        Write(*os_, json_options_.format == JsonFormat::JSONL ? "\n" : ",\n");
    }
    first_ = false;
    /// @todo Hand the tree over to a backend thread which dumps it to a string and streams it
    /// while the main thread gets on with building the tree for the next block.
    // Dominates profiling (2/2):
    const std::string block = json_data_.dump(json_options_.format == JsonFormat::JSONL ? -1 : kJsonIndentWidth);
    Write(*os_, block);
    os_->Flush();
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
