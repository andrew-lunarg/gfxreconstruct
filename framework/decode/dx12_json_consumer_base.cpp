/*
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

/// @file Implementation of manual base class for generated DX12 consumer
/// which outputs a JSON representation of a captured stream.

#include "decode/dx12_json_consumer_base.h"
#include "decode/json_writer.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

Dx12JsonConsumerBase::Dx12JsonConsumerBase() {}

Dx12JsonConsumerBase::~Dx12JsonConsumerBase()
{
    Destroy();
}

void Dx12JsonConsumerBase::Initialize(JsonWriter* writer)
{
    assert(writer);
    writer_ = writer;
}

void Dx12JsonConsumerBase::Destroy()
{
    writer_ = nullptr;
}

bool Dx12JsonConsumerBase::IsValid() const
{
    return writer_ && writer_->IsValid();
}

void Dx12JsonConsumerBase::ProcessCreateHeapAllocationCommand(uint64_t allocation_id, uint64_t allocation_size)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("CreateHeapAllocationCommand");
    FieldToJson(jdata["allocation_id"], allocation_id, json_options);
    FieldToJson(jdata["allocation_size"], allocation_size, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::ProcessInitSubresourceCommand(const format::InitSubresourceCommandHeader& command_header,
                                                         const uint8_t*                              data)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("InitSubresourceCommand");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::ProcessInitDx12AccelerationStructureCommand(
    const format::InitDx12AccelerationStructureCommandHeader&       command_header,
    std::vector<format::InitDx12AccelerationStructureGeometryDesc>& geometry_descs,
    const uint8_t*                                                  build_inputs_data)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("InitDx12AccelerationStructureCommand");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::ProcessFillMemoryResourceValueCommand(
    const format::FillMemoryResourceValueCommandHeader& command_header, const uint8_t* data)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("FillMemoryResourceValueCommand");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::ProcessDxgiAdapterInfo(const format::DxgiAdapterInfoCommandHeader& adapter_info_header)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("DxgiAdapterInfo");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::Process_DriverInfo(const char* info_record)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("DriverInfo");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

void Dx12JsonConsumerBase::ProcessDx12RuntimeInfo(const format::Dx12RuntimeInfoCommandHeader& runtime_info_header)
{
    const util::JsonOptions& json_options = writer_->GetOptions();
    auto&                    jdata        = writer_->WriteMetaCommandStart("Dx12RuntimeInfoCommandHeader");
    FieldToJson(jdata[format::kNameWarning], "Need to implement " __FUNCTION__, json_options);
    writer_->WriteBlockEnd();
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
