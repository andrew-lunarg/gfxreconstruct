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

#include "util/custom_vulkan_to_string.h"
#include "generated_vulkan_struct_to_string.h"
#include "generated_vulkan_enum_to_string.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
template <> std::string ToString<VkExtent2D>(const VkExtent2D& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExtent3D>(const VkExtent3D& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkOffset2D>(const VkOffset2D& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkOffset3D>(const VkOffset3D& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRect2D>(const VkRect2D& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "z", ToString(obj.z, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "subresourceRange", ToString(obj.subresourceRange, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryBarrier>(const VkMemoryBarrier& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCacheHeaderVersionOne>(const VkPipelineCacheHeaderVersionOne& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pUserData", "\"" + PtrToString(obj.pUserData) + "\"");
            FieldToString(strStrm, false, "pfnAllocation", "\"" + PtrToString(obj.pfnAllocation) + "\"");
            FieldToString(strStrm, false, "pfnReallocation", "\"" + PtrToString(obj.pfnReallocation) + "\"");
            FieldToString(strStrm, false, "pfnFree", "\"" + PtrToString(obj.pfnFree) + "\"");
            FieldToString(strStrm, false, "pfnInternalAllocation", "\"" + PtrToString(obj.pfnInternalAllocation) + "\"");
            FieldToString(strStrm, false, "pfnInternalFree", "\"" + PtrToString(obj.pfnInternalFree) + "\"");
        }
    );
}

template <> std::string ToString<VkApplicationInfo>(const VkApplicationInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationName", CStrToString(obj.pApplicationName));
            FieldToString(strStrm, false, "applicationVersion", ToString(obj.applicationVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEngineName", CStrToString(obj.pEngineName));
            FieldToString(strStrm, false, "engineVersion", ToString(obj.engineVersion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apiVersion", ToString(obj.apiVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFormatProperties>(const VkFormatProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "linearTilingFeatures", ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageFormatProperties>(const VkImageFormatProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "maxExtent", ToString(obj.maxExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMipLevels", ToString(obj.maxMipLevels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxArrayLayers", ToString(obj.maxArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxResourceSize", ToString(obj.maxResourceSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pApplicationInfo", (obj.pApplicationInfo ? ToString(*obj.pApplicationInfo, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "enabledLayerCount", ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryHeap>(const VkMemoryHeap& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryType>(const VkMemoryType& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "propertyFlags", ToString(obj.propertyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapIndex", ToString(obj.heapIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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
            FieldToString(strStrm, false, "limits", ToString(obj.limits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseProperties", ToString(obj.sparseProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queueFlags", ToString(obj.queueFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timestampValidBits", ToString(obj.timestampValidBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageTransferGranularity", ToString(obj.minImageTransferGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCount", ToString(obj.queueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueuePriorities", ArrayToString(obj.queueCount, obj.pQueuePriorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueCreateInfoCount", ToString(obj.queueCreateInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueCreateInfos", ArrayToString(obj.queueCreateInfoCount, obj.pQueueCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledLayerCount", ToString(obj.enabledLayerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledLayerNames", CStrArrayToString(obj.enabledLayerCount, obj.ppEnabledLayerNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledExtensionCount", ToString(obj.enabledExtensionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppEnabledExtensionNames", CStrArrayToString(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledFeatures", (obj.pEnabledFeatures ? ToString(*obj.pEnabledFeatures, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkExtensionProperties>(const VkExtensionProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "extensionName", CStrToString(obj.extensionName));
            FieldToString(strStrm, false, "specVersion", ToString(obj.specVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkLayerProperties>(const VkLayerProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkSubmitInfo>(const VkSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", VkHandleArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitDstStageMask", ArrayToString(obj.waitSemaphoreCount, obj.pWaitDstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBuffers", VkHandleArrayToString(obj.commandBufferCount, obj.pCommandBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", VkHandleArrayToString(obj.signalSemaphoreCount, obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeIndex", ToString(obj.memoryTypeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryRequirements>(const VkMemoryRequirements& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alignment", ToString(obj.alignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "resourceOffset", ToString(obj.resourceOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", ArrayToString(obj.bindCount, obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", ArrayToString(obj.bindCount, obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageSubresource>(const VkImageSubresource& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mipLevel", ToString(obj.mipLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayLayer", ToString(obj.arrayLayer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subresource", ToString(obj.subresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "bindCount", ToString(obj.bindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBinds", ArrayToString(obj.bindCount, obj.pBinds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindSparseInfo>(const VkBindSparseInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", VkHandleArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferBindCount", ToString(obj.bufferBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferBinds", ArrayToString(obj.bufferBindCount, obj.pBufferBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOpaqueBindCount", ToString(obj.imageOpaqueBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageOpaqueBinds", ArrayToString(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageBindCount", ToString(obj.imageBindCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageBinds", ArrayToString(obj.imageBindCount, obj.pImageBinds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphores", VkHandleArrayToString(obj.signalSemaphoreCount, obj.pSignalSemaphores, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageGranularity", ToString(obj.imageGranularity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "formatProperties", ToString(obj.formatProperties, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailFirstLod", ToString(obj.imageMipTailFirstLod, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailSize", ToString(obj.imageMipTailSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailOffset", ToString(obj.imageMipTailOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMipTailStride", ToString(obj.imageMipTailStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkEventCreateInfo>(const VkEventCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(obj.queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryCount", ToString(obj.queryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageCreateInfo>(const VkImageCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageType", '"' + ToString(obj.imageType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkSubresourceLayout>(const VkSubresourceLayout& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkComponentMapping>(const VkComponentMapping& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "viewType", '"' + ToString(obj.viewType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", ToString(obj.components, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceRange", ToString(obj.subresourceRange, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", "\"" + PtrToString(obj.pInitialData) + "\"");
        }
    );
}

template <> std::string ToString<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "constantID", ToString(obj.constantID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSpecializationInfo>(const VkSpecializationInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "mapEntryCount", ToString(obj.mapEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMapEntries", ArrayToString(obj.mapEntryCount, obj.pMapEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", "\"" + PtrToString(obj.pData) + "\"");
        }
    );
}

template <> std::string ToString<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "module", '"' + VkHandleToString(obj.module) + '"');
            FieldToString(strStrm, false, "pName", CStrToString(obj.pName));
            FieldToString(strStrm, false, "pSpecializationInfo", (obj.pSpecializationInfo ? ToString(*obj.pSpecializationInfo, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", ToString(obj.stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + VkHandleToString(obj.layout) + '"');
            FieldToString(strStrm, false, "basePipelineHandle", '"' + VkHandleToString(obj.basePipelineHandle) + '"');
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDescriptionCount", ToString(obj.vertexBindingDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDescriptions", ArrayToString(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeDescriptionCount", ToString(obj.vertexAttributeDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexAttributeDescriptions", ArrayToString(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "topology", '"' + ToString(obj.topology, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "primitiveRestartEnable", ToString(obj.primitiveRestartEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "patchControlPoints", ToString(obj.patchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkViewport>(const VkViewport& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", ArrayToString(obj.viewportCount, obj.pViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scissorCount", ToString(obj.scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", ArrayToString(obj.scissorCount, obj.pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkStencilOpState>(const VkStencilOpState& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthTestEnable", ToString(obj.depthTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthWriteEnable", ToString(obj.depthWriteEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthCompareOp", '"' + ToString(obj.depthCompareOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthBoundsTestEnable", ToString(obj.depthBoundsTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilTestEnable", ToString(obj.stencilTestEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "front", ToString(obj.front, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "back", ToString(obj.back, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDepthBounds", ToString(obj.minDepthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepthBounds", ToString(obj.maxDepthBounds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOpEnable", ToString(obj.logicOpEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "logicOp", '"' + ToString(obj.logicOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", ArrayToString(obj.attachmentCount, obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendConstants", ArrayToString(4, obj.blendConstants, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicStateCount", ToString(obj.dynamicStateCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDynamicStates", VkEnumArrayToString(obj.dynamicStateCount, obj.pDynamicStates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", ArrayToString(obj.stageCount, obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", (obj.pVertexInputState ? ToString(*obj.pVertexInputState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pInputAssemblyState", (obj.pInputAssemblyState ? ToString(*obj.pInputAssemblyState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", (obj.pTessellationState ? ToString(*obj.pTessellationState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pViewportState", (obj.pViewportState ? ToString(*obj.pViewportState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pRasterizationState", (obj.pRasterizationState ? ToString(*obj.pRasterizationState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pMultisampleState", (obj.pMultisampleState ? ToString(*obj.pMultisampleState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDepthStencilState", (obj.pDepthStencilState ? ToString(*obj.pDepthStencilState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pColorBlendState", (obj.pColorBlendState ? ToString(*obj.pColorBlendState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", (obj.pDynamicState ? ToString(*obj.pDynamicState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", '"' + VkHandleToString(obj.layout) + '"');
            FieldToString(strStrm, false, "renderPass", '"' + VkHandleToString(obj.renderPass) + '"');
            FieldToString(strStrm, false, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "basePipelineHandle", '"' + VkHandleToString(obj.basePipelineHandle) + '"');
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPushConstantRange>(const VkPushConstantRange& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "stageFlags", ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "setLayoutCount", ToString(obj.setLayoutCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", VkHandleArrayToString(obj.setLayoutCount, obj.pSetLayouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushConstantRangeCount", ToString(obj.pushConstantRangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPushConstantRanges", ArrayToString(obj.pushConstantRangeCount, obj.pPushConstantRanges, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSet", '"' + VkHandleToString(obj.srcSet) + '"');
            FieldToString(strStrm, false, "srcBinding", ToString(obj.srcBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcArrayElement", ToString(obj.srcArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSet", '"' + VkHandleToString(obj.dstSet) + '"');
            FieldToString(strStrm, false, "dstBinding", ToString(obj.dstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstArrayElement", ToString(obj.dstArrayElement, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "range", ToString(obj.range, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSets", ToString(obj.maxSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "poolSizeCount", ToString(obj.poolSizeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPoolSizes", ArrayToString(obj.poolSizeCount, obj.pPoolSizes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorPool", '"' + VkHandleToString(obj.descriptorPool) + '"');
            FieldToString(strStrm, false, "descriptorSetCount", ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayouts", VkHandleArrayToString(obj.descriptorSetCount, obj.pSetLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorType", '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorCount", ToString(obj.descriptorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageFlags", ToString(obj.stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImmutableSamplers", VkHandleArrayToString(obj.descriptorCount, obj.pImmutableSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindings", ArrayToString(obj.bindingCount, obj.pBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAttachmentDescription>(const VkAttachmentDescription& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkAttachmentReference>(const VkAttachmentReference& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachment", ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", '"' + VkHandleToString(obj.renderPass) + '"');
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", VkHandleArrayToString(obj.attachmentCount, obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layers", ToString(obj.layers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassDescription>(const VkSubpassDescription& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "inputAttachmentCount", ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", ArrayToString(obj.inputAttachmentCount, obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", ArrayToString(obj.colorAttachmentCount, obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", ArrayToString(obj.colorAttachmentCount, obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", (obj.pDepthStencilAttachment ? ToString(*obj.pDepthStencilAttachment, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassDependency>(const VkSubpassDependency& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", ArrayToString(obj.attachmentCount, obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", ArrayToString(obj.subpassCount, obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", ArrayToString(obj.dependencyCount, obj.pDependencies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandPool", '"' + VkHandleToString(obj.commandPool) + '"');
            FieldToString(strStrm, false, "level", '"' + ToString(obj.level, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", '"' + VkHandleToString(obj.renderPass) + '"');
            FieldToString(strStrm, false, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "framebuffer", '"' + VkHandleToString(obj.framebuffer) + '"');
            FieldToString(strStrm, false, "occlusionQueryEnable", ToString(obj.occlusionQueryEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryFlags", ToString(obj.queryFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineStatistics", ToString(obj.pipelineStatistics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInheritanceInfo", (obj.pInheritanceInfo ? ToString(*obj.pInheritanceInfo, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkBufferCopy>(const VkBufferCopy& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkBufferImageCopy>(const VkBufferImageCopy& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferOffset", ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(obj.imageSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", ToString(obj.imageOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", ToString(obj.imageExtent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencil", ToString(obj.stencil, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkClearAttachment>(const VkClearAttachment& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachment", ToString(obj.colorAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValue", ToString(obj.clearValue, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkClearRect>(const VkClearRect& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rect", ToString(obj.rect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseArrayLayer", ToString(obj.baseArrayLayer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageBlit>(const VkImageBlit& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", ArrayToString(2, obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", ArrayToString(2, obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageCopy>(const VkImageCopy& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageResolve>(const VkImageResolve& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderPass", '"' + VkHandleToString(obj.renderPass) + '"');
            FieldToString(strStrm, false, "framebuffer", '"' + VkHandleToString(obj.framebuffer) + '"');
            FieldToString(strStrm, false, "renderArea", ToString(obj.renderArea, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "clearValueCount", ToString(obj.clearValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pClearValues", ArrayToString(obj.clearValueCount, obj.pClearValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSize", ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStages", ToString(obj.supportedStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedOperations", ToString(obj.supportedOperations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "quadOperationsInAllStages", ToString(obj.quadOperationsInAllStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer16BitAccess", ToString(obj.storageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer16BitAccess", ToString(obj.uniformAndStorageBuffer16BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant16", ToString(obj.storagePushConstant16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageInputOutput16", ToString(obj.storageInputOutput16, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "prefersDedicatedAllocation", ToString(obj.prefersDedicatedAllocation, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiresDedicatedAllocation", ToString(obj.requiresDedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
        }
    );
}

template <> std::string ToString<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceRenderAreaCount", ToString(obj.deviceRenderAreaCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceRenderAreas", ArrayToString(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreDeviceIndices", ArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferCount", ToString(obj.commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferDeviceMasks", ArrayToString(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreCount", ToString(obj.signalSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreDeviceIndices", ArrayToString(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceDeviceIndex", ToString(obj.resourceDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryDeviceIndex", ToString(obj.memoryDeviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "splitInstanceBindRegionCount", ToString(obj.splitInstanceBindRegionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSplitInstanceBindRegions", ArrayToString(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDevices", VkHandleArrayToString(obj.physicalDeviceCount, obj.physicalDevices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsetAllocation", ToString(obj.subsetAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalDeviceCount", ToString(obj.physicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDevices", VkHandleArrayToString(obj.physicalDeviceCount, obj.pPhysicalDevices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
        }
    );
}

template <> std::string ToString<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
        }
    );
}

template <> std::string ToString<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
        }
    );
}

template <> std::string ToString<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", ToString(obj.memoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryRequirements", ToString(obj.memoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "features", ToString(obj.features, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", ToString(obj.properties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFormatProperties2>(const VkFormatProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatProperties", ToString(obj.formatProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormatProperties", ToString(obj.imageFormatProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyProperties", ToString(obj.queueFamilyProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryProperties", ToString(obj.memoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "properties", ToString(obj.properties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", '"' + ToString(obj.samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tiling", '"' + ToString(obj.tiling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pointClippingBehavior", '"' + ToString(obj.pointClippingBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpass", ToString(obj.subpass, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentIndex", ToString(obj.inputAttachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aspectReferenceCount", ToString(obj.aspectReferenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAspectReferences", ArrayToString(obj.aspectReferenceCount, obj.pAspectReferences, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "domainOrigin", '"' + ToString(obj.domainOrigin, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewMasks", ArrayToString(obj.subpassCount, obj.pViewMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewOffsets", ArrayToString(obj.dependencyCount, obj.pViewOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlationMaskCount", ToString(obj.correlationMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelationMasks", ArrayToString(obj.correlationMaskCount, obj.pCorrelationMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiview", ToString(obj.multiview, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewGeometryShader", ToString(obj.multiviewGeometryShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewTessellationShader", ToString(obj.multiviewTessellationShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewViewCount", ToString(obj.maxMultiviewViewCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiviewInstanceIndex", ToString(obj.maxMultiviewInstanceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointersStorageBuffer", ToString(obj.variablePointersStorageBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variablePointers", ToString(obj.variablePointers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedMemory", ToString(obj.protectedMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedNoFault", ToString(obj.protectedNoFault, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueIndex", ToString(obj.queueIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "protectedSubmit", ToString(obj.protectedSubmit, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrModel", '"' + ToString(obj.ycbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "ycbcrRange", '"' + ToString(obj.ycbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "components", ToString(obj.components, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "xChromaOffset", '"' + ToString(obj.xChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "yChromaOffset", '"' + ToString(obj.yChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "chromaFilter", '"' + ToString(obj.chromaFilter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "forceExplicitReconstruction", ToString(obj.forceExplicitReconstruction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conversion", '"' + VkHandleToString(obj.conversion) + '"');
        }
    );
}

template <> std::string ToString<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversion", ToString(obj.samplerYcbcrConversion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinedImageSamplerDescriptorCount", ToString(obj.combinedImageSamplerDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorUpdateEntryCount", ToString(obj.descriptorUpdateEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorUpdateEntries", ArrayToString(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "templateType", '"' + ToString(obj.templateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "descriptorSetLayout", '"' + VkHandleToString(obj.descriptorSetLayout) + '"');
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipelineLayout", '"' + VkHandleToString(obj.pipelineLayout) + '"');
            FieldToString(strStrm, false, "set", ToString(obj.set, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "externalMemoryFeatures", ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", ToString(obj.externalMemoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryProperties", ToString(obj.externalMemoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceUUID", '"' + UIDToString(VK_UUID_SIZE, obj.deviceUUID) + '"');
            FieldToString(strStrm, false, "driverUUID", '"' + UIDToString(VK_UUID_SIZE, obj.driverUUID) + '"');
            FieldToString(strStrm, false, "deviceLUID", '"' + UIDToString(VK_LUID_SIZE, obj.deviceLUID) + '"');
            FieldToString(strStrm, false, "deviceNodeMask", ToString(obj.deviceNodeMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceLUIDValid", ToString(obj.deviceLUIDValid, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFenceFeatures", ToString(obj.externalFenceFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalSemaphoreFeatures", ToString(obj.externalSemaphoreFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerSetDescriptors", ToString(obj.maxPerSetDescriptors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMemoryAllocationSize", ToString(obj.maxMemoryAllocationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supported", ToString(obj.supported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDrawParameters", ToString(obj.shaderDrawParameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkConformanceVersion>(const VkConformanceVersion& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", CStrToString(obj.driverName));
            FieldToString(strStrm, false, "driverInfo", CStrToString(obj.driverInfo));
            FieldToString(strStrm, false, "conformanceVersion", ToString(obj.conformanceVersion, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewFormatCount", ToString(obj.viewFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewFormats", VkEnumArrayToString(obj.viewFormatCount, obj.pViewFormats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkAttachmentReference2>(const VkAttachmentReference2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachment", ToString(obj.attachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + ToString(obj.layout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "aspectMask", ToString(obj.aspectMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassDescription2>(const VkSubpassDescription2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputAttachmentCount", ToString(obj.inputAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInputAttachments", ArrayToString(obj.inputAttachmentCount, obj.pInputAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", ArrayToString(obj.colorAttachmentCount, obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResolveAttachments", ArrayToString(obj.colorAttachmentCount, obj.pResolveAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthStencilAttachment", (obj.pDepthStencilAttachment ? ToString(*obj.pDepthStencilAttachment, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "preserveAttachmentCount", ToString(obj.preserveAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPreserveAttachments", ArrayToString(obj.preserveAttachmentCount, obj.pPreserveAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassDependency2>(const VkSubpassDependency2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", ArrayToString(obj.attachmentCount, obj.pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassCount", ToString(obj.subpassCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpasses", ArrayToString(obj.subpassCount, obj.pSubpasses, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyCount", ToString(obj.dependencyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencies", ArrayToString(obj.dependencyCount, obj.pDependencies, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "correlatedViewMaskCount", ToString(obj.correlatedViewMaskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCorrelatedViewMasks", ArrayToString(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "contents", '"' + ToString(obj.contents, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffer8BitAccess", ToString(obj.storageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformAndStorageBuffer8BitAccess", ToString(obj.uniformAndStorageBuffer8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storagePushConstant8", ToString(obj.storagePushConstant8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "driverID", '"' + ToString(obj.driverID, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "driverName", CStrToString(obj.driverName));
            FieldToString(strStrm, false, "driverInfo", CStrToString(obj.driverInfo));
            FieldToString(strStrm, false, "conformanceVersion", ToString(obj.conformanceVersion, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderBufferInt64Atomics", ToString(obj.shaderBufferInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSharedInt64Atomics", ToString(obj.shaderSharedInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderFloat16", ToString(obj.shaderFloat16, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderInt8", ToString(obj.shaderInt8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(obj.bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindingFlags", ArrayToString(obj.bindingCount, obj.pBindingFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetCount", ToString(obj.descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorCounts", ArrayToString(obj.descriptorSetCount, obj.pDescriptorCounts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVariableDescriptorCount", ToString(obj.maxVariableDescriptorCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthResolveMode", '"' + ToString(obj.depthResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilResolveMode", '"' + ToString(obj.stencilResolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pDepthStencilResolveAttachment", (obj.pDepthStencilResolveAttachment ? ToString(*obj.pDepthStencilResolveAttachment, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedDepthResolveModes", ToString(obj.supportedDepthResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedStencilResolveModes", ToString(obj.supportedStencilResolveModes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolveNone", ToString(obj.independentResolveNone, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "independentResolve", ToString(obj.independentResolve, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scalarBlockLayout", ToString(obj.scalarBlockLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilUsage", ToString(obj.stencilUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reductionMode", '"' + ToString(obj.reductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxSingleComponentFormats", ToString(obj.filterMinmaxSingleComponentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterMinmaxImageComponentMapping", ToString(obj.filterMinmaxImageComponentMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModel", ToString(obj.vulkanMemoryModel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelDeviceScope", ToString(obj.vulkanMemoryModelDeviceScope, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vulkanMemoryModelAvailabilityVisibilityChains", ToString(obj.vulkanMemoryModelAvailabilityVisibilityChains, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagelessFramebuffer", ToString(obj.imagelessFramebuffer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentImageInfoCount", ToString(obj.attachmentImageInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentImageInfos", ArrayToString(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", VkHandleArrayToString(obj.attachmentCount, obj.pAttachments, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformBufferStandardLayout", ToString(obj.uniformBufferStandardLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupExtendedTypes", ToString(obj.shaderSubgroupExtendedTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "separateDepthStencilLayouts", ToString(obj.separateDepthStencilLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilLayout", '"' + ToString(obj.stencilLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stencilInitialLayout", '"' + ToString(obj.stencilInitialLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilFinalLayout", '"' + ToString(obj.stencilFinalLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hostQueryReset", ToString(obj.hostQueryReset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timelineSemaphore", ToString(obj.timelineSemaphore, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxTimelineSemaphoreValueDifference", ToString(obj.maxTimelineSemaphoreValueDifference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreType", '"' + ToString(obj.semaphoreType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "initialValue", ToString(obj.initialValue, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValueCount", ToString(obj.waitSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", ArrayToString(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValueCount", ToString(obj.signalSemaphoreValueCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", ArrayToString(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphoreCount", ToString(obj.semaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSemaphores", VkHandleArrayToString(obj.semaphoreCount, obj.pSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pValues", ArrayToString(obj.semaphoreCount, obj.pValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "value", ToString(obj.value, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
        }
    );
}

template <> std::string ToString<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opaqueCaptureAddress", ToString(obj.opaqueCaptureAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVulkan13Features>(const VkPhysicalDeviceVulkan13Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceVulkan13Properties>(const VkPhysicalDeviceVulkan13Properties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPipelineCreationFeedback>(const VkPipelineCreationFeedback& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "duration", ToString(obj.duration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCreationFeedbackCreateInfo>(const VkPipelineCreationFeedbackCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineCreationFeedback", (obj.pPipelineCreationFeedback ? ToString(*obj.pPipelineCreationFeedback, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pipelineStageCreationFeedbackCount", ToString(obj.pipelineStageCreationFeedbackCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineStageCreationFeedbacks", ArrayToString(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderTerminateInvocationFeatures>(const VkPhysicalDeviceShaderTerminateInvocationFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderTerminateInvocation", ToString(obj.shaderTerminateInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceToolProperties>(const VkPhysicalDeviceToolProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "version", CStrToString(obj.version));
            FieldToString(strStrm, false, "purposes", ToString(obj.purposes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "layer", CStrToString(obj.layer));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDemoteToHelperInvocation", ToString(obj.shaderDemoteToHelperInvocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePrivateDataFeatures>(const VkPhysicalDevicePrivateDataFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateData", ToString(obj.privateData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDevicePrivateDataCreateInfo>(const VkDevicePrivateDataCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlotRequestCount", ToString(obj.privateDataSlotRequestCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPrivateDataSlotCreateInfo>(const VkPrivateDataSlotCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePipelineCreationCacheControlFeatures>(const VkPhysicalDevicePipelineCreationCacheControlFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCreationCacheControl", ToString(obj.pipelineCreationCacheControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryBarrier2>(const VkMemoryBarrier2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferMemoryBarrier2>(const VkBufferMemoryBarrier2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageMemoryBarrier2>(const VkImageMemoryBarrier2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(obj.srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcAccessMask", ToString(obj.srcAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(obj.dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstAccessMask", ToString(obj.dstAccessMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldLayout", '"' + ToString(obj.oldLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "newLayout", '"' + ToString(obj.newLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "srcQueueFamilyIndex", ToString(obj.srcQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstQueueFamilyIndex", ToString(obj.dstQueueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "subresourceRange", ToString(obj.subresourceRange, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDependencyInfo>(const VkDependencyInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", ToString(obj.dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryBarrierCount", ToString(obj.memoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryBarriers", ArrayToString(obj.memoryBarrierCount, obj.pMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferMemoryBarrierCount", ToString(obj.bufferMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferMemoryBarriers", ArrayToString(obj.bufferMemoryBarrierCount, obj.pBufferMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMemoryBarrierCount", ToString(obj.imageMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageMemoryBarriers", ArrayToString(obj.imageMemoryBarrierCount, obj.pImageMemoryBarriers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreSubmitInfo>(const VkSemaphoreSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "value", ToString(obj.value, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageMask", ToString(obj.stageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndex", ToString(obj.deviceIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferSubmitInfo>(const VkCommandBufferSubmitInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBuffer", '"' + VkHandleToString(obj.commandBuffer) + '"');
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubmitInfo2>(const VkSubmitInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreInfoCount", ToString(obj.waitSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreInfos", ArrayToString(obj.waitSemaphoreInfoCount, obj.pWaitSemaphoreInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "commandBufferInfoCount", ToString(obj.commandBufferInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBufferInfos", ArrayToString(obj.commandBufferInfoCount, obj.pCommandBufferInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreInfoCount", ToString(obj.signalSemaphoreInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreInfos", ArrayToString(obj.signalSemaphoreInfoCount, obj.pSignalSemaphoreInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSynchronization2Features>(const VkPhysicalDeviceSynchronization2Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "synchronization2", ToString(obj.synchronization2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures>(const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderZeroInitializeWorkgroupMemory", ToString(obj.shaderZeroInitializeWorkgroupMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageRobustnessFeatures>(const VkPhysicalDeviceImageRobustnessFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess", ToString(obj.robustImageAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferCopy2>(const VkBufferCopy2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyBufferInfo2>(const VkCopyBufferInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", '"' + VkHandleToString(obj.srcBuffer) + '"');
            FieldToString(strStrm, false, "dstBuffer", '"' + VkHandleToString(obj.dstBuffer) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageCopy2>(const VkImageCopy2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyImageInfo2>(const VkCopyImageInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", '"' + VkHandleToString(obj.srcImage) + '"');
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", '"' + VkHandleToString(obj.dstImage) + '"');
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferImageCopy2>(const VkBufferImageCopy2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferOffset", ToString(obj.bufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferRowLength", ToString(obj.bufferRowLength, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferImageHeight", ToString(obj.bufferImageHeight, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(obj.imageSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageOffset", ToString(obj.imageOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageExtent", ToString(obj.imageExtent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyBufferToImageInfo2>(const VkCopyBufferToImageInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcBuffer", '"' + VkHandleToString(obj.srcBuffer) + '"');
            FieldToString(strStrm, false, "dstImage", '"' + VkHandleToString(obj.dstImage) + '"');
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyImageToBufferInfo2>(const VkCopyImageToBufferInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", '"' + VkHandleToString(obj.srcImage) + '"');
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstBuffer", '"' + VkHandleToString(obj.dstBuffer) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageBlit2>(const VkImageBlit2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffsets", ArrayToString(2, obj.srcOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffsets", ArrayToString(2, obj.dstOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBlitImageInfo2>(const VkBlitImageInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", '"' + VkHandleToString(obj.srcImage) + '"');
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", '"' + VkHandleToString(obj.dstImage) + '"');
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filter", '"' + ToString(obj.filter, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImageResolve2>(const VkImageResolve2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcSubresource", ToString(obj.srcSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcOffset", ToString(obj.srcOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstSubresource", ToString(obj.dstSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstOffset", ToString(obj.dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkResolveImageInfo2>(const VkResolveImageInfo2& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcImage", '"' + VkHandleToString(obj.srcImage) + '"');
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(obj.srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", '"' + VkHandleToString(obj.dstImage) + '"');
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(obj.dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSubgroupSizeControlFeatures>(const VkPhysicalDeviceSubgroupSizeControlFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subgroupSizeControl", ToString(obj.subgroupSizeControl, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeFullSubgroups", ToString(obj.computeFullSubgroups, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSubgroupSizeControlProperties>(const VkPhysicalDeviceSubgroupSizeControlProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSubgroupSize", ToString(obj.minSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubgroupSize", ToString(obj.maxSubgroupSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxComputeWorkgroupSubgroups", ToString(obj.maxComputeWorkgroupSubgroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSizeStages", ToString(obj.requiredSubgroupSizeStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineShaderStageRequiredSubgroupSizeCreateInfo>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "requiredSubgroupSize", ToString(obj.requiredSubgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceInlineUniformBlockFeatures>(const VkPhysicalDeviceInlineUniformBlockFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inlineUniformBlock", ToString(obj.inlineUniformBlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingInlineUniformBlockUpdateAfterBind", ToString(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceInlineUniformBlockProperties>(const VkPhysicalDeviceInlineUniformBlockProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockSize", ToString(obj.maxInlineUniformBlockSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorInlineUniformBlocks", ToString(obj.maxPerStageDescriptorInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks", ToString(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetInlineUniformBlocks", ToString(obj.maxDescriptorSetInlineUniformBlocks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetUpdateAfterBindInlineUniformBlocks", ToString(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkWriteDescriptorSetInlineUniformBlock>(const VkWriteDescriptorSetInlineUniformBlock& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", "\"" + PtrToString(obj.pData) + "\"");
        }
    );
}

template <> std::string ToString<VkDescriptorPoolInlineUniformBlockCreateInfo>(const VkDescriptorPoolInlineUniformBlockCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInlineUniformBlockBindings", ToString(obj.maxInlineUniformBlockBindings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTextureCompressionASTCHDRFeatures>(const VkPhysicalDeviceTextureCompressionASTCHDRFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureCompressionASTC_HDR", ToString(obj.textureCompressionASTC_HDR, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderingAttachmentInfo>(const VkRenderingAttachmentInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", '"' + VkHandleToString(obj.imageView) + '"');
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveMode", '"' + ToString(obj.resolveMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "resolveImageView", '"' + VkHandleToString(obj.resolveImageView) + '"');
            FieldToString(strStrm, false, "resolveImageLayout", '"' + ToString(obj.resolveImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "loadOp", '"' + ToString(obj.loadOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storeOp", '"' + ToString(obj.storeOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clearValue", ToString(obj.clearValue, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderingInfo>(const VkRenderingInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderArea", ToString(obj.renderArea, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layerCount", ToString(obj.layerCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachments", ArrayToString(obj.colorAttachmentCount, obj.pColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDepthAttachment", (obj.pDepthAttachment ? ToString(*obj.pDepthAttachment, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pStencilAttachment", (obj.pStencilAttachment ? ToString(*obj.pStencilAttachment, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkPipelineRenderingCreateInfo>(const VkPipelineRenderingCreateInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewMask", ToString(obj.viewMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentFormats", VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentFormats, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthAttachmentFormat", '"' + ToString(obj.depthAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stencilAttachmentFormat", '"' + ToString(obj.stencilAttachmentFormat, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDynamicRenderingFeatures>(const VkPhysicalDeviceDynamicRenderingFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicRendering", ToString(obj.dynamicRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferInheritanceRenderingInfo>(const VkCommandBufferInheritanceRenderingInfo& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceShaderIntegerDotProductFeatures>(const VkPhysicalDeviceShaderIntegerDotProductFeatures& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerDotProduct", ToString(obj.shaderIntegerDotProduct, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderIntegerDotProductProperties>(const VkPhysicalDeviceShaderIntegerDotProductProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceTexelBufferAlignmentProperties>(const VkPhysicalDeviceTexelBufferAlignmentProperties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetAlignmentBytes", ToString(obj.storageTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageTexelBufferOffsetSingleTexelAlignment", ToString(obj.storageTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetAlignmentBytes", ToString(obj.uniformTexelBufferOffsetAlignmentBytes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "uniformTexelBufferOffsetSingleTexelAlignment", ToString(obj.uniformTexelBufferOffsetSingleTexelAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFormatProperties3>(const VkFormatProperties3& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearTilingFeatures", ToString(obj.linearTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimalTilingFeatures", ToString(obj.optimalTilingFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferFeatures", ToString(obj.bufferFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMaintenance4Features>(const VkPhysicalDeviceMaintenance4Features& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maintenance4", ToString(obj.maintenance4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMaintenance4Properties>(const VkPhysicalDeviceMaintenance4Properties& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBufferSize", ToString(obj.maxBufferSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceBufferMemoryRequirements>(const VkDeviceBufferMemoryRequirements& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", (obj.pCreateInfo ? ToString(*obj.pCreateInfo, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkDeviceImageMemoryRequirements>(const VkDeviceImageMemoryRequirements& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfo", (obj.pCreateInfo ? ToString(*obj.pCreateInfo, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "planeAspect", '"' + ToString(obj.planeAspect, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", ToString(obj.currentExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", ToString(obj.minImageExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", ToString(obj.maxImageExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "colorSpace", '"' + ToString(obj.colorSpace, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", '"' + VkHandleToString(obj.surface) + '"');
            FieldToString(strStrm, false, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFormat", '"' + ToString(obj.imageFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageColorSpace", '"' + ToString(obj.imageColorSpace, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", ToString(obj.imageExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageArrayLayers", ToString(obj.imageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageUsage", ToString(obj.imageUsage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSharingMode", '"' + ToString(obj.imageSharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preTransform", '"' + ToString(obj.preTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compositeAlpha", '"' + ToString(obj.compositeAlpha, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "presentMode", '"' + ToString(obj.presentMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "clipped", ToString(obj.clipped, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "oldSwapchain", '"' + VkHandleToString(obj.oldSwapchain) + '"');
        }
    );
}

template <> std::string ToString<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreCount", ToString(obj.waitSemaphoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphores", VkHandleArrayToString(obj.waitSemaphoreCount, obj.pWaitSemaphores, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchains", VkHandleArrayToString(obj.swapchainCount, obj.pSwapchains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageIndices", ArrayToString(obj.swapchainCount, obj.pImageIndices, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pResults", VkEnumArrayToString(obj.swapchainCount, obj.pResults, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", '"' + VkHandleToString(obj.swapchain) + '"');
        }
    );
}

template <> std::string ToString<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", '"' + VkHandleToString(obj.swapchain) + '"');
            FieldToString(strStrm, false, "imageIndex", ToString(obj.imageIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchain", '"' + VkHandleToString(obj.swapchain) + '"');
            FieldToString(strStrm, false, "timeout", ToString(obj.timeout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "fence", '"' + VkHandleToString(obj.fence) + '"');
            FieldToString(strStrm, false, "deviceMask", ToString(obj.deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentMask", ArrayToString(VK_MAX_DEVICE_GROUP_SIZE, obj.presentMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceMasks", ArrayToString(obj.swapchainCount, obj.pDeviceMasks, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "modes", ToString(obj.modes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "visibleRegion", ToString(obj.visibleRegion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "refreshRate", ToString(obj.refreshRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameters", ToString(obj.parameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "displayMode", '"' + VkHandleToString(obj.displayMode) + '"');
            FieldToString(strStrm, false, "parameters", ToString(obj.parameters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "supportedAlpha", ToString(obj.supportedAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcPosition", ToString(obj.minSrcPosition, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcPosition", ToString(obj.maxSrcPosition, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minSrcExtent", ToString(obj.minSrcExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSrcExtent", ToString(obj.maxSrcExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstPosition", ToString(obj.minDstPosition, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstPosition", ToString(obj.maxDstPosition, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minDstExtent", ToString(obj.minDstExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDstExtent", ToString(obj.maxDstExtent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "currentDisplay", '"' + VkHandleToString(obj.currentDisplay) + '"');
            FieldToString(strStrm, false, "currentStackIndex", ToString(obj.currentStackIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "display", '"' + VkHandleToString(obj.display) + '"');
            FieldToString(strStrm, false, "displayName", CStrToString(obj.displayName));
            FieldToString(strStrm, false, "physicalDimensions", ToString(obj.physicalDimensions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "physicalResolution", ToString(obj.physicalResolution, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeReorderPossible", ToString(obj.planeReorderPossible, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistentContent", ToString(obj.persistentContent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayMode", '"' + VkHandleToString(obj.displayMode) + '"');
            FieldToString(strStrm, false, "planeIndex", ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "planeStackIndex", ToString(obj.planeStackIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "globalAlpha", ToString(obj.globalAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "alphaMode", '"' + ToString(obj.alphaMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "imageExtent", ToString(obj.imageExtent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcRect", ToString(obj.srcRect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstRect", ToString(obj.dstRect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "persistent", ToString(obj.persistent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dpy", "\"" + PtrToString(obj.dpy) + "\"");
            FieldToString(strStrm, false, "window", ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "connection", "\"" + PtrToString(obj.connection) + "\"");
            FieldToString(strStrm, false, "window", ToString(obj.window, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", "\"" + PtrToString(obj.display) + "\"");
            FieldToString(strStrm, false, "surface", "\"" + PtrToString(obj.surface) + "\"");
        }
    );
}

template <> std::string ToString<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", "\"" + PtrToString(obj.window) + "\"");
        }
    );
}

template <> std::string ToString<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hinstance", "\"" + PtrToString(obj.hinstance) + "\"");
            FieldToString(strStrm, false, "hwnd", "\"" + PtrToString(obj.hwnd) + "\"");
        }
    );
}

template <> std::string ToString<VkRenderingFragmentShadingRateAttachmentInfoKHR>(const VkRenderingFragmentShadingRateAttachmentInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", '"' + VkHandleToString(obj.imageView) + '"');
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", ToString(obj.shadingRateAttachmentTexelSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderingFragmentDensityMapAttachmentInfoEXT>(const VkRenderingFragmentDensityMapAttachmentInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", '"' + VkHandleToString(obj.imageView) + '"');
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(obj.imageLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkAttachmentSampleCountInfoAMD>(const VkAttachmentSampleCountInfoAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorAttachmentCount", ToString(obj.colorAttachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorAttachmentSamples", VkEnumArrayToString(obj.colorAttachmentCount, obj.pColorAttachmentSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthStencilAttachmentSamples", '"' + ToString(obj.depthStencilAttachmentSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkMultiviewPerViewAttributesInfoNVX>(const VkMultiviewPerViewAttributesInfoNVX& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributes", ToString(obj.perViewAttributes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewAttributesPositionXOnly", ToString(obj.perViewAttributesPositionXOnly, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", "\"" + PtrToString(obj.handle) + "\"");
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", (obj.pAttributes ? ToString(*obj.pAttributes, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", VkHandleArrayToString(obj.acquireCount, obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeouts", ArrayToString(obj.acquireCount, obj.pAcquireTimeouts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", VkHandleArrayToString(obj.releaseCount, obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", "\"" + PtrToString(obj.handle) + "\"");
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", (obj.pAttributes ? ToString(*obj.pAttributes, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitSemaphoreValuesCount", ToString(obj.waitSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pWaitSemaphoreValues", ArrayToString(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "signalSemaphoreValuesCount", ToString(obj.signalSemaphoreValuesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSignalSemaphoreValues", ArrayToString(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPushDescriptors", ToString(obj.maxPushDescriptors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRectLayerKHR>(const VkRectLayerKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extent", ToString(obj.extent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layer", ToString(obj.layer, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "rectangleCount", ToString(obj.rectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRectangles", ArrayToString(obj.rectangleCount, obj.pRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.swapchainCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharedPresentSupportedUsageFlags", ToString(obj.sharedPresentSupportedUsageFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", '"' + VkHandleToString(obj.fence) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", "\"" + PtrToString(obj.handle) + "\"");
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", (obj.pAttributes ? ToString(*obj.pAttributes, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", (obj.name ? ToString(*obj.name, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", '"' + VkHandleToString(obj.fence) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", '"' + VkHandleToString(obj.fence) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(obj.fd, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", '"' + VkHandleToString(obj.fence) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterQueryPools", ToString(obj.performanceCounterQueryPools, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCounterMultipleQueryPools", ToString(obj.performanceCounterMultipleQueryPools, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allowCommandBufferQueryCopies", ToString(obj.allowCommandBufferQueryCopies, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "unit", '"' + ToString(obj.unit, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "scope", '"' + ToString(obj.scope, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "storage", '"' + ToString(obj.storage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uuid", '"' + UIDToString(VK_UUID_SIZE, obj.uuid) + '"');
        }
    );
}

template <> std::string ToString<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "category", CStrToString(obj.category));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
        }
    );
}

template <> std::string ToString<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(obj.queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterIndexCount", ToString(obj.counterIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterIndices", ArrayToString(obj.counterIndexCount, obj.pCounterIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(obj.timeout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterPassIndex", ToString(obj.counterPassIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", '"' + VkHandleToString(obj.surface) + '"');
        }
    );
}

template <> std::string ToString<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCapabilities", ToString(obj.surfaceCapabilities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceFormat", ToString(obj.surfaceFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayProperties", ToString(obj.displayProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPlaneProperties", ToString(obj.displayPlaneProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayModeProperties", ToString(obj.displayModeProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + VkHandleToString(obj.mode) + '"');
            FieldToString(strStrm, false, "planeIndex", ToString(obj.planeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "capabilities", ToString(obj.capabilities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePortabilitySubsetFeaturesKHR>(const VkPhysicalDevicePortabilitySubsetFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDevicePortabilitySubsetPropertiesKHR>(const VkPhysicalDevicePortabilitySubsetPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minVertexInputBindingStrideAlignment", ToString(obj.minVertexInputBindingStrideAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupClock", ToString(obj.shaderSubgroupClock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderDeviceClock", ToString(obj.shaderDeviceClock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceQueueGlobalPriorityCreateInfoKHR>(const VkDeviceQueueGlobalPriorityCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriority", '"' + ToString(obj.globalPriority, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR>(const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "globalPriorityQuery", ToString(obj.globalPriorityQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueueFamilyGlobalPriorityPropertiesKHR>(const VkQueueFamilyGlobalPriorityPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorityCount", ToString(obj.priorityCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priorities", ArrayToString(VK_MAX_GLOBAL_PRIORITY_SIZE_KHR, obj.priorities, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkFragmentShadingRateAttachmentInfoKHR>(const VkFragmentShadingRateAttachmentInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentShadingRateAttachment", (obj.pFragmentShadingRateAttachment ? ToString(*obj.pFragmentShadingRateAttachment, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "shadingRateAttachmentTexelSize", ToString(obj.shadingRateAttachmentTexelSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineFragmentShadingRateStateCreateInfoKHR>(const VkPipelineFragmentShadingRateStateCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", ToString(obj.fragmentSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinerOps", ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShadingRateFeaturesKHR>(const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineFragmentShadingRate", ToString(obj.pipelineFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRate", ToString(obj.primitiveFragmentShadingRate, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFragmentShadingRate", ToString(obj.attachmentFragmentShadingRate, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShadingRatePropertiesKHR>(const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentShadingRateAttachmentTexelSize", ToString(obj.minFragmentShadingRateAttachmentTexelSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSize", ToString(obj.maxFragmentShadingRateAttachmentTexelSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateAttachmentTexelSizeAspectRatio", ToString(obj.maxFragmentShadingRateAttachmentTexelSizeAspectRatio, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRateWithMultipleViewports", ToString(obj.primitiveFragmentShadingRateWithMultipleViewports, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layeredShadingRateAttachments", ToString(obj.layeredShadingRateAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateNonTrivialCombinerOps", ToString(obj.fragmentShadingRateNonTrivialCombinerOps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentSize", ToString(obj.maxFragmentSize, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceFragmentShadingRateKHR>(const VkPhysicalDeviceFragmentShadingRateKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleCounts", ToString(obj.sampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentSize", ToString(obj.fragmentSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsProtected", ToString(obj.supportsProtected, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePresentWaitFeaturesKHR>(const VkPhysicalDevicePresentWaitFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentWait", ToString(obj.presentWait, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineExecutableInfo", ToString(obj.pipelineExecutableInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", '"' + VkHandleToString(obj.pipeline) + '"');
        }
    );
}

template <> std::string ToString<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stages", ToString(obj.stages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "subgroupSize", ToString(obj.subgroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipeline", '"' + VkHandleToString(obj.pipeline) + '"');
            FieldToString(strStrm, false, "executableIndex", ToString(obj.executableIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "name", CStrToString(obj.name));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "isText", ToString(obj.isText, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(obj.dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", "\"" + PtrToString(obj.pData) + "\"");
        }
    );
}

template <> std::string ToString<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "libraryCount", ToString(obj.libraryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraries", VkHandleArrayToString(obj.libraryCount, obj.pLibraries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPresentIdKHR>(const VkPresentIdKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentIds", ArrayToString(obj.swapchainCount, obj.pPresentIds, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePresentIdFeaturesKHR>(const VkPhysicalDevicePresentIdFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentId", ToString(obj.presentId, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueueFamilyCheckpointProperties2NV>(const VkQueueFamilyCheckpointProperties2NV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCheckpointData2NV>(const VkCheckpointData2NV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", ToString(obj.stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCheckpointMarker", "\"" + PtrToString(obj.pCheckpointMarker) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderBarycentric", ToString(obj.fragmentShaderBarycentric, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR>(const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triStripVertexOrderIndependentOfProvokingVertex", ToString(obj.triStripVertexOrderIndependentOfProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR>(const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSubgroupUniformControlFlow", ToString(obj.shaderSubgroupUniformControlFlow, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR>(const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout", ToString(obj.workgroupMemoryExplicitLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayoutScalarBlockLayout", ToString(obj.workgroupMemoryExplicitLayoutScalarBlockLayout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout8BitAccess", ToString(obj.workgroupMemoryExplicitLayout8BitAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "workgroupMemoryExplicitLayout16BitAccess", ToString(obj.workgroupMemoryExplicitLayout16BitAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR>(const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMaintenance1", ToString(obj.rayTracingMaintenance1, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect2", ToString(obj.rayTracingPipelineTraceRaysIndirect2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkTraceRaysIndirectCommand2KHR>(const VkTraceRaysIndirectCommand2KHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnCallback", "\"" + PtrToString(obj.pfnCallback) + "\"");
            FieldToString(strStrm, false, "pUserData", "\"" + PtrToString(obj.pUserData) + "\"");
        }
    );
}

template <> std::string ToString<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrder", '"' + ToString(obj.rasterizationOrder, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", CStrToString(obj.pObjectName));
        }
    );
}

template <> std::string ToString<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", ToString(obj.object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", "\"" + PtrToString(obj.pTag) + "\"");
        }
    );
}

template <> std::string ToString<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMarkerName", CStrToString(obj.pMarkerName));
            FieldToString(strStrm, false, "color", ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocation", ToString(obj.dedicatedAllocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image", '"' + VkHandleToString(obj.image) + '"');
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedback", ToString(obj.transformFeedback, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryStreams", ToString(obj.geometryStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationStream", ToString(obj.rasterizationStream, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageView", '"' + VkHandleToString(obj.imageView) + '"');
            FieldToString(strStrm, false, "descriptorType", '"' + ToString(obj.descriptorType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampler", '"' + VkHandleToString(obj.sampler) + '"');
        }
    );
}

template <> std::string ToString<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportsTextureGatherLODBiasAMD", ToString(obj.supportsTextureGatherLODBiasAMD, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shaderStageMask", ToString(obj.shaderStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "resourceUsage", ToString(obj.resourceUsage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalVgprs", ToString(obj.numPhysicalVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhysicalSgprs", ToString(obj.numPhysicalSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableVgprs", ToString(obj.numAvailableVgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numAvailableSgprs", ToString(obj.numAvailableSgprs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeWorkGroupSize", ArrayToString(3, obj.computeWorkGroupSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamDescriptor", ToString(obj.streamDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cornerSampledImage", ToString(obj.cornerSampledImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "imageFormatProperties", ToString(obj.imageFormatProperties, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryFeatures", ToString(obj.externalMemoryFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exportFromImportedHandleTypes", ToString(obj.exportFromImportedHandleTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compatibleHandleTypes", ToString(obj.compatibleHandleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleTypes", ToString(obj.handleTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", ToString(obj.handleType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handle", "\"" + PtrToString(obj.handle) + "\"");
        }
    );
}

template <> std::string ToString<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttributes", (obj.pAttributes ? ToString(*obj.pAttributes, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "dwAccess", ToString(obj.dwAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "acquireCount", ToString(obj.acquireCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireSyncs", VkHandleArrayToString(obj.acquireCount, obj.pAcquireSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireKeys", ArrayToString(obj.acquireCount, obj.pAcquireKeys, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAcquireTimeoutMilliseconds", ArrayToString(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "releaseCount", ToString(obj.releaseCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseSyncs", VkHandleArrayToString(obj.releaseCount, obj.pReleaseSyncs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pReleaseKeys", ArrayToString(obj.releaseCount, obj.pReleaseKeys, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationCheckCount", ToString(obj.disabledValidationCheckCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationChecks", VkEnumArrayToString(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", "\"" + PtrToString(obj.window) + "\"");
        }
    );
}

template <> std::string ToString<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeMode", '"' + ToString(obj.decodeMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "decodeModeSharedExponent", ToString(obj.decodeModeSharedExponent, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePipelineRobustnessFeaturesEXT>(const VkPhysicalDevicePipelineRobustnessFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineRobustness", ToString(obj.pipelineRobustness, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePipelineRobustnessPropertiesEXT>(const VkPhysicalDevicePipelineRobustnessPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "defaultRobustnessStorageBuffers", '"' + ToString(obj.defaultRobustnessStorageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessUniformBuffers", '"' + ToString(obj.defaultRobustnessUniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessVertexInputs", '"' + ToString(obj.defaultRobustnessVertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "defaultRobustnessImages", '"' + ToString(obj.defaultRobustnessImages, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPipelineRobustnessCreateInfoEXT>(const VkPipelineRobustnessCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "storageBuffers", '"' + ToString(obj.storageBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "uniformBuffers", '"' + ToString(obj.uniformBuffers, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexInputs", '"' + ToString(obj.vertexInputs, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "images", '"' + ToString(obj.images, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRendering", ToString(obj.conditionalRendering, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedConditionalRendering", ToString(obj.inheritedConditionalRendering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conditionalRenderingEnable", ToString(obj.conditionalRenderingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "xcoeff", ToString(obj.xcoeff, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycoeff", ToString(obj.ycoeff, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportWScalingEnable", ToString(obj.viewportWScalingEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportWScalings", ArrayToString(obj.viewportCount, obj.pViewportWScalings, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageCount", ToString(obj.minImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageCount", ToString(obj.maxImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentExtent", ToString(obj.currentExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImageExtent", ToString(obj.minImageExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageExtent", ToString(obj.maxImageExtent, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxImageArrayLayers", ToString(obj.maxImageArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedTransforms", ToString(obj.supportedTransforms, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "currentTransform", '"' + ToString(obj.currentTransform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "supportedCompositeAlpha", ToString(obj.supportedCompositeAlpha, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedUsageFlags", ToString(obj.supportedUsageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supportedSurfaceCounters", ToString(obj.supportedSurfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "powerState", '"' + ToString(obj.powerState, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceEvent", '"' + ToString(obj.deviceEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayEvent", '"' + ToString(obj.displayEvent, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surfaceCounters", ToString(obj.surfaceCounters, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "refreshDuration", ToString(obj.refreshDuration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "presentID", ToString(obj.presentID, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "desiredPresentTime", ToString(obj.desiredPresentTime, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapchainCount", ToString(obj.swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimes", ArrayToString(obj.swapchainCount, obj.pTimes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "perViewPositionAllComponents", ToString(obj.perViewPositionAllComponents, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportSwizzles", ArrayToString(obj.viewportCount, obj.pViewportSwizzles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDiscardRectangles", ToString(obj.maxDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardRectangleMode", '"' + ToString(obj.discardRectangleMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "discardRectangleCount", ToString(obj.discardRectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDiscardRectangles", ArrayToString(obj.discardRectangleCount, obj.pDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "conservativeRasterizationMode", '"' + ToString(obj.conservativeRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSize", ToString(obj.extraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipEnable", ToString(obj.depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkXYColorEXT>(const VkXYColorEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryRed", ToString(obj.displayPrimaryRed, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryGreen", ToString(obj.displayPrimaryGreen, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "displayPrimaryBlue", ToString(obj.displayPrimaryBlue, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "whitePoint", ToString(obj.whitePoint, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxLuminance", ToString(obj.maxLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLuminance", ToString(obj.minLuminance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxContentLightLevel", ToString(obj.maxContentLightLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFrameAverageLightLevel", ToString(obj.maxFrameAverageLightLevel, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", "\"" + PtrToString(obj.pView) + "\"");
        }
    );
}

template <> std::string ToString<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", "\"" + PtrToString(obj.pView) + "\"");
        }
    );
}

template <> std::string ToString<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLabelName", CStrToString(obj.pLabelName));
            FieldToString(strStrm, false, "color", ArrayToString(4, obj.color, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjectName", CStrToString(obj.pObjectName));
        }
    );
}

template <> std::string ToString<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessageIdName", CStrToString(obj.pMessageIdName));
            FieldToString(strStrm, false, "messageIdNumber", ToString(obj.messageIdNumber, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessage", CStrToString(obj.pMessage));
            FieldToString(strStrm, false, "queueLabelCount", ToString(obj.queueLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueLabels", ArrayToString(obj.queueLabelCount, obj.pQueueLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cmdBufLabelCount", ToString(obj.cmdBufLabelCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCmdBufLabels", ArrayToString(obj.cmdBufLabelCount, obj.pCmdBufLabels, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectCount", ToString(obj.objectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pObjects", ArrayToString(obj.objectCount, obj.pObjects, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageSeverity", ToString(obj.messageSeverity, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageType", ToString(obj.messageType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", "\"" + PtrToString(obj.pfnUserCallback) + "\"");
            FieldToString(strStrm, false, "pUserData", "\"" + PtrToString(obj.pUserData) + "\"");
        }
    );
}

template <> std::string ToString<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(obj.objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(obj.objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagName", ToString(obj.tagName, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tagSize", ToString(obj.tagSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTag", "\"" + PtrToString(obj.pTag) + "\"");
        }
    );
}

template <> std::string ToString<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "androidHardwareBufferUsage", ToString(obj.androidHardwareBufferUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "allocationSize", ToString(obj.allocationSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", ToString(obj.samplerYcbcrConversionComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", "\"" + PtrToString(obj.buffer) + "\"");
        }
    );
}

template <> std::string ToString<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
        }
    );
}

template <> std::string ToString<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAndroidHardwareBufferFormatProperties2ANDROID>(const VkAndroidHardwareBufferFormatProperties2ANDROID& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "externalFormat", ToString(obj.externalFormat, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatFeatures", ToString(obj.formatFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "samplerYcbcrConversionComponents", ToString(obj.samplerYcbcrConversionComponents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "suggestedYcbcrModel", '"' + ToString(obj.suggestedYcbcrModel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYcbcrRange", '"' + ToString(obj.suggestedYcbcrRange, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedXChromaOffset", '"' + ToString(obj.suggestedXChromaOffset, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "suggestedYChromaOffset", '"' + ToString(obj.suggestedYChromaOffset, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "x", ToString(obj.x, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "y", ToString(obj.y, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsPerPixel", '"' + ToString(obj.sampleLocationsPerPixel, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleLocationGridSize", ToString(obj.sampleLocationGridSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsCount", ToString(obj.sampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", ArrayToString(obj.sampleLocationsCount, obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "attachmentIndex", ToString(obj.attachmentIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(obj.sampleLocationsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassIndex", ToString(obj.subpassIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(obj.sampleLocationsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentInitialSampleLocationsCount", ToString(obj.attachmentInitialSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachmentInitialSampleLocations", ArrayToString(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "postSubpassSampleLocationsCount", ToString(obj.postSubpassSampleLocationsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPostSubpassSampleLocations", ArrayToString(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsEnable", ToString(obj.sampleLocationsEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationsInfo", ToString(obj.sampleLocationsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSampleCounts", ToString(obj.sampleLocationSampleCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", ToString(obj.maxSampleLocationGridSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCoordinateRange", ArrayToString(2, obj.sampleLocationCoordinateRange, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationSubPixelBits", ToString(obj.sampleLocationSubPixelBits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "variableSampleLocations", ToString(obj.variableSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSampleLocationGridSize", ToString(obj.maxSampleLocationGridSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCoherentOperations", ToString(obj.advancedBlendCoherentOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendMaxColorAttachments", ToString(obj.advancedBlendMaxColorAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendIndependentBlend", ToString(obj.advancedBlendIndependentBlend, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedSrcColor", ToString(obj.advancedBlendNonPremultipliedSrcColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendNonPremultipliedDstColor", ToString(obj.advancedBlendNonPremultipliedDstColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendCorrelatedOverlap", ToString(obj.advancedBlendCorrelatedOverlap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "advancedBlendAllOperations", ToString(obj.advancedBlendAllOperations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcPremultiplied", ToString(obj.srcPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstPremultiplied", ToString(obj.dstPremultiplied, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "blendOverlap", '"' + ToString(obj.blendOverlap, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorEnable", ToString(obj.coverageToColorEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageToColorLocation", ToString(obj.coverageToColorLocation, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationMode", '"' + ToString(obj.coverageModulationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "coverageModulationTableEnable", ToString(obj.coverageModulationTableEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageModulationTableCount", ToString(obj.coverageModulationTableCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCoverageModulationTable", ArrayToString(obj.coverageModulationTableCount, obj.pCoverageModulationTable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMCount", ToString(obj.shaderSMCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderWarpsPerSM", ToString(obj.shaderWarpsPerSM, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderSMBuiltins", ToString(obj.shaderSMBuiltins, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", ArrayToString(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sharingMode", '"' + ToString(obj.sharingMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queueFamilyIndexCount", ToString(obj.queueFamilyIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyIndices", ArrayToString(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifiers", ArrayToString(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPlaneLayouts", ArrayToString(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDrmFormatModifierProperties2EXT>(const VkDrmFormatModifierProperties2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "drmFormatModifier", ToString(obj.drmFormatModifier, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierPlaneCount", ToString(obj.drmFormatModifierPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierTilingFeatures", ToString(obj.drmFormatModifierTilingFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDrmFormatModifierPropertiesList2EXT>(const VkDrmFormatModifierPropertiesList2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drmFormatModifierCount", ToString(obj.drmFormatModifierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDrmFormatModifierProperties", ArrayToString(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "initialDataSize", ToString(obj.initialDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInitialData", "\"" + PtrToString(obj.pInitialData) + "\"");
        }
    );
}

template <> std::string ToString<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "validationCache", '"' + VkHandleToString(obj.validationCache) + '"');
        }
    );
}

template <> std::string ToString<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRatePaletteEntryCount", ToString(obj.shadingRatePaletteEntryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePaletteEntries", VkEnumArrayToString(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImageEnable", ToString(obj.shadingRateImageEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(obj.viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePalettes", ArrayToString(obj.viewportCount, obj.pShadingRatePalettes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateImage", ToString(obj.shadingRateImage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateCoarseSampleOrder", ToString(obj.shadingRateCoarseSampleOrder, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateTexelSize", ToString(obj.shadingRateTexelSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRatePaletteSize", ToString(obj.shadingRatePaletteSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateMaxCoarseSamples", ToString(obj.shadingRateMaxCoarseSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pixelX", ToString(obj.pixelX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pixelY", ToString(obj.pixelY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sample", ToString(obj.sample, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "shadingRate", '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "sampleCount", ToString(obj.sampleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleLocationCount", ToString(obj.sampleLocationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampleLocations", ArrayToString(obj.sampleLocationCount, obj.pSampleLocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampleOrderType", '"' + ToString(obj.sampleOrderType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "customSampleOrderCount", ToString(obj.customSampleOrderCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCustomSampleOrders", ArrayToString(obj.customSampleOrderCount, obj.pCustomSampleOrders, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", ArrayToString(obj.stageCount, obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", ArrayToString(obj.groupCount, obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxRecursionDepth", ToString(obj.maxRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "layout", '"' + VkHandleToString(obj.layout) + '"');
            FieldToString(strStrm, false, "basePipelineHandle", '"' + VkHandleToString(obj.basePipelineHandle) + '"');
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", '"' + VkHandleToString(obj.vertexData) + '"');
            FieldToString(strStrm, false, "vertexOffset", ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", '"' + VkHandleToString(obj.indexData) + '"');
            FieldToString(strStrm, false, "indexOffset", ToString(obj.indexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "transformData", '"' + VkHandleToString(obj.transformData) + '"');
            FieldToString(strStrm, false, "transformOffset", ToString(obj.transformOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbData", '"' + VkHandleToString(obj.aabbData) + '"');
            FieldToString(strStrm, false, "numAABBs", ToString(obj.numAABBs, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeometryDataNV>(const VkGeometryDataNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "triangles", ToString(obj.triangles, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "aabbs", ToString(obj.aabbs, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeometryNV>(const VkGeometryNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryType", '"' + ToString(obj.geometryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "geometry", ToString(obj.geometry, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(obj.instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "geometryCount", ToString(obj.geometryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGeometries", ArrayToString(obj.geometryCount, obj.pGeometries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compactedSize", ToString(obj.compactedSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "info", ToString(obj.info, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindAccelerationStructureMemoryInfoNV>(const VkBindAccelerationStructureMemoryInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", '"' + VkHandleToString(obj.accelerationStructure) + '"');
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "memoryOffset", ToString(obj.memoryOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceIndexCount", ToString(obj.deviceIndexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeviceIndices", ArrayToString(obj.deviceIndexCount, obj.pDeviceIndices, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkWriteDescriptorSetAccelerationStructureNV>(const VkWriteDescriptorSetAccelerationStructureNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", VkHandleArrayToString(obj.accelerationStructureCount, obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "accelerationStructure", '"' + VkHandleToString(obj.accelerationStructure) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transform", ToString(obj.transform, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTest", ToString(obj.representativeFragmentTest, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "representativeFragmentTestEnable", ToString(obj.representativeFragmentTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageViewType", '"' + ToString(obj.imageViewType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubic", ToString(obj.filterCubic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCubicMinmax", ToString(obj.filterCubicMinmax, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pHostPointer", "\"" + PtrToString(obj.pHostPointer) + "\"");
        }
    );
}

template <> std::string ToString<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minImportedHostPointerAlignment", ToString(obj.minImportedHostPointerAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compilerControlFlags", ToString(obj.compilerControlFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeDomain", '"' + ToString(obj.timeDomain, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "overallocationBehavior", '"' + ToString(obj.overallocationBehavior, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertexAttribDivisor", ToString(obj.maxVertexAttribDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "divisor", ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingDivisorCount", ToString(obj.vertexBindingDivisorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDivisors", ArrayToString(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateDivisor", ToString(obj.vertexAttributeInstanceRateDivisor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeInstanceRateZeroDivisor", ToString(obj.vertexAttributeInstanceRateZeroDivisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "frameToken", ToString(obj.frameToken, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupQuads", ToString(obj.computeDerivativeGroupQuads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "computeDerivativeGroupLinear", ToString(obj.computeDerivativeGroupLinear, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "taskShader", ToString(obj.taskShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShader", ToString(obj.meshShader, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "taskCount", ToString(obj.taskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstTask", ToString(obj.firstTask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageFootprint", ToString(obj.imageFootprint, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissorCount", ToString(obj.exclusiveScissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExclusiveScissors", ArrayToString(obj.exclusiveScissorCount, obj.pExclusiveScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissor", ToString(obj.exclusiveScissor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "checkpointExecutionStageMask", ToString(obj.checkpointExecutionStageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stage", '"' + ToString(obj.stage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pCheckpointMarker", "\"" + PtrToString(obj.pCheckpointMarker) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderIntegerFunctions2", ToString(obj.shaderIntegerFunctions2, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUserData", "\"" + PtrToString(obj.pUserData) + "\"");
        }
    );
}

template <> std::string ToString<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "performanceCountersSampling", '"' + ToString(obj.performanceCountersSampling, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(obj.marker, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "enable", ToString(obj.enable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "parameter", ToString(obj.parameter, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDomain", ToString(obj.pciDomain, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciBus", ToString(obj.pciBus, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciDevice", ToString(obj.pciDevice, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pciFunction", ToString(obj.pciFunction, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingSupport", ToString(obj.localDimmingSupport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDimmingEnable", ToString(obj.localDimmingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imagePipeHandle", ToString(obj.imagePipeHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayer", "\"" + PtrToString(obj.pLayer) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMap", ToString(obj.fragmentDensityMap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDynamic", ToString(obj.fragmentDensityMapDynamic, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapNonSubsampledImages", ToString(obj.fragmentDensityMapNonSubsampledImages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minFragmentDensityTexelSize", ToString(obj.minFragmentDensityTexelSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentDensityTexelSize", ToString(obj.maxFragmentDensityTexelSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityInvocations", ToString(obj.fragmentDensityInvocations, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapAttachment", ToString(obj.fragmentDensityMapAttachment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreFeatures", ToString(obj.shaderCoreFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "activeComputeUnitCount", ToString(obj.activeComputeUnitCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceCoherentMemory", ToString(obj.deviceCoherentMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT>(const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderImageInt64Atomics", ToString(obj.shaderImageInt64Atomics, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sparseImageInt64Atomics", ToString(obj.sparseImageInt64Atomics, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapBudget", ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapBudget, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "heapUsage", ArrayToString(VK_MAX_MEMORY_HEAPS, obj.heapUsage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryPriority", ToString(obj.memoryPriority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "priority", ToString(obj.priority, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dedicatedAllocationImageAliasing", ToString(obj.dedicatedAllocationImageAliasing, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddress", ToString(obj.bufferDeviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressCaptureReplay", ToString(obj.bufferDeviceAddressCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferDeviceAddressMultiDevice", ToString(obj.bufferDeviceAddressMultiDevice, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "enabledValidationFeatureCount", ToString(obj.enabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEnabledValidationFeatures", VkEnumArrayToString(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disabledValidationFeatureCount", ToString(obj.disabledValidationFeatureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisabledValidationFeatures", VkEnumArrayToString(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrix", ToString(obj.cooperativeMatrix, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixRobustBufferAccess", ToString(obj.cooperativeMatrixRobustBufferAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "cooperativeMatrixSupportedStages", ToString(obj.cooperativeMatrixSupportedStages, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "coverageReductionMode", '"' + ToString(obj.coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthStencilSamples", ToString(obj.depthStencilSamples, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorSamples", ToString(obj.colorSamples, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderSampleInterlock", ToString(obj.fragmentShaderSampleInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderPixelInterlock", ToString(obj.fragmentShaderPixelInterlock, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShaderShadingRateInterlock", ToString(obj.fragmentShaderShadingRateInterlock, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcrImageArrays", ToString(obj.ycbcrImageArrays, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceProvokingVertexFeaturesEXT>(const VkPhysicalDeviceProvokingVertexFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexLast", ToString(obj.provokingVertexLast, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesProvokingVertex", ToString(obj.transformFeedbackPreservesProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceProvokingVertexPropertiesEXT>(const VkPhysicalDeviceProvokingVertexPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexModePerPipeline", ToString(obj.provokingVertexModePerPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformFeedbackPreservesTriangleFanProvokingVertex", ToString(obj.transformFeedbackPreservesTriangleFanProvokingVertex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineRasterizationProvokingVertexStateCreateInfoEXT>(const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "provokingVertexMode", '"' + ToString(obj.provokingVertexMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusive", '"' + ToString(obj.fullScreenExclusive, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fullScreenExclusiveSupported", ToString(obj.fullScreenExclusiveSupported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hmonitor", "\"" + PtrToString(obj.hmonitor) + "\"");
        }
    );
}

template <> std::string ToString<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rectangularLines", ToString(obj.rectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bresenhamLines", ToString(obj.bresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "smoothLines", ToString(obj.smoothLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledRectangularLines", ToString(obj.stippledRectangularLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledBresenhamLines", ToString(obj.stippledBresenhamLines, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stippledSmoothLines", ToString(obj.stippledSmoothLines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineSubPixelPrecisionBits", ToString(obj.lineSubPixelPrecisionBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineRasterizationMode", '"' + ToString(obj.lineRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stippledLineEnable", ToString(obj.stippledLineEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStippleFactor", ToString(obj.lineStippleFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStipplePattern", ToString(obj.lineStipplePattern, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexTypeUint8", ToString(obj.indexTypeUint8, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState", ToString(obj.extendedDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceGeneratedCommands", ToString(obj.deviceGeneratedCommands, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", ArrayToString(obj.stageCount, obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInputState", (obj.pVertexInputState ? ToString(*obj.pVertexInputState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pTessellationState", (obj.pTessellationState ? ToString(*obj.pTessellationState, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", ArrayToString(obj.groupCount, obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineCount", ToString(obj.pipelineCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", VkHandleArrayToString(obj.pipelineCount, obj.pPipelines, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "groupIndex", ToString(obj.groupIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "bufferAddress", ToString(obj.bufferAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "data", ToString(obj.data, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tokenType", '"' + ToString(obj.tokenType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "stream", ToString(obj.stream, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexBindingUnit", ToString(obj.vertexBindingUnit, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexDynamicStride", ToString(obj.vertexDynamicStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pushconstantPipelineLayout", '"' + VkHandleToString(obj.pushconstantPipelineLayout) + '"');
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

template <> std::string ToString<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tokenCount", ToString(obj.tokenCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTokens", ArrayToString(obj.tokenCount, obj.pTokens, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "streamCount", ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreamStrides", ArrayToString(obj.streamCount, obj.pStreamStrides, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", '"' + VkHandleToString(obj.pipeline) + '"');
            FieldToString(strStrm, false, "indirectCommandsLayout", '"' + VkHandleToString(obj.indirectCommandsLayout) + '"');
            FieldToString(strStrm, false, "streamCount", ToString(obj.streamCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStreams", ArrayToString(obj.streamCount, obj.pStreams, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCount", ToString(obj.sequencesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessBuffer", '"' + VkHandleToString(obj.preprocessBuffer) + '"');
            FieldToString(strStrm, false, "preprocessOffset", ToString(obj.preprocessOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "preprocessSize", ToString(obj.preprocessSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesCountBuffer", '"' + VkHandleToString(obj.sequencesCountBuffer) + '"');
            FieldToString(strStrm, false, "sequencesCountOffset", ToString(obj.sequencesCountOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sequencesIndexBuffer", '"' + VkHandleToString(obj.sequencesIndexBuffer) + '"');
            FieldToString(strStrm, false, "sequencesIndexOffset", ToString(obj.sequencesIndexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(obj.pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", '"' + VkHandleToString(obj.pipeline) + '"');
            FieldToString(strStrm, false, "indirectCommandsLayout", '"' + VkHandleToString(obj.indirectCommandsLayout) + '"');
            FieldToString(strStrm, false, "maxSequencesCount", ToString(obj.maxSequencesCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceInheritedViewportScissorFeaturesNV>(const VkPhysicalDeviceInheritedViewportScissorFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inheritedViewportScissor2D", ToString(obj.inheritedViewportScissor2D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCommandBufferInheritanceViewportScissorInfoNV>(const VkCommandBufferInheritanceViewportScissorInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportScissor2D", ToString(obj.viewportScissor2D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportDepthCount", ToString(obj.viewportDepthCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportDepths", (obj.pViewportDepths ? ToString(*obj.pViewportDepths, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "texelBufferAlignment", ToString(obj.texelBufferAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "renderArea", ToString(obj.renderArea, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDeviceMemoryReportFeaturesEXT>(const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceMemoryReport", ToString(obj.deviceMemoryReport, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceMemoryReportCallbackDataEXT>(const VkDeviceMemoryReportCallbackDataEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDeviceDeviceMemoryReportCreateInfoEXT>(const VkDeviceDeviceMemoryReportCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pfnUserCallback", "\"" + PtrToString(obj.pfnUserCallback) + "\"");
            FieldToString(strStrm, false, "pUserData", "\"" + PtrToString(obj.pUserData) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustBufferAccess2", ToString(obj.robustBufferAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustImageAccess2", ToString(obj.robustImageAccess2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nullDescriptor", ToString(obj.nullDescriptor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustStorageBufferAccessSizeAlignment", ToString(obj.robustStorageBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "robustUniformBufferAccessSizeAlignment", ToString(obj.robustUniformBufferAccessSizeAlignment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColor", ToString(obj.customBorderColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxCustomBorderColorSamplers", ToString(obj.maxCustomBorderColorSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColors", ToString(obj.customBorderColors, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "customBorderColorWithoutFormat", ToString(obj.customBorderColorWithoutFormat, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePresentBarrierFeaturesNV>(const VkPhysicalDevicePresentBarrierFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrier", ToString(obj.presentBarrier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSurfaceCapabilitiesPresentBarrierNV>(const VkSurfaceCapabilitiesPresentBarrierNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrierSupported", ToString(obj.presentBarrierSupported, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSwapchainPresentBarrierCreateInfoNV>(const VkSwapchainPresentBarrierCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "presentBarrierEnable", ToString(obj.presentBarrierEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "diagnosticsConfig", ToString(obj.diagnosticsConfig, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT>(const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibrary", ToString(obj.graphicsPipelineLibrary, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT>(const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryFastLinking", ToString(obj.graphicsPipelineLibraryFastLinking, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "graphicsPipelineLibraryIndependentInterpolationDecoration", ToString(obj.graphicsPipelineLibraryIndependentInterpolationDecoration, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkGraphicsPipelineLibraryCreateInfoEXT>(const VkGraphicsPipelineLibraryCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD>(const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderEarlyAndLateFragmentTests", ToString(obj.shaderEarlyAndLateFragmentTests, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV>(const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentShadingRateEnums", ToString(obj.fragmentShadingRateEnums, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "supersampleFragmentShadingRates", ToString(obj.supersampleFragmentShadingRates, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "noInvocationFragmentShadingRates", ToString(obj.noInvocationFragmentShadingRates, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV>(const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxFragmentShadingRateInvocationCount", '"' + ToString(obj.maxFragmentShadingRateInvocationCount, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPipelineFragmentShadingRateEnumStateCreateInfoNV>(const VkPipelineFragmentShadingRateEnumStateCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shadingRateType", '"' + ToString(obj.shadingRateType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "shadingRate", '"' + ToString(obj.shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "combinerOps", ArrayToString(2, obj.combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureGeometryMotionTrianglesDataNV>(const VkAccelerationStructureGeometryMotionTrianglesDataNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexData", ToString(obj.vertexData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureMotionInfoNV>(const VkAccelerationStructureMotionInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxInstances", ToString(obj.maxInstances, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureMatrixMotionInstanceNV>(const VkAccelerationStructureMatrixMotionInstanceNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", ToString(obj.transformT0, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", ToString(obj.transformT1, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSRTDataNV>(const VkSRTDataNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkAccelerationStructureSRTMotionInstanceNV>(const VkAccelerationStructureSRTMotionInstanceNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "transformT0", ToString(obj.transformT0, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformT1", ToString(obj.transformT1, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCustomIndex", ToString(obj.instanceCustomIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mask", ToString(obj.mask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceShaderBindingTableRecordOffset", ToString(obj.instanceShaderBindingTableRecordOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureReference", ToString(obj.accelerationStructureReference, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayTracingMotionBlurFeaturesNV>(const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlur", ToString(obj.rayTracingMotionBlur, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingMotionBlurPipelineTraceRaysIndirect", ToString(obj.rayTracingMotionBlurPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT>(const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ycbcr2plane444Formats", ToString(obj.ycbcr2plane444Formats, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapDeferred", ToString(obj.fragmentDensityMapDeferred, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledLoads", ToString(obj.subsampledLoads, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subsampledCoarseReconstructionEarlyAccess", ToString(obj.subsampledCoarseReconstructionEarlyAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxSubsampledArrayLayers", ToString(obj.maxSubsampledArrayLayers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDescriptorSetSubsampledSamplers", ToString(obj.maxDescriptorSetSubsampledSamplers, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyCommandTransformInfoQCOM>(const VkCopyCommandTransformInfoQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transform", '"' + ToString(obj.transform, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageCompressionControlFeaturesEXT>(const VkPhysicalDeviceImageCompressionControlFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControl", ToString(obj.imageCompressionControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageCompressionControlEXT>(const VkImageCompressionControlEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compressionControlPlaneCount", ToString(obj.compressionControlPlaneCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFixedRateFlags", ArrayToString(obj.compressionControlPlaneCount, obj.pFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubresourceLayout2EXT>(const VkSubresourceLayout2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subresourceLayout", ToString(obj.subresourceLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageSubresource2EXT>(const VkImageSubresource2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageSubresource", ToString(obj.imageSubresource, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageCompressionPropertiesEXT>(const VkImageCompressionPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFlags", ToString(obj.imageCompressionFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionFixedRateFlags", ToString(obj.imageCompressionFixedRateFlags, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT>(const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentFeedbackLoopLayout", ToString(obj.attachmentFeedbackLoopLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevice4444FormatsFeaturesEXT>(const VkPhysicalDevice4444FormatsFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4R4G4B4", ToString(obj.formatA4R4G4B4, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatA4B4G4R4", ToString(obj.formatA4B4G4R4, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFaultFeaturesEXT>(const VkPhysicalDeviceFaultFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceFault", ToString(obj.deviceFault, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "deviceFaultVendorBinary", ToString(obj.deviceFaultVendorBinary, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceFaultCountsEXT>(const VkDeviceFaultCountsEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "addressInfoCount", ToString(obj.addressInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorInfoCount", ToString(obj.vendorInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorBinarySize", ToString(obj.vendorBinarySize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceFaultAddressInfoEXT>(const VkDeviceFaultAddressInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "addressType", '"' + ToString(obj.addressType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "reportedAddress", ToString(obj.reportedAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "addressPrecision", ToString(obj.addressPrecision, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceFaultVendorInfoEXT>(const VkDeviceFaultVendorInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "vendorFaultCode", ToString(obj.vendorFaultCode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vendorFaultData", ToString(obj.vendorFaultData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceFaultInfoEXT>(const VkDeviceFaultInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "pAddressInfos", (obj.pAddressInfos ? ToString(*obj.pAddressInfos, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pVendorInfos", (obj.pVendorInfos ? ToString(*obj.pVendorInfos, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pVendorBinaryData", "\"" + PtrToString(obj.pVendorBinaryData) + "\"");
        }
    );
}

template <> std::string ToString<VkDeviceFaultVendorBinaryHeaderVersionOneEXT>(const VkDeviceFaultVendorBinaryHeaderVersionOneEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT>(const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderColorAttachmentAccess", ToString(obj.rasterizationOrderColorAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderDepthAttachmentAccess", ToString(obj.rasterizationOrderDepthAttachmentAccess, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationOrderStencilAttachmentAccess", ToString(obj.rasterizationOrderStencilAttachmentAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT>(const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "formatRgba10x6WithoutYCbCrSampler", ToString(obj.formatRgba10x6WithoutYCbCrSampler, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dfb", "\"" + PtrToString(obj.dfb) + "\"");
            FieldToString(strStrm, false, "surface", "\"" + PtrToString(obj.surface) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT>(const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorType", ToString(obj.mutableDescriptorType, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMutableDescriptorTypeListEXT>(const VkMutableDescriptorTypeListEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "descriptorTypeCount", ToString(obj.descriptorTypeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorTypes", VkEnumArrayToString(obj.descriptorTypeCount, obj.pDescriptorTypes, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMutableDescriptorTypeCreateInfoEXT>(const VkMutableDescriptorTypeCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mutableDescriptorTypeListCount", ToString(obj.mutableDescriptorTypeListCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMutableDescriptorTypeLists", ArrayToString(obj.mutableDescriptorTypeListCount, obj.pMutableDescriptorTypeLists, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT>(const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexInputDynamicState", ToString(obj.vertexInputDynamicState, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkVertexInputBindingDescription2EXT>(const VkVertexInputBindingDescription2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "inputRate", '"' + ToString(obj.inputRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "divisor", ToString(obj.divisor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkVertexInputAttributeDescription2EXT>(const VkVertexInputAttributeDescription2EXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "location", ToString(obj.location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDrmPropertiesEXT>(const VkPhysicalDeviceDrmPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasPrimary", ToString(obj.hasPrimary, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hasRender", ToString(obj.hasRender, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMajor", ToString(obj.primaryMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primaryMinor", ToString(obj.primaryMinor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMajor", ToString(obj.renderMajor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "renderMinor", ToString(obj.renderMinor, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceAddressBindingReportFeaturesEXT>(const VkPhysicalDeviceAddressBindingReportFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reportAddressBinding", ToString(obj.reportAddressBinding, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDeviceAddressBindingCallbackDataEXT>(const VkDeviceAddressBindingCallbackDataEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseAddress", ToString(obj.baseAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingType", '"' + ToString(obj.bindingType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDepthClipControlFeaturesEXT>(const VkPhysicalDeviceDepthClipControlFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClipControl", ToString(obj.depthClipControl, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineViewportDepthClipControlCreateInfoEXT>(const VkPipelineViewportDepthClipControlCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "negativeOneToOne", ToString(obj.negativeOneToOne, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT>(const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyListRestart", ToString(obj.primitiveTopologyListRestart, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveTopologyPatchListRestart", ToString(obj.primitiveTopologyPatchListRestart, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImportMemoryZirconHandleInfoFUCHSIA>(const VkImportMemoryZirconHandleInfoFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", ToString(obj.handle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryZirconHandlePropertiesFUCHSIA>(const VkMemoryZirconHandlePropertiesFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryTypeBits", ToString(obj.memoryTypeBits, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryGetZirconHandleInfoFUCHSIA>(const VkMemoryGetZirconHandleInfoFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkImportSemaphoreZirconHandleInfoFUCHSIA>(const VkImportSemaphoreZirconHandleInfoFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "zirconHandle", ToString(obj.zirconHandle, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSemaphoreGetZirconHandleInfoFUCHSIA>(const VkSemaphoreGetZirconHandleInfoFUCHSIA& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", '"' + VkHandleToString(obj.semaphore) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceInvocationMaskFeaturesHUAWEI>(const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "invocationMask", ToString(obj.invocationMask, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMemoryGetRemoteAddressInfoNV>(const VkMemoryGetRemoteAddressInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memory", '"' + VkHandleToString(obj.memory) + '"');
            FieldToString(strStrm, false, "handleType", '"' + ToString(obj.handleType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExternalMemoryRDMAFeaturesNV>(const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalMemoryRDMA", ToString(obj.externalMemoryRDMA, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT>(const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampled", ToString(obj.multisampledRenderToSingleSampled, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassResolvePerformanceQueryEXT>(const VkSubpassResolvePerformanceQueryEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "optimal", ToString(obj.optimal, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMultisampledRenderToSingleSampledInfoEXT>(const VkMultisampledRenderToSingleSampledInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multisampledRenderToSingleSampledEnable", ToString(obj.multisampledRenderToSingleSampledEnable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(obj.rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExtendedDynamicState2FeaturesEXT>(const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2", ToString(obj.extendedDynamicState2, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2LogicOp", ToString(obj.extendedDynamicState2LogicOp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "extendedDynamicState2PatchControlPoints", ToString(obj.extendedDynamicState2PatchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkScreenSurfaceCreateInfoQNX>(const VkScreenSurfaceCreateInfoQNX& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "context", "\"" + PtrToString(obj.context) + "\"");
            FieldToString(strStrm, false, "window", "\"" + PtrToString(obj.window) + "\"");
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceColorWriteEnableFeaturesEXT>(const VkPhysicalDeviceColorWriteEnableFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "colorWriteEnable", ToString(obj.colorWriteEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPipelineColorWriteCreateInfoEXT>(const VkPipelineColorWriteCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(obj.attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorWriteEnables", ArrayToString(obj.attachmentCount, obj.pColorWriteEnables, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT>(const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQuery", ToString(obj.primitivesGeneratedQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithRasterizerDiscard", ToString(obj.primitivesGeneratedQueryWithRasterizerDiscard, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitivesGeneratedQueryWithNonZeroStreams", ToString(obj.primitivesGeneratedQueryWithNonZeroStreams, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageViewMinLodFeaturesEXT>(const VkPhysicalDeviceImageViewMinLodFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageViewMinLodCreateInfoEXT>(const VkImageViewMinLodCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "minLod", ToString(obj.minLod, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultiDrawFeaturesEXT>(const VkPhysicalDeviceMultiDrawFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiDraw", ToString(obj.multiDraw, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMultiDrawPropertiesEXT>(const VkPhysicalDeviceMultiDrawPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxMultiDrawCount", ToString(obj.maxMultiDrawCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMultiDrawInfoEXT>(const VkMultiDrawInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstVertex", ToString(obj.firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexCount", ToString(obj.vertexCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMultiDrawIndexedInfoEXT>(const VkMultiDrawIndexedInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "firstIndex", ToString(obj.firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexCount", ToString(obj.indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", ToString(obj.vertexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImage2DViewOf3DFeaturesEXT>(const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "image2DViewOf3D", ToString(obj.image2DViewOf3D, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "sampler2DViewOf3D", ToString(obj.sampler2DViewOf3D, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMicromapUsageEXT>(const VkMicromapUsageEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "count", ToString(obj.count, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subdivisionLevel", ToString(obj.subdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", ToString(obj.format, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMicromapBuildInfoEXT>(const VkMicromapBuildInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstMicromap", '"' + VkHandleToString(obj.dstMicromap) + '"');
            FieldToString(strStrm, false, "usageCountsCount", ToString(obj.usageCountsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUsageCounts", ArrayToString(obj.usageCountsCount, obj.pUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppUsageCounts", Array2DToString(obj.usageCountsCount, 1, obj.ppUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(obj.data, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scratchData", ToString(obj.scratchData, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleArray", ToString(obj.triangleArray, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "triangleArrayStride", ToString(obj.triangleArrayStride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMicromapCreateInfoEXT>(const VkMicromapCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "createFlags", ToString(obj.createFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceOpacityMicromapFeaturesEXT>(const VkPhysicalDeviceOpacityMicromapFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromap", ToString(obj.micromap, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapCaptureReplay", ToString(obj.micromapCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapHostCommands", ToString(obj.micromapHostCommands, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceOpacityMicromapPropertiesEXT>(const VkPhysicalDeviceOpacityMicromapPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxOpacity2StateSubdivisionLevel", ToString(obj.maxOpacity2StateSubdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxOpacity4StateSubdivisionLevel", ToString(obj.maxOpacity4StateSubdivisionLevel, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkMicromapVersionInfoEXT>(const VkMicromapVersionInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVersionData", ArrayToString(2*VK_UUID_SIZE, obj.pVersionData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkCopyMicromapToMemoryInfoEXT>(const VkCopyMicromapToMemoryInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", '"' + VkHandleToString(obj.src) + '"');
            FieldToString(strStrm, false, "dst", ToString(obj.dst, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkCopyMemoryToMicromapInfoEXT>(const VkCopyMemoryToMicromapInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", ToString(obj.src, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", '"' + VkHandleToString(obj.dst) + '"');
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkCopyMicromapInfoEXT>(const VkCopyMicromapInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", '"' + VkHandleToString(obj.src) + '"');
            FieldToString(strStrm, false, "dst", '"' + VkHandleToString(obj.dst) + '"');
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkMicromapBuildSizesInfoEXT>(const VkMicromapBuildSizesInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromapSize", ToString(obj.micromapSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buildScratchSize", ToString(obj.buildScratchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardable", ToString(obj.discardable, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureTrianglesOpacityMicromapEXT>(const VkAccelerationStructureTrianglesOpacityMicromapEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexBuffer", ToString(obj.indexBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexStride", ToString(obj.indexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseTriangle", ToString(obj.baseTriangle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usageCountsCount", ToString(obj.usageCountsCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pUsageCounts", ArrayToString(obj.usageCountsCount, obj.pUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppUsageCounts", Array2DToString(obj.usageCountsCount, 1, obj.ppUsageCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "micromap", '"' + VkHandleToString(obj.micromap) + '"');
        }
    );
}

template <> std::string ToString<VkMicromapTriangleEXT>(const VkMicromapTriangleEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "dataOffset", ToString(obj.dataOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subdivisionLevel", ToString(obj.subdivisionLevel, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", ToString(obj.format, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceBorderColorSwizzleFeaturesEXT>(const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzle", ToString(obj.borderColorSwizzle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "borderColorSwizzleFromImage", ToString(obj.borderColorSwizzleFromImage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSamplerBorderColorComponentMappingCreateInfoEXT>(const VkSamplerBorderColorComponentMappingCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "components", ToString(obj.components, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srgb", ToString(obj.srgb, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT>(const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pageableDeviceLocalMemory", ToString(obj.pageableDeviceLocalMemory, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE>(const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetHostMapping", ToString(obj.descriptorSetHostMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetBindingReferenceVALVE>(const VkDescriptorSetBindingReferenceVALVE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetLayout", '"' + VkHandleToString(obj.descriptorSetLayout) + '"');
            FieldToString(strStrm, false, "binding", ToString(obj.binding, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkDescriptorSetLayoutHostMappingInfoVALVE>(const VkDescriptorSetLayoutHostMappingInfoVALVE& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorOffset", ToString(obj.descriptorOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSize", ToString(obj.descriptorSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceDepthClampZeroOneFeaturesEXT>(const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthClampZeroOne", ToString(obj.depthClampZeroOne, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT>(const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "nonSeamlessCubeMap", ToString(obj.nonSeamlessCubeMap, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM>(const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityMapOffset", ToString(obj.fragmentDensityMapOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM>(const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetGranularity", ToString(obj.fragmentDensityOffsetGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkSubpassFragmentDensityMapOffsetEndInfoQCOM>(const VkSubpassFragmentDensityMapOffsetEndInfoQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fragmentDensityOffsetCount", ToString(obj.fragmentDensityOffsetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentDensityOffsets", ArrayToString(obj.fragmentDensityOffsetCount, obj.pFragmentDensityOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceLinearColorAttachmentFeaturesNV>(const VkPhysicalDeviceLinearColorAttachmentFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "linearColorAttachment", ToString(obj.linearColorAttachment, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT>(const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageCompressionControlSwapchain", ToString(obj.imageCompressionControlSwapchain, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkImageViewSampleWeightCreateInfoQCOM>(const VkImageViewSampleWeightCreateInfoQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterCenter", ToString(obj.filterCenter, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filterSize", ToString(obj.filterSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "numPhases", ToString(obj.numPhases, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageProcessingFeaturesQCOM>(const VkPhysicalDeviceImageProcessingFeaturesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureSampleWeighted", ToString(obj.textureSampleWeighted, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBoxFilter", ToString(obj.textureBoxFilter, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "textureBlockMatch", ToString(obj.textureBlockMatch, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceImageProcessingPropertiesQCOM>(const VkPhysicalDeviceImageProcessingPropertiesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterPhases", ToString(obj.maxWeightFilterPhases, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxWeightFilterDimension", ToString(obj.maxWeightFilterDimension, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBlockMatchRegion", ToString(obj.maxBlockMatchRegion, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxBoxFilterBlockSize", ToString(obj.maxBoxFilterBlockSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceExtendedDynamicState3FeaturesEXT>(const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkPhysicalDeviceExtendedDynamicState3PropertiesEXT>(const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicPrimitiveTopologyUnrestricted", ToString(obj.dynamicPrimitiveTopologyUnrestricted, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkColorBlendEquationEXT>(const VkColorBlendEquationEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkColorBlendAdvancedEXT>(const VkColorBlendAdvancedEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT>(const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "subpassMergeFeedback", ToString(obj.subpassMergeFeedback, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassCreationControlEXT>(const VkRenderPassCreationControlEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "disallowMerging", ToString(obj.disallowMerging, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassCreationFeedbackInfoEXT>(const VkRenderPassCreationFeedbackInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "postMergeSubpassCount", ToString(obj.postMergeSubpassCount, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassCreationFeedbackCreateInfoEXT>(const VkRenderPassCreationFeedbackCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPassFeedback", (obj.pRenderPassFeedback ? ToString(*obj.pRenderPassFeedback, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkRenderPassSubpassFeedbackInfoEXT>(const VkRenderPassSubpassFeedbackInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "subpassMergeStatus", '"' + ToString(obj.subpassMergeStatus, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "description", CStrToString(obj.description));
            FieldToString(strStrm, false, "postMergeIndex", ToString(obj.postMergeIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRenderPassSubpassFeedbackCreateInfoEXT>(const VkRenderPassSubpassFeedbackCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassFeedback", (obj.pSubpassFeedback ? ToString(*obj.pSubpassFeedback, toStringFlags, tabCount, tabSize) : "null"));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT>(const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifier", ToString(obj.shaderModuleIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT>(const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderModuleIdentifierAlgorithmUUID", '"' + UIDToString(VK_UUID_SIZE, obj.shaderModuleIdentifierAlgorithmUUID) + '"');
        }
    );
}

template <> std::string ToString<VkPipelineShaderStageModuleIdentifierCreateInfoEXT>(const VkPipelineShaderStageModuleIdentifierCreateInfoEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIdentifier", ArrayToString(obj.identifierSize, obj.pIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkShaderModuleIdentifierEXT>(const VkShaderModuleIdentifierEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifierSize", ToString(obj.identifierSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "identifier", ArrayToString(VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT, obj.identifier, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceOpticalFlowFeaturesNV>(const VkPhysicalDeviceOpticalFlowFeaturesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "opticalFlow", ToString(obj.opticalFlow, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceOpticalFlowPropertiesNV>(const VkPhysicalDeviceOpticalFlowPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkOpticalFlowImageFormatInfoNV>(const VkOpticalFlowImageFormatInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "usage", ToString(obj.usage, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkOpticalFlowImageFormatPropertiesNV>(const VkOpticalFlowImageFormatPropertiesNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "format", '"' + ToString(obj.format, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkOpticalFlowSessionCreateInfoNV>(const VkOpticalFlowSessionCreateInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkOpticalFlowSessionCreatePrivateDataInfoNV>(const VkOpticalFlowSessionCreatePrivateDataInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "id", ToString(obj.id, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPrivateData", "\"" + PtrToString(obj.pPrivateData) + "\"");
        }
    );
}

template <> std::string ToString<VkOpticalFlowExecuteInfoNV>(const VkOpticalFlowExecuteInfoNV& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "regionCount", ToString(obj.regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", ArrayToString(obj.regionCount, obj.pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceLegacyDitheringFeaturesEXT>(const VkPhysicalDeviceLegacyDitheringFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "legacyDithering", ToString(obj.legacyDithering, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDevicePipelineProtectedAccessFeaturesEXT>(const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pipelineProtectedAccess", ToString(obj.pipelineProtectedAccess, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceTilePropertiesFeaturesQCOM>(const VkPhysicalDeviceTilePropertiesFeaturesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileProperties", ToString(obj.tileProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkTilePropertiesQCOM>(const VkTilePropertiesQCOM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tileSize", ToString(obj.tileSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "apronSize", ToString(obj.apronSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "origin", ToString(obj.origin, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceAmigoProfilingFeaturesSEC>(const VkPhysicalDeviceAmigoProfilingFeaturesSEC& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "amigoProfiling", ToString(obj.amigoProfiling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAmigoProfilingSubmitInfoSEC>(const VkAmigoProfilingSubmitInfoSEC& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstDrawTimestamp", ToString(obj.firstDrawTimestamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "swapBufferTimestamp", ToString(obj.swapBufferTimestamp, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM>(const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreBuiltins", ToString(obj.shaderCoreBuiltins, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM>(const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderCoreCount", ToString(obj.shaderCoreCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "shaderWarpsPerCore", ToString(obj.shaderWarpsPerCore, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureBuildRangeInfoKHR>(const VkAccelerationStructureBuildRangeInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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

template <> std::string ToString<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexFormat", '"' + ToString(obj.vertexFormat, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "vertexData", ToString(obj.vertexData, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", ToString(obj.vertexStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxVertex", ToString(obj.maxVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(obj.indexType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "indexData", ToString(obj.indexData, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "transformData", ToString(obj.transformData, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(obj.data, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "arrayOfPointers", ToString(obj.arrayOfPointers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(obj.data, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "createFlags", ToString(obj.createFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buffer", '"' + VkHandleToString(obj.buffer) + '"');
            FieldToString(strStrm, false, "offset", ToString(obj.offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(obj.accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", VkHandleArrayToString(obj.accelerationStructureCount, obj.pAccelerationStructures, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceAccelerationStructureFeaturesKHR>(const VkPhysicalDeviceAccelerationStructureFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", ToString(obj.accelerationStructure, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureCaptureReplay", ToString(obj.accelerationStructureCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureIndirectBuild", ToString(obj.accelerationStructureIndirectBuild, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureHostCommands", ToString(obj.accelerationStructureHostCommands, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorBindingAccelerationStructureUpdateAfterBind", ToString(obj.descriptorBindingAccelerationStructureUpdateAfterBind, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceAccelerationStructurePropertiesKHR>(const VkPhysicalDeviceAccelerationStructurePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructure", '"' + VkHandleToString(obj.accelerationStructure) + '"');
        }
    );
}

template <> std::string ToString<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", '"' + VkHandleToString(obj.src) + '"');
            FieldToString(strStrm, false, "dst", ToString(obj.dst, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", ToString(obj.src, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", '"' + VkHandleToString(obj.dst) + '"');
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "src", '"' + VkHandleToString(obj.src) + '"');
            FieldToString(strStrm, false, "dst", '"' + VkHandleToString(obj.dst) + '"');
            FieldToString(strStrm, false, "mode", '"' + ToString(obj.mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

template <> std::string ToString<VkAccelerationStructureBuildSizesInfoKHR>(const VkAccelerationStructureBuildSizesInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "accelerationStructureSize", ToString(obj.accelerationStructureSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "updateScratchSize", ToString(obj.updateScratchSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "buildScratchSize", ToString(obj.buildScratchSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "type", '"' + ToString(obj.type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "generalShader", ToString(obj.generalShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "closestHitShader", ToString(obj.closestHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "anyHitShader", ToString(obj.anyHitShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "intersectionShader", ToString(obj.intersectionShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShaderGroupCaptureReplayHandle", "\"" + PtrToString(obj.pShaderGroupCaptureReplayHandle) + "\"");
        }
    );
}

template <> std::string ToString<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayPayloadSize", ToString(obj.maxPipelineRayPayloadSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayHitAttributeSize", ToString(obj.maxPipelineRayHitAttributeSize, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(obj.flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stageCount", ToString(obj.stageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStages", ArrayToString(obj.stageCount, obj.pStages, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(obj.groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGroups", ArrayToString(obj.groupCount, obj.pGroups, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxPipelineRayRecursionDepth", ToString(obj.maxPipelineRayRecursionDepth, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLibraryInfo", (obj.pLibraryInfo ? ToString(*obj.pLibraryInfo, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pLibraryInterface", (obj.pLibraryInterface ? ToString(*obj.pLibraryInterface, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "pDynamicState", (obj.pDynamicState ? ToString(*obj.pDynamicState, toStringFlags, tabCount, tabSize) : "null"));
            FieldToString(strStrm, false, "layout", '"' + VkHandleToString(obj.layout) + '"');
            FieldToString(strStrm, false, "basePipelineHandle", '"' + VkHandleToString(obj.basePipelineHandle) + '"');
            FieldToString(strStrm, false, "basePipelineIndex", ToString(obj.basePipelineIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayTracingPipelineFeaturesKHR>(const VkPhysicalDeviceRayTracingPipelineFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipeline", ToString(obj.rayTracingPipeline, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplay", ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplay, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineShaderGroupHandleCaptureReplayMixed", ToString(obj.rayTracingPipelineShaderGroupHandleCaptureReplayMixed, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTracingPipelineTraceRaysIndirect", ToString(obj.rayTracingPipelineTraceRaysIndirect, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayTraversalPrimitiveCulling", ToString(obj.rayTraversalPrimitiveCulling, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayTracingPipelinePropertiesKHR>(const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkStridedDeviceAddressRegionKHR>(const VkStridedDeviceAddressRegionKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "deviceAddress", ToString(obj.deviceAddress, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(obj.stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(obj.size, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "width", ToString(obj.width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(obj.height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(obj.depth, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceRayQueryFeaturesKHR>(const VkPhysicalDeviceRayQueryFeaturesKHR& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rayQuery", ToString(obj.rayQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMeshShaderFeaturesEXT>(const VkPhysicalDeviceMeshShaderFeaturesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "taskShader", ToString(obj.taskShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShader", ToString(obj.meshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "multiviewMeshShader", ToString(obj.multiviewMeshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "primitiveFragmentShadingRateMeshShader", ToString(obj.primitiveFragmentShadingRateMeshShader, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "meshShaderQueries", ToString(obj.meshShaderQueries, toStringFlags, tabCount, tabSize));
        }
    );
}

template <> std::string ToString<VkPhysicalDeviceMeshShaderPropertiesEXT>(const VkPhysicalDeviceMeshShaderPropertiesEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
    return ObjectToString(toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "sType", '"' + ToString(obj.sType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pNext", PNextToString(obj.pNext, toStringFlags, tabCount, tabSize));
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

template <> std::string ToString<VkDrawMeshTasksIndirectCommandEXT>(const VkDrawMeshTasksIndirectCommandEXT& obj, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize)
{
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
