/*
** Copyright (c) 2018-2021 Valve Corporation
** Copyright (c) 2018-2022 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated_vulkan_struct_decoders_to_string.h"
#include "decode/custom_vulkan_struct_decoders_to_string.h"
#include "decode/custom_vulkan_ascii_consumer.h"
#include "generated_vulkan_struct_to_string.h"
#include "generated_vulkan_enum_to_string.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
template <> std::string ToString<decode::Decoded_VkExtent2D>(const decode::Decoded_VkExtent2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtent2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExtent3D>(const decode::Decoded_VkExtent3D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtent3D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOffset2D>(const decode::Decoded_VkOffset2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOffset2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOffset3D>(const decode::Decoded_VkOffset3D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOffset3D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRect2D>(const decode::Decoded_VkRect2D& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRect2D& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryBarrier>(const decode::Decoded_VkBufferMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDispatchIndirectCommand>(const decode::Decoded_VkDispatchIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDispatchIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawIndexedIndirectCommand>(const decode::Decoded_VkDrawIndexedIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawIndexedIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "indexCount", ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstIndex", ToString(obj.firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(obj.firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawIndirectCommand>(const decode::Decoded_VkDrawIndirectCommand& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawIndirectCommand& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "vertexCount", ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstVertex", ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(obj.firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresourceRange>(const decode::Decoded_VkImageSubresourceRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresourceRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseMipLevel", ToString(obj.baseMipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "levelCount", ToString(obj.levelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryBarrier>(const decode::Decoded_VkImageMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "subresourceRange", ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryBarrier>(const decode::Decoded_VkMemoryBarrier& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryBarrier& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCacheHeaderVersionOne>(const decode::Decoded_VkPipelineCacheHeaderVersionOne& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCacheHeaderVersionOne& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "headerSize", ToString(obj.headerSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "headerVersion", '"' + ToString(obj.headerVersion, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vendorID", ToString(obj.vendorID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceID", ToString(obj.deviceID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCacheUUID", '"' + UIDToString(VK_UUID_SIZE, obj.pipelineCacheUUID) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAllocationCallbacks>(const decode::Decoded_VkAllocationCallbacks& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAllocationCallbacks& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pUserData", decode::DataPointerDecoderToString(&decoded_obj.pUserData));
            FieldToString(strStrm, false, "pfnAllocation", decode::DataPointerDecoderToString(decoded_obj.pfnAllocation));
            FieldToString(strStrm, false, "pfnReallocation", decode::DataPointerDecoderToString(decoded_obj.pfnReallocation));
            FieldToString(strStrm, false, "pfnFree", decode::DataPointerDecoderToString(decoded_obj.pfnFree));
            FieldToString(strStrm, false, "pfnInternalAllocation", decode::DataPointerDecoderToString(decoded_obj.pfnInternalAllocation));
            FieldToString(strStrm, false, "pfnInternalFree", decode::DataPointerDecoderToString(decoded_obj.pfnInternalFree));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkApplicationInfo>(const decode::Decoded_VkApplicationInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkApplicationInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationName", CStrToString(obj.pApplicationName));
            FieldToString(strStrm, false, "applicationVersion", ToString(obj.applicationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEngineName", CStrToString(obj.pEngineName));
            FieldToString(strStrm, false, "engineVersion", ToString(obj.engineVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apiVersion", ToString(obj.apiVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties>(const decode::Decoded_VkFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "linearTilingFeatures", ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatProperties>(const decode::Decoded_VkImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "maxExtent", ToString(*(decoded_obj.maxExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMipLevels", ToString(obj.maxMipLevels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxArrayLayers", ToString(obj.maxArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxResourceSize", ToString(obj.maxResourceSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInstanceCreateInfo>(const decode::Decoded_VkInstanceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInstanceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationInfo", ((decoded_obj.pApplicationInfo && decoded_obj.pApplicationInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pApplicationInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "enabledLayerCount", ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryHeap>(const decode::Decoded_VkMemoryHeap& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryHeap& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryType>(const decode::Decoded_VkMemoryType& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryType& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "propertyFlags", ToString(obj.propertyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapIndex", ToString(obj.heapIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFeatures>(const decode::Decoded_VkPhysicalDeviceFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "robustBufferAccess", ToString(obj.robustBufferAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullDrawIndexUint32", ToString(obj.fullDrawIndexUint32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCubeArray", ToString(obj.imageCubeArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentBlend", ToString(obj.independentBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryShader", ToString(obj.geometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationShader", ToString(obj.tessellationShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleRateShading", ToString(obj.sampleRateShading, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dualSrcBlend", ToString(obj.dualSrcBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOp", ToString(obj.logicOp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiDrawIndirect", ToString(obj.multiDrawIndirect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawIndirectFirstInstance", ToString(obj.drawIndirectFirstInstance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClamp", ToString(obj.depthClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasClamp", ToString(obj.depthBiasClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fillModeNonSolid", ToString(obj.fillModeNonSolid, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBounds", ToString(obj.depthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wideLines", ToString(obj.wideLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "largePoints", ToString(obj.largePoints, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alphaToOne", ToString(obj.alphaToOne, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiViewport", ToString(obj.multiViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerAnisotropy", ToString(obj.samplerAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionETC2", ToString(obj.textureCompressionETC2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_LDR", ToString(obj.textureCompressionASTC_LDR, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionBC", ToString(obj.textureCompressionBC, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "occlusionQueryPrecise", ToString(obj.occlusionQueryPrecise, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatisticsQuery", ToString(obj.pipelineStatisticsQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexPipelineStoresAndAtomics", ToString(obj.vertexPipelineStoresAndAtomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentStoresAndAtomics", ToString(obj.fragmentStoresAndAtomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTessellationAndGeometryPointSize", ToString(obj.shaderTessellationAndGeometryPointSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageGatherExtended", ToString(obj.shaderImageGatherExtended, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageExtendedFormats", ToString(obj.shaderStorageImageExtendedFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageMultisample", ToString(obj.shaderStorageImageMultisample, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageReadWithoutFormat", ToString(obj.shaderStorageImageReadWithoutFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageWriteWithoutFormat", ToString(obj.shaderStorageImageWriteWithoutFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayDynamicIndexing", ToString(obj.shaderUniformBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayDynamicIndexing", ToString(obj.shaderSampledImageArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayDynamicIndexing", ToString(obj.shaderStorageBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayDynamicIndexing", ToString(obj.shaderStorageImageArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderClipDistance", ToString(obj.shaderClipDistance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCullDistance", ToString(obj.shaderCullDistance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat64", ToString(obj.shaderFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt64", ToString(obj.shaderInt64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt16", ToString(obj.shaderInt16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderResourceResidency", ToString(obj.shaderResourceResidency, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderResourceMinLod", ToString(obj.shaderResourceMinLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseBinding", ToString(obj.sparseBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyBuffer", ToString(obj.sparseResidencyBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyImage2D", ToString(obj.sparseResidencyImage2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyImage3D", ToString(obj.sparseResidencyImage3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency2Samples", ToString(obj.sparseResidency2Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency4Samples", ToString(obj.sparseResidency4Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency8Samples", ToString(obj.sparseResidency8Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidency16Samples", ToString(obj.sparseResidency16Samples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseResidencyAliased", ToString(obj.sparseResidencyAliased, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variableMultisampleRate", ToString(obj.variableMultisampleRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedQueries", ToString(obj.inheritedQueries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLimits>(const decode::Decoded_VkPhysicalDeviceLimits& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLimits& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "maxImageDimension1D", ToString(obj.maxImageDimension1D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimension2D", ToString(obj.maxImageDimension2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimension3D", ToString(obj.maxImageDimension3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageDimensionCube", ToString(obj.maxImageDimensionCube, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelBufferElements", ToString(obj.maxTexelBufferElements, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUniformBufferRange", ToString(obj.maxUniformBufferRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxStorageBufferRange", ToString(obj.maxStorageBufferRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPushConstantsSize", ToString(obj.maxPushConstantsSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationCount", ToString(obj.maxMemoryAllocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerAllocationCount", ToString(obj.maxSamplerAllocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageGranularity", ToString(obj.bufferImageGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseAddressSpaceSize", ToString(obj.sparseAddressSpaceSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBoundDescriptorSets", ToString(obj.maxBoundDescriptorSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorSamplers", ToString(obj.maxPerStageDescriptorSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUniformBuffers", ToString(obj.maxPerStageDescriptorUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorStorageBuffers", ToString(obj.maxPerStageDescriptorStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorSampledImages", ToString(obj.maxPerStageDescriptorSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorStorageImages", ToString(obj.maxPerStageDescriptorStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInputAttachments", ToString(obj.maxPerStageDescriptorInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageResources", ToString(obj.maxPerStageResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSamplers", ToString(obj.maxDescriptorSetSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUniformBuffers", ToString(obj.maxDescriptorSetUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUniformBuffersDynamic", ToString(obj.maxDescriptorSetUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageBuffers", ToString(obj.maxDescriptorSetStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageBuffersDynamic", ToString(obj.maxDescriptorSetStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSampledImages", ToString(obj.maxDescriptorSetSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetStorageImages", ToString(obj.maxDescriptorSetStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInputAttachments", ToString(obj.maxDescriptorSetInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputAttributes", ToString(obj.maxVertexInputAttributes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputBindings", ToString(obj.maxVertexInputBindings, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputAttributeOffset", ToString(obj.maxVertexInputAttributeOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexInputBindingStride", ToString(obj.maxVertexInputBindingStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexOutputComponents", ToString(obj.maxVertexOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationGenerationLevel", ToString(obj.maxTessellationGenerationLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationPatchSize", ToString(obj.maxTessellationPatchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerVertexInputComponents", ToString(obj.maxTessellationControlPerVertexInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerVertexOutputComponents", ToString(obj.maxTessellationControlPerVertexOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlPerPatchOutputComponents", ToString(obj.maxTessellationControlPerPatchOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationControlTotalOutputComponents", ToString(obj.maxTessellationControlTotalOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationEvaluationInputComponents", ToString(obj.maxTessellationEvaluationInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTessellationEvaluationOutputComponents", ToString(obj.maxTessellationEvaluationOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryShaderInvocations", ToString(obj.maxGeometryShaderInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryInputComponents", ToString(obj.maxGeometryInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryOutputComponents", ToString(obj.maxGeometryOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryOutputVertices", ToString(obj.maxGeometryOutputVertices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryTotalOutputComponents", ToString(obj.maxGeometryTotalOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentInputComponents", ToString(obj.maxFragmentInputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentOutputAttachments", ToString(obj.maxFragmentOutputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentDualSrcAttachments", ToString(obj.maxFragmentDualSrcAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentCombinedOutputResources", ToString(obj.maxFragmentCombinedOutputResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeSharedMemorySize", ToString(obj.maxComputeSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupCount", ArrayToString(3, obj.maxComputeWorkGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupInvocations", ToString(obj.maxComputeWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkGroupSize", ArrayToString(3, obj.maxComputeWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subPixelPrecisionBits", ToString(obj.subPixelPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subTexelPrecisionBits", ToString(obj.subTexelPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipmapPrecisionBits", ToString(obj.mipmapPrecisionBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawIndexedIndexValue", ToString(obj.maxDrawIndexedIndexValue, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawIndirectCount", ToString(obj.maxDrawIndirectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerLodBias", ToString(obj.maxSamplerLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSamplerAnisotropy", ToString(obj.maxSamplerAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxViewports", ToString(obj.maxViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxViewportDimensions", ArrayToString(2, obj.maxViewportDimensions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportBoundsRange", ArrayToString(2, obj.viewportBoundsRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportSubPixelBits", ToString(obj.viewportSubPixelBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minMemoryMapAlignment", ToString(obj.minMemoryMapAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelBufferOffsetAlignment", ToString(obj.minTexelBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minUniformBufferOffsetAlignment", ToString(obj.minUniformBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minStorageBufferOffsetAlignment", ToString(obj.minStorageBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelOffset", ToString(obj.minTexelOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelOffset", ToString(obj.maxTexelOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minTexelGatherOffset", ToString(obj.minTexelGatherOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTexelGatherOffset", ToString(obj.maxTexelGatherOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minInterpolationOffset", ToString(obj.minInterpolationOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInterpolationOffset", ToString(obj.maxInterpolationOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subPixelInterpolationOffsetBits", ToString(obj.subPixelInterpolationOffsetBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferWidth", ToString(obj.maxFramebufferWidth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferHeight", ToString(obj.maxFramebufferHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFramebufferLayers", ToString(obj.maxFramebufferLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferColorSampleCounts", ToString(obj.framebufferColorSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferDepthSampleCounts", ToString(obj.framebufferDepthSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferStencilSampleCounts", ToString(obj.framebufferStencilSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferNoAttachmentsSampleCounts", ToString(obj.framebufferNoAttachmentsSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxColorAttachments", ToString(obj.maxColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageColorSampleCounts", ToString(obj.sampledImageColorSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageIntegerSampleCounts", ToString(obj.sampledImageIntegerSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageDepthSampleCounts", ToString(obj.sampledImageDepthSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampledImageStencilSampleCounts", ToString(obj.sampledImageStencilSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageImageSampleCounts", ToString(obj.storageImageSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleMaskWords", ToString(obj.maxSampleMaskWords, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampComputeAndGraphics", ToString(obj.timestampComputeAndGraphics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampPeriod", ToString(obj.timestampPeriod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxClipDistances", ToString(obj.maxClipDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCullDistances", ToString(obj.maxCullDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCombinedClipAndCullDistances", ToString(obj.maxCombinedClipAndCullDistances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discreteQueuePriorities", ToString(obj.discreteQueuePriorities, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointSizeRange", ArrayToString(2, obj.pointSizeRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidthRange", ArrayToString(2, obj.lineWidthRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointSizeGranularity", ToString(obj.pointSizeGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidthGranularity", ToString(obj.lineWidthGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "strictLines", ToString(obj.strictLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "standardSampleLocations", ToString(obj.standardSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalBufferCopyOffsetAlignment", ToString(obj.optimalBufferCopyOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalBufferCopyRowPitchAlignment", ToString(obj.optimalBufferCopyRowPitchAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nonCoherentAtomSize", ToString(obj.nonCoherentAtomSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSparseProperties>(const decode::Decoded_VkPhysicalDeviceSparseProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSparseProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "residencyStandard2DBlockShape", ToString(obj.residencyStandard2DBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyStandard2DMultisampleBlockShape", ToString(obj.residencyStandard2DMultisampleBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyStandard3DBlockShape", ToString(obj.residencyStandard3DBlockShape, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyAlignedMipSize", ToString(obj.residencyAlignedMipSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "residencyNonResidentStrict", ToString(obj.residencyNonResidentStrict, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProperties>(const decode::Decoded_VkPhysicalDeviceProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "apiVersion", ToString(obj.apiVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverVersion", ToString(obj.driverVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorID", ToString(obj.vendorID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceID", ToString(obj.deviceID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceType", '"' + ToString(obj.deviceType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceName", CStrToString(obj.deviceName));
            FieldToString(strStrm, false, "pipelineCacheUUID", '"' + UIDToString(VK_UUID_SIZE, obj.pipelineCacheUUID) + '"');
            FieldToString(strStrm, false, "limits", ToString(*(decoded_obj.limits), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseProperties", ToString(*(decoded_obj.sparseProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyProperties>(const decode::Decoded_VkQueueFamilyProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queueFlags", ToString(obj.queueFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampValidBits", ToString(obj.timestampValidBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageTransferGranularity", ToString(*(decoded_obj.minImageTransferGranularity), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueCreateInfo>(const decode::Decoded_VkDeviceQueueCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueuePriorities", ArrayToString(obj.queueCount, obj.pQueuePriorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceCreateInfo>(const decode::Decoded_VkDeviceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCreateInfoCount", ToString(obj.queueCreateInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueCreateInfos", PointerDecoderArrayToString(*decoded_obj.pQueueCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledLayerCount", ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledFeatures", ((decoded_obj.pEnabledFeatures && decoded_obj.pEnabledFeatures->GetMetaStructPointer()) ? ToString(*decoded_obj.pEnabledFeatures->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExtensionProperties>(const decode::Decoded_VkExtensionProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExtensionProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "extensionName", CStrToString(obj.extensionName));
            FieldToString(strStrm, false, "specVersion", ToString(obj.specVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkLayerProperties>(const decode::Decoded_VkLayerProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkLayerProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "layerName", CStrToString(obj.layerName));
            FieldToString(strStrm, false, "specVersion", ToString(obj.specVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "implementationVersion", ToString(obj.implementationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubmitInfo>(const decode::Decoded_VkSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitDstStageMask", ArrayToString(obj.waitSemaphoreCount, obj.pWaitDstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBuffers", decode::HandlePointerDecoderArrayToString(decoded_obj.pCommandBuffers.GetLength(), &decoded_obj.pCommandBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pSignalSemaphores.GetLength(), &decoded_obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMappedMemoryRange>(const decode::Decoded_VkMappedMemoryRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMappedMemoryRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryAllocateInfo>(const decode::Decoded_VkMemoryAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeIndex", ToString(obj.memoryTypeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryRequirements>(const decode::Decoded_VkMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alignment", ToString(obj.alignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseMemoryBind>(const decode::Decoded_VkSparseMemoryBind& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseMemoryBind& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "resourceOffset", ToString(obj.resourceOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseBufferMemoryBindInfo>(const decode::Decoded_VkSparseBufferMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseBufferMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageOpaqueMemoryBindInfo>(const decode::Decoded_VkSparseImageOpaqueMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageOpaqueMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresource>(const decode::Decoded_VkImageSubresource& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresource& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevel", ToString(obj.mipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayLayer", ToString(obj.arrayLayer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryBind>(const decode::Decoded_VkSparseImageMemoryBind& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryBind& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subresource", ToString(*(decoded_obj.subresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryBindInfo>(const decode::Decoded_VkSparseImageMemoryBindInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryBindInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", PointerDecoderArrayToString(*decoded_obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindSparseInfo>(const decode::Decoded_VkBindSparseInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindSparseInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferBindCount", ToString(obj.bufferBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferBinds", PointerDecoderArrayToString(*decoded_obj.pBufferBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOpaqueBindCount", ToString(obj.imageOpaqueBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageOpaqueBinds", PointerDecoderArrayToString(*decoded_obj.pImageOpaqueBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageBindCount", ToString(obj.imageBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageBinds", PointerDecoderArrayToString(*decoded_obj.pImageBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pSignalSemaphores.GetLength(), &decoded_obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageFormatProperties>(const decode::Decoded_VkSparseImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageGranularity", ToString(*(decoded_obj.imageGranularity), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryRequirements>(const decode::Decoded_VkSparseImageMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "formatProperties", ToString(*(decoded_obj.formatProperties), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailFirstLod", ToString(obj.imageMipTailFirstLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailSize", ToString(obj.imageMipTailSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailOffset", ToString(obj.imageMipTailOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailStride", ToString(obj.imageMipTailStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceCreateInfo>(const decode::Decoded_VkFenceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreCreateInfo>(const decode::Decoded_VkSemaphoreCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkEventCreateInfo>(const decode::Decoded_VkEventCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkEventCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolCreateInfo>(const decode::Decoded_VkQueryPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(obj.queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryCount", ToString(obj.queryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCreateInfo>(const decode::Decoded_VkBufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferViewCreateInfo>(const decode::Decoded_VkBufferViewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferViewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCreateInfo>(const decode::Decoded_VkImageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageType", '"' + ToString(obj.imageType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevels", ToString(obj.mipLevels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayLayers", ToString(obj.arrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samples", '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialLayout", '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubresourceLayout>(const decode::Decoded_VkSubresourceLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubresourceLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rowPitch", ToString(obj.rowPitch, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayPitch", ToString(obj.arrayPitch, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthPitch", ToString(obj.depthPitch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkComponentMapping>(const decode::Decoded_VkComponentMapping& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkComponentMapping& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "r", '"' + ToString(obj.r, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "g", '"' + ToString(obj.g, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "b", '"' + ToString(obj.b, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "a", '"' + ToString(obj.a, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewCreateInfo>(const decode::Decoded_VkImageViewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "viewType", '"' + ToString(obj.viewType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceRange", ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCacheCreateInfo>(const decode::Decoded_VkPipelineCacheCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCacheCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", decode::DataPointerDecoderToString(&decoded_obj.pInitialData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSpecializationMapEntry>(const decode::Decoded_VkSpecializationMapEntry& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSpecializationMapEntry& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "constantID", ToString(obj.constantID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSpecializationInfo>(const decode::Decoded_VkSpecializationInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSpecializationInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "mapEntryCount", ToString(obj.mapEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMapEntries", PointerDecoderArrayToString(*decoded_obj.pMapEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageCreateInfo>(const decode::Decoded_VkPipelineShaderStageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "module", decode::HandleIdToString(decoded_obj.module));
            FieldToString(strStrm, false, "pName", CStrToString(obj.pName));
            FieldToString(strStrm, false, "pSpecializationInfo", ((decoded_obj.pSpecializationInfo && decoded_obj.pSpecializationInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pSpecializationInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkComputePipelineCreateInfo>(const decode::Decoded_VkComputePipelineCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkComputePipelineCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", ToString(*(decoded_obj.stage), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDescription>(const decode::Decoded_VkVertexInputBindingDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputAttributeDescription>(const decode::Decoded_VkVertexInputAttributeDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputAttributeDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "location", ToString(obj.location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineVertexInputStateCreateInfo>(const decode::Decoded_VkPipelineVertexInputStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineVertexInputStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDescriptionCount", ToString(obj.vertexBindingDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDescriptions", PointerDecoderArrayToString(*decoded_obj.pVertexBindingDescriptions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeDescriptionCount", ToString(obj.vertexAttributeDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexAttributeDescriptions", PointerDecoderArrayToString(*decoded_obj.pVertexAttributeDescriptions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineInputAssemblyStateCreateInfo>(const decode::Decoded_VkPipelineInputAssemblyStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineInputAssemblyStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "topology", '"' + ToString(obj.topology, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "primitiveRestartEnable", ToString(obj.primitiveRestartEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineTessellationStateCreateInfo>(const decode::Decoded_VkPipelineTessellationStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineTessellationStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "patchControlPoints", ToString(obj.patchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewport>(const decode::Decoded_VkViewport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDepth", ToString(obj.minDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepth", ToString(obj.maxDepth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportStateCreateInfo>(const decode::Decoded_VkPipelineViewportStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", PointerDecoderArrayToString(*decoded_obj.pViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scissorCount", ToString(obj.scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", PointerDecoderArrayToString(*decoded_obj.pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateCreateInfo>(const decode::Decoded_VkPipelineRasterizationStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClampEnable", ToString(obj.depthClampEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizerDiscardEnable", ToString(obj.rasterizerDiscardEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "polygonMode", '"' + ToString(obj.polygonMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "cullMode", ToString(obj.cullMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "frontFace", '"' + ToString(obj.frontFace, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthBiasEnable", ToString(obj.depthBiasEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasConstantFactor", ToString(obj.depthBiasConstantFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasClamp", ToString(obj.depthBiasClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasSlopeFactor", ToString(obj.depthBiasSlopeFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineWidth", ToString(obj.lineWidth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStencilOpState>(const decode::Decoded_VkStencilOpState& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStencilOpState& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "failOp", '"' + ToString(obj.failOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "passOp", '"' + ToString(obj.passOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthFailOp", '"' + ToString(obj.depthFailOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareOp", '"' + ToString(obj.compareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareMask", ToString(obj.compareMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "writeMask", ToString(obj.writeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reference", ToString(obj.reference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDepthStencilStateCreateInfo>(const decode::Decoded_VkPipelineDepthStencilStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDepthStencilStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthTestEnable", ToString(obj.depthTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthWriteEnable", ToString(obj.depthWriteEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthCompareOp", '"' + ToString(obj.depthCompareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthBoundsTestEnable", ToString(obj.depthBoundsTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilTestEnable", ToString(obj.stencilTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "front", ToString(*(decoded_obj.front), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "back", ToString(*(decoded_obj.back), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDepthBounds", ToString(obj.minDepthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepthBounds", ToString(obj.maxDepthBounds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendAttachmentState>(const decode::Decoded_VkPipelineColorBlendAttachmentState& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendAttachmentState& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "blendEnable", ToString(obj.blendEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcColorBlendFactor", '"' + ToString(obj.srcColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstColorBlendFactor", '"' + ToString(obj.dstColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorBlendOp", '"' + ToString(obj.colorBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcAlphaBlendFactor", '"' + ToString(obj.srcAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstAlphaBlendFactor", '"' + ToString(obj.dstAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "alphaBlendOp", '"' + ToString(obj.alphaBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorWriteMask", ToString(obj.colorWriteMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendStateCreateInfo>(const decode::Decoded_VkPipelineColorBlendStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOpEnable", ToString(obj.logicOpEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOp", '"' + ToString(obj.logicOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendConstants", ArrayToString(4, obj.blendConstants, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDynamicStateCreateInfo>(const decode::Decoded_VkPipelineDynamicStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDynamicStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicStateCount", ToString(obj.dynamicStateCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDynamicStates", VkEnumArrayToString(obj.dynamicStateCount, obj.pDynamicStates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineCreateInfo>(const decode::Decoded_VkGraphicsPipelineCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", ((decoded_obj.pVertexInputState && decoded_obj.pVertexInputState->GetMetaStructPointer()) ? ToString(*decoded_obj.pVertexInputState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pInputAssemblyState", ((decoded_obj.pInputAssemblyState && decoded_obj.pInputAssemblyState->GetMetaStructPointer()) ? ToString(*decoded_obj.pInputAssemblyState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", ((decoded_obj.pTessellationState && decoded_obj.pTessellationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pTessellationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pViewportState", ((decoded_obj.pViewportState && decoded_obj.pViewportState->GetMetaStructPointer()) ? ToString(*decoded_obj.pViewportState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pRasterizationState", ((decoded_obj.pRasterizationState && decoded_obj.pRasterizationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pRasterizationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pMultisampleState", ((decoded_obj.pMultisampleState && decoded_obj.pMultisampleState->GetMetaStructPointer()) ? ToString(*decoded_obj.pMultisampleState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDepthStencilState", ((decoded_obj.pDepthStencilState && decoded_obj.pDepthStencilState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pColorBlendState", ((decoded_obj.pColorBlendState && decoded_obj.pColorBlendState->GetMetaStructPointer()) ? ToString(*decoded_obj.pColorBlendState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", ((decoded_obj.pDynamicState && decoded_obj.pDynamicState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDynamicState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "renderPass", decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "basePipelineHandle", decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPushConstantRange>(const decode::Decoded_VkPushConstantRange& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPushConstantRange& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "stageFlags", ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineLayoutCreateInfo>(const decode::Decoded_VkPipelineLayoutCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineLayoutCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "setLayoutCount", ToString(obj.setLayoutCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", decode::HandlePointerDecoderArrayToString(decoded_obj.pSetLayouts.GetLength(), &decoded_obj.pSetLayouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushConstantRangeCount", ToString(obj.pushConstantRangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPushConstantRanges", PointerDecoderArrayToString(*decoded_obj.pPushConstantRanges, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerCreateInfo>(const decode::Decoded_VkSamplerCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "magFilter", '"' + ToString(obj.magFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "minFilter", '"' + ToString(obj.minFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "mipmapMode", '"' + ToString(obj.mipmapMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeU", '"' + ToString(obj.addressModeU, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeV", '"' + ToString(obj.addressModeV, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "addressModeW", '"' + ToString(obj.addressModeW, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "mipLodBias", ToString(obj.mipLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anisotropyEnable", ToString(obj.anisotropyEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxAnisotropy", ToString(obj.maxAnisotropy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compareEnable", ToString(obj.compareEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compareOp", '"' + ToString(obj.compareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "minLod", ToString(obj.minLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxLod", ToString(obj.maxLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColor", '"' + ToString(obj.borderColor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "unnormalizedCoordinates", ToString(obj.unnormalizedCoordinates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyDescriptorSet>(const decode::Decoded_VkCopyDescriptorSet& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyDescriptorSet& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSet", decode::HandleIdToString(decoded_obj.srcSet));
            FieldToString(strStrm, false, "srcBinding", ToString(obj.srcBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcArrayElement", ToString(obj.srcArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSet", decode::HandleIdToString(decoded_obj.dstSet));
            FieldToString(strStrm, false, "dstBinding", ToString(obj.dstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstArrayElement", ToString(obj.dstArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorBufferInfo>(const decode::Decoded_VkDescriptorBufferInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorBufferInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolSize>(const decode::Decoded_VkDescriptorPoolSize& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolSize& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolCreateInfo>(const decode::Decoded_VkDescriptorPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSets", ToString(obj.maxSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "poolSizeCount", ToString(obj.poolSizeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPoolSizes", PointerDecoderArrayToString(*decoded_obj.pPoolSizes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetAllocateInfo>(const decode::Decoded_VkDescriptorSetAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorPool", decode::HandleIdToString(decoded_obj.descriptorPool));
            FieldToString(strStrm, false, "descriptorSetCount", ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", decode::HandlePointerDecoderArrayToString(decoded_obj.pSetLayouts.GetLength(), &decoded_obj.pSetLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutBinding>(const decode::Decoded_VkDescriptorSetLayoutBinding& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutBinding& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorType", '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageFlags", ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImmutableSamplers", decode::HandlePointerDecoderArrayToString(decoded_obj.pImmutableSamplers.GetLength(), &decoded_obj.pImmutableSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutCreateInfo>(const decode::Decoded_VkDescriptorSetLayoutCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindings", PointerDecoderArrayToString(*decoded_obj.pBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescription>(const decode::Decoded_VkAttachmentDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilLoadOp", '"' + ToString(obj.stencilLoadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilStoreOp", '"' + ToString(obj.stencilStoreOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialLayout", '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "finalLayout", '"' + ToString(obj.finalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReference>(const decode::Decoded_VkAttachmentReference& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReference& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachment", ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferCreateInfo>(const decode::Decoded_VkFramebufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", decode::HandlePointerDecoderArrayToString(decoded_obj.pAttachments.GetLength(), &decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layers", ToString(obj.layers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescription>(const decode::Decoded_VkSubpassDescription& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescription& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "inputAttachmentCount", ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", PointerDecoderArrayToString(*decoded_obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", PointerDecoderArrayToString(*decoded_obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", ((decoded_obj.pDepthStencilAttachment && decoded_obj.pDepthStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDependency>(const decode::Decoded_VkSubpassDependency& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDependency& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubpass", ToString(obj.srcSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubpass", ToString(obj.dstSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreateInfo>(const decode::Decoded_VkRenderPassCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", PointerDecoderArrayToString(*decoded_obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", PointerDecoderArrayToString(*decoded_obj.pDependencies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandPoolCreateInfo>(const decode::Decoded_VkCommandPoolCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandPoolCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferAllocateInfo>(const decode::Decoded_VkCommandBufferAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandPool", decode::HandleIdToString(decoded_obj.commandPool));
            FieldToString(strStrm, false, "level", '"' + ToString(obj.level, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceInfo>(const decode::Decoded_VkCommandBufferInheritanceInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebuffer", decode::HandleIdToString(decoded_obj.framebuffer));
            FieldToString(strStrm, false, "occlusionQueryEnable", ToString(obj.occlusionQueryEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryFlags", ToString(obj.queryFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferBeginInfo>(const decode::Decoded_VkCommandBufferBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInheritanceInfo", ((decoded_obj.pInheritanceInfo && decoded_obj.pInheritanceInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pInheritanceInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCopy>(const decode::Decoded_VkBufferCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresourceLayers>(const decode::Decoded_VkImageSubresourceLayers& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresourceLayers& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevel", ToString(obj.mipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferImageCopy>(const decode::Decoded_VkBufferImageCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferImageCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferOffset", ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", ToString(*(decoded_obj.imageOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearDepthStencilValue>(const decode::Decoded_VkClearDepthStencilValue& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearDepthStencilValue& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencil", ToString(obj.stencil, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearAttachment>(const decode::Decoded_VkClearAttachment& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearAttachment& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachment", ToString(obj.colorAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValue", ToString(*(decoded_obj.clearValue), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkClearRect>(const decode::Decoded_VkClearRect& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkClearRect& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rect", ToString(*(decoded_obj.rect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageBlit>(const decode::Decoded_VkImageBlit& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageBlit& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", PointerDecoderArrayToString(*decoded_obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", PointerDecoderArrayToString(*decoded_obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCopy>(const decode::Decoded_VkImageCopy& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCopy& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageResolve>(const decode::Decoded_VkImageResolve& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageResolve& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassBeginInfo>(const decode::Decoded_VkRenderPassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", decode::HandleIdToString(decoded_obj.renderPass));
            FieldToString(strStrm, false, "framebuffer", decode::HandleIdToString(decoded_obj.framebuffer));
            FieldToString(strStrm, false, "renderArea", ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValueCount", ToString(obj.clearValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pClearValues", PointerDecoderArrayToString(*decoded_obj.pClearValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupProperties>(const decode::Decoded_VkPhysicalDeviceSubgroupProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSize", ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStages", ToString(obj.supportedStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedOperations", ToString(obj.supportedOperations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadOperationsInAllStages", ToString(obj.quadOperationsInAllStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindBufferMemoryInfo>(const decode::Decoded_VkBindBufferMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindBufferMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemoryInfo>(const decode::Decoded_VkBindImageMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice16BitStorageFeatures>(const decode::Decoded_VkPhysicalDevice16BitStorageFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice16BitStorageFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer16BitAccess", ToString(obj.storageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer16BitAccess", ToString(obj.uniformAndStorageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant16", ToString(obj.storagePushConstant16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageInputOutput16", ToString(obj.storageInputOutput16, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryDedicatedRequirements>(const decode::Decoded_VkMemoryDedicatedRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryDedicatedRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersDedicatedAllocation", ToString(obj.prefersDedicatedAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiresDedicatedAllocation", ToString(obj.requiresDedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryDedicatedAllocateInfo>(const decode::Decoded_VkMemoryDedicatedAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryDedicatedAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryAllocateFlagsInfo>(const decode::Decoded_VkMemoryAllocateFlagsInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryAllocateFlagsInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupRenderPassBeginInfo>(const decode::Decoded_VkDeviceGroupRenderPassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupRenderPassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceRenderAreaCount", ToString(obj.deviceRenderAreaCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceRenderAreas", PointerDecoderArrayToString(*decoded_obj.pDeviceRenderAreas, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupCommandBufferBeginInfo>(const decode::Decoded_VkDeviceGroupCommandBufferBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupCommandBufferBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupSubmitInfo>(const decode::Decoded_VkDeviceGroupSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreDeviceIndices", ArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferDeviceMasks", ArrayToString(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreDeviceIndices", ArrayToString(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupBindSparseInfo>(const decode::Decoded_VkDeviceGroupBindSparseInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupBindSparseInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceDeviceIndex", ToString(obj.resourceDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryDeviceIndex", ToString(obj.memoryDeviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindBufferMemoryDeviceGroupInfo>(const decode::Decoded_VkBindBufferMemoryDeviceGroupInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindBufferMemoryDeviceGroupInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemoryDeviceGroupInfo>(const decode::Decoded_VkBindImageMemoryDeviceGroupInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemoryDeviceGroupInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "splitInstanceBindRegionCount", ToString(obj.splitInstanceBindRegionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSplitInstanceBindRegions", PointerDecoderArrayToString(*decoded_obj.pSplitInstanceBindRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGroupProperties>(const decode::Decoded_VkPhysicalDeviceGroupProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGroupProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDevices", decode::HandlePointerDecoderArrayToString(decoded_obj.physicalDevices.GetLength(), &decoded_obj.physicalDevices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsetAllocation", ToString(obj.subsetAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupDeviceCreateInfo>(const decode::Decoded_VkDeviceGroupDeviceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupDeviceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDevices", decode::HandlePointerDecoderArrayToString(decoded_obj.pPhysicalDevices.GetLength(), &decoded_obj.pPhysicalDevices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryRequirementsInfo2>(const decode::Decoded_VkBufferMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryRequirementsInfo2>(const decode::Decoded_VkImageMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSparseMemoryRequirementsInfo2>(const decode::Decoded_VkImageSparseMemoryRequirementsInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSparseMemoryRequirementsInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryRequirements2>(const decode::Decoded_VkMemoryRequirements2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryRequirements2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", ToString(*(decoded_obj.memoryRequirements), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageMemoryRequirements2>(const decode::Decoded_VkSparseImageMemoryRequirements2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageMemoryRequirements2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", ToString(*(decoded_obj.memoryRequirements), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFeatures2>(const decode::Decoded_VkPhysicalDeviceFeatures2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFeatures2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "features", ToString(*(decoded_obj.features), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProperties2>(const decode::Decoded_VkPhysicalDeviceProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", ToString(*(decoded_obj.properties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties2>(const decode::Decoded_VkFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatProperties", ToString(*(decoded_obj.formatProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatProperties2>(const decode::Decoded_VkImageFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormatProperties", ToString(*(decoded_obj.imageFormatProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageFormatInfo2>(const decode::Decoded_VkPhysicalDeviceImageFormatInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageFormatInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyProperties2>(const decode::Decoded_VkQueueFamilyProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyProperties", ToString(*(decoded_obj.queueFamilyProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryProperties2>(const decode::Decoded_VkPhysicalDeviceMemoryProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryProperties", ToString(*(decoded_obj.memoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSparseImageFormatProperties2>(const decode::Decoded_VkSparseImageFormatProperties2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSparseImageFormatProperties2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", ToString(*(decoded_obj.properties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSparseImageFormatInfo2>(const decode::Decoded_VkPhysicalDeviceSparseImageFormatInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSparseImageFormatInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tiling", '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePointClippingProperties>(const decode::Decoded_VkPhysicalDevicePointClippingProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePointClippingProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointClippingBehavior", '"' + ToString(obj.pointClippingBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInputAttachmentAspectReference>(const decode::Decoded_VkInputAttachmentAspectReference& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInputAttachmentAspectReference& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentIndex", ToString(obj.inputAttachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassInputAttachmentAspectCreateInfo>(const decode::Decoded_VkRenderPassInputAttachmentAspectCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassInputAttachmentAspectCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectReferenceCount", ToString(obj.aspectReferenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAspectReferences", PointerDecoderArrayToString(*decoded_obj.pAspectReferences, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewUsageCreateInfo>(const decode::Decoded_VkImageViewUsageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewUsageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineTessellationDomainOriginStateCreateInfo>(const decode::Decoded_VkPipelineTessellationDomainOriginStateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineTessellationDomainOriginStateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "domainOrigin", '"' + ToString(obj.domainOrigin, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassMultiviewCreateInfo>(const decode::Decoded_VkRenderPassMultiviewCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassMultiviewCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewMasks", ArrayToString(obj.subpassCount, obj.pViewMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewOffsets", ArrayToString(obj.dependencyCount, obj.pViewOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlationMaskCount", ToString(obj.correlationMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelationMasks", ArrayToString(obj.correlationMaskCount, obj.pCorrelationMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewFeatures>(const decode::Decoded_VkPhysicalDeviceMultiviewFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiview", ToString(obj.multiview, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewGeometryShader", ToString(obj.multiviewGeometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewTessellationShader", ToString(obj.multiviewTessellationShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewProperties>(const decode::Decoded_VkPhysicalDeviceMultiviewProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewViewCount", ToString(obj.maxMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewInstanceIndex", ToString(obj.maxMultiviewInstanceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVariablePointersFeatures>(const decode::Decoded_VkPhysicalDeviceVariablePointersFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVariablePointersFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointersStorageBuffer", ToString(obj.variablePointersStorageBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointers", ToString(obj.variablePointers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProtectedMemoryFeatures>(const decode::Decoded_VkPhysicalDeviceProtectedMemoryFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProtectedMemoryFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedMemory", ToString(obj.protectedMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProtectedMemoryProperties>(const decode::Decoded_VkPhysicalDeviceProtectedMemoryProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProtectedMemoryProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedNoFault", ToString(obj.protectedNoFault, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueInfo2>(const decode::Decoded_VkDeviceQueueInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueIndex", ToString(obj.queueIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkProtectedSubmitInfo>(const decode::Decoded_VkProtectedSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkProtectedSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedSubmit", ToString(obj.protectedSubmit, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionCreateInfo>(const decode::Decoded_VkSamplerYcbcrConversionCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrModel", '"' + ToString(obj.ycbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrRange", '"' + ToString(obj.ycbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "xChromaOffset", '"' + ToString(obj.xChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "yChromaOffset", '"' + ToString(obj.yChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "chromaFilter", '"' + ToString(obj.chromaFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "forceExplicitReconstruction", ToString(obj.forceExplicitReconstruction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionInfo>(const decode::Decoded_VkSamplerYcbcrConversionInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conversion", decode::HandleIdToString(decoded_obj.conversion));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImagePlaneMemoryInfo>(const decode::Decoded_VkBindImagePlaneMemoryInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImagePlaneMemoryInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImagePlaneMemoryRequirementsInfo>(const decode::Decoded_VkImagePlaneMemoryRequirementsInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImagePlaneMemoryRequirementsInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const decode::Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversion", ToString(obj.samplerYcbcrConversion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerYcbcrConversionImageFormatProperties>(const decode::Decoded_VkSamplerYcbcrConversionImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerYcbcrConversionImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinedImageSamplerDescriptorCount", ToString(obj.combinedImageSamplerDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorUpdateTemplateEntry>(const decode::Decoded_VkDescriptorUpdateTemplateEntry& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorUpdateTemplateEntry& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "dstBinding", ToString(obj.dstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstArrayElement", ToString(obj.dstArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorType", '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorUpdateTemplateCreateInfo>(const decode::Decoded_VkDescriptorUpdateTemplateCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorUpdateTemplateCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorUpdateEntryCount", ToString(obj.descriptorUpdateEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorUpdateEntries", PointerDecoderArrayToString(*decoded_obj.pDescriptorUpdateEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "templateType", '"' + ToString(obj.templateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorSetLayout", decode::HandleIdToString(decoded_obj.descriptorSetLayout));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipelineLayout", decode::HandleIdToString(decoded_obj.pipelineLayout));
            FieldToString(strStrm, false, "set", ToString(obj.set, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryProperties>(const decode::Decoded_VkExternalMemoryProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "externalMemoryFeatures", ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalImageFormatInfo>(const decode::Decoded_VkPhysicalDeviceExternalImageFormatInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalImageFormatInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalImageFormatProperties>(const decode::Decoded_VkExternalImageFormatProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalImageFormatProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", ToString(*(decoded_obj.externalMemoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalBufferInfo>(const decode::Decoded_VkPhysicalDeviceExternalBufferInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalBufferInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalBufferProperties>(const decode::Decoded_VkExternalBufferProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalBufferProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", ToString(*(decoded_obj.externalMemoryProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceIDProperties>(const decode::Decoded_VkPhysicalDeviceIDProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceIDProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceUUID", '"' + UIDToString(VK_UUID_SIZE, obj.deviceUUID) + '"');
            FieldToString(strStrm, false, "driverUUID", '"' + UIDToString(VK_UUID_SIZE, obj.driverUUID) + '"');
            FieldToString(strStrm, false, "deviceLUID", '"' + UIDToString(VK_LUID_SIZE, obj.deviceLUID) + '"');
            FieldToString(strStrm, false, "deviceNodeMask", ToString(obj.deviceNodeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceLUIDValid", ToString(obj.deviceLUIDValid, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryImageCreateInfo>(const decode::Decoded_VkExternalMemoryImageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryImageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryBufferCreateInfo>(const decode::Decoded_VkExternalMemoryBufferCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryBufferCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryAllocateInfo>(const decode::Decoded_VkExportMemoryAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalFenceInfo>(const decode::Decoded_VkPhysicalDeviceExternalFenceInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalFenceInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalFenceProperties>(const decode::Decoded_VkExternalFenceProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalFenceProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFenceFeatures", ToString(obj.externalFenceFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportFenceCreateInfo>(const decode::Decoded_VkExportFenceCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportFenceCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportSemaphoreCreateInfo>(const decode::Decoded_VkExportSemaphoreCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportSemaphoreCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalSemaphoreInfo>(const decode::Decoded_VkPhysicalDeviceExternalSemaphoreInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalSemaphoreInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalSemaphoreProperties>(const decode::Decoded_VkExternalSemaphoreProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalSemaphoreProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalSemaphoreFeatures", ToString(obj.externalSemaphoreFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance3Properties>(const decode::Decoded_VkPhysicalDeviceMaintenance3Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance3Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerSetDescriptors", ToString(obj.maxPerSetDescriptors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationSize", ToString(obj.maxMemoryAllocationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutSupport>(const decode::Decoded_VkDescriptorSetLayoutSupport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutSupport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supported", ToString(obj.supported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderDrawParametersFeatures>(const decode::Decoded_VkPhysicalDeviceShaderDrawParametersFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderDrawParametersFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDrawParameters", ToString(obj.shaderDrawParameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan11Features>(const decode::Decoded_VkPhysicalDeviceVulkan11Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan11Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer16BitAccess", ToString(obj.storageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer16BitAccess", ToString(obj.uniformAndStorageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant16", ToString(obj.storagePushConstant16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageInputOutput16", ToString(obj.storageInputOutput16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiview", ToString(obj.multiview, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewGeometryShader", ToString(obj.multiviewGeometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewTessellationShader", ToString(obj.multiviewTessellationShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointersStorageBuffer", ToString(obj.variablePointersStorageBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointers", ToString(obj.variablePointers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedMemory", ToString(obj.protectedMemory, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversion", ToString(obj.samplerYcbcrConversion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDrawParameters", ToString(obj.shaderDrawParameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan11Properties>(const decode::Decoded_VkPhysicalDeviceVulkan11Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan11Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceUUID", '"' + UIDToString(VK_UUID_SIZE, obj.deviceUUID) + '"');
            FieldToString(strStrm, false, "driverUUID", '"' + UIDToString(VK_UUID_SIZE, obj.driverUUID) + '"');
            FieldToString(strStrm, false, "deviceLUID", '"' + UIDToString(VK_LUID_SIZE, obj.deviceLUID) + '"');
            FieldToString(strStrm, false, "deviceNodeMask", ToString(obj.deviceNodeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceLUIDValid", ToString(obj.deviceLUIDValid, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSize", ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSupportedStages", ToString(obj.subgroupSupportedStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSupportedOperations", ToString(obj.subgroupSupportedOperations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupQuadOperationsInAllStages", ToString(obj.subgroupQuadOperationsInAllStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointClippingBehavior", '"' + ToString(obj.pointClippingBehavior, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "maxMultiviewViewCount", ToString(obj.maxMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewInstanceIndex", ToString(obj.maxMultiviewInstanceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedNoFault", ToString(obj.protectedNoFault, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerSetDescriptors", ToString(obj.maxPerSetDescriptors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationSize", ToString(obj.maxMemoryAllocationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan12Features>(const decode::Decoded_VkPhysicalDeviceVulkan12Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan12Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerMirrorClampToEdge", ToString(obj.samplerMirrorClampToEdge, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawIndirectCount", ToString(obj.drawIndirectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer8BitAccess", ToString(obj.storageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer8BitAccess", ToString(obj.uniformAndStorageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant8", ToString(obj.storagePushConstant8, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferInt64Atomics", ToString(obj.shaderBufferInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedInt64Atomics", ToString(obj.shaderSharedInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat16", ToString(obj.shaderFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt8", ToString(obj.shaderInt8, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorIndexing", ToString(obj.descriptorIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayDynamicIndexing", ToString(obj.shaderInputAttachmentArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayDynamicIndexing", ToString(obj.shaderUniformTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayDynamicIndexing", ToString(obj.shaderStorageTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexing", ToString(obj.shaderUniformBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexing", ToString(obj.shaderSampledImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexing", ToString(obj.shaderStorageBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexing", ToString(obj.shaderStorageImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexing", ToString(obj.shaderInputAttachmentArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayNonUniformIndexing", ToString(obj.shaderUniformTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayNonUniformIndexing", ToString(obj.shaderStorageTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformBufferUpdateAfterBind", ToString(obj.descriptorBindingUniformBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingSampledImageUpdateAfterBind", ToString(obj.descriptorBindingSampledImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageImageUpdateAfterBind", ToString(obj.descriptorBindingStorageImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageBufferUpdateAfterBind", ToString(obj.descriptorBindingStorageBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformTexelBufferUpdateAfterBind", ToString(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageTexelBufferUpdateAfterBind", ToString(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUpdateUnusedWhilePending", ToString(obj.descriptorBindingUpdateUnusedWhilePending, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingPartiallyBound", ToString(obj.descriptorBindingPartiallyBound, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingVariableDescriptorCount", ToString(obj.descriptorBindingVariableDescriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "runtimeDescriptorArray", ToString(obj.runtimeDescriptorArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerFilterMinmax", ToString(obj.samplerFilterMinmax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scalarBlockLayout", ToString(obj.scalarBlockLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagelessFramebuffer", ToString(obj.imagelessFramebuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformBufferStandardLayout", ToString(obj.uniformBufferStandardLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupExtendedTypes", ToString(obj.shaderSubgroupExtendedTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateDepthStencilLayouts", ToString(obj.separateDepthStencilLayouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hostQueryReset", ToString(obj.hostQueryReset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timelineSemaphore", ToString(obj.timelineSemaphore, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModel", ToString(obj.vulkanMemoryModel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelDeviceScope", ToString(obj.vulkanMemoryModelDeviceScope, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelAvailabilityVisibilityChains", ToString(obj.vulkanMemoryModelAvailabilityVisibilityChains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderOutputViewportIndex", ToString(obj.shaderOutputViewportIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderOutputLayer", ToString(obj.shaderOutputLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupBroadcastDynamicId", ToString(obj.subgroupBroadcastDynamicId, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkConformanceVersion>(const decode::Decoded_VkConformanceVersion& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkConformanceVersion& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "major", ToString(obj.major, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minor", ToString(obj.minor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subminor", ToString(obj.subminor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "patch", ToString(obj.patch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan12Properties>(const decode::Decoded_VkPhysicalDeviceVulkan12Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan12Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", CStrToString(obj.driverName));
            FieldToString(strStrm, false, "driverInfo", CStrToString(obj.driverInfo));
            FieldToString(strStrm, false, "conformanceVersion", ToString(*(decoded_obj.conformanceVersion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "denormBehaviorIndependence", '"' + ToString(obj.denormBehaviorIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "roundingModeIndependence", '"' + ToString(obj.roundingModeIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat16", ToString(obj.shaderSignedZeroInfNanPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat32", ToString(obj.shaderSignedZeroInfNanPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat64", ToString(obj.shaderSignedZeroInfNanPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat16", ToString(obj.shaderDenormPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat32", ToString(obj.shaderDenormPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat64", ToString(obj.shaderDenormPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat16", ToString(obj.shaderDenormFlushToZeroFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat32", ToString(obj.shaderDenormFlushToZeroFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat64", ToString(obj.shaderDenormFlushToZeroFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat16", ToString(obj.shaderRoundingModeRTEFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat32", ToString(obj.shaderRoundingModeRTEFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat64", ToString(obj.shaderRoundingModeRTEFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat16", ToString(obj.shaderRoundingModeRTZFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat32", ToString(obj.shaderRoundingModeRTZFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat64", ToString(obj.shaderRoundingModeRTZFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUpdateAfterBindDescriptorsInAllPools", ToString(obj.maxUpdateAfterBindDescriptorsInAllPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexingNative", ToString(obj.shaderUniformBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexingNative", ToString(obj.shaderSampledImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexingNative", ToString(obj.shaderStorageBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexingNative", ToString(obj.shaderStorageImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexingNative", ToString(obj.shaderInputAttachmentArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccessUpdateAfterBind", ToString(obj.robustBufferAccessUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadDivergentImplicitLod", ToString(obj.quadDivergentImplicitLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSamplers", ToString(obj.maxPerStageDescriptorUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindUniformBuffers", ToString(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageBuffers", ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSampledImages", ToString(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageImages", ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInputAttachments", ToString(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageUpdateAfterBindResources", ToString(obj.maxPerStageUpdateAfterBindResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSamplers", ToString(obj.maxDescriptorSetUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffers", ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffers", ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSampledImages", ToString(obj.maxDescriptorSetUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageImages", ToString(obj.maxDescriptorSetUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInputAttachments", ToString(obj.maxDescriptorSetUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedDepthResolveModes", ToString(obj.supportedDepthResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStencilResolveModes", ToString(obj.supportedStencilResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolveNone", ToString(obj.independentResolveNone, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolve", ToString(obj.independentResolve, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxSingleComponentFormats", ToString(obj.filterMinmaxSingleComponentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxImageComponentMapping", ToString(obj.filterMinmaxImageComponentMapping, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTimelineSemaphoreValueDifference", ToString(obj.maxTimelineSemaphoreValueDifference, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebufferIntegerColorSampleCounts", ToString(obj.framebufferIntegerColorSampleCounts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageFormatListCreateInfo>(const decode::Decoded_VkImageFormatListCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageFormatListCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewFormatCount", ToString(obj.viewFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewFormats", VkEnumArrayToString(obj.viewFormatCount, obj.pViewFormats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescription2>(const decode::Decoded_VkAttachmentDescription2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescription2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilLoadOp", '"' + ToString(obj.stencilLoadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilStoreOp", '"' + ToString(obj.stencilStoreOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialLayout", '"' + ToString(obj.initialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "finalLayout", '"' + ToString(obj.finalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReference2>(const decode::Decoded_VkAttachmentReference2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReference2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachment", ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescription2>(const decode::Decoded_VkSubpassDescription2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescription2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentCount", ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", PointerDecoderArrayToString(*decoded_obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", PointerDecoderArrayToString(*decoded_obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", ((decoded_obj.pDepthStencilAttachment && decoded_obj.pDepthStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDependency2>(const decode::Decoded_VkSubpassDependency2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDependency2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubpass", ToString(obj.srcSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubpass", ToString(obj.dstSubpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewOffset", ToString(obj.viewOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreateInfo2>(const decode::Decoded_VkRenderPassCreateInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreateInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", PointerDecoderArrayToString(*decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", PointerDecoderArrayToString(*decoded_obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", PointerDecoderArrayToString(*decoded_obj.pDependencies, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlatedViewMaskCount", ToString(obj.correlatedViewMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelatedViewMasks", ArrayToString(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassBeginInfo>(const decode::Decoded_VkSubpassBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "contents", '"' + ToString(obj.contents, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassEndInfo>(const decode::Decoded_VkSubpassEndInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassEndInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice8BitStorageFeatures>(const decode::Decoded_VkPhysicalDevice8BitStorageFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice8BitStorageFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer8BitAccess", ToString(obj.storageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer8BitAccess", ToString(obj.uniformAndStorageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant8", ToString(obj.storagePushConstant8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDriverProperties>(const decode::Decoded_VkPhysicalDeviceDriverProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDriverProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", CStrToString(obj.driverName));
            FieldToString(strStrm, false, "driverInfo", CStrToString(obj.driverInfo));
            FieldToString(strStrm, false, "conformanceVersion", ToString(*(decoded_obj.conformanceVersion), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicInt64Features>(const decode::Decoded_VkPhysicalDeviceShaderAtomicInt64Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicInt64Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferInt64Atomics", ToString(obj.shaderBufferInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedInt64Atomics", ToString(obj.shaderSharedInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderFloat16Int8Features>(const decode::Decoded_VkPhysicalDeviceShaderFloat16Int8Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderFloat16Int8Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat16", ToString(obj.shaderFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt8", ToString(obj.shaderInt8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFloatControlsProperties>(const decode::Decoded_VkPhysicalDeviceFloatControlsProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFloatControlsProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "denormBehaviorIndependence", '"' + ToString(obj.denormBehaviorIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "roundingModeIndependence", '"' + ToString(obj.roundingModeIndependence, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat16", ToString(obj.shaderSignedZeroInfNanPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat32", ToString(obj.shaderSignedZeroInfNanPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSignedZeroInfNanPreserveFloat64", ToString(obj.shaderSignedZeroInfNanPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat16", ToString(obj.shaderDenormPreserveFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat32", ToString(obj.shaderDenormPreserveFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormPreserveFloat64", ToString(obj.shaderDenormPreserveFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat16", ToString(obj.shaderDenormFlushToZeroFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat32", ToString(obj.shaderDenormFlushToZeroFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDenormFlushToZeroFloat64", ToString(obj.shaderDenormFlushToZeroFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat16", ToString(obj.shaderRoundingModeRTEFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat32", ToString(obj.shaderRoundingModeRTEFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTEFloat64", ToString(obj.shaderRoundingModeRTEFloat64, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat16", ToString(obj.shaderRoundingModeRTZFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat32", ToString(obj.shaderRoundingModeRTZFloat32, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderRoundingModeRTZFloat64", ToString(obj.shaderRoundingModeRTZFloat64, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfo>(const decode::Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindingFlags", ArrayToString(obj.bindingCount, obj.pBindingFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorIndexingFeatures>(const decode::Decoded_VkPhysicalDeviceDescriptorIndexingFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorIndexingFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayDynamicIndexing", ToString(obj.shaderInputAttachmentArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayDynamicIndexing", ToString(obj.shaderUniformTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayDynamicIndexing", ToString(obj.shaderStorageTexelBufferArrayDynamicIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexing", ToString(obj.shaderUniformBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexing", ToString(obj.shaderSampledImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexing", ToString(obj.shaderStorageBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexing", ToString(obj.shaderStorageImageArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexing", ToString(obj.shaderInputAttachmentArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformTexelBufferArrayNonUniformIndexing", ToString(obj.shaderUniformTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageTexelBufferArrayNonUniformIndexing", ToString(obj.shaderStorageTexelBufferArrayNonUniformIndexing, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformBufferUpdateAfterBind", ToString(obj.descriptorBindingUniformBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingSampledImageUpdateAfterBind", ToString(obj.descriptorBindingSampledImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageImageUpdateAfterBind", ToString(obj.descriptorBindingStorageImageUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageBufferUpdateAfterBind", ToString(obj.descriptorBindingStorageBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUniformTexelBufferUpdateAfterBind", ToString(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingStorageTexelBufferUpdateAfterBind", ToString(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingUpdateUnusedWhilePending", ToString(obj.descriptorBindingUpdateUnusedWhilePending, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingPartiallyBound", ToString(obj.descriptorBindingPartiallyBound, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingVariableDescriptorCount", ToString(obj.descriptorBindingVariableDescriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "runtimeDescriptorArray", ToString(obj.runtimeDescriptorArray, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorIndexingProperties>(const decode::Decoded_VkPhysicalDeviceDescriptorIndexingProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorIndexingProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxUpdateAfterBindDescriptorsInAllPools", ToString(obj.maxUpdateAfterBindDescriptorsInAllPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderUniformBufferArrayNonUniformIndexingNative", ToString(obj.shaderUniformBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampledImageArrayNonUniformIndexingNative", ToString(obj.shaderSampledImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageBufferArrayNonUniformIndexingNative", ToString(obj.shaderStorageBufferArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderStorageImageArrayNonUniformIndexingNative", ToString(obj.shaderStorageImageArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInputAttachmentArrayNonUniformIndexingNative", ToString(obj.shaderInputAttachmentArrayNonUniformIndexingNative, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccessUpdateAfterBind", ToString(obj.robustBufferAccessUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadDivergentImplicitLod", ToString(obj.quadDivergentImplicitLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSamplers", ToString(obj.maxPerStageDescriptorUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindUniformBuffers", ToString(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageBuffers", ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindSampledImages", ToString(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindStorageImages", ToString(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInputAttachments", ToString(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageUpdateAfterBindResources", ToString(obj.maxPerStageUpdateAfterBindResources, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSamplers", ToString(obj.maxDescriptorSetUpdateAfterBindSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffers", ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindUniformBuffersDynamic", ToString(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffers", ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageBuffersDynamic", ToString(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindSampledImages", ToString(obj.maxDescriptorSetUpdateAfterBindSampledImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindStorageImages", ToString(obj.maxDescriptorSetUpdateAfterBindStorageImages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInputAttachments", ToString(obj.maxDescriptorSetUpdateAfterBindInputAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfo>(const decode::Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetCount", ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorCounts", ArrayToString(obj.descriptorSetCount, obj.pDescriptorCounts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupport>(const decode::Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupport& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVariableDescriptorCount", ToString(obj.maxVariableDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassDescriptionDepthStencilResolve>(const decode::Decoded_VkSubpassDescriptionDepthStencilResolve& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassDescriptionDepthStencilResolve& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthResolveMode", '"' + ToString(obj.depthResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilResolveMode", '"' + ToString(obj.stencilResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pDepthStencilResolveAttachment", ((decoded_obj.pDepthStencilResolveAttachment && decoded_obj.pDepthStencilResolveAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthStencilResolveAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthStencilResolveProperties>(const decode::Decoded_VkPhysicalDeviceDepthStencilResolveProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthStencilResolveProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedDepthResolveModes", ToString(obj.supportedDepthResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStencilResolveModes", ToString(obj.supportedStencilResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolveNone", ToString(obj.independentResolveNone, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolve", ToString(obj.independentResolve, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceScalarBlockLayoutFeatures>(const decode::Decoded_VkPhysicalDeviceScalarBlockLayoutFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceScalarBlockLayoutFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scalarBlockLayout", ToString(obj.scalarBlockLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageStencilUsageCreateInfo>(const decode::Decoded_VkImageStencilUsageCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageStencilUsageCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilUsage", ToString(obj.stencilUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerReductionModeCreateInfo>(const decode::Decoded_VkSamplerReductionModeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerReductionModeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reductionMode", '"' + ToString(obj.reductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSamplerFilterMinmaxProperties>(const decode::Decoded_VkPhysicalDeviceSamplerFilterMinmaxProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxSingleComponentFormats", ToString(obj.filterMinmaxSingleComponentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxImageComponentMapping", ToString(obj.filterMinmaxImageComponentMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkanMemoryModelFeatures>(const decode::Decoded_VkPhysicalDeviceVulkanMemoryModelFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkanMemoryModelFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModel", ToString(obj.vulkanMemoryModel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelDeviceScope", ToString(obj.vulkanMemoryModelDeviceScope, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelAvailabilityVisibilityChains", ToString(obj.vulkanMemoryModelAvailabilityVisibilityChains, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImagelessFramebufferFeatures>(const decode::Decoded_VkPhysicalDeviceImagelessFramebufferFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImagelessFramebufferFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagelessFramebuffer", ToString(obj.imagelessFramebuffer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferAttachmentImageInfo>(const decode::Decoded_VkFramebufferAttachmentImageInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferAttachmentImageInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewFormatCount", ToString(obj.viewFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewFormats", VkEnumArrayToString(obj.viewFormatCount, obj.pViewFormats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferAttachmentsCreateInfo>(const decode::Decoded_VkFramebufferAttachmentsCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferAttachmentsCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentImageInfoCount", ToString(obj.attachmentImageInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentImageInfos", PointerDecoderArrayToString(*decoded_obj.pAttachmentImageInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassAttachmentBeginInfo>(const decode::Decoded_VkRenderPassAttachmentBeginInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassAttachmentBeginInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", decode::HandlePointerDecoderArrayToString(decoded_obj.pAttachments.GetLength(), &decoded_obj.pAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const decode::Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformBufferStandardLayout", ToString(obj.uniformBufferStandardLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const decode::Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupExtendedTypes", ToString(obj.shaderSubgroupExtendedTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const decode::Decoded_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateDepthStencilLayouts", ToString(obj.separateDepthStencilLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentReferenceStencilLayout>(const decode::Decoded_VkAttachmentReferenceStencilLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentReferenceStencilLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilLayout", '"' + ToString(obj.stencilLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentDescriptionStencilLayout>(const decode::Decoded_VkAttachmentDescriptionStencilLayout& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentDescriptionStencilLayout& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilInitialLayout", '"' + ToString(obj.stencilInitialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilFinalLayout", '"' + ToString(obj.stencilFinalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceHostQueryResetFeatures>(const decode::Decoded_VkPhysicalDeviceHostQueryResetFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceHostQueryResetFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hostQueryReset", ToString(obj.hostQueryReset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTimelineSemaphoreFeatures>(const decode::Decoded_VkPhysicalDeviceTimelineSemaphoreFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTimelineSemaphoreFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timelineSemaphore", ToString(obj.timelineSemaphore, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTimelineSemaphoreProperties>(const decode::Decoded_VkPhysicalDeviceTimelineSemaphoreProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTimelineSemaphoreProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTimelineSemaphoreValueDifference", ToString(obj.maxTimelineSemaphoreValueDifference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreTypeCreateInfo>(const decode::Decoded_VkSemaphoreTypeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreTypeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreType", '"' + ToString(obj.semaphoreType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialValue", ToString(obj.initialValue, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTimelineSemaphoreSubmitInfo>(const decode::Decoded_VkTimelineSemaphoreSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTimelineSemaphoreSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValueCount", ToString(obj.waitSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", ArrayToString(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValueCount", ToString(obj.signalSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", ArrayToString(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreWaitInfo>(const decode::Decoded_VkSemaphoreWaitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreWaitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreCount", ToString(obj.semaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pSemaphores.GetLength(), &decoded_obj.pSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pValues", ArrayToString(obj.semaphoreCount, obj.pValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreSignalInfo>(const decode::Decoded_VkSemaphoreSignalInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreSignalInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "value", ToString(obj.value, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeatures>(const decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBufferDeviceAddressFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferDeviceAddressInfo>(const decode::Decoded_VkBufferDeviceAddressInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferDeviceAddressInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferOpaqueCaptureAddressCreateInfo>(const decode::Decoded_VkBufferOpaqueCaptureAddressCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferOpaqueCaptureAddressCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryOpaqueCaptureAddressAllocateInfo>(const decode::Decoded_VkMemoryOpaqueCaptureAddressAllocateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryOpaqueCaptureAddressAllocateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>(const decode::Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryOpaqueCaptureAddressInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan13Features>(const decode::Decoded_VkPhysicalDeviceVulkan13Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan13Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess", ToString(obj.robustImageAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inlineUniformBlock", ToString(obj.inlineUniformBlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingInlineUniformBlockUpdateAfterBind", ToString(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCreationCacheControl", ToString(obj.pipelineCreationCacheControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateData", ToString(obj.privateData, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDemoteToHelperInvocation", ToString(obj.shaderDemoteToHelperInvocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTerminateInvocation", ToString(obj.shaderTerminateInvocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSizeControl", ToString(obj.subgroupSizeControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeFullSubgroups", ToString(obj.computeFullSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "synchronization2", ToString(obj.synchronization2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_HDR", ToString(obj.textureCompressionASTC_HDR, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderZeroInitializeWorkgroupMemory", ToString(obj.shaderZeroInitializeWorkgroupMemory, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicRendering", ToString(obj.dynamicRendering, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerDotProduct", ToString(obj.shaderIntegerDotProduct, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maintenance4", ToString(obj.maintenance4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVulkan13Properties>(const decode::Decoded_VkPhysicalDeviceVulkan13Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVulkan13Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSubgroupSize", ToString(obj.minSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubgroupSize", ToString(obj.maxSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkgroupSubgroups", ToString(obj.maxComputeWorkgroupSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSizeStages", ToString(obj.requiredSubgroupSizeStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockSize", ToString(obj.maxInlineUniformBlockSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInlineUniformBlocks", ToString(obj.maxPerStageDescriptorInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", ToString(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInlineUniformBlocks", ToString(obj.maxDescriptorSetInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks", ToString(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformTotalSize", ToString(obj.maxInlineUniformTotalSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitUnsignedAccelerated", ToString(obj.integerDotProduct8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitSignedAccelerated", ToString(obj.integerDotProduct8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitMixedSignednessAccelerated", ToString(obj.integerDotProduct8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedUnsignedAccelerated", ToString(obj.integerDotProduct4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedSignedAccelerated", ToString(obj.integerDotProduct4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedMixedSignednessAccelerated", ToString(obj.integerDotProduct4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitUnsignedAccelerated", ToString(obj.integerDotProduct16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitSignedAccelerated", ToString(obj.integerDotProduct16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitMixedSignednessAccelerated", ToString(obj.integerDotProduct16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitUnsignedAccelerated", ToString(obj.integerDotProduct32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitSignedAccelerated", ToString(obj.integerDotProduct32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitMixedSignednessAccelerated", ToString(obj.integerDotProduct32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitUnsignedAccelerated", ToString(obj.integerDotProduct64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitSignedAccelerated", ToString(obj.integerDotProduct64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitMixedSignednessAccelerated", ToString(obj.integerDotProduct64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetAlignmentBytes", ToString(obj.storageTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetSingleTexelAlignment", ToString(obj.storageTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetAlignmentBytes", ToString(obj.uniformTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetSingleTexelAlignment", ToString(obj.uniformTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBufferSize", ToString(obj.maxBufferSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCreationFeedback>(const decode::Decoded_VkPipelineCreationFeedback& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCreationFeedback& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "duration", ToString(obj.duration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCreationFeedbackCreateInfo>(const decode::Decoded_VkPipelineCreationFeedbackCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCreationFeedbackCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineCreationFeedback", ((decoded_obj.pPipelineCreationFeedback && decoded_obj.pPipelineCreationFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pPipelineCreationFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pipelineStageCreationFeedbackCount", ToString(obj.pipelineStageCreationFeedbackCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineStageCreationFeedbacks", PointerDecoderArrayToString(*decoded_obj.pPipelineStageCreationFeedbacks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderTerminateInvocationFeatures>(const decode::Decoded_VkPhysicalDeviceShaderTerminateInvocationFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderTerminateInvocationFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTerminateInvocation", ToString(obj.shaderTerminateInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceToolProperties>(const decode::Decoded_VkPhysicalDeviceToolProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceToolProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "version", CStrToString(obj.version));
            FieldToString(strStrm, false, "purposes", ToString(obj.purposes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "layer", CStrToString(obj.layer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(const decode::Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDemoteToHelperInvocation", ToString(obj.shaderDemoteToHelperInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrivateDataFeatures>(const decode::Decoded_VkPhysicalDevicePrivateDataFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrivateDataFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateData", ToString(obj.privateData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDevicePrivateDataCreateInfo>(const decode::Decoded_VkDevicePrivateDataCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDevicePrivateDataCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlotRequestCount", ToString(obj.privateDataSlotRequestCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPrivateDataSlotCreateInfo>(const decode::Decoded_VkPrivateDataSlotCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPrivateDataSlotCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineCreationCacheControlFeatures>(const decode::Decoded_VkPhysicalDevicePipelineCreationCacheControlFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineCreationCacheControlFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCreationCacheControl", ToString(obj.pipelineCreationCacheControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryBarrier2>(const decode::Decoded_VkMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferMemoryBarrier2>(const decode::Decoded_VkBufferMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageMemoryBarrier2>(const decode::Decoded_VkImageMemoryBarrier2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageMemoryBarrier2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "subresourceRange", ToString(*(decoded_obj.subresourceRange), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDependencyInfo>(const decode::Decoded_VkDependencyInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDependencyInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryBarrierCount", ToString(obj.memoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryBarriers", PointerDecoderArrayToString(*decoded_obj.pMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferMemoryBarrierCount", ToString(obj.bufferMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferMemoryBarriers", PointerDecoderArrayToString(*decoded_obj.pBufferMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMemoryBarrierCount", ToString(obj.imageMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageMemoryBarriers", PointerDecoderArrayToString(*decoded_obj.pImageMemoryBarriers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreSubmitInfo>(const decode::Decoded_VkSemaphoreSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "value", ToString(obj.value, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageMask", ToString(obj.stageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndex", ToString(obj.deviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferSubmitInfo>(const decode::Decoded_VkCommandBufferSubmitInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferSubmitInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBuffer", decode::HandleIdToString(decoded_obj.commandBuffer));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubmitInfo2>(const decode::Decoded_VkSubmitInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubmitInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreInfoCount", ToString(obj.waitSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreInfos", PointerDecoderArrayToString(*decoded_obj.pWaitSemaphoreInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferInfoCount", ToString(obj.commandBufferInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferInfos", PointerDecoderArrayToString(*decoded_obj.pCommandBufferInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreInfoCount", ToString(obj.signalSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreInfos", PointerDecoderArrayToString(*decoded_obj.pSignalSemaphoreInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSynchronization2Features>(const decode::Decoded_VkPhysicalDeviceSynchronization2Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSynchronization2Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "synchronization2", ToString(obj.synchronization2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(const decode::Decoded_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderZeroInitializeWorkgroupMemory", ToString(obj.shaderZeroInitializeWorkgroupMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageRobustnessFeatures>(const decode::Decoded_VkPhysicalDeviceImageRobustnessFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageRobustnessFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess", ToString(obj.robustImageAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferCopy2>(const decode::Decoded_VkBufferCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyBufferInfo2>(const decode::Decoded_VkCopyBufferInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyBufferInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", decode::HandleIdToString(decoded_obj.srcBuffer));
            FieldToString(strStrm, false, "dstBuffer", decode::HandleIdToString(decoded_obj.dstBuffer));
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCopy2>(const decode::Decoded_VkImageCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyImageInfo2>(const decode::Decoded_VkCopyImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferImageCopy2>(const decode::Decoded_VkBufferImageCopy2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferImageCopy2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferOffset", ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", ToString(*(decoded_obj.imageOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyBufferToImageInfo2>(const decode::Decoded_VkCopyBufferToImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyBufferToImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", decode::HandleIdToString(decoded_obj.srcBuffer));
            FieldToString(strStrm, false, "dstImage", decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyImageToBufferInfo2>(const decode::Decoded_VkCopyImageToBufferInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyImageToBufferInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstBuffer", decode::HandleIdToString(decoded_obj.dstBuffer));
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageBlit2>(const decode::Decoded_VkImageBlit2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageBlit2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", PointerDecoderArrayToString(*decoded_obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", PointerDecoderArrayToString(*decoded_obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBlitImageInfo2>(const decode::Decoded_VkBlitImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBlitImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filter", '"' + ToString(obj.filter, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageResolve2>(const decode::Decoded_VkImageResolve2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageResolve2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(*(decoded_obj.srcSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(*(decoded_obj.srcOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(*(decoded_obj.dstSubresource), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(*(decoded_obj.dstOffset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkResolveImageInfo2>(const decode::Decoded_VkResolveImageInfo2& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkResolveImageInfo2& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", decode::HandleIdToString(decoded_obj.srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", decode::HandleIdToString(decoded_obj.dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupSizeControlFeatures>(const decode::Decoded_VkPhysicalDeviceSubgroupSizeControlFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupSizeControlFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSizeControl", ToString(obj.subgroupSizeControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeFullSubgroups", ToString(obj.computeFullSubgroups, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubgroupSizeControlProperties>(const decode::Decoded_VkPhysicalDeviceSubgroupSizeControlProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubgroupSizeControlProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSubgroupSize", ToString(obj.minSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubgroupSize", ToString(obj.maxSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkgroupSubgroups", ToString(obj.maxComputeWorkgroupSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSizeStages", ToString(obj.requiredSubgroupSizeStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>(const decode::Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSize", ToString(obj.requiredSubgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInlineUniformBlockFeatures>(const decode::Decoded_VkPhysicalDeviceInlineUniformBlockFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInlineUniformBlockFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inlineUniformBlock", ToString(obj.inlineUniformBlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingInlineUniformBlockUpdateAfterBind", ToString(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInlineUniformBlockProperties>(const decode::Decoded_VkPhysicalDeviceInlineUniformBlockProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInlineUniformBlockProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockSize", ToString(obj.maxInlineUniformBlockSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInlineUniformBlocks", ToString(obj.maxPerStageDescriptorInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", ToString(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInlineUniformBlocks", ToString(obj.maxDescriptorSetInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks", ToString(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetInlineUniformBlock>(const decode::Decoded_VkWriteDescriptorSetInlineUniformBlock& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetInlineUniformBlock& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorPoolInlineUniformBlockCreateInfo>(const decode::Decoded_VkDescriptorPoolInlineUniformBlockCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorPoolInlineUniformBlockCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockBindings", ToString(obj.maxInlineUniformBlockBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(const decode::Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTextureCompressionASTCHDRFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_HDR", ToString(obj.textureCompressionASTC_HDR, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingAttachmentInfo>(const decode::Decoded_VkRenderingAttachmentInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingAttachmentInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveMode", '"' + ToString(obj.resolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveImageView", decode::HandleIdToString(decoded_obj.resolveImageView));
            FieldToString(strStrm, false, "resolveImageLayout", '"' + ToString(obj.resolveImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clearValue", ToString(*(decoded_obj.clearValue), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingInfo>(const decode::Decoded_VkRenderingInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderArea", ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", PointerDecoderArrayToString(*decoded_obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthAttachment", ((decoded_obj.pDepthAttachment && decoded_obj.pDepthAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pDepthAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pStencilAttachment", ((decoded_obj.pStencilAttachment && decoded_obj.pStencilAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pStencilAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRenderingCreateInfo>(const decode::Decoded_VkPipelineRenderingCreateInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRenderingCreateInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentFormats", VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthAttachmentFormat", '"' + ToString(obj.depthAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilAttachmentFormat", '"' + ToString(obj.stencilAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDynamicRenderingFeatures>(const decode::Decoded_VkPhysicalDeviceDynamicRenderingFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDynamicRenderingFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicRendering", ToString(obj.dynamicRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceRenderingInfo>(const decode::Decoded_VkCommandBufferInheritanceRenderingInfo& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceRenderingInfo& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentFormats", VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthAttachmentFormat", '"' + ToString(obj.depthAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilAttachmentFormat", '"' + ToString(obj.stencilAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductFeatures>(const decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductFeatures& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerDotProductFeatures& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerDotProduct", ToString(obj.shaderIntegerDotProduct, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductProperties>(const decode::Decoded_VkPhysicalDeviceShaderIntegerDotProductProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerDotProductProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitUnsignedAccelerated", ToString(obj.integerDotProduct8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitSignedAccelerated", ToString(obj.integerDotProduct8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct8BitMixedSignednessAccelerated", ToString(obj.integerDotProduct8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedUnsignedAccelerated", ToString(obj.integerDotProduct4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedSignedAccelerated", ToString(obj.integerDotProduct4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct4x8BitPackedMixedSignednessAccelerated", ToString(obj.integerDotProduct4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitUnsignedAccelerated", ToString(obj.integerDotProduct16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitSignedAccelerated", ToString(obj.integerDotProduct16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct16BitMixedSignednessAccelerated", ToString(obj.integerDotProduct16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitUnsignedAccelerated", ToString(obj.integerDotProduct32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitSignedAccelerated", ToString(obj.integerDotProduct32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct32BitMixedSignednessAccelerated", ToString(obj.integerDotProduct32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitUnsignedAccelerated", ToString(obj.integerDotProduct64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitSignedAccelerated", ToString(obj.integerDotProduct64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProduct64BitMixedSignednessAccelerated", ToString(obj.integerDotProduct64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitUnsignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitSignedAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitSignedAccelerated, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated", ToString(obj.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentProperties>(const decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentProperties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTexelBufferAlignmentProperties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetAlignmentBytes", ToString(obj.storageTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetSingleTexelAlignment", ToString(obj.storageTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetAlignmentBytes", ToString(obj.uniformTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetSingleTexelAlignment", ToString(obj.uniformTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFormatProperties3>(const decode::Decoded_VkFormatProperties3& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFormatProperties3& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearTilingFeatures", ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance4Features>(const decode::Decoded_VkPhysicalDeviceMaintenance4Features& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance4Features& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maintenance4", ToString(obj.maintenance4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMaintenance4Properties>(const decode::Decoded_VkPhysicalDeviceMaintenance4Properties& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMaintenance4Properties& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBufferSize", ToString(obj.maxBufferSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceBufferMemoryRequirements>(const decode::Decoded_VkDeviceBufferMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceBufferMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", ((decoded_obj.pCreateInfo && decoded_obj.pCreateInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pCreateInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceImageMemoryRequirements>(const decode::Decoded_VkDeviceImageMemoryRequirements& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceImageMemoryRequirements& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", ((decoded_obj.pCreateInfo && decoded_obj.pCreateInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pCreateInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilitiesKHR>(const decode::Decoded_VkSurfaceCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", ToString(*(decoded_obj.currentExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", ToString(*(decoded_obj.minImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", ToString(*(decoded_obj.maxImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFormatKHR>(const decode::Decoded_VkSurfaceFormatKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFormatKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorSpace", '"' + ToString(obj.colorSpace, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainCreateInfoKHR>(const decode::Decoded_VkSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", decode::HandleIdToString(decoded_obj.surface));
            FieldToString(strStrm, false, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormat", '"' + ToString(obj.imageFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageColorSpace", '"' + ToString(obj.imageColorSpace, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageArrayLayers", ToString(obj.imageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageUsage", ToString(obj.imageUsage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSharingMode", '"' + ToString(obj.imageSharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preTransform", '"' + ToString(obj.preTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compositeAlpha", '"' + ToString(obj.compositeAlpha, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "presentMode", '"' + ToString(obj.presentMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clipped", ToString(obj.clipped, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldSwapchain", decode::HandleIdToString(decoded_obj.oldSwapchain));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentInfoKHR>(const decode::Decoded_VkPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", decode::HandlePointerDecoderArrayToString(decoded_obj.pWaitSemaphores.GetLength(), &decoded_obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchains", decode::HandlePointerDecoderArrayToString(decoded_obj.pSwapchains.GetLength(), &decoded_obj.pSwapchains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageIndices", ArrayToString(obj.swapchainCount, obj.pImageIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResults", VkEnumArrayToString(obj.swapchainCount, obj.pResults, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSwapchainCreateInfoKHR>(const decode::Decoded_VkImageSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", decode::HandleIdToString(decoded_obj.swapchain));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindImageMemorySwapchainInfoKHR>(const decode::Decoded_VkBindImageMemorySwapchainInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindImageMemorySwapchainInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", decode::HandleIdToString(decoded_obj.swapchain));
            FieldToString(strStrm, false, "imageIndex", ToString(obj.imageIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAcquireNextImageInfoKHR>(const decode::Decoded_VkAcquireNextImageInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAcquireNextImageInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", decode::HandleIdToString(decoded_obj.swapchain));
            FieldToString(strStrm, false, "timeout", ToString(obj.timeout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "fence", decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupPresentCapabilitiesKHR>(const decode::Decoded_VkDeviceGroupPresentCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupPresentCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentMask", ArrayToString(VK_MAX_DEVICE_GROUP_SIZE, obj.presentMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupPresentInfoKHR>(const decode::Decoded_VkDeviceGroupPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceMasks", ArrayToString(obj.swapchainCount, obj.pDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceGroupSwapchainCreateInfoKHR>(const decode::Decoded_VkDeviceGroupSwapchainCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceGroupSwapchainCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeParametersKHR>(const decode::Decoded_VkDisplayModeParametersKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeParametersKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "visibleRegion", ToString(*(decoded_obj.visibleRegion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "refreshRate", ToString(obj.refreshRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeCreateInfoKHR>(const decode::Decoded_VkDisplayModeCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameters", ToString(*(decoded_obj.parameters), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModePropertiesKHR>(const decode::Decoded_VkDisplayModePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "displayMode", decode::HandleIdToString(decoded_obj.displayMode));
            FieldToString(strStrm, false, "parameters", ToString(*(decoded_obj.parameters), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneCapabilitiesKHR>(const decode::Decoded_VkDisplayPlaneCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "supportedAlpha", ToString(obj.supportedAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcPosition", ToString(*(decoded_obj.minSrcPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcPosition", ToString(*(decoded_obj.maxSrcPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcExtent", ToString(*(decoded_obj.minSrcExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcExtent", ToString(*(decoded_obj.maxSrcExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstPosition", ToString(*(decoded_obj.minDstPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstPosition", ToString(*(decoded_obj.maxDstPosition), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstExtent", ToString(*(decoded_obj.minDstExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstExtent", ToString(*(decoded_obj.maxDstExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlanePropertiesKHR>(const decode::Decoded_VkDisplayPlanePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlanePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "currentDisplay", decode::HandleIdToString(decoded_obj.currentDisplay));
            FieldToString(strStrm, false, "currentStackIndex", ToString(obj.currentStackIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPropertiesKHR>(const decode::Decoded_VkDisplayPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "display", decode::HandleIdToString(decoded_obj.display));
            FieldToString(strStrm, false, "displayName", CStrToString(obj.displayName));
            FieldToString(strStrm, false, "physicalDimensions", ToString(*(decoded_obj.physicalDimensions), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalResolution", ToString(*(decoded_obj.physicalResolution), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeReorderPossible", ToString(obj.planeReorderPossible, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistentContent", ToString(obj.persistentContent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplaySurfaceCreateInfoKHR>(const decode::Decoded_VkDisplaySurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplaySurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayMode", decode::HandleIdToString(decoded_obj.displayMode));
            FieldToString(strStrm, false, "planeIndex", ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeStackIndex", ToString(obj.planeStackIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "globalAlpha", ToString(obj.globalAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alphaMode", '"' + ToString(obj.alphaMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", ToString(*(decoded_obj.imageExtent), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPresentInfoKHR>(const decode::Decoded_VkDisplayPresentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPresentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcRect", ToString(*(decoded_obj.srcRect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstRect", ToString(*(decoded_obj.dstRect), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistent", ToString(obj.persistent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXlibSurfaceCreateInfoKHR>(const decode::Decoded_VkXlibSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXlibSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dpy", decode::DataPointerDecoderToString(decoded_obj.dpy));
            FieldToString(strStrm, false, "window", ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXcbSurfaceCreateInfoKHR>(const decode::Decoded_VkXcbSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXcbSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "connection", decode::DataPointerDecoderToString(decoded_obj.connection));
            FieldToString(strStrm, false, "window", ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWaylandSurfaceCreateInfoKHR>(const decode::Decoded_VkWaylandSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWaylandSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", decode::DataPointerDecoderToString(decoded_obj.display));
            FieldToString(strStrm, false, "surface", decode::DataPointerDecoderToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidSurfaceCreateInfoKHR>(const decode::Decoded_VkAndroidSurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidSurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", decode::DataPointerDecoderToString(decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32SurfaceCreateInfoKHR>(const decode::Decoded_VkWin32SurfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32SurfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hinstance", decode::DataPointerDecoderToString(decoded_obj.hinstance));
            FieldToString(strStrm, false, "hwnd", decode::DataPointerDecoderToString(decoded_obj.hwnd));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingFragmentShadingRateAttachmentInfoKHR>(const decode::Decoded_VkRenderingFragmentShadingRateAttachmentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingFragmentShadingRateAttachmentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", ToString(*(decoded_obj.shadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderingFragmentDensityMapAttachmentInfoEXT>(const decode::Decoded_VkRenderingFragmentDensityMapAttachmentInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderingFragmentDensityMapAttachmentInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentSampleCountInfoAMD>(const decode::Decoded_VkAttachmentSampleCountInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentSampleCountInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentSamples", VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthStencilAttachmentSamples", '"' + ToString(obj.depthStencilAttachmentSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiviewPerViewAttributesInfoNVX>(const decode::Decoded_VkMultiviewPerViewAttributesInfoNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiviewPerViewAttributesInfoNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributes", ToString(obj.perViewAttributes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributesPositionXOnly", ToString(obj.perViewAttributesPositionXOnly, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryWin32HandleInfoKHR>(const decode::Decoded_VkImportMemoryWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryWin32HandleInfoKHR>(const decode::Decoded_VkExportMemoryWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryWin32HandlePropertiesKHR>(const decode::Decoded_VkMemoryWin32HandlePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryWin32HandlePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetWin32HandleInfoKHR>(const decode::Decoded_VkMemoryGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryFdInfoKHR>(const decode::Decoded_VkImportMemoryFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryFdPropertiesKHR>(const decode::Decoded_VkMemoryFdPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryFdPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetFdInfoKHR>(const decode::Decoded_VkMemoryGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR>(const decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", decode::HandlePointerDecoderArrayToString(decoded_obj.pAcquireSyncs.GetLength(), &decoded_obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeouts", ArrayToString(obj.acquireCount, obj.pAcquireTimeouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", decode::HandlePointerDecoderArrayToString(decoded_obj.pReleaseSyncs.GetLength(), &decoded_obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreWin32HandleInfoKHR>(const decode::Decoded_VkImportSemaphoreWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportSemaphoreWin32HandleInfoKHR>(const decode::Decoded_VkExportSemaphoreWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportSemaphoreWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkD3D12FenceSubmitInfoKHR>(const decode::Decoded_VkD3D12FenceSubmitInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkD3D12FenceSubmitInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValuesCount", ToString(obj.waitSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", ArrayToString(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValuesCount", ToString(obj.signalSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", ArrayToString(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetWin32HandleInfoKHR>(const decode::Decoded_VkSemaphoreGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreFdInfoKHR>(const decode::Decoded_VkImportSemaphoreFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetFdInfoKHR>(const decode::Decoded_VkSemaphoreGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePushDescriptorPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPushDescriptors", ToString(obj.maxPushDescriptors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRectLayerKHR>(const decode::Decoded_VkRectLayerKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRectLayerKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", ToString(*(decoded_obj.offset), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(*(decoded_obj.extent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layer", ToString(obj.layer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentRegionKHR>(const decode::Decoded_VkPresentRegionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentRegionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rectangleCount", ToString(obj.rectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRectangles", PointerDecoderArrayToString(*decoded_obj.pRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentRegionsKHR>(const decode::Decoded_VkPresentRegionsKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentRegionsKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSharedPresentSurfaceCapabilitiesKHR>(const decode::Decoded_VkSharedPresentSurfaceCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSharedPresentSurfaceCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharedPresentSupportedUsageFlags", ToString(obj.sharedPresentSupportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportFenceWin32HandleInfoKHR>(const decode::Decoded_VkImportFenceWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportFenceWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", decode::DataPointerDecoderToString(decoded_obj.handle));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportFenceWin32HandleInfoKHR>(const decode::Decoded_VkExportFenceWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportFenceWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceGetWin32HandleInfoKHR>(const decode::Decoded_VkFenceGetWin32HandleInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceGetWin32HandleInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportFenceFdInfoKHR>(const decode::Decoded_VkImportFenceFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportFenceFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFenceGetFdInfoKHR>(const decode::Decoded_VkFenceGetFdInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFenceGetFdInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", decode::HandleIdToString(decoded_obj.fence));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePerformanceQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePerformanceQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterQueryPools", ToString(obj.performanceCounterQueryPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterMultipleQueryPools", ToString(obj.performanceCounterMultipleQueryPools, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePerformanceQueryPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePerformanceQueryPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allowCommandBufferQueryCopies", ToString(obj.allowCommandBufferQueryCopies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceCounterKHR>(const decode::Decoded_VkPerformanceCounterKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceCounterKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "unit", '"' + ToString(obj.unit, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "scope", '"' + ToString(obj.scope, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storage", '"' + ToString(obj.storage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uuid", '"' + UIDToString(VK_UUID_SIZE, obj.uuid) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceCounterDescriptionKHR>(const decode::Decoded_VkPerformanceCounterDescriptionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceCounterDescriptionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "category", CStrToString(obj.category));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolPerformanceCreateInfoKHR>(const decode::Decoded_VkQueryPoolPerformanceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolPerformanceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterIndexCount", ToString(obj.counterIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterIndices", ArrayToString(obj.counterIndexCount, obj.pCounterIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAcquireProfilingLockInfoKHR>(const decode::Decoded_VkAcquireProfilingLockInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAcquireProfilingLockInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(obj.timeout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceQuerySubmitInfoKHR>(const decode::Decoded_VkPerformanceQuerySubmitInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceQuerySubmitInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterPassIndex", ToString(obj.counterPassIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSurfaceInfo2KHR>(const decode::Decoded_VkPhysicalDeviceSurfaceInfo2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSurfaceInfo2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", decode::HandleIdToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilities2KHR>(const decode::Decoded_VkSurfaceCapabilities2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilities2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCapabilities", ToString(*(decoded_obj.surfaceCapabilities), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFormat2KHR>(const decode::Decoded_VkSurfaceFormat2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFormat2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceFormat", ToString(*(decoded_obj.surfaceFormat), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayProperties2KHR>(const decode::Decoded_VkDisplayProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayProperties", ToString(*(decoded_obj.displayProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneProperties2KHR>(const decode::Decoded_VkDisplayPlaneProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPlaneProperties", ToString(*(decoded_obj.displayPlaneProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayModeProperties2KHR>(const decode::Decoded_VkDisplayModeProperties2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayModeProperties2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayModeProperties", ToString(*(decoded_obj.displayModeProperties), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneInfo2KHR>(const decode::Decoded_VkDisplayPlaneInfo2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneInfo2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", decode::HandleIdToString(decoded_obj.mode));
            FieldToString(strStrm, false, "planeIndex", ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPlaneCapabilities2KHR>(const decode::Decoded_VkDisplayPlaneCapabilities2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPlaneCapabilities2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "capabilities", ToString(*(decoded_obj.capabilities), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePortabilitySubsetFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePortabilitySubsetFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePortabilitySubsetFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "constantAlphaColorBlendFactors", ToString(obj.constantAlphaColorBlendFactors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "events", ToString(obj.events, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewFormatReinterpretation", ToString(obj.imageViewFormatReinterpretation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewFormatSwizzle", ToString(obj.imageViewFormatSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView2DOn3DImage", ToString(obj.imageView2DOn3DImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampleArrayImage", ToString(obj.multisampleArrayImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableComparisonSamplers", ToString(obj.mutableComparisonSamplers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointPolygons", ToString(obj.pointPolygons, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerMipLodBias", ToString(obj.samplerMipLodBias, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateStencilMaskRef", ToString(obj.separateStencilMaskRef, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSampleRateInterpolationFunctions", ToString(obj.shaderSampleRateInterpolationFunctions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationIsolines", ToString(obj.tessellationIsolines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tessellationPointMode", ToString(obj.tessellationPointMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleFans", ToString(obj.triangleFans, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeAccessBeyondStride", ToString(obj.vertexAttributeAccessBeyondStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePortabilitySubsetPropertiesKHR>(const decode::Decoded_VkPhysicalDevicePortabilitySubsetPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePortabilitySubsetPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minVertexInputBindingStrideAlignment", ToString(obj.minVertexInputBindingStrideAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderClockFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceShaderClockFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderClockFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupClock", ToString(obj.shaderSubgroupClock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDeviceClock", ToString(obj.shaderDeviceClock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceQueueGlobalPriorityCreateInfoKHR>(const decode::Decoded_VkDeviceQueueGlobalPriorityCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceQueueGlobalPriorityCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriority", '"' + ToString(obj.globalPriority, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriorityQuery", ToString(obj.globalPriorityQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyGlobalPriorityPropertiesKHR>(const decode::Decoded_VkQueueFamilyGlobalPriorityPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyGlobalPriorityPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorityCount", ToString(obj.priorityCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorities", ArrayToString(VK_MAX_GLOBAL_PRIORITY_SIZE_KHR, obj.priorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFragmentShadingRateAttachmentInfoKHR>(const decode::Decoded_VkFragmentShadingRateAttachmentInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFragmentShadingRateAttachmentInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentShadingRateAttachment", ((decoded_obj.pFragmentShadingRateAttachment && decoded_obj.pFragmentShadingRateAttachment->GetMetaStructPointer()) ? ToString(*decoded_obj.pFragmentShadingRateAttachment->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", ToString(*(decoded_obj.shadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineFragmentShadingRateStateCreateInfoKHR>(const decode::Decoded_VkPipelineFragmentShadingRateStateCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineFragmentShadingRateStateCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", ToString(*(decoded_obj.fragmentSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinerOps", ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineFragmentShadingRate", ToString(obj.pipelineFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRate", ToString(obj.primitiveFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFragmentShadingRate", ToString(obj.attachmentFragmentShadingRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRatePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentShadingRateAttachmentTexelSize", ToString(*(decoded_obj.minFragmentShadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSize", ToString(*(decoded_obj.maxFragmentShadingRateAttachmentTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSizeAspectRatio", ToString(obj.maxFragmentShadingRateAttachmentTexelSizeAspectRatio, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRateWithMultipleViewports", ToString(obj.primitiveFragmentShadingRateWithMultipleViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layeredShadingRateAttachments", ToString(obj.layeredShadingRateAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateNonTrivialCombinerOps", ToString(obj.fragmentShadingRateNonTrivialCombinerOps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentSize", ToString(*(decoded_obj.maxFragmentSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentSizeAspectRatio", ToString(obj.maxFragmentSizeAspectRatio, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateCoverageSamples", ToString(obj.maxFragmentShadingRateCoverageSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateRasterizationSamples", '"' + ToString(obj.maxFragmentShadingRateRasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fragmentShadingRateWithShaderDepthStencilWrites", ToString(obj.fragmentShadingRateWithShaderDepthStencilWrites, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithSampleMask", ToString(obj.fragmentShadingRateWithSampleMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithShaderSampleMask", ToString(obj.fragmentShadingRateWithShaderSampleMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithConservativeRasterization", ToString(obj.fragmentShadingRateWithConservativeRasterization, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithFragmentShaderInterlock", ToString(obj.fragmentShadingRateWithFragmentShaderInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateWithCustomSampleLocations", ToString(obj.fragmentShadingRateWithCustomSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateStrictMultiplyCombiner", ToString(obj.fragmentShadingRateStrictMultiplyCombiner, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", ToString(*(decoded_obj.fragmentSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceProtectedCapabilitiesKHR>(const decode::Decoded_VkSurfaceProtectedCapabilitiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceProtectedCapabilitiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsProtected", ToString(obj.supportsProtected, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePresentWaitFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePresentWaitFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePresentWaitFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentWait", ToString(obj.presentWait, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineExecutableInfo", ToString(obj.pipelineExecutableInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineInfoKHR>(const decode::Decoded_VkPipelineInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", decode::HandleIdToString(decoded_obj.pipeline));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutablePropertiesKHR>(const decode::Decoded_VkPipelineExecutablePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutablePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stages", ToString(obj.stages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "subgroupSize", ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutableInfoKHR>(const decode::Decoded_VkPipelineExecutableInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutableInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "executableIndex", ToString(obj.executableIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineExecutableInternalRepresentationKHR>(const decode::Decoded_VkPipelineExecutableInternalRepresentationKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineExecutableInternalRepresentationKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "isText", ToString(obj.isText, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", decode::DataPointerDecoderToString(&decoded_obj.pData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineLibraryCreateInfoKHR>(const decode::Decoded_VkPipelineLibraryCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineLibraryCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "libraryCount", ToString(obj.libraryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraries", decode::HandlePointerDecoderArrayToString(decoded_obj.pLibraries.GetLength(), &decoded_obj.pLibraries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentIdKHR>(const decode::Decoded_VkPresentIdKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentIdKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentIds", ArrayToString(obj.swapchainCount, obj.pPresentIds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePresentIdFeaturesKHR>(const decode::Decoded_VkPhysicalDevicePresentIdFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePresentIdFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentId", ToString(obj.presentId, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyCheckpointProperties2NV>(const decode::Decoded_VkQueueFamilyCheckpointProperties2NV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyCheckpointProperties2NV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCheckpointData2NV>(const decode::Decoded_VkCheckpointData2NV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCheckpointData2NV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", ToString(obj.stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCheckpointMarker", decode::DataPointerDecoderToString(&decoded_obj.pCheckpointMarker));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderBarycentric", ToString(obj.fragmentShaderBarycentric, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>(const decode::Decoded_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triStripVertexOrderIndependentOfProvokingVertex", ToString(obj.triStripVertexOrderIndependentOfProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupUniformControlFlow", ToString(obj.shaderSubgroupUniformControlFlow, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout", ToString(obj.workgroupMemoryExplicitLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayoutScalarBlockLayout", ToString(obj.workgroupMemoryExplicitLayoutScalarBlockLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout8BitAccess", ToString(obj.workgroupMemoryExplicitLayout8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout16BitAccess", ToString(obj.workgroupMemoryExplicitLayout16BitAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMaintenance1", ToString(obj.rayTracingMaintenance1, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect2", ToString(obj.rayTracingPipelineTraceRaysIndirect2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTraceRaysIndirectCommand2KHR>(const decode::Decoded_VkTraceRaysIndirectCommand2KHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTraceRaysIndirectCommand2KHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "raygenShaderRecordAddress", ToString(obj.raygenShaderRecordAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "raygenShaderRecordSize", ToString(obj.raygenShaderRecordSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableAddress", ToString(obj.missShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableSize", ToString(obj.missShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableStride", ToString(obj.missShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableAddress", ToString(obj.hitShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableSize", ToString(obj.hitShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableStride", ToString(obj.hitShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableAddress", ToString(obj.callableShaderBindingTableAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableSize", ToString(obj.callableShaderBindingTableSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableStride", ToString(obj.callableShaderBindingTableStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugReportCallbackCreateInfoEXT>(const decode::Decoded_VkDebugReportCallbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugReportCallbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnCallback", decode::DataPointerDecoderToString(decoded_obj.pfnCallback));
            FieldToString(strStrm, false, "pUserData", decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateRasterizationOrderAMD>(const decode::Decoded_VkPipelineRasterizationStateRasterizationOrderAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateRasterizationOrderAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrder", '"' + ToString(obj.rasterizationOrder, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerObjectNameInfoEXT>(const decode::Decoded_VkDebugMarkerObjectNameInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerObjectNameInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", CStrToString(obj.pObjectName));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerObjectTagInfoEXT>(const decode::Decoded_VkDebugMarkerObjectTagInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerObjectTagInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", decode::DataPointerDecoderToString(&decoded_obj.pTag));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugMarkerMarkerInfoEXT>(const decode::Decoded_VkDebugMarkerMarkerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugMarkerMarkerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMarkerName", CStrToString(obj.pMarkerName));
            FieldToString(strStrm, false, "color", ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationImageCreateInfoNV>(const decode::Decoded_VkDedicatedAllocationImageCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationImageCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationBufferCreateInfoNV>(const decode::Decoded_VkDedicatedAllocationBufferCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationBufferCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDedicatedAllocationMemoryAllocateInfoNV>(const decode::Decoded_VkDedicatedAllocationMemoryAllocateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDedicatedAllocationMemoryAllocateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", decode::HandleIdToString(decoded_obj.image));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedback", ToString(obj.transformFeedback, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryStreams", ToString(obj.geometryStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackStreams", ToString(obj.maxTransformFeedbackStreams, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBuffers", ToString(obj.maxTransformFeedbackBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferSize", ToString(obj.maxTransformFeedbackBufferSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackStreamDataSize", ToString(obj.maxTransformFeedbackStreamDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferDataSize", ToString(obj.maxTransformFeedbackBufferDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTransformFeedbackBufferDataStride", ToString(obj.maxTransformFeedbackBufferDataStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackQueries", ToString(obj.transformFeedbackQueries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackStreamsLinesTriangles", ToString(obj.transformFeedbackStreamsLinesTriangles, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackRasterizationStreamSelect", ToString(obj.transformFeedbackRasterizationStreamSelect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackDraw", ToString(obj.transformFeedbackDraw, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationStateStreamCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationStream", ToString(obj.rasterizationStream, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewHandleInfoNVX>(const decode::Decoded_VkImageViewHandleInfoNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewHandleInfoNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", decode::HandleIdToString(decoded_obj.imageView));
            FieldToString(strStrm, false, "descriptorType", '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampler", decode::HandleIdToString(decoded_obj.sampler));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewAddressPropertiesNVX>(const decode::Decoded_VkImageViewAddressPropertiesNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewAddressPropertiesNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTextureLODGatherFormatPropertiesAMD>(const decode::Decoded_VkTextureLODGatherFormatPropertiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTextureLODGatherFormatPropertiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsTextureGatherLODBiasAMD", ToString(obj.supportsTextureGatherLODBiasAMD, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderResourceUsageAMD>(const decode::Decoded_VkShaderResourceUsageAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderResourceUsageAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "numUsedVgprs", ToString(obj.numUsedVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numUsedSgprs", ToString(obj.numUsedSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ldsSizePerLocalWorkGroup", ToString(obj.ldsSizePerLocalWorkGroup, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ldsUsageSizeInBytes", ToString(obj.ldsUsageSizeInBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scratchMemUsageInBytes", ToString(obj.scratchMemUsageInBytes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderStatisticsInfoAMD>(const decode::Decoded_VkShaderStatisticsInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderStatisticsInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shaderStageMask", ToString(obj.shaderStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceUsage", ToString(*(decoded_obj.resourceUsage), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalVgprs", ToString(obj.numPhysicalVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalSgprs", ToString(obj.numPhysicalSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableVgprs", ToString(obj.numAvailableVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableSgprs", ToString(obj.numAvailableSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeWorkGroupSize", ArrayToString(3, obj.computeWorkGroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>(const decode::Decoded_VkStreamDescriptorSurfaceCreateInfoGGP& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStreamDescriptorSurfaceCreateInfoGGP& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamDescriptor", ToString(obj.streamDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cornerSampledImage", ToString(obj.cornerSampledImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalImageFormatPropertiesNV>(const decode::Decoded_VkExternalImageFormatPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalImageFormatPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "imageFormatProperties", ToString(*(decoded_obj.imageFormatProperties), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryFeatures", ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalMemoryImageCreateInfoNV>(const decode::Decoded_VkExternalMemoryImageCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalMemoryImageCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryAllocateInfoNV>(const decode::Decoded_VkExportMemoryAllocateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryAllocateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryWin32HandleInfoNV>(const decode::Decoded_VkImportMemoryWin32HandleInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryWin32HandleInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", ToString(obj.handleType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handle", decode::DataPointerDecoderToString(decoded_obj.handle));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExportMemoryWin32HandleInfoNV>(const decode::Decoded_VkExportMemoryWin32HandleInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExportMemoryWin32HandleInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", ((decoded_obj.pAttributes && decoded_obj.pAttributes->GetMetaStructPointer()) ? ToString(*decoded_obj.pAttributes->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV>(const decode::Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWin32KeyedMutexAcquireReleaseInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", decode::HandlePointerDecoderArrayToString(decoded_obj.pAcquireSyncs.GetLength(), &decoded_obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeoutMilliseconds", ArrayToString(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", decode::HandlePointerDecoderArrayToString(decoded_obj.pReleaseSyncs.GetLength(), &decoded_obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationFlagsEXT>(const decode::Decoded_VkValidationFlagsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationFlagsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationCheckCount", ToString(obj.disabledValidationCheckCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationChecks", VkEnumArrayToString(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViSurfaceCreateInfoNN>(const decode::Decoded_VkViSurfaceCreateInfoNN& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViSurfaceCreateInfoNN& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", decode::DataPointerDecoderToString(&decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewASTCDecodeModeEXT>(const decode::Decoded_VkImageViewASTCDecodeModeEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewASTCDecodeModeEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeMode", '"' + ToString(obj.decodeMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeModeSharedExponent", ToString(obj.decodeModeSharedExponent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineRobustnessFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePipelineRobustnessFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineRobustnessFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineRobustness", ToString(obj.pipelineRobustness, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineRobustnessPropertiesEXT>(const decode::Decoded_VkPhysicalDevicePipelineRobustnessPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineRobustnessPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "defaultRobustnessStorageBuffers", '"' + ToString(obj.defaultRobustnessStorageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessUniformBuffers", '"' + ToString(obj.defaultRobustnessUniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessVertexInputs", '"' + ToString(obj.defaultRobustnessVertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessImages", '"' + ToString(obj.defaultRobustnessImages, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRobustnessCreateInfoEXT>(const decode::Decoded_VkPipelineRobustnessCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRobustnessCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffers", '"' + ToString(obj.storageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uniformBuffers", '"' + ToString(obj.uniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexInputs", '"' + ToString(obj.vertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "images", '"' + ToString(obj.images, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkConditionalRenderingBeginInfoEXT>(const decode::Decoded_VkConditionalRenderingBeginInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkConditionalRenderingBeginInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRendering", ToString(obj.conditionalRendering, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedConditionalRendering", ToString(obj.inheritedConditionalRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const decode::Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRenderingEnable", ToString(obj.conditionalRenderingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewportWScalingNV>(const decode::Decoded_VkViewportWScalingNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewportWScalingNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "xcoeff", ToString(obj.xcoeff, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycoeff", ToString(obj.ycoeff, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportWScalingStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportWScalingStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportWScalingStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportWScalingEnable", ToString(obj.viewportWScalingEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportWScalings", PointerDecoderArrayToString(*decoded_obj.pViewportWScalings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilities2EXT>(const decode::Decoded_VkSurfaceCapabilities2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilities2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", ToString(*(decoded_obj.currentExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", ToString(*(decoded_obj.minImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", ToString(*(decoded_obj.maxImageExtent), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedSurfaceCounters", ToString(obj.supportedSurfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayPowerInfoEXT>(const decode::Decoded_VkDisplayPowerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayPowerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "powerState", '"' + ToString(obj.powerState, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceEventInfoEXT>(const decode::Decoded_VkDeviceEventInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceEventInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceEvent", '"' + ToString(obj.deviceEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayEventInfoEXT>(const decode::Decoded_VkDisplayEventInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayEventInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayEvent", '"' + ToString(obj.displayEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainCounterCreateInfoEXT>(const decode::Decoded_VkSwapchainCounterCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainCounterCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCounters", ToString(obj.surfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRefreshCycleDurationGOOGLE>(const decode::Decoded_VkRefreshCycleDurationGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRefreshCycleDurationGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "refreshDuration", ToString(obj.refreshDuration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPastPresentationTimingGOOGLE>(const decode::Decoded_VkPastPresentationTimingGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPastPresentationTimingGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "presentID", ToString(obj.presentID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "desiredPresentTime", ToString(obj.desiredPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "actualPresentTime", ToString(obj.actualPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "earliestPresentTime", ToString(obj.earliestPresentTime, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentMargin", ToString(obj.presentMargin, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentTimeGOOGLE>(const decode::Decoded_VkPresentTimeGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentTimeGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "presentID", ToString(obj.presentID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "desiredPresentTime", ToString(obj.desiredPresentTime, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentTimesInfoGOOGLE>(const decode::Decoded_VkPresentTimesInfoGOOGLE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentTimesInfoGOOGLE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimes", PointerDecoderArrayToString(*decoded_obj.pTimes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const decode::Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewPositionAllComponents", ToString(obj.perViewPositionAllComponents, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkViewportSwizzleNV>(const decode::Decoded_VkViewportSwizzleNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkViewportSwizzleNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", '"' + ToString(obj.x, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "y", '"' + ToString(obj.y, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "z", '"' + ToString(obj.z, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "w", '"' + ToString(obj.w, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportSwizzleStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportSwizzleStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportSwizzleStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportSwizzles", PointerDecoderArrayToString(*decoded_obj.pViewportSwizzles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const decode::Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDiscardRectangles", ToString(obj.maxDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT>(const decode::Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineDiscardRectangleStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardRectangleMode", '"' + ToString(obj.discardRectangleMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "discardRectangleCount", ToString(obj.discardRectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDiscardRectangles", PointerDecoderArrayToString(*decoded_obj.pDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveOverestimationSize", ToString(obj.primitiveOverestimationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxExtraPrimitiveOverestimationSize", ToString(obj.maxExtraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSizeGranularity", ToString(obj.extraPrimitiveOverestimationSizeGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveUnderestimation", ToString(obj.primitiveUnderestimation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativePointAndLineRasterization", ToString(obj.conservativePointAndLineRasterization, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "degenerateTrianglesRasterized", ToString(obj.degenerateTrianglesRasterized, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "degenerateLinesRasterized", ToString(obj.degenerateLinesRasterized, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullyCoveredFragmentShaderInputVariable", ToString(obj.fullyCoveredFragmentShaderInputVariable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativeRasterizationPostDepthCoverage", ToString(obj.conservativeRasterizationPostDepthCoverage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativeRasterizationMode", '"' + ToString(obj.conservativeRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSize", ToString(obj.extraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkXYColorEXT>(const decode::Decoded_VkXYColorEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkXYColorEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkHdrMetadataEXT>(const decode::Decoded_VkHdrMetadataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkHdrMetadataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryRed", ToString(*(decoded_obj.displayPrimaryRed), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryGreen", ToString(*(decoded_obj.displayPrimaryGreen), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryBlue", ToString(*(decoded_obj.displayPrimaryBlue), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "whitePoint", ToString(*(decoded_obj.whitePoint), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxLuminance", ToString(obj.maxLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLuminance", ToString(obj.minLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxContentLightLevel", ToString(obj.maxContentLightLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFrameAverageLightLevel", ToString(obj.maxFrameAverageLightLevel, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIOSSurfaceCreateInfoMVK>(const decode::Decoded_VkIOSSurfaceCreateInfoMVK& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIOSSurfaceCreateInfoMVK& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", decode::DataPointerDecoderToString(&decoded_obj.pView));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMacOSSurfaceCreateInfoMVK>(const decode::Decoded_VkMacOSSurfaceCreateInfoMVK& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMacOSSurfaceCreateInfoMVK& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", decode::DataPointerDecoderToString(&decoded_obj.pView));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsLabelEXT>(const decode::Decoded_VkDebugUtilsLabelEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsLabelEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLabelName", CStrToString(obj.pLabelName));
            FieldToString(strStrm, false, "color", ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsObjectNameInfoEXT>(const decode::Decoded_VkDebugUtilsObjectNameInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsObjectNameInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", CStrToString(obj.pObjectName));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsMessengerCallbackDataEXT>(const decode::Decoded_VkDebugUtilsMessengerCallbackDataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsMessengerCallbackDataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessageIdName", CStrToString(obj.pMessageIdName));
            FieldToString(strStrm, false, "messageIdNumber", ToString(obj.messageIdNumber, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessage", CStrToString(obj.pMessage));
            FieldToString(strStrm, false, "queueLabelCount", ToString(obj.queueLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueLabels", PointerDecoderArrayToString(*decoded_obj.pQueueLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cmdBufLabelCount", ToString(obj.cmdBufLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCmdBufLabels", PointerDecoderArrayToString(*decoded_obj.pCmdBufLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectCount", ToString(obj.objectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjects", PointerDecoderArrayToString(*decoded_obj.pObjects, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsMessengerCreateInfoEXT>(const decode::Decoded_VkDebugUtilsMessengerCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsMessengerCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageSeverity", ToString(obj.messageSeverity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageType", ToString(obj.messageType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", decode::DataPointerDecoderToString(decoded_obj.pfnUserCallback));
            FieldToString(strStrm, false, "pUserData", decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDebugUtilsObjectTagInfoEXT>(const decode::Decoded_VkDebugUtilsObjectTagInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDebugUtilsObjectTagInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", decode::DataPointerDecoderToString(&decoded_obj.pTag));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferUsageANDROID>(const decode::Decoded_VkAndroidHardwareBufferUsageANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferUsageANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "androidHardwareBufferUsage", ToString(obj.androidHardwareBufferUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferPropertiesANDROID>(const decode::Decoded_VkAndroidHardwareBufferPropertiesANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferPropertiesANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID>(const decode::Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferFormatPropertiesANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", ToString(*(decoded_obj.samplerYcbcrConversionComponents), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportAndroidHardwareBufferInfoANDROID>(const decode::Decoded_VkImportAndroidHardwareBufferInfoANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportAndroidHardwareBufferInfoANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::DataPointerDecoderToString(decoded_obj.buffer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>(const decode::Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkExternalFormatANDROID>(const decode::Decoded_VkExternalFormatANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkExternalFormatANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAndroidHardwareBufferFormatProperties2ANDROID>(const decode::Decoded_VkAndroidHardwareBufferFormatProperties2ANDROID& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAndroidHardwareBufferFormatProperties2ANDROID& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", ToString(*(decoded_obj.samplerYcbcrConversionComponents), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSampleLocationEXT>(const decode::Decoded_VkSampleLocationEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSampleLocationEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSampleLocationsInfoEXT>(const decode::Decoded_VkSampleLocationsInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSampleLocationsInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsPerPixel", '"' + ToString(obj.sampleLocationsPerPixel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleLocationGridSize", ToString(*(decoded_obj.sampleLocationGridSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsCount", ToString(obj.sampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", PointerDecoderArrayToString(*decoded_obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAttachmentSampleLocationsEXT>(const decode::Decoded_VkAttachmentSampleLocationsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAttachmentSampleLocationsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachmentIndex", ToString(obj.attachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassSampleLocationsEXT>(const decode::Decoded_VkSubpassSampleLocationsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassSampleLocationsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassIndex", ToString(obj.subpassIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSampleLocationsBeginInfoEXT>(const decode::Decoded_VkRenderPassSampleLocationsBeginInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSampleLocationsBeginInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentInitialSampleLocationsCount", ToString(obj.attachmentInitialSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentInitialSampleLocations", PointerDecoderArrayToString(*decoded_obj.pAttachmentInitialSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "postSubpassSampleLocationsCount", ToString(obj.postSubpassSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPostSubpassSampleLocations", PointerDecoderArrayToString(*decoded_obj.pPostSubpassSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineSampleLocationsStateCreateInfoEXT>(const decode::Decoded_VkPipelineSampleLocationsStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineSampleLocationsStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsEnable", ToString(obj.sampleLocationsEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(*(decoded_obj.sampleLocationsInfo), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSampleCounts", ToString(obj.sampleLocationSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", ToString(*(decoded_obj.maxSampleLocationGridSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCoordinateRange", ArrayToString(2, obj.sampleLocationCoordinateRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSubPixelBits", ToString(obj.sampleLocationSubPixelBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variableSampleLocations", ToString(obj.variableSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultisamplePropertiesEXT>(const decode::Decoded_VkMultisamplePropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultisamplePropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", ToString(*(decoded_obj.maxSampleLocationGridSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCoherentOperations", ToString(obj.advancedBlendCoherentOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendMaxColorAttachments", ToString(obj.advancedBlendMaxColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendIndependentBlend", ToString(obj.advancedBlendIndependentBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedSrcColor", ToString(obj.advancedBlendNonPremultipliedSrcColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedDstColor", ToString(obj.advancedBlendNonPremultipliedDstColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCorrelatedOverlap", ToString(obj.advancedBlendCorrelatedOverlap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendAllOperations", ToString(obj.advancedBlendAllOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const decode::Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcPremultiplied", ToString(obj.srcPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstPremultiplied", ToString(obj.dstPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendOverlap", '"' + ToString(obj.blendOverlap, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageToColorStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageToColorStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageToColorStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorEnable", ToString(obj.coverageToColorEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorLocation", ToString(obj.coverageToColorLocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageModulationStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageModulationStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageModulationStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationMode", '"' + ToString(obj.coverageModulationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "coverageModulationTableEnable", ToString(obj.coverageModulationTableEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationTableCount", ToString(obj.coverageModulationTableCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCoverageModulationTable", ArrayToString(obj.coverageModulationTableCount, obj.pCoverageModulationTable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMCount", ToString(obj.shaderSMCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderWarpsPerSM", ToString(obj.shaderWarpsPerSM, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMBuiltins", ToString(obj.shaderSMBuiltins, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesEXT>(const decode::Decoded_VkDrmFormatModifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesListEXT>(const decode::Decoded_VkDrmFormatModifierPropertiesListEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesListEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", PointerDecoderArrayToString(*decoded_obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const decode::Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierListCreateInfoEXT>(const decode::Decoded_VkImageDrmFormatModifierListCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierListCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifiers", ArrayToString(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT>(const decode::Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPlaneLayouts", PointerDecoderArrayToString(*decoded_obj.pPlaneLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageDrmFormatModifierPropertiesEXT>(const decode::Decoded_VkImageDrmFormatModifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageDrmFormatModifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierProperties2EXT>(const decode::Decoded_VkDrmFormatModifierProperties2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierProperties2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrmFormatModifierPropertiesList2EXT>(const decode::Decoded_VkDrmFormatModifierPropertiesList2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrmFormatModifierPropertiesList2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", PointerDecoderArrayToString(*decoded_obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationCacheCreateInfoEXT>(const decode::Decoded_VkValidationCacheCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationCacheCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", decode::DataPointerDecoderToString(&decoded_obj.pInitialData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderModuleValidationCacheCreateInfoEXT>(const decode::Decoded_VkShaderModuleValidationCacheCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderModuleValidationCacheCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "validationCache", decode::HandleIdToString(decoded_obj.validationCache));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShadingRatePaletteNV>(const decode::Decoded_VkShadingRatePaletteNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShadingRatePaletteNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRatePaletteEntryCount", ToString(obj.shadingRatePaletteEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePaletteEntries", VkEnumArrayToString(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImageEnable", ToString(obj.shadingRateImageEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePalettes", PointerDecoderArrayToString(*decoded_obj.pShadingRatePalettes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShadingRateImageFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImage", ToString(obj.shadingRateImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateCoarseSampleOrder", ToString(obj.shadingRateCoarseSampleOrder, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV>(const decode::Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShadingRateImagePropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateTexelSize", ToString(*(decoded_obj.shadingRateTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRatePaletteSize", ToString(obj.shadingRatePaletteSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateMaxCoarseSamples", ToString(obj.shadingRateMaxCoarseSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCoarseSampleLocationNV>(const decode::Decoded_VkCoarseSampleLocationNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCoarseSampleLocationNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pixelX", ToString(obj.pixelX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pixelY", ToString(obj.pixelY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sample", ToString(obj.sample, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCoarseSampleOrderCustomNV>(const decode::Decoded_VkCoarseSampleOrderCustomNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCoarseSampleOrderCustomNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRate", '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleCount", ToString(obj.sampleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCount", ToString(obj.sampleLocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", PointerDecoderArrayToString(*decoded_obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleOrderType", '"' + ToString(obj.sampleOrderType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "customSampleOrderCount", ToString(obj.customSampleOrderCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCustomSampleOrders", PointerDecoderArrayToString(*decoded_obj.pCustomSampleOrders, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingShaderGroupCreateInfoNV>(const decode::Decoded_VkRayTracingShaderGroupCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingShaderGroupCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineCreateInfoNV>(const decode::Decoded_VkRayTracingPipelineCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRecursionDepth", ToString(obj.maxRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryTrianglesNV>(const decode::Decoded_VkGeometryTrianglesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryTrianglesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", decode::HandleIdToString(decoded_obj.vertexData));
            FieldToString(strStrm, false, "vertexOffset", ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", decode::HandleIdToString(decoded_obj.indexData));
            FieldToString(strStrm, false, "indexOffset", ToString(obj.indexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "transformData", decode::HandleIdToString(decoded_obj.transformData));
            FieldToString(strStrm, false, "transformOffset", ToString(obj.transformOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryAABBNV>(const decode::Decoded_VkGeometryAABBNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryAABBNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbData", decode::HandleIdToString(decoded_obj.aabbData));
            FieldToString(strStrm, false, "numAABBs", ToString(obj.numAABBs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryDataNV>(const decode::Decoded_VkGeometryDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "triangles", ToString(*(decoded_obj.triangles), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbs", ToString(*(decoded_obj.aabbs), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeometryNV>(const decode::Decoded_VkGeometryNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeometryNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryType", '"' + ToString(obj.geometryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "geometry", ToString(*(decoded_obj.geometry), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureInfoNV>(const decode::Decoded_VkAccelerationStructureInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryCount", ToString(obj.geometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGeometries", PointerDecoderArrayToString(*decoded_obj.pGeometries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureCreateInfoNV>(const decode::Decoded_VkAccelerationStructureCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compactedSize", ToString(obj.compactedSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "info", ToString(*(decoded_obj.info), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindAccelerationStructureMemoryInfoNV>(const decode::Decoded_VkBindAccelerationStructureMemoryInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindAccelerationStructureMemoryInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", decode::HandleIdToString(decoded_obj.accelerationStructure));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetAccelerationStructureNV>(const decode::Decoded_VkWriteDescriptorSetAccelerationStructureNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetAccelerationStructureNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", decode::HandlePointerDecoderArrayToString(decoded_obj.pAccelerationStructures.GetLength(), &decoded_obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>(const decode::Decoded_VkAccelerationStructureMemoryRequirementsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMemoryRequirementsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "accelerationStructure", decode::HandleIdToString(decoded_obj.accelerationStructure));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPropertiesNV>(const decode::Decoded_VkPhysicalDeviceRayTracingPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleSize", ToString(obj.shaderGroupHandleSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRecursionDepth", ToString(obj.maxRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxShaderGroupStride", ToString(obj.maxShaderGroupStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupBaseAlignment", ToString(obj.shaderGroupBaseAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryCount", ToString(obj.maxGeometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstanceCount", ToString(obj.maxInstanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTriangleCount", ToString(obj.maxTriangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetAccelerationStructures", ToString(obj.maxDescriptorSetAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAabbPositionsKHR>(const decode::Decoded_VkAabbPositionsKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAabbPositionsKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "minX", ToString(obj.minX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minY", ToString(obj.minY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minZ", ToString(obj.minZ, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxX", ToString(obj.maxX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxY", ToString(obj.maxY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxZ", ToString(obj.maxZ, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureInstanceKHR>(const decode::Decoded_VkAccelerationStructureInstanceKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureInstanceKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transform", ToString(*(decoded_obj.transform), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const decode::Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTest", ToString(obj.representativeFragmentTest, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const decode::Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTestEnable", ToString(obj.representativeFragmentTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT>(const decode::Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewType", '"' + ToString(obj.imageViewType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT>(const decode::Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFilterCubicImageViewImageFormatPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubic", ToString(obj.filterCubic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubicMinmax", ToString(obj.filterCubicMinmax, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryHostPointerInfoEXT>(const decode::Decoded_VkImportMemoryHostPointerInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryHostPointerInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pHostPointer", decode::DataPointerDecoderToString(&decoded_obj.pHostPointer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryHostPointerPropertiesEXT>(const decode::Decoded_VkMemoryHostPointerPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryHostPointerPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImportedHostPointerAlignment", ToString(obj.minImportedHostPointerAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCompilerControlCreateInfoAMD>(const decode::Decoded_VkPipelineCompilerControlCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCompilerControlCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compilerControlFlags", ToString(obj.compilerControlFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCalibratedTimestampInfoEXT>(const decode::Decoded_VkCalibratedTimestampInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCalibratedTimestampInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeDomain", '"' + ToString(obj.timeDomain, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCorePropertiesAMD>(const decode::Decoded_VkPhysicalDeviceShaderCorePropertiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCorePropertiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderEngineCount", ToString(obj.shaderEngineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderArraysPerEngineCount", ToString(obj.shaderArraysPerEngineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeUnitsPerShaderArray", ToString(obj.computeUnitsPerShaderArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "simdPerComputeUnit", ToString(obj.simdPerComputeUnit, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wavefrontsPerSimd", ToString(obj.wavefrontsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "wavefrontSize", ToString(obj.wavefrontSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sgprsPerSimd", ToString(obj.sgprsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSgprAllocation", ToString(obj.minSgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSgprAllocation", ToString(obj.maxSgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sgprAllocationGranularity", ToString(obj.sgprAllocationGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vgprsPerSimd", ToString(obj.vgprsPerSimd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minVgprAllocation", ToString(obj.minVgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVgprAllocation", ToString(obj.maxVgprAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vgprAllocationGranularity", ToString(obj.vgprAllocationGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryOverallocationCreateInfoAMD>(const decode::Decoded_VkDeviceMemoryOverallocationCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryOverallocationCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "overallocationBehavior", '"' + ToString(obj.overallocationBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexAttribDivisor", ToString(obj.maxVertexAttribDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDivisorDescriptionEXT>(const decode::Decoded_VkVertexInputBindingDivisorDescriptionEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDivisorDescriptionEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "divisor", ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT>(const decode::Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDivisorCount", ToString(obj.vertexBindingDivisorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDivisors", PointerDecoderArrayToString(*decoded_obj.pVertexBindingDivisors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateDivisor", ToString(obj.vertexAttributeInstanceRateDivisor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateZeroDivisor", ToString(obj.vertexAttributeInstanceRateZeroDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPresentFrameTokenGGP>(const decode::Decoded_VkPresentFrameTokenGGP& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPresentFrameTokenGGP& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "frameToken", ToString(obj.frameToken, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const decode::Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupQuads", ToString(obj.computeDerivativeGroupQuads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupLinear", ToString(obj.computeDerivativeGroupLinear, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesNV>(const decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "taskShader", ToString(obj.taskShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShader", ToString(obj.meshShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesNV>(const decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawMeshTasksCount", ToString(obj.maxDrawMeshTasksCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupInvocations", ToString(obj.maxTaskWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupSize", ArrayToString(3, obj.maxTaskWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskTotalMemorySize", ToString(obj.maxTaskTotalMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskOutputCount", ToString(obj.maxTaskOutputCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupInvocations", ToString(obj.maxMeshWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupSize", ArrayToString(3, obj.maxMeshWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshTotalMemorySize", ToString(obj.maxMeshTotalMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputVertices", ToString(obj.maxMeshOutputVertices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputPrimitives", ToString(obj.maxMeshOutputPrimitives, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshMultiviewViewCount", ToString(obj.maxMeshMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerVertexGranularity", ToString(obj.meshOutputPerVertexGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerPrimitiveGranularity", ToString(obj.meshOutputPerPrimitiveGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawMeshTasksIndirectCommandNV>(const decode::Decoded_VkDrawMeshTasksIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawMeshTasksIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "taskCount", ToString(obj.taskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstTask", ToString(obj.firstTask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const decode::Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFootprint", ToString(obj.imageFootprint, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const decode::Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissorCount", ToString(obj.exclusiveScissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExclusiveScissors", PointerDecoderArrayToString(*decoded_obj.pExclusiveScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV>(const decode::Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissor", ToString(obj.exclusiveScissor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueueFamilyCheckpointPropertiesNV>(const decode::Decoded_VkQueueFamilyCheckpointPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueueFamilyCheckpointPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCheckpointDataNV>(const decode::Decoded_VkCheckpointDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCheckpointDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pCheckpointMarker", decode::DataPointerDecoderToString(&decoded_obj.pCheckpointMarker));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const decode::Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerFunctions2", ToString(obj.shaderIntegerFunctions2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkInitializePerformanceApiInfoINTEL>(const decode::Decoded_VkInitializePerformanceApiInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkInitializePerformanceApiInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUserData", decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkQueryPoolPerformanceQueryCreateInfoINTEL>(const decode::Decoded_VkQueryPoolPerformanceQueryCreateInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCountersSampling", '"' + ToString(obj.performanceCountersSampling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceMarkerInfoINTEL>(const decode::Decoded_VkPerformanceMarkerInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceMarkerInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceStreamMarkerInfoINTEL>(const decode::Decoded_VkPerformanceStreamMarkerInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceStreamMarkerInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceOverrideInfoINTEL>(const decode::Decoded_VkPerformanceOverrideInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceOverrideInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "enable", ToString(obj.enable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameter", ToString(obj.parameter, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPerformanceConfigurationAcquireInfoINTEL>(const decode::Decoded_VkPerformanceConfigurationAcquireInfoINTEL& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPerformanceConfigurationAcquireInfoINTEL& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT>(const decode::Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDomain", ToString(obj.pciDomain, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciBus", ToString(obj.pciBus, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDevice", ToString(obj.pciDevice, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciFunction", ToString(obj.pciFunction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const decode::Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingSupport", ToString(obj.localDimmingSupport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD>(const decode::Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingEnable", ToString(obj.localDimmingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>(const decode::Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImagePipeSurfaceCreateInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagePipeHandle", ToString(obj.imagePipeHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMetalSurfaceCreateInfoEXT>(const decode::Decoded_VkMetalSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMetalSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayer", decode::DataPointerDecoderToString(decoded_obj.pLayer));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMap", ToString(obj.fragmentDensityMap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDynamic", ToString(obj.fragmentDensityMapDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapNonSubsampledImages", ToString(obj.fragmentDensityMapNonSubsampledImages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentDensityTexelSize", ToString(*(decoded_obj.minFragmentDensityTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentDensityTexelSize", ToString(*(decoded_obj.maxFragmentDensityTexelSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityInvocations", ToString(obj.fragmentDensityInvocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT>(const decode::Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassFragmentDensityMapCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapAttachment", ToString(*(decoded_obj.fragmentDensityMapAttachment), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCoreProperties2AMD>(const decode::Decoded_VkPhysicalDeviceShaderCoreProperties2AMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCoreProperties2AMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreFeatures", ToString(obj.shaderCoreFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "activeComputeUnitCount", ToString(obj.activeComputeUnitCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const decode::Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceCoherentMemory", ToString(obj.deviceCoherentMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageInt64Atomics", ToString(obj.shaderImageInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageInt64Atomics", ToString(obj.sparseImageInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapBudget", ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapBudget, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapUsage", ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryPriority", ToString(obj.memoryPriority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryPriorityAllocateInfoEXT>(const decode::Decoded_VkMemoryPriorityAllocateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryPriorityAllocateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priority", ToString(obj.priority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocationImageAliasing", ToString(obj.dedicatedAllocationImageAliasing, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBufferDeviceAddressCreateInfoEXT>(const decode::Decoded_VkBufferDeviceAddressCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBufferDeviceAddressCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkValidationFeaturesEXT>(const decode::Decoded_VkValidationFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkValidationFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledValidationFeatureCount", ToString(obj.enabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledValidationFeatures", VkEnumArrayToString(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationFeatureCount", ToString(obj.disabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationFeatures", VkEnumArrayToString(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCooperativeMatrixPropertiesNV>(const decode::Decoded_VkCooperativeMatrixPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCooperativeMatrixPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "MSize", ToString(obj.MSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "NSize", ToString(obj.NSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "KSize", ToString(obj.KSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "AType", '"' + ToString(obj.AType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "BType", '"' + ToString(obj.BType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "CType", '"' + ToString(obj.CType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "DType", '"' + ToString(obj.DType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "scope", '"' + ToString(obj.scope, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrix", ToString(obj.cooperativeMatrix, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixRobustBufferAccess", ToString(obj.cooperativeMatrixRobustBufferAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const decode::Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixSupportedStages", ToString(obj.cooperativeMatrixSupportedStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const decode::Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineCoverageReductionStateCreateInfoNV>(const decode::Decoded_VkPipelineCoverageReductionStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineCoverageReductionStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkFramebufferMixedSamplesCombinationNV>(const decode::Decoded_VkFramebufferMixedSamplesCombinationNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkFramebufferMixedSamplesCombinationNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthStencilSamples", ToString(obj.depthStencilSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorSamples", ToString(obj.colorSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderSampleInterlock", ToString(obj.fragmentShaderSampleInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderPixelInterlock", ToString(obj.fragmentShaderPixelInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderShadingRateInterlock", ToString(obj.fragmentShaderShadingRateInterlock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcrImageArrays", ToString(obj.ycbcrImageArrays, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProvokingVertexFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceProvokingVertexFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProvokingVertexFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexLast", ToString(obj.provokingVertexLast, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesProvokingVertex", ToString(obj.transformFeedbackPreservesProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceProvokingVertexPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceProvokingVertexPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceProvokingVertexPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexModePerPipeline", ToString(obj.provokingVertexModePerPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesTriangleFanProvokingVertex", ToString(obj.transformFeedbackPreservesTriangleFanProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexMode", '"' + ToString(obj.provokingVertexMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFullScreenExclusiveInfoEXT>(const decode::Decoded_VkSurfaceFullScreenExclusiveInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFullScreenExclusiveInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusive", '"' + ToString(obj.fullScreenExclusive, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const decode::Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusiveSupported", ToString(obj.fullScreenExclusiveSupported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT>(const decode::Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hmonitor", decode::DataPointerDecoderToString(decoded_obj.hmonitor));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkHeadlessSurfaceCreateInfoEXT>(const decode::Decoded_VkHeadlessSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkHeadlessSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rectangularLines", ToString(obj.rectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bresenhamLines", ToString(obj.bresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "smoothLines", ToString(obj.smoothLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledRectangularLines", ToString(obj.stippledRectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledBresenhamLines", ToString(obj.stippledBresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledSmoothLines", ToString(obj.stippledSmoothLines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineSubPixelPrecisionBits", ToString(obj.lineSubPixelPrecisionBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineRasterizationLineStateCreateInfoEXT>(const decode::Decoded_VkPipelineRasterizationLineStateCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineRasterizationLineStateCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineRasterizationMode", '"' + ToString(obj.lineRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stippledLineEnable", ToString(obj.stippledLineEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStippleFactor", ToString(obj.lineStippleFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStipplePattern", ToString(obj.lineStipplePattern, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32Atomics", ToString(obj.shaderBufferFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32AtomicAdd", ToString(obj.shaderBufferFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64Atomics", ToString(obj.shaderBufferFloat64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64AtomicAdd", ToString(obj.shaderBufferFloat64AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32Atomics", ToString(obj.shaderSharedFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32AtomicAdd", ToString(obj.shaderSharedFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64Atomics", ToString(obj.shaderSharedFloat64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64AtomicAdd", ToString(obj.shaderSharedFloat64AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32Atomics", ToString(obj.shaderImageFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32AtomicAdd", ToString(obj.shaderImageFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32Atomics", ToString(obj.sparseImageFloat32Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32AtomicAdd", ToString(obj.sparseImageFloat32AtomicAdd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexTypeUint8", ToString(obj.indexTypeUint8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState", ToString(obj.extendedDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16Atomics", ToString(obj.shaderBufferFloat16Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16AtomicAdd", ToString(obj.shaderBufferFloat16AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat16AtomicMinMax", ToString(obj.shaderBufferFloat16AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat32AtomicMinMax", ToString(obj.shaderBufferFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferFloat64AtomicMinMax", ToString(obj.shaderBufferFloat64AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16Atomics", ToString(obj.shaderSharedFloat16Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16AtomicAdd", ToString(obj.shaderSharedFloat16AtomicAdd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat16AtomicMinMax", ToString(obj.shaderSharedFloat16AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat32AtomicMinMax", ToString(obj.shaderSharedFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedFloat64AtomicMinMax", ToString(obj.shaderSharedFloat64AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageFloat32AtomicMinMax", ToString(obj.shaderImageFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageFloat32AtomicMinMax", ToString(obj.sparseImageFloat32AtomicMinMax, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGraphicsShaderGroupCount", ToString(obj.maxGraphicsShaderGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectSequenceCount", ToString(obj.maxIndirectSequenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsTokenCount", ToString(obj.maxIndirectCommandsTokenCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsStreamCount", ToString(obj.maxIndirectCommandsStreamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsTokenOffset", ToString(obj.maxIndirectCommandsTokenOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxIndirectCommandsStreamStride", ToString(obj.maxIndirectCommandsStreamStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSequencesCountBufferOffsetAlignment", ToString(obj.minSequencesCountBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSequencesIndexBufferOffsetAlignment", ToString(obj.minSequencesIndexBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minIndirectCommandsBufferOffsetAlignment", ToString(obj.minIndirectCommandsBufferOffsetAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceGeneratedCommands", ToString(obj.deviceGeneratedCommands, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsShaderGroupCreateInfoNV>(const decode::Decoded_VkGraphicsShaderGroupCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsShaderGroupCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", ((decoded_obj.pVertexInputState && decoded_obj.pVertexInputState->GetMetaStructPointer()) ? ToString(*decoded_obj.pVertexInputState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", ((decoded_obj.pTessellationState && decoded_obj.pTessellationState->GetMetaStructPointer()) ? ToString(*decoded_obj.pTessellationState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineShaderGroupsCreateInfoNV>(const decode::Decoded_VkGraphicsPipelineShaderGroupsCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCount", ToString(obj.pipelineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", decode::HandlePointerDecoderArrayToString(decoded_obj.pPipelines.GetLength(), &decoded_obj.pPipelines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindShaderGroupIndirectCommandNV>(const decode::Decoded_VkBindShaderGroupIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindShaderGroupIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "groupIndex", ToString(obj.groupIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindIndexBufferIndirectCommandNV>(const decode::Decoded_VkBindIndexBufferIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindIndexBufferIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkBindVertexBufferIndirectCommandNV>(const decode::Decoded_VkBindVertexBufferIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkBindVertexBufferIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSetStateFlagsIndirectCommandNV>(const decode::Decoded_VkSetStateFlagsIndirectCommandNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSetStateFlagsIndirectCommandNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "data", ToString(obj.data, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsStreamNV>(const decode::Decoded_VkIndirectCommandsStreamNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsStreamNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsLayoutTokenNV>(const decode::Decoded_VkIndirectCommandsLayoutTokenNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsLayoutTokenNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tokenType", '"' + ToString(obj.tokenType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stream", ToString(obj.stream, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingUnit", ToString(obj.vertexBindingUnit, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexDynamicStride", ToString(obj.vertexDynamicStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantPipelineLayout", decode::HandleIdToString(decoded_obj.pushconstantPipelineLayout));
            FieldToString(strStrm, false, "pushconstantShaderStageFlags", ToString(obj.pushconstantShaderStageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantOffset", ToString(obj.pushconstantOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantSize", ToString(obj.pushconstantSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indirectStateFlags", ToString(obj.indirectStateFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexTypeCount", ToString(obj.indexTypeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndexTypes", VkEnumArrayToString(obj.indexTypeCount, obj.pIndexTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndexTypeValues", ArrayToString(obj.indexTypeCount, obj.pIndexTypeValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkIndirectCommandsLayoutCreateInfoNV>(const decode::Decoded_VkIndirectCommandsLayoutCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkIndirectCommandsLayoutCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tokenCount", ToString(obj.tokenCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTokens", PointerDecoderArrayToString(*decoded_obj.pTokens, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamCount", ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreamStrides", ArrayToString(obj.streamCount, obj.pStreamStrides, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeneratedCommandsInfoNV>(const decode::Decoded_VkGeneratedCommandsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeneratedCommandsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "indirectCommandsLayout", decode::HandleIdToString(decoded_obj.indirectCommandsLayout));
            FieldToString(strStrm, false, "streamCount", ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreams", PointerDecoderArrayToString(*decoded_obj.pStreams, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCount", ToString(obj.sequencesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessBuffer", decode::HandleIdToString(decoded_obj.preprocessBuffer));
            FieldToString(strStrm, false, "preprocessOffset", ToString(obj.preprocessOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessSize", ToString(obj.preprocessSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCountBuffer", decode::HandleIdToString(decoded_obj.sequencesCountBuffer));
            FieldToString(strStrm, false, "sequencesCountOffset", ToString(obj.sequencesCountOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesIndexBuffer", decode::HandleIdToString(decoded_obj.sequencesIndexBuffer));
            FieldToString(strStrm, false, "sequencesIndexOffset", ToString(obj.sequencesIndexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV>(const decode::Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGeneratedCommandsMemoryRequirementsInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", decode::HandleIdToString(decoded_obj.pipeline));
            FieldToString(strStrm, false, "indirectCommandsLayout", decode::HandleIdToString(decoded_obj.indirectCommandsLayout));
            FieldToString(strStrm, false, "maxSequencesCount", ToString(obj.maxSequencesCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInheritedViewportScissorFeaturesNV>(const decode::Decoded_VkPhysicalDeviceInheritedViewportScissorFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInheritedViewportScissorFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedViewportScissor2D", ToString(obj.inheritedViewportScissor2D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceViewportScissorInfoNV>(const decode::Decoded_VkCommandBufferInheritanceViewportScissorInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceViewportScissorInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportScissor2D", ToString(obj.viewportScissor2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportDepthCount", ToString(obj.viewportDepthCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportDepths", ((decoded_obj.pViewportDepths && decoded_obj.pViewportDepths->GetMetaStructPointer()) ? ToString(*decoded_obj.pViewportDepths->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "texelBufferAlignment", ToString(obj.texelBufferAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassTransformBeginInfoQCOM>(const decode::Decoded_VkRenderPassTransformBeginInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassTransformBeginInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const decode::Decoded_VkCommandBufferInheritanceRenderPassTransformInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "renderArea", ToString(*(decoded_obj.renderArea), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMemoryReport", ToString(obj.deviceMemoryReport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceMemoryReportCallbackDataEXT>(const decode::Decoded_VkDeviceMemoryReportCallbackDataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceMemoryReportCallbackDataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "memoryObjectId", ToString(obj.memoryObjectId, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapIndex", ToString(obj.heapIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceDeviceMemoryReportCreateInfoEXT>(const decode::Decoded_VkDeviceDeviceMemoryReportCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceDeviceMemoryReportCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", decode::DataPointerDecoderToString(decoded_obj.pfnUserCallback));
            FieldToString(strStrm, false, "pUserData", decode::DataPointerDecoderToString(&decoded_obj.pUserData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRobustness2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceRobustness2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRobustness2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccess2", ToString(obj.robustBufferAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess2", ToString(obj.robustImageAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nullDescriptor", ToString(obj.nullDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRobustness2PropertiesEXT>(const decode::Decoded_VkPhysicalDeviceRobustness2PropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRobustness2PropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustStorageBufferAccessSizeAlignment", ToString(obj.robustStorageBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustUniformBufferAccessSizeAlignment", ToString(obj.robustUniformBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerCustomBorderColorCreateInfoEXT>(const decode::Decoded_VkSamplerCustomBorderColorCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerCustomBorderColorCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColor", ToString(*(decoded_obj.customBorderColor), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceCustomBorderColorPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCustomBorderColorSamplers", ToString(obj.maxCustomBorderColorSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceCustomBorderColorFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColors", ToString(obj.customBorderColors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColorWithoutFormat", ToString(obj.customBorderColorWithoutFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePresentBarrierFeaturesNV>(const decode::Decoded_VkPhysicalDevicePresentBarrierFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePresentBarrierFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrier", ToString(obj.presentBarrier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSurfaceCapabilitiesPresentBarrierNV>(const decode::Decoded_VkSurfaceCapabilitiesPresentBarrierNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSurfaceCapabilitiesPresentBarrierNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrierSupported", ToString(obj.presentBarrierSupported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSwapchainPresentBarrierCreateInfoNV>(const decode::Decoded_VkSwapchainPresentBarrierCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSwapchainPresentBarrierCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrierEnable", ToString(obj.presentBarrierEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const decode::Decoded_VkPhysicalDeviceDiagnosticsConfigFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "diagnosticsConfig", ToString(obj.diagnosticsConfig, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceDiagnosticsConfigCreateInfoNV>(const decode::Decoded_VkDeviceDiagnosticsConfigCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceDiagnosticsConfigCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibrary", ToString(obj.graphicsPipelineLibrary, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryFastLinking", ToString(obj.graphicsPipelineLibraryFastLinking, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryIndependentInterpolationDecoration", ToString(obj.graphicsPipelineLibraryIndependentInterpolationDecoration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkGraphicsPipelineLibraryCreateInfoEXT>(const decode::Decoded_VkGraphicsPipelineLibraryCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkGraphicsPipelineLibraryCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>(const decode::Decoded_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderEarlyAndLateFragmentTests", ToString(obj.shaderEarlyAndLateFragmentTests, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateEnums", ToString(obj.fragmentShadingRateEnums, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supersampleFragmentShadingRates", ToString(obj.supersampleFragmentShadingRates, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "noInvocationFragmentShadingRates", ToString(obj.noInvocationFragmentShadingRates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>(const decode::Decoded_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateInvocationCount", '"' + ToString(obj.maxFragmentShadingRateInvocationCount, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineFragmentShadingRateEnumStateCreateInfoNV>(const decode::Decoded_VkPipelineFragmentShadingRateEnumStateCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineFragmentShadingRateEnumStateCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateType", '"' + ToString(obj.shadingRateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRate", '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "combinerOps", ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryMotionTrianglesDataNV>(const decode::Decoded_VkAccelerationStructureGeometryMotionTrianglesDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryMotionTrianglesDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", ToString(*(decoded_obj.vertexData), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMotionInfoNV>(const decode::Decoded_VkAccelerationStructureMotionInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMotionInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstances", ToString(obj.maxInstances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureMatrixMotionInstanceNV>(const decode::Decoded_VkAccelerationStructureMatrixMotionInstanceNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureMatrixMotionInstanceNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", ToString(*(decoded_obj.transformT0), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", ToString(*(decoded_obj.transformT1), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSRTDataNV>(const decode::Decoded_VkSRTDataNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSRTDataNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sx", ToString(obj.sx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "a", ToString(obj.a, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "b", ToString(obj.b, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvx", ToString(obj.pvx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sy", ToString(obj.sy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "c", ToString(obj.c, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvy", ToString(obj.pvy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sz", ToString(obj.sz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pvz", ToString(obj.pvz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qx", ToString(obj.qx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qy", ToString(obj.qy, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qz", ToString(obj.qz, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "qw", ToString(obj.qw, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tx", ToString(obj.tx, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ty", ToString(obj.ty, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tz", ToString(obj.tz, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureSRTMotionInstanceNV>(const decode::Decoded_VkAccelerationStructureSRTMotionInstanceNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureSRTMotionInstanceNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", ToString(*(decoded_obj.transformT0), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", ToString(*(decoded_obj.transformT1), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>(const decode::Decoded_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlur", ToString(obj.rayTracingMotionBlur, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlurPipelineTraceRaysIndirect", ToString(obj.rayTracingMotionBlurPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcr2plane444Formats", ToString(obj.ycbcr2plane444Formats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDeferred", ToString(obj.fragmentDensityMapDeferred, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledLoads", ToString(obj.subsampledLoads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledCoarseReconstructionEarlyAccess", ToString(obj.subsampledCoarseReconstructionEarlyAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubsampledArrayLayers", ToString(obj.maxSubsampledArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSubsampledSamplers", ToString(obj.maxDescriptorSetSubsampledSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyCommandTransformInfoQCOM>(const decode::Decoded_VkCopyCommandTransformInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyCommandTransformInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageCompressionControlFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageCompressionControlFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageCompressionControlFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControl", ToString(obj.imageCompressionControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCompressionControlEXT>(const decode::Decoded_VkImageCompressionControlEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCompressionControlEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compressionControlPlaneCount", ToString(obj.compressionControlPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFixedRateFlags", ArrayToString(obj.compressionControlPlaneCount, obj.pFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubresourceLayout2EXT>(const decode::Decoded_VkSubresourceLayout2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubresourceLayout2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceLayout", ToString(*(decoded_obj.subresourceLayout), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageSubresource2EXT>(const decode::Decoded_VkImageSubresource2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageSubresource2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(*(decoded_obj.imageSubresource), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageCompressionPropertiesEXT>(const decode::Decoded_VkImageCompressionPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageCompressionPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFlags", ToString(obj.imageCompressionFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFixedRateFlags", ToString(obj.imageCompressionFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFeedbackLoopLayout", ToString(obj.attachmentFeedbackLoopLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevice4444FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDevice4444FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevice4444FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4R4G4B4", ToString(obj.formatA4R4G4B4, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4B4G4R4", ToString(obj.formatA4B4G4R4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFaultFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceFaultFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFaultFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceFault", ToString(obj.deviceFault, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceFaultVendorBinary", ToString(obj.deviceFaultVendorBinary, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceFaultCountsEXT>(const decode::Decoded_VkDeviceFaultCountsEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceFaultCountsEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "addressInfoCount", ToString(obj.addressInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorInfoCount", ToString(obj.vendorInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorBinarySize", ToString(obj.vendorBinarySize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceFaultAddressInfoEXT>(const decode::Decoded_VkDeviceFaultAddressInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceFaultAddressInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "addressType", '"' + ToString(obj.addressType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "reportedAddress", ToString(obj.reportedAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "addressPrecision", ToString(obj.addressPrecision, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceFaultVendorInfoEXT>(const decode::Decoded_VkDeviceFaultVendorInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceFaultVendorInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "vendorFaultCode", ToString(obj.vendorFaultCode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorFaultData", ToString(obj.vendorFaultData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceFaultInfoEXT>(const decode::Decoded_VkDeviceFaultInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceFaultInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "pAddressInfos", ((decoded_obj.pAddressInfos && decoded_obj.pAddressInfos->GetMetaStructPointer()) ? ToString(*decoded_obj.pAddressInfos->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pVendorInfos", ((decoded_obj.pVendorInfos && decoded_obj.pVendorInfos->GetMetaStructPointer()) ? ToString(*decoded_obj.pVendorInfos->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pVendorBinaryData", decode::DataPointerDecoderToString(&decoded_obj.pVendorBinaryData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceFaultVendorBinaryHeaderVersionOneEXT>(const decode::Decoded_VkDeviceFaultVendorBinaryHeaderVersionOneEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceFaultVendorBinaryHeaderVersionOneEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "headerSize", ToString(obj.headerSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "headerVersion", '"' + ToString(obj.headerVersion, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vendorID", ToString(obj.vendorID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceID", ToString(obj.deviceID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverVersion", ToString(obj.driverVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCacheUUID", '"' + UIDToString(VK_UUID_SIZE, obj.pipelineCacheUUID) + '"');
            FieldToString(strStrm, false, "applicationNameOffset", ToString(obj.applicationNameOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "applicationVersion", ToString(obj.applicationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "engineNameOffset", ToString(obj.engineNameOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderColorAttachmentAccess", ToString(obj.rasterizationOrderColorAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderDepthAttachmentAccess", ToString(obj.rasterizationOrderDepthAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderStencilAttachmentAccess", ToString(obj.rasterizationOrderStencilAttachmentAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatRgba10x6WithoutYCbCrSampler", ToString(obj.formatRgba10x6WithoutYCbCrSampler, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDirectFBSurfaceCreateInfoEXT>(const decode::Decoded_VkDirectFBSurfaceCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDirectFBSurfaceCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dfb", decode::DataPointerDecoderToString(decoded_obj.dfb));
            FieldToString(strStrm, false, "surface", decode::DataPointerDecoderToString(decoded_obj.surface));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorType", ToString(obj.mutableDescriptorType, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMutableDescriptorTypeListEXT>(const decode::Decoded_VkMutableDescriptorTypeListEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMutableDescriptorTypeListEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "descriptorTypeCount", ToString(obj.descriptorTypeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorTypes", VkEnumArrayToString(obj.descriptorTypeCount, obj.pDescriptorTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMutableDescriptorTypeCreateInfoEXT>(const decode::Decoded_VkMutableDescriptorTypeCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMutableDescriptorTypeCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorTypeListCount", ToString(obj.mutableDescriptorTypeListCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMutableDescriptorTypeLists", PointerDecoderArrayToString(*decoded_obj.pMutableDescriptorTypeLists, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexInputDynamicState", ToString(obj.vertexInputDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputBindingDescription2EXT>(const decode::Decoded_VkVertexInputBindingDescription2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputBindingDescription2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "divisor", ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkVertexInputAttributeDescription2EXT>(const decode::Decoded_VkVertexInputAttributeDescription2EXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkVertexInputAttributeDescription2EXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "location", ToString(obj.location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDrmPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceDrmPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDrmPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasPrimary", ToString(obj.hasPrimary, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasRender", ToString(obj.hasRender, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMajor", ToString(obj.primaryMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMinor", ToString(obj.primaryMinor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMajor", ToString(obj.renderMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMinor", ToString(obj.renderMinor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAddressBindingReportFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceAddressBindingReportFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAddressBindingReportFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reportAddressBinding", ToString(obj.reportAddressBinding, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDeviceAddressBindingCallbackDataEXT>(const decode::Decoded_VkDeviceAddressBindingCallbackDataEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDeviceAddressBindingCallbackDataEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseAddress", ToString(obj.baseAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingType", '"' + ToString(obj.bindingType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthClipControlFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDepthClipControlFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthClipControlFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipControl", ToString(obj.depthClipControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineViewportDepthClipControlCreateInfoEXT>(const decode::Decoded_VkPipelineViewportDepthClipControlCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineViewportDepthClipControlCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "negativeOneToOne", ToString(obj.negativeOneToOne, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyListRestart", ToString(obj.primitiveTopologyListRestart, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyPatchListRestart", ToString(obj.primitiveTopologyPatchListRestart, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportMemoryZirconHandleInfoFUCHSIA>(const decode::Decoded_VkImportMemoryZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportMemoryZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", ToString(obj.handle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryZirconHandlePropertiesFUCHSIA>(const decode::Decoded_VkMemoryZirconHandlePropertiesFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryZirconHandlePropertiesFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetZirconHandleInfoFUCHSIA>(const decode::Decoded_VkMemoryGetZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA>(const decode::Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImportSemaphoreZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "zirconHandle", ToString(obj.zirconHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA>(const decode::Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSemaphoreGetZirconHandleInfoFUCHSIA& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", decode::HandleIdToString(decoded_obj.semaphore));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>(const decode::Decoded_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "invocationMask", ToString(obj.invocationMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMemoryGetRemoteAddressInfoNV>(const decode::Decoded_VkMemoryGetRemoteAddressInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMemoryGetRemoteAddressInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", decode::HandleIdToString(decoded_obj.memory));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>(const decode::Decoded_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryRDMA", ToString(obj.externalMemoryRDMA, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampled", ToString(obj.multisampledRenderToSingleSampled, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassResolvePerformanceQueryEXT>(const decode::Decoded_VkSubpassResolvePerformanceQueryEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassResolvePerformanceQueryEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimal", ToString(obj.optimal, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultisampledRenderToSingleSampledInfoEXT>(const decode::Decoded_VkMultisampledRenderToSingleSampledInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultisampledRenderToSingleSampledInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampledEnable", ToString(obj.multisampledRenderToSingleSampledEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2", ToString(obj.extendedDynamicState2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2LogicOp", ToString(obj.extendedDynamicState2LogicOp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2PatchControlPoints", ToString(obj.extendedDynamicState2PatchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkScreenSurfaceCreateInfoQNX>(const decode::Decoded_VkScreenSurfaceCreateInfoQNX& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkScreenSurfaceCreateInfoQNX& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "context", decode::DataPointerDecoderToString(decoded_obj.context));
            FieldToString(strStrm, false, "window", decode::DataPointerDecoderToString(decoded_obj.window));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceColorWriteEnableFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceColorWriteEnableFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceColorWriteEnableFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorWriteEnable", ToString(obj.colorWriteEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineColorWriteCreateInfoEXT>(const decode::Decoded_VkPipelineColorWriteCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineColorWriteCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorWriteEnables", ArrayToString(obj.attachmentCount, obj.pColorWriteEnables, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQuery", ToString(obj.primitivesGeneratedQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithRasterizerDiscard", ToString(obj.primitivesGeneratedQueryWithRasterizerDiscard, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithNonZeroStreams", ToString(obj.primitivesGeneratedQueryWithNonZeroStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageViewMinLodFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageViewMinLodFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageViewMinLodFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewMinLodCreateInfoEXT>(const decode::Decoded_VkImageViewMinLodCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewMinLodCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiDrawFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMultiDrawFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiDrawFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiDraw", ToString(obj.multiDraw, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMultiDrawPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceMultiDrawPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMultiDrawPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiDrawCount", ToString(obj.maxMultiDrawCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiDrawInfoEXT>(const decode::Decoded_VkMultiDrawInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiDrawInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstVertex", ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMultiDrawIndexedInfoEXT>(const decode::Decoded_VkMultiDrawIndexedInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMultiDrawIndexedInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstIndex", ToString(obj.firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image2DViewOf3D", ToString(obj.image2DViewOf3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampler2DViewOf3D", ToString(obj.sampler2DViewOf3D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapUsageEXT>(const decode::Decoded_VkMicromapUsageEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapUsageEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "count", ToString(obj.count, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subdivisionLevel", ToString(obj.subdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", ToString(obj.format, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapBuildInfoEXT>(const decode::Decoded_VkMicromapBuildInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapBuildInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstMicromap", decode::HandleIdToString(decoded_obj.dstMicromap));
            FieldToString(strStrm, false, "usageCountsCount", ToString(obj.usageCountsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUsageCounts", PointerDecoderArrayToString(*decoded_obj.pUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppUsageCounts", PointerDecoderArrayPointerToString(*decoded_obj.ppUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(*(decoded_obj.data), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scratchData", ToString(*(decoded_obj.scratchData), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleArray", ToString(*(decoded_obj.triangleArray), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleArrayStride", ToString(obj.triangleArrayStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapCreateInfoEXT>(const decode::Decoded_VkMicromapCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "createFlags", ToString(obj.createFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceOpacityMicromapFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceOpacityMicromapFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceOpacityMicromapFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromap", ToString(obj.micromap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapCaptureReplay", ToString(obj.micromapCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapHostCommands", ToString(obj.micromapHostCommands, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceOpacityMicromapPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceOpacityMicromapPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceOpacityMicromapPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxOpacity2StateSubdivisionLevel", ToString(obj.maxOpacity2StateSubdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxOpacity4StateSubdivisionLevel", ToString(obj.maxOpacity4StateSubdivisionLevel, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapVersionInfoEXT>(const decode::Decoded_VkMicromapVersionInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapVersionInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVersionData", ArrayToString(2*VK_UUID_SIZE, obj.pVersionData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyMicromapToMemoryInfoEXT>(const decode::Decoded_VkCopyMicromapToMemoryInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyMicromapToMemoryInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", ToString(*(decoded_obj.dst), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyMemoryToMicromapInfoEXT>(const decode::Decoded_VkCopyMemoryToMicromapInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyMemoryToMicromapInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", ToString(*(decoded_obj.src), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyMicromapInfoEXT>(const decode::Decoded_VkCopyMicromapInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyMicromapInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapBuildSizesInfoEXT>(const decode::Decoded_VkMicromapBuildSizesInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapBuildSizesInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapSize", ToString(obj.micromapSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buildScratchSize", ToString(obj.buildScratchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardable", ToString(obj.discardable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureTrianglesOpacityMicromapEXT>(const decode::Decoded_VkAccelerationStructureTrianglesOpacityMicromapEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureTrianglesOpacityMicromapEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexBuffer", ToString(*(decoded_obj.indexBuffer), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexStride", ToString(obj.indexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseTriangle", ToString(obj.baseTriangle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usageCountsCount", ToString(obj.usageCountsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUsageCounts", PointerDecoderArrayToString(*decoded_obj.pUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppUsageCounts", PointerDecoderArrayPointerToString(*decoded_obj.ppUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromap", decode::HandleIdToString(decoded_obj.micromap));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkMicromapTriangleEXT>(const decode::Decoded_VkMicromapTriangleEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkMicromapTriangleEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "dataOffset", ToString(obj.dataOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subdivisionLevel", ToString(obj.subdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", ToString(obj.format, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzle", ToString(obj.borderColorSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzleFromImage", ToString(obj.borderColorSwizzleFromImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSamplerBorderColorComponentMappingCreateInfoEXT>(const decode::Decoded_VkSamplerBorderColorComponentMappingCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSamplerBorderColorComponentMappingCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "components", ToString(*(decoded_obj.components), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srgb", ToString(obj.srgb, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pageableDeviceLocalMemory", ToString(obj.pageableDeviceLocalMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>(const decode::Decoded_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetHostMapping", ToString(obj.descriptorSetHostMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetBindingReferenceVALVE>(const decode::Decoded_VkDescriptorSetBindingReferenceVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetBindingReferenceVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetLayout", decode::HandleIdToString(decoded_obj.descriptorSetLayout));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE>(const decode::Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDescriptorSetLayoutHostMappingInfoVALVE& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorOffset", ToString(obj.descriptorOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSize", ToString(obj.descriptorSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClampZeroOne", ToString(obj.depthClampZeroOne, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nonSeamlessCubeMap", ToString(obj.nonSeamlessCubeMap, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapOffset", ToString(obj.fragmentDensityMapOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM>(const decode::Decoded_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetGranularity", ToString(*(decoded_obj.fragmentDensityOffsetGranularity), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkSubpassFragmentDensityMapOffsetEndInfoQCOM>(const decode::Decoded_VkSubpassFragmentDensityMapOffsetEndInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkSubpassFragmentDensityMapOffsetEndInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetCount", ToString(obj.fragmentDensityOffsetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentDensityOffsets", PointerDecoderArrayToString(*decoded_obj.pFragmentDensityOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLinearColorAttachmentFeaturesNV>(const decode::Decoded_VkPhysicalDeviceLinearColorAttachmentFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLinearColorAttachmentFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearColorAttachment", ToString(obj.linearColorAttachment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControlSwapchain", ToString(obj.imageCompressionControlSwapchain, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkImageViewSampleWeightCreateInfoQCOM>(const decode::Decoded_VkImageViewSampleWeightCreateInfoQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkImageViewSampleWeightCreateInfoQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCenter", ToString(*(decoded_obj.filterCenter), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterSize", ToString(*(decoded_obj.filterSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhases", ToString(obj.numPhases, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageProcessingFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceImageProcessingFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageProcessingFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureSampleWeighted", ToString(obj.textureSampleWeighted, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBoxFilter", ToString(obj.textureBoxFilter, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBlockMatch", ToString(obj.textureBlockMatch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceImageProcessingPropertiesQCOM>(const decode::Decoded_VkPhysicalDeviceImageProcessingPropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceImageProcessingPropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterPhases", ToString(obj.maxWeightFilterPhases, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterDimension", ToString(*(decoded_obj.maxWeightFilterDimension), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBlockMatchRegion", ToString(*(decoded_obj.maxBlockMatchRegion), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBoxFilterBlockSize", ToString(*(decoded_obj.maxBoxFilterBlockSize), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3TessellationDomainOrigin", ToString(obj.extendedDynamicState3TessellationDomainOrigin, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3DepthClampEnable", ToString(obj.extendedDynamicState3DepthClampEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3PolygonMode", ToString(obj.extendedDynamicState3PolygonMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3RasterizationSamples", ToString(obj.extendedDynamicState3RasterizationSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3SampleMask", ToString(obj.extendedDynamicState3SampleMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3AlphaToCoverageEnable", ToString(obj.extendedDynamicState3AlphaToCoverageEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3AlphaToOneEnable", ToString(obj.extendedDynamicState3AlphaToOneEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3LogicOpEnable", ToString(obj.extendedDynamicState3LogicOpEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ColorBlendEnable", ToString(obj.extendedDynamicState3ColorBlendEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ColorBlendEquation", ToString(obj.extendedDynamicState3ColorBlendEquation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ColorWriteMask", ToString(obj.extendedDynamicState3ColorWriteMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3RasterizationStream", ToString(obj.extendedDynamicState3RasterizationStream, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ConservativeRasterizationMode", ToString(obj.extendedDynamicState3ConservativeRasterizationMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ExtraPrimitiveOverestimationSize", ToString(obj.extendedDynamicState3ExtraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3DepthClipEnable", ToString(obj.extendedDynamicState3DepthClipEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3SampleLocationsEnable", ToString(obj.extendedDynamicState3SampleLocationsEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ColorBlendAdvanced", ToString(obj.extendedDynamicState3ColorBlendAdvanced, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ProvokingVertexMode", ToString(obj.extendedDynamicState3ProvokingVertexMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3LineRasterizationMode", ToString(obj.extendedDynamicState3LineRasterizationMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3LineStippleEnable", ToString(obj.extendedDynamicState3LineStippleEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3DepthClipNegativeOneToOne", ToString(obj.extendedDynamicState3DepthClipNegativeOneToOne, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ViewportWScalingEnable", ToString(obj.extendedDynamicState3ViewportWScalingEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ViewportSwizzle", ToString(obj.extendedDynamicState3ViewportSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageToColorEnable", ToString(obj.extendedDynamicState3CoverageToColorEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageToColorLocation", ToString(obj.extendedDynamicState3CoverageToColorLocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageModulationMode", ToString(obj.extendedDynamicState3CoverageModulationMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageModulationTableEnable", ToString(obj.extendedDynamicState3CoverageModulationTableEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageModulationTable", ToString(obj.extendedDynamicState3CoverageModulationTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3CoverageReductionMode", ToString(obj.extendedDynamicState3CoverageReductionMode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3RepresentativeFragmentTestEnable", ToString(obj.extendedDynamicState3RepresentativeFragmentTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState3ShadingRateImageEnable", ToString(obj.extendedDynamicState3ShadingRateImageEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT>(const decode::Decoded_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicPrimitiveTopologyUnrestricted", ToString(obj.dynamicPrimitiveTopologyUnrestricted, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkColorBlendEquationEXT>(const decode::Decoded_VkColorBlendEquationEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkColorBlendEquationEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcColorBlendFactor", '"' + ToString(obj.srcColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstColorBlendFactor", '"' + ToString(obj.dstColorBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorBlendOp", '"' + ToString(obj.colorBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcAlphaBlendFactor", '"' + ToString(obj.srcAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstAlphaBlendFactor", '"' + ToString(obj.dstAlphaBlendFactor, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "alphaBlendOp", '"' + ToString(obj.alphaBlendOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkColorBlendAdvancedEXT>(const decode::Decoded_VkColorBlendAdvancedEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkColorBlendAdvancedEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "advancedBlendOp", '"' + ToString(obj.advancedBlendOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcPremultiplied", ToString(obj.srcPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstPremultiplied", ToString(obj.dstPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendOverlap", '"' + ToString(obj.blendOverlap, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clampResults", ToString(obj.clampResults, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassMergeFeedback", ToString(obj.subpassMergeFeedback, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationControlEXT>(const decode::Decoded_VkRenderPassCreationControlEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationControlEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disallowMerging", ToString(obj.disallowMerging, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationFeedbackInfoEXT>(const decode::Decoded_VkRenderPassCreationFeedbackInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationFeedbackInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "postMergeSubpassCount", ToString(obj.postMergeSubpassCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassCreationFeedbackCreateInfoEXT>(const decode::Decoded_VkRenderPassCreationFeedbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassCreationFeedbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPassFeedback", ((decoded_obj.pRenderPassFeedback && decoded_obj.pRenderPassFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pRenderPassFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSubpassFeedbackInfoEXT>(const decode::Decoded_VkRenderPassSubpassFeedbackInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSubpassFeedbackInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassMergeStatus", '"' + ToString(obj.subpassMergeStatus, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "postMergeIndex", ToString(obj.postMergeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRenderPassSubpassFeedbackCreateInfoEXT>(const decode::Decoded_VkRenderPassSubpassFeedbackCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRenderPassSubpassFeedbackCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassFeedback", ((decoded_obj.pSubpassFeedback && decoded_obj.pSubpassFeedback->GetMetaStructPointer()) ? ToString(*decoded_obj.pSubpassFeedback->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifier", ToString(obj.shaderModuleIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifierAlgorithmUUID", '"' + UIDToString(VK_UUID_SIZE, obj.shaderModuleIdentifierAlgorithmUUID) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPipelineShaderStageModuleIdentifierCreateInfoEXT>(const decode::Decoded_VkPipelineShaderStageModuleIdentifierCreateInfoEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPipelineShaderStageModuleIdentifierCreateInfoEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIdentifier", ArrayToString(obj.identifierSize, obj.pIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkShaderModuleIdentifierEXT>(const decode::Decoded_VkShaderModuleIdentifierEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkShaderModuleIdentifierEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifier", ArrayToString(VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT, obj.identifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceOpticalFlowFeaturesNV>(const decode::Decoded_VkPhysicalDeviceOpticalFlowFeaturesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceOpticalFlowFeaturesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opticalFlow", ToString(obj.opticalFlow, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceOpticalFlowPropertiesNV>(const decode::Decoded_VkPhysicalDeviceOpticalFlowPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceOpticalFlowPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedOutputGridSizes", ToString(obj.supportedOutputGridSizes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedHintGridSizes", ToString(obj.supportedHintGridSizes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hintSupported", ToString(obj.hintSupported, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "costSupported", ToString(obj.costSupported, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bidirectionalFlowSupported", ToString(obj.bidirectionalFlowSupported, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalFlowSupported", ToString(obj.globalFlowSupported, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minWidth", ToString(obj.minWidth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minHeight", ToString(obj.minHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWidth", ToString(obj.maxWidth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxHeight", ToString(obj.maxHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxNumRegionsOfInterest", ToString(obj.maxNumRegionsOfInterest, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOpticalFlowImageFormatInfoNV>(const decode::Decoded_VkOpticalFlowImageFormatInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOpticalFlowImageFormatInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOpticalFlowImageFormatPropertiesNV>(const decode::Decoded_VkOpticalFlowImageFormatPropertiesNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOpticalFlowImageFormatPropertiesNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOpticalFlowSessionCreateInfoNV>(const decode::Decoded_VkOpticalFlowSessionCreateInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOpticalFlowSessionCreateInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormat", '"' + ToString(obj.imageFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flowVectorFormat", '"' + ToString(obj.flowVectorFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "costFormat", '"' + ToString(obj.costFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "outputGridSize", ToString(obj.outputGridSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hintGridSize", ToString(obj.hintGridSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceLevel", '"' + ToString(obj.performanceLevel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOpticalFlowSessionCreatePrivateDataInfoNV>(const decode::Decoded_VkOpticalFlowSessionCreatePrivateDataInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOpticalFlowSessionCreatePrivateDataInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "id", ToString(obj.id, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPrivateData", decode::DataPointerDecoderToString(&decoded_obj.pPrivateData));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkOpticalFlowExecuteInfoNV>(const decode::Decoded_VkOpticalFlowExecuteInfoNV& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkOpticalFlowExecuteInfoNV& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*decoded_obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceLegacyDitheringFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceLegacyDitheringFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceLegacyDitheringFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "legacyDithering", ToString(obj.legacyDithering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT>(const decode::Decoded_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineProtectedAccess", ToString(obj.pipelineProtectedAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceTilePropertiesFeaturesQCOM>(const decode::Decoded_VkPhysicalDeviceTilePropertiesFeaturesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceTilePropertiesFeaturesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileProperties", ToString(obj.tileProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTilePropertiesQCOM>(const decode::Decoded_VkTilePropertiesQCOM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTilePropertiesQCOM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileSize", ToString(*(decoded_obj.tileSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apronSize", ToString(*(decoded_obj.apronSize), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "origin", ToString(*(decoded_obj.origin), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAmigoProfilingFeaturesSEC>(const decode::Decoded_VkPhysicalDeviceAmigoProfilingFeaturesSEC& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAmigoProfilingFeaturesSEC& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "amigoProfiling", ToString(obj.amigoProfiling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAmigoProfilingSubmitInfoSEC>(const decode::Decoded_VkAmigoProfilingSubmitInfoSEC& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAmigoProfilingSubmitInfoSEC& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstDrawTimestamp", ToString(obj.firstDrawTimestamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapBufferTimestamp", ToString(obj.swapBufferTimestamp, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM>(const decode::Decoded_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreBuiltins", ToString(obj.shaderCoreBuiltins, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM>(const decode::Decoded_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreCount", ToString(obj.shaderCoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderWarpsPerCore", ToString(obj.shaderWarpsPerCore, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureBuildRangeInfoKHR>(const decode::Decoded_VkAccelerationStructureBuildRangeInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureBuildRangeInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "primitiveCount", ToString(obj.primitiveCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveOffset", ToString(obj.primitiveOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstVertex", ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformOffset", ToString(obj.transformOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryTrianglesDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryTrianglesDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryTrianglesDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexData", ToString(*(decoded_obj.vertexData), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertex", ToString(obj.maxVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", ToString(*(decoded_obj.indexData), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformData", ToString(*(decoded_obj.transformData), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryAabbsDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryAabbsDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryAabbsDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(*(decoded_obj.data), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureGeometryInstancesDataKHR>(const decode::Decoded_VkAccelerationStructureGeometryInstancesDataKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureGeometryInstancesDataKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayOfPointers", ToString(obj.arrayOfPointers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(*(decoded_obj.data), toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureCreateInfoKHR>(const decode::Decoded_VkAccelerationStructureCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "createFlags", ToString(obj.createFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", decode::HandleIdToString(decoded_obj.buffer));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkWriteDescriptorSetAccelerationStructureKHR>(const decode::Decoded_VkWriteDescriptorSetAccelerationStructureKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkWriteDescriptorSetAccelerationStructureKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", decode::HandlePointerDecoderArrayToString(decoded_obj.pAccelerationStructures.GetLength(), &decoded_obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAccelerationStructureFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceAccelerationStructureFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAccelerationStructureFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", ToString(obj.accelerationStructure, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCaptureReplay", ToString(obj.accelerationStructureCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureIndirectBuild", ToString(obj.accelerationStructureIndirectBuild, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureHostCommands", ToString(obj.accelerationStructureHostCommands, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingAccelerationStructureUpdateAfterBind", ToString(obj.descriptorBindingAccelerationStructureUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceAccelerationStructurePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceAccelerationStructurePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceAccelerationStructurePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxGeometryCount", ToString(obj.maxGeometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstanceCount", ToString(obj.maxInstanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPrimitiveCount", ToString(obj.maxPrimitiveCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorAccelerationStructures", ToString(obj.maxPerStageDescriptorAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindAccelerationStructures", ToString(obj.maxPerStageDescriptorUpdateAfterBindAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetAccelerationStructures", ToString(obj.maxDescriptorSetAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindAccelerationStructures", ToString(obj.maxDescriptorSetUpdateAfterBindAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minAccelerationStructureScratchOffsetAlignment", ToString(obj.minAccelerationStructureScratchOffsetAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureDeviceAddressInfoKHR>(const decode::Decoded_VkAccelerationStructureDeviceAddressInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureDeviceAddressInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", decode::HandleIdToString(decoded_obj.accelerationStructure));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>(const decode::Decoded_VkCopyAccelerationStructureToMemoryInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyAccelerationStructureToMemoryInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", ToString(*(decoded_obj.dst), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>(const decode::Decoded_VkCopyMemoryToAccelerationStructureInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyMemoryToAccelerationStructureInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", ToString(*(decoded_obj.src), toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkCopyAccelerationStructureInfoKHR>(const decode::Decoded_VkCopyAccelerationStructureInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkCopyAccelerationStructureInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", decode::HandleIdToString(decoded_obj.src));
            FieldToString(strStrm, false, "dst", decode::HandleIdToString(decoded_obj.dst));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<decode::Decoded_VkAccelerationStructureBuildSizesInfoKHR>(const decode::Decoded_VkAccelerationStructureBuildSizesInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkAccelerationStructureBuildSizesInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureSize", ToString(obj.accelerationStructureSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "updateScratchSize", ToString(obj.updateScratchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buildScratchSize", ToString(obj.buildScratchSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingShaderGroupCreateInfoKHR>(const decode::Decoded_VkRayTracingShaderGroupCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingShaderGroupCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShaderGroupCaptureReplayHandle", decode::DataPointerDecoderToString(&decoded_obj.pShaderGroupCaptureReplayHandle));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR>(const decode::Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineInterfaceCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayPayloadSize", ToString(obj.maxPipelineRayPayloadSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayHitAttributeSize", ToString(obj.maxPipelineRayHitAttributeSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkRayTracingPipelineCreateInfoKHR>(const decode::Decoded_VkRayTracingPipelineCreateInfoKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkRayTracingPipelineCreateInfoKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", PointerDecoderArrayToString(*decoded_obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", PointerDecoderArrayToString(*decoded_obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayRecursionDepth", ToString(obj.maxPipelineRayRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraryInfo", ((decoded_obj.pLibraryInfo && decoded_obj.pLibraryInfo->GetMetaStructPointer()) ? ToString(*decoded_obj.pLibraryInfo->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pLibraryInterface", ((decoded_obj.pLibraryInterface && decoded_obj.pLibraryInterface->GetMetaStructPointer()) ? ToString(*decoded_obj.pLibraryInterface->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", ((decoded_obj.pDynamicState && decoded_obj.pDynamicState->GetMetaStructPointer()) ? ToString(*decoded_obj.pDynamicState->GetMetaStructPointer(), toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", decode::HandleIdToString(decoded_obj.layout));
            FieldToString(strStrm, false, "basePipelineHandle", decode::HandleIdToString(decoded_obj.basePipelineHandle));
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingPipelineFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPipelineFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipeline", ToString(obj.rayTracingPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplay", ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplayMixed", ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplayMixed, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect", ToString(obj.rayTracingPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTraversalPrimitiveCulling", ToString(obj.rayTraversalPrimitiveCulling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayTracingPipelinePropertiesKHR>(const decode::Decoded_VkPhysicalDeviceRayTracingPipelinePropertiesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleSize", ToString(obj.shaderGroupHandleSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayRecursionDepth", ToString(obj.maxRayRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxShaderGroupStride", ToString(obj.maxShaderGroupStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupBaseAlignment", ToString(obj.shaderGroupBaseAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleCaptureReplaySize", ToString(obj.shaderGroupHandleCaptureReplaySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayDispatchInvocationCount", ToString(obj.maxRayDispatchInvocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderGroupHandleAlignment", ToString(obj.shaderGroupHandleAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRayHitAttributeSize", ToString(obj.maxRayHitAttributeSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkStridedDeviceAddressRegionKHR>(const decode::Decoded_VkStridedDeviceAddressRegionKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkStridedDeviceAddressRegionKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkTraceRaysIndirectCommandKHR>(const decode::Decoded_VkTraceRaysIndirectCommandKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkTraceRaysIndirectCommandKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceRayQueryFeaturesKHR>(const decode::Decoded_VkPhysicalDeviceRayQueryFeaturesKHR& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceRayQueryFeaturesKHR& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayQuery", ToString(obj.rayQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesEXT>(const decode::Decoded_VkPhysicalDeviceMeshShaderFeaturesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderFeaturesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "taskShader", ToString(obj.taskShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShader", ToString(obj.meshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewMeshShader", ToString(obj.multiviewMeshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRateMeshShader", ToString(obj.primitiveFragmentShadingRateMeshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShaderQueries", ToString(obj.meshShaderQueries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesEXT>(const decode::Decoded_VkPhysicalDeviceMeshShaderPropertiesEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkPhysicalDeviceMeshShaderPropertiesEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextDecodedToString(decoded_obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupTotalCount", ToString(obj.maxTaskWorkGroupTotalCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupCount", ArrayToString(3, obj.maxTaskWorkGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupInvocations", ToString(obj.maxTaskWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskWorkGroupSize", ArrayToString(3, obj.maxTaskWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskPayloadSize", ToString(obj.maxTaskPayloadSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskSharedMemorySize", ToString(obj.maxTaskSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTaskPayloadAndSharedMemorySize", ToString(obj.maxTaskPayloadAndSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupTotalCount", ToString(obj.maxMeshWorkGroupTotalCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupCount", ArrayToString(3, obj.maxMeshWorkGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupInvocations", ToString(obj.maxMeshWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshWorkGroupSize", ArrayToString(3, obj.maxMeshWorkGroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshSharedMemorySize", ToString(obj.maxMeshSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshPayloadAndSharedMemorySize", ToString(obj.maxMeshPayloadAndSharedMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputMemorySize", ToString(obj.maxMeshOutputMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshPayloadAndOutputMemorySize", ToString(obj.maxMeshPayloadAndOutputMemorySize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputComponents", ToString(obj.maxMeshOutputComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputVertices", ToString(obj.maxMeshOutputVertices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputPrimitives", ToString(obj.maxMeshOutputPrimitives, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshOutputLayers", ToString(obj.maxMeshOutputLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMeshMultiviewViewCount", ToString(obj.maxMeshMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerVertexGranularity", ToString(obj.meshOutputPerVertexGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshOutputPerPrimitiveGranularity", ToString(obj.meshOutputPerPrimitiveGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPreferredTaskWorkGroupInvocations", ToString(obj.maxPreferredTaskWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPreferredMeshWorkGroupInvocations", ToString(obj.maxPreferredMeshWorkGroupInvocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersLocalInvocationVertexOutput", ToString(obj.prefersLocalInvocationVertexOutput, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersLocalInvocationPrimitiveOutput", ToString(obj.prefersLocalInvocationPrimitiveOutput, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersCompactVertexOutput", ToString(obj.prefersCompactVertexOutput, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersCompactPrimitiveOutput", ToString(obj.prefersCompactPrimitiveOutput, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<decode::Decoded_VkDrawMeshTasksIndirectCommandEXT>(const decode::Decoded_VkDrawMeshTasksIndirectCommandEXT& decoded_obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    if(decoded_obj.decoded_value == nullptr)
    {
        return "null";
    }
    const VkDrawMeshTasksIndirectCommandEXT& obj = *decoded_obj.decoded_value;
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "groupCountX", ToString(obj.groupCountX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountY", ToString(obj.groupCountY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountZ", ToString(obj.groupCountZ, toStringFlags, tabCount, tabSize));
        }
    );
}

GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)
