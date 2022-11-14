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

#include "generated/generated_vulkan_ascii_consumer.h"
#include "decode/custom_vulkan_ascii_consumer.h"
#include "util/custom_vulkan_to_string.h"
#include "generated/generated_vulkan_enum_to_string.h"
#include "generated/generated_vulkan_struct_to_string.h"
#include "util/defines.h"
#include "vulkan/vulkan.h"
GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

void VulkanAsciiConsumer::Process_vkCreateInstance(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    StructPointerDecoder<Decoded_VkInstanceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkInstance>*           pInstance)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateInstance", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInstance", HandlePointerDecoderToString(pInstance));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyInstance(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyInstance", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDevices(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceCount,
    HandlePointerDecoder<VkPhysicalDevice>*     pPhysicalDevices)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkEnumeratePhysicalDevices", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pPhysicalDeviceCount", PointerDecoderToString(pPhysicalDeviceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDevices", HandlePointerDecoderArrayToString(pPhysicalDeviceCount, pPhysicalDevices, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>* pFeatures)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFeatures", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFeatures", PointerDecoderToString(pFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties>* pFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFormatProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pFormatProperties", PointerDecoderToString(pFormatProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    StructPointerDecoder<Decoded_VkImageFormatProperties>* pImageFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceImageFormatProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", '"' + ToString(tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageFormatProperties", PointerDecoderToString(pImageFormatProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties>* pQueueFamilyProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceQueueFamilyProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pQueueFamilyPropertyCount", PointerDecoderToString(pQueueFamilyPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyProperties", PointerDecoderArrayToString(*pQueueFamilyProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties>* pMemoryProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceMemoryProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pMemoryProperties", PointerDecoderToString(pMemoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDevice(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDeviceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDevice>*             pDevice)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDevice", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDevice", HandlePointerDecoderToString(pDevice));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDevice(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDevice", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    queueFamilyIndex,
    uint32_t                                    queueIndex,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceQueue", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queueIndex", ToString(queueIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueue", HandlePointerDecoderToString(pQueue));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueSubmit(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo>* pSubmits,
    format::HandleId                            fence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueSubmit", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "submitCount", ToString(submitCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubmits", PointerDecoderArrayToString(*pSubmits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkQueueWaitIdle(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueWaitIdle", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDeviceWaitIdle(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDeviceWaitIdle", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAllocateMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryAllocateInfo>* pAllocateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeviceMemory>*       pMemory)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAllocateMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pAllocateInfo", PointerDecoderToString(pAllocateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemory", HandlePointerDecoderToString(pMemory));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkFreeMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkFreeMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkMapMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkDeviceSize                                offset,
    VkDeviceSize                                size,
    VkMemoryMapFlags                            flags,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkMapMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "ppData", DataPointerDecoderToString(ppData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkUnmapMemory(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkUnmapMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
        }
    );
}

void VulkanAsciiConsumer::Process_vkFlushMappedMemoryRanges(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    StructPointerDecoder<Decoded_VkMappedMemoryRange>* pMemoryRanges)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkFlushMappedMemoryRanges", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memoryRangeCount", ToString(memoryRangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRanges", PointerDecoderArrayToString(*pMemoryRanges, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkInvalidateMappedMemoryRanges(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    memoryRangeCount,
    StructPointerDecoder<Decoded_VkMappedMemoryRange>* pMemoryRanges)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkInvalidateMappedMemoryRanges", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memoryRangeCount", ToString(memoryRangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRanges", PointerDecoderArrayToString(*pMemoryRanges, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryCommitment(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    PointerDecoder<VkDeviceSize>*               pCommittedMemoryInBytes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceMemoryCommitment", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "pCommittedMemoryInBytes", PointerDecoderToString(pCommittedMemoryInBytes, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            buffer,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindBufferMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(memoryOffset, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkBindImageMemory(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    format::HandleId                            memory,
    VkDeviceSize                                memoryOffset)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindImageMemory", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "memoryOffset", ToString(memoryOffset, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkMemoryRequirements>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements>* pSparseMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageSparseMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pSparseMemoryRequirementCount", PointerDecoderToString(pSparseMemoryRequirementCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirements", PointerDecoderArrayToString(*pSparseMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkSampleCountFlagBits                       samples,
    VkImageUsageFlags                           usage,
    VkImageTiling                               tiling,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSparseImageFormatProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "samples", '"' + ToString(samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "tiling", '"' + ToString(tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueBindSparse(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindSparseInfo>* pBindInfo,
    format::HandleId                            fence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueBindSparse", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfo", PointerDecoderArrayToString(*pBindInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateFence(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateFence", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFence", HandlePointerDecoderToString(pFence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyFence(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            fence,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyFence", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkResetFences(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    HandlePointerDecoder<VkFence>*              pFences)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetFences", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "fenceCount", ToString(fenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFences", HandlePointerDecoderArrayToString(fenceCount, pFences, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetFenceStatus(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            fence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetFenceStatus", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkWaitForFences(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    fenceCount,
    HandlePointerDecoder<VkFence>*              pFences,
    VkBool32                                    waitAll,
    uint64_t                                    timeout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWaitForFences", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "fenceCount", ToString(fenceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFences", HandlePointerDecoderArrayToString(fenceCount, pFences, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "waitAll", ToString(waitAll, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(timeout, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSemaphore>*          pSemaphore)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSemaphore", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSemaphore", HandlePointerDecoderToString(pSemaphore));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroySemaphore(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySemaphore", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "semaphore", HandleIdToString(semaphore));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkEventCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkEvent>*              pEvent)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEvent", HandlePointerDecoderToString(pEvent));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetEventStatus(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetEventStatus", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSetEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkResetEvent(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            event)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateQueryPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkQueryPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkQueryPool>*          pQueryPool)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateQueryPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueryPool", HandlePointerDecoderToString(pQueryPool));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyQueryPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetQueryPoolResults(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetQueryPoolResults", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryCount", ToString(queryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBuffer>*             pBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffer", HandlePointerDecoderToString(pBuffer));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            buffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateBufferView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkBufferView>*         pView)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateBufferView", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", HandlePointerDecoderToString(pView));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyBufferView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            bufferView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyBufferView", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bufferView", HandleIdToString(bufferView));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateImage(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImage>*              pImage)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImage", HandlePointerDecoderToString(pImage));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageSubresource>* pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout>* pLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageSubresourceLayout", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pSubresource", PointerDecoderToString(pSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayout", PointerDecoderToString(pLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateImageView(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkImageView>*          pView)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateImageView", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pView", HandlePointerDecoderToString(pView));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyImageView(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyImageView", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "imageView", HandleIdToString(imageView));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateShaderModule(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkShaderModule>*       pShaderModule)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateShaderModule", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShaderModule", HandlePointerDecoderToString(pShaderModule));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyShaderModule(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyShaderModule", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "shaderModule", HandleIdToString(shaderModule));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreatePipelineCache(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineCacheCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineCache>*      pPipelineCache)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreatePipelineCache", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineCache", HandlePointerDecoderToString(pPipelineCache));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineCache(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyPipelineCache", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPipelineCacheData(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPipelineCacheData", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "pDataSize", PointerDecoderToString(pDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkMergePipelineCaches(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    HandlePointerDecoder<VkPipelineCache>*      pSrcCaches)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkMergePipelineCaches", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "dstCache", HandleIdToString(dstCache));
            FieldToString(strStrm, false, "srcCacheCount", ToString(srcCacheCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSrcCaches", HandlePointerDecoderArrayToString(srcCacheCount, pSrcCaches, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateGraphicsPipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkGraphicsPipelineCreateInfo>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateGraphicsPipelines", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "createInfoCount", ToString(createInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfos", PointerDecoderArrayToString(*pCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", HandlePointerDecoderArrayToString(createInfoCount, pPipelines, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateComputePipelines(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkComputePipelineCreateInfo>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateComputePipelines", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "createInfoCount", ToString(createInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfos", PointerDecoderArrayToString(*pCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", HandlePointerDecoderArrayToString(createInfoCount, pPipelines, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyPipeline", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreatePipelineLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipelineLayout>*     pPipelineLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreatePipelineLayout", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelineLayout", HandlePointerDecoderToString(pPipelineLayout));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyPipelineLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            pipelineLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyPipelineLayout", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineLayout", HandleIdToString(pipelineLayout));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateSampler(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSampler>*            pSampler)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSampler", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSampler", HandlePointerDecoderToString(pSampler));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroySampler(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            sampler,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySampler", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "sampler", HandleIdToString(sampler));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorSetLayout>* pSetLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDescriptorSetLayout", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSetLayout", HandlePointerDecoderToString(pSetLayout));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorSetLayout(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSetLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDescriptorSetLayout", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorSetLayout", HandleIdToString(descriptorSetLayout));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorPool>*     pDescriptorPool)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDescriptorPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorPool", HandlePointerDecoderToString(pDescriptorPool));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDescriptorPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorPool", HandleIdToString(descriptorPool));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkResetDescriptorPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    VkDescriptorPoolResetFlags                  flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetDescriptorPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorPool", HandleIdToString(descriptorPool));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkFreeDescriptorSets(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            descriptorPool,
    uint32_t                                    descriptorSetCount,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkFreeDescriptorSets", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorPool", HandleIdToString(descriptorPool));
            FieldToString(strStrm, false, "descriptorSetCount", ToString(descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorSets", HandlePointerDecoderArrayToString(descriptorSetCount, pDescriptorSets, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkUpdateDescriptorSets(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    descriptorWriteCount,
    StructPointerDecoder<Decoded_VkWriteDescriptorSet>* pDescriptorWrites,
    uint32_t                                    descriptorCopyCount,
    StructPointerDecoder<Decoded_VkCopyDescriptorSet>* pDescriptorCopies)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkUpdateDescriptorSets", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorWriteCount", ToString(descriptorWriteCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorWrites", PointerDecoderArrayToString(*pDescriptorWrites, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorCopyCount", ToString(descriptorCopyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorCopies", PointerDecoderArrayToString(*pDescriptorCopies, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateFramebuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFramebufferCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFramebuffer>*        pFramebuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateFramebuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFramebuffer", HandlePointerDecoderToString(pFramebuffer));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyFramebuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyFramebuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "framebuffer", HandleIdToString(framebuffer));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateRenderPass", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPass", HandlePointerDecoderToString(pRenderPass));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyRenderPass", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "renderPass", HandleIdToString(renderPass));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetRenderAreaGranularity(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            renderPass,
    StructPointerDecoder<Decoded_VkExtent2D>*   pGranularity)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRenderAreaGranularity", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "renderPass", HandleIdToString(renderPass));
            FieldToString(strStrm, false, "pGranularity", PointerDecoderToString(pGranularity, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkCommandPoolCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkCommandPool>*        pCommandPool)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateCommandPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandPool", HandlePointerDecoderToString(pCommandPool));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyCommandPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "commandPool", HandleIdToString(commandPool));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkResetCommandPool(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolResetFlags                     flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetCommandPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "commandPool", HandleIdToString(commandPool));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkFreeCommandBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    uint32_t                                    commandBufferCount,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkFreeCommandBuffers", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "commandPool", HandleIdToString(commandPool));
            FieldToString(strStrm, false, "commandBufferCount", ToString(commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBuffers", HandlePointerDecoderArrayToString(commandBufferCount, pCommandBuffers, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBeginCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCommandBufferBeginInfo>* pBeginInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBeginCommandBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pBeginInfo", PointerDecoderToString(pBeginInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkEndCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkEndCommandBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkResetCommandBuffer(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    VkCommandBufferResetFlags                   flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetCommandBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindPipeline(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindPipeline", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>*   pViewports)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewport", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstViewport", ToString(firstViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", PointerDecoderArrayToString(*pViewports, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetScissor(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstScissor,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pScissors)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetScissor", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstScissor", ToString(firstScissor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "scissorCount", ToString(scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", PointerDecoderArrayToString(*pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLineWidth(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       lineWidth)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLineWidth", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "lineWidth", ToString(lineWidth, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBias(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       depthBiasConstantFactor,
    float                                       depthBiasClamp,
    float                                       depthBiasSlopeFactor)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBias", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthBiasConstantFactor", ToString(depthBiasConstantFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasClamp", ToString(depthBiasClamp, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depthBiasSlopeFactor", ToString(depthBiasSlopeFactor, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetBlendConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    PointerDecoder<float>*                      blendConstants)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetBlendConstants", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "blendConstants", PointerDecoderArrayToString(4, blendConstants, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBounds(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       minDepthBounds,
    float                                       maxDepthBounds)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBounds", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "minDepthBounds", ToString(minDepthBounds, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDepthBounds", ToString(maxDepthBounds, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilCompareMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    compareMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilCompareMask", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "faceMask", ToString(faceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "compareMask", ToString(compareMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilWriteMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    writeMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilWriteMask", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "faceMask", ToString(faceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "writeMask", ToString(writeMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilReference(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    uint32_t                                    reference)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilReference", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "faceMask", ToString(faceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "reference", ToString(reference, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindDescriptorSets(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    firstSet,
    uint32_t                                    descriptorSetCount,
    HandlePointerDecoder<VkDescriptorSet>*      pDescriptorSets,
    uint32_t                                    dynamicOffsetCount,
    PointerDecoder<uint32_t>*                   pDynamicOffsets)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindDescriptorSets", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "layout", HandleIdToString(layout));
            FieldToString(strStrm, false, "firstSet", ToString(firstSet, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorSetCount", ToString(descriptorSetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorSets", HandlePointerDecoderArrayToString(descriptorSetCount, pDescriptorSets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dynamicOffsetCount", ToString(dynamicOffsetCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDynamicOffsets", PointerDecoderArrayToString(dynamicOffsetCount, pDynamicOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindIndexBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    VkIndexType                                 indexType)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindIndexBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indexType", '"' + ToString(indexType, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindVertexBuffers", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstBinding", ToString(firstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffers", HandlePointerDecoderArrayToString(bindingCount, pBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pOffsets", PointerDecoderArrayToString(bindingCount, pOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDraw(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstVertex,
    uint32_t                                    firstInstance)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDraw", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "vertexCount", ToString(vertexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstVertex", ToString(firstVertex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexed(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    indexCount,
    uint32_t                                    instanceCount,
    uint32_t                                    firstIndex,
    int32_t                                     vertexOffset,
    uint32_t                                    firstInstance)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndexed", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "indexCount", ToString(indexCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstIndex", ToString(firstIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexOffset", ToString(vertexOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(firstInstance, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndirect", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndexedIndirect", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDispatch(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDispatch", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "groupCountX", ToString(groupCountX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountY", ToString(groupCountY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountZ", ToString(groupCountZ, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDispatchIndirect(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDispatchIndirect", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferCopy>* pRegions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcBuffer", HandleIdToString(srcBuffer));
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageCopy>*  pRegions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcImage", HandleIdToString(srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", HandleIdToString(dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageBlit>*  pRegions,
    VkFilter                                    filter)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBlitImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcImage", HandleIdToString(srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", HandleIdToString(dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "filter", '"' + ToString(filter, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcBuffer,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferImageCopy>* pRegions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBufferToImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcBuffer", HandleIdToString(srcBuffer));
            FieldToString(strStrm, false, "dstImage", HandleIdToString(dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstBuffer,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkBufferImageCopy>* pRegions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImageToBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcImage", HandleIdToString(srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdUpdateBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdUpdateBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "dstOffset", ToString(dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdFillBuffer(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                size,
    uint32_t                                    data)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdFillBuffer", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "dstOffset", ToString(dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "data", ToString(data, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdClearColorImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    StructPointerDecoder<Decoded_VkClearColorValue>* pColor,
    uint32_t                                    rangeCount,
    StructPointerDecoder<Decoded_VkImageSubresourceRange>* pRanges)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdClearColorImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pColor", PointerDecoderToString(pColor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rangeCount", ToString(rangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRanges", PointerDecoderArrayToString(*pRanges, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdClearDepthStencilImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            image,
    VkImageLayout                               imageLayout,
    StructPointerDecoder<Decoded_VkClearDepthStencilValue>* pDepthStencil,
    uint32_t                                    rangeCount,
    StructPointerDecoder<Decoded_VkImageSubresourceRange>* pRanges)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdClearDepthStencilImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(imageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pDepthStencil", PointerDecoderToString(pDepthStencil, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rangeCount", ToString(rangeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRanges", PointerDecoderArrayToString(*pRanges, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdClearAttachments(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkClearAttachment>* pAttachments,
    uint32_t                                    rectCount,
    StructPointerDecoder<Decoded_VkClearRect>*  pRects)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdClearAttachments", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAttachments", PointerDecoderArrayToString(*pAttachments, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "rectCount", ToString(rectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRects", PointerDecoderArrayToString(*pRects, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            srcImage,
    VkImageLayout                               srcImageLayout,
    format::HandleId                            dstImage,
    VkImageLayout                               dstImageLayout,
    uint32_t                                    regionCount,
    StructPointerDecoder<Decoded_VkImageResolve>* pRegions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResolveImage", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcImage", HandleIdToString(srcImage));
            FieldToString(strStrm, false, "srcImageLayout", '"' + ToString(srcImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstImage", HandleIdToString(dstImage));
            FieldToString(strStrm, false, "dstImageLayout", '"' + ToString(dstImageLayout, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "regionCount", ToString(regionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRegions", PointerDecoderArrayToString(*pRegions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "stageMask", ToString(stageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags                        stageMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResetEvent", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "stageMask", ToString(stageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    uint32_t                                    memoryBarrierCount,
    StructPointerDecoder<Decoded_VkMemoryBarrier>* pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier>* pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkImageMemoryBarrier>* pImageMemoryBarriers)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWaitEvents", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "eventCount", ToString(eventCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEvents", HandlePointerDecoderArrayToString(eventCount, pEvents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "srcStageMask", ToString(srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryBarrierCount", ToString(memoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryBarriers", PointerDecoderArrayToString(*pMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferMemoryBarrierCount", ToString(bufferMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferMemoryBarriers", PointerDecoderArrayToString(*pBufferMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMemoryBarrierCount", ToString(imageMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageMemoryBarriers", PointerDecoderArrayToString(*pImageMemoryBarriers, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags                        srcStageMask,
    VkPipelineStageFlags                        dstStageMask,
    VkDependencyFlags                           dependencyFlags,
    uint32_t                                    memoryBarrierCount,
    StructPointerDecoder<Decoded_VkMemoryBarrier>* pMemoryBarriers,
    uint32_t                                    bufferMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkBufferMemoryBarrier>* pBufferMemoryBarriers,
    uint32_t                                    imageMemoryBarrierCount,
    StructPointerDecoder<Decoded_VkImageMemoryBarrier>* pImageMemoryBarriers)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPipelineBarrier", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "srcStageMask", ToString(srcStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstStageMask", ToString(dstStageMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dependencyFlags", ToString(dependencyFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "memoryBarrierCount", ToString(memoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryBarriers", PointerDecoderArrayToString(*pMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bufferMemoryBarrierCount", ToString(bufferMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBufferMemoryBarriers", PointerDecoderArrayToString(*pBufferMemoryBarriers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "imageMemoryBarrierCount", ToString(imageMemoryBarrierCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageMemoryBarriers", PointerDecoderArrayToString(*pImageMemoryBarriers, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginQuery", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndQuery(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndQuery", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResetQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResetQueryPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryCount", ToString(queryCount, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteTimestamp", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineStage", '"' + ToString(pipelineStage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyQueryPoolResults(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    VkDeviceSize                                stride,
    VkQueryResultFlags                          flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyQueryPoolResults", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryCount", ToString(queryCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "dstOffset", ToString(dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdPushConstants(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            layout,
    VkShaderStageFlags                          stageFlags,
    uint32_t                                    offset,
    uint32_t                                    size,
    PointerDecoder<uint8_t>*                    pValues)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPushConstants", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "layout", HandleIdToString(layout));
            FieldToString(strStrm, false, "stageFlags", ToString(stageFlags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "size", ToString(size, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pValues", DataPointerDecoderToString(pValues));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>* pRenderPassBegin,
    VkSubpassContents                           contents)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginRenderPass", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRenderPassBegin", PointerDecoderToString(pRenderPassBegin, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "contents", '"' + ToString(contents, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSubpassContents                           contents)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdNextSubpass", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "contents", '"' + ToString(contents, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndRenderPass", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdExecuteCommands(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    commandBufferCount,
    HandlePointerDecoder<VkCommandBuffer>*      pCommandBuffers)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdExecuteCommands", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "commandBufferCount", ToString(commandBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCommandBuffers", HandlePointerDecoderArrayToString(commandBufferCount, pCommandBuffers, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>* pBindInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindBufferMemory2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfos", PointerDecoderArrayToString(*pBindInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>* pBindInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindImageMemory2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfos", PointerDecoderArrayToString(*pBindInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeatures(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceGroupPeerMemoryFeatures", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "heapIndex", ToString(heapIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDeviceIndex", ToString(localDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "remoteDeviceIndex", ToString(remoteDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPeerMemoryFeatures", PointerDecoderToString(pPeerMemoryFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMask(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDeviceMask", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "deviceMask", ToString(deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBase(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDispatchBase", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "baseGroupX", ToString(baseGroupX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseGroupY", ToString(baseGroupY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseGroupZ", ToString(baseGroupZ, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountX", ToString(groupCountX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountY", ToString(groupCountY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountZ", ToString(groupCountZ, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroups(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkEnumeratePhysicalDeviceGroups", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pPhysicalDeviceGroupCount", PointerDecoderToString(pPhysicalDeviceGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDeviceGroupProperties", PointerDecoderArrayToString(*pPhysicalDeviceGroupProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageMemoryRequirements2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferMemoryRequirements2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageSparseMemoryRequirements2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirementCount", PointerDecoderToString(pSparseMemoryRequirementCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirements", PointerDecoderArrayToString(*pSparseMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFeatures2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFeatures", PointerDecoderToString(pFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFormatProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pFormatProperties", PointerDecoderToString(pFormatProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>* pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceImageFormatProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pImageFormatInfo", PointerDecoderToString(pImageFormatInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageFormatProperties", PointerDecoderToString(pImageFormatProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceQueueFamilyProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pQueueFamilyPropertyCount", PointerDecoderToString(pQueueFamilyPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyProperties", PointerDecoderArrayToString(*pQueueFamilyProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceMemoryProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pMemoryProperties", PointerDecoderToString(pMemoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>* pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSparseImageFormatProperties2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFormatInfo", PointerDecoderToString(pFormatInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkTrimCommandPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkTrimCommandPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "commandPool", HandleIdToString(commandPool));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceQueue2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceQueueInfo2>* pQueueInfo,
    HandlePointerDecoder<VkQueue>*              pQueue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceQueue2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pQueueInfo", PointerDecoderToString(pQueueInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueue", HandlePointerDecoderToString(pQueue));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSamplerYcbcrConversion", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pYcbcrConversion", HandlePointerDecoderToString(pYcbcrConversion));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversion(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySamplerYcbcrConversion", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "ycbcrConversion", HandleIdToString(ycbcrConversion));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDescriptorUpdateTemplate", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorUpdateTemplate", HandlePointerDecoderToString(pDescriptorUpdateTemplate));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplate(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDescriptorUpdateTemplate", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorUpdateTemplate", HandleIdToString(descriptorUpdateTemplate));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>* pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalBufferProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalBufferInfo", PointerDecoderToString(pExternalBufferInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalBufferProperties", PointerDecoderToString(pExternalBufferProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFenceProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>* pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalFenceProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalFenceInfo", PointerDecoderToString(pExternalFenceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalFenceProperties", PointerDecoderToString(pExternalFenceProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphoreProperties(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>* pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalSemaphoreProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalSemaphoreInfo", PointerDecoderToString(pExternalSemaphoreInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalSemaphoreProperties", PointerDecoderToString(pExternalSemaphoreProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupport(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDescriptorSetLayoutSupport", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSupport", PointerDecoderToString(pSupport, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndirectCount", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndexedIndirectCount", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateRenderPass2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPass", HandlePointerDecoderToString(pRenderPass));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>* pRenderPassBegin,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>* pSubpassBeginInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginRenderPass2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRenderPassBegin", PointerDecoderToString(pRenderPassBegin, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassBeginInfo", PointerDecoderToString(pSubpassBeginInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>* pSubpassBeginInfo,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>* pSubpassEndInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdNextSubpass2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pSubpassBeginInfo", PointerDecoderToString(pSubpassBeginInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassEndInfo", PointerDecoderToString(pSubpassEndInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>* pSubpassEndInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndRenderPass2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pSubpassEndInfo", PointerDecoderToString(pSubpassEndInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkResetQueryPool(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetQueryPool", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryCount", ToString(queryCount, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValue(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSemaphoreCounterValue", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "semaphore", HandleIdToString(semaphore));
            FieldToString(strStrm, false, "pValue", PointerDecoderToString(pValue, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkWaitSemaphores(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo>* pWaitInfo,
    uint64_t                                    timeout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWaitSemaphores", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pWaitInfo", PointerDecoderToString(pWaitInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(timeout, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSignalSemaphore(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo>* pSignalInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSignalSemaphore", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pSignalInfo", PointerDecoderToString(pSignalInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddress(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferDeviceAddress", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferOpaqueCaptureAddress(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferOpaqueCaptureAddress", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryOpaqueCaptureAddress(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceMemoryOpaqueCaptureAddress", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceToolProperties(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pToolCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties>* pToolProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceToolProperties", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pToolCount", PointerDecoderToString(pToolCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pToolProperties", PointerDecoderArrayToString(*pToolProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreatePrivateDataSlot(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreatePrivateDataSlot", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPrivateDataSlot", HandlePointerDecoderToString(pPrivateDataSlot));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyPrivateDataSlot(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyPrivateDataSlot", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkSetPrivateData(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    uint64_t                                    data)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetPrivateData", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "objectType", '"' + ToString(objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "data", ToString(data, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPrivateData(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    PointerDecoder<uint64_t>*                   pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPrivateData", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "objectType", '"' + ToString(objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "pData", PointerDecoderToString(pData, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetEvent2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "pDependencyInfo", PointerDecoderToString(pDependencyInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags2                       stageMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResetEvent2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "stageMask", ToString(stageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWaitEvents2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "eventCount", ToString(eventCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEvents", HandlePointerDecoderArrayToString(eventCount, pEvents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencyInfos", PointerDecoderArrayToString(*pDependencyInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPipelineBarrier2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pDependencyInfo", PointerDecoderToString(pDependencyInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteTimestamp2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stage", ToString(stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueSubmit2(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo2>* pSubmits,
    format::HandleId                            fence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueSubmit2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "submitCount", ToString(submitCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubmits", PointerDecoderArrayToString(*pSubmits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferInfo2>* pCopyBufferInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBuffer2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyBufferInfo", PointerDecoderToString(pCopyBufferInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageInfo2>* pCopyImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImage2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyImageInfo", PointerDecoderToString(pCopyImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2>* pCopyBufferToImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBufferToImage2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyBufferToImageInfo", PointerDecoderToString(pCopyBufferToImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2>* pCopyImageToBufferInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImageToBuffer2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyImageToBufferInfo", PointerDecoderToString(pCopyImageToBufferInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkBlitImageInfo2>* pBlitImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBlitImage2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pBlitImageInfo", PointerDecoderToString(pBlitImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkResolveImageInfo2>* pResolveImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResolveImage2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pResolveImageInfo", PointerDecoderToString(pResolveImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginRendering(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderingInfo>* pRenderingInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginRendering", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRenderingInfo", PointerDecoderToString(pRenderingInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndRendering(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndRendering", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCullMode(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCullModeFlags                             cullMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCullMode", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "cullMode", ToString(cullMode, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetFrontFace(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFrontFace                                 frontFace)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetFrontFace", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "frontFace", '"' + ToString(frontFace, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPrimitiveTopology(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPrimitiveTopology                         primitiveTopology)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPrimitiveTopology", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "primitiveTopology", '"' + ToString(primitiveTopology, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportWithCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>*   pViewports)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportWithCount", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", PointerDecoderArrayToString(*pViewports, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetScissorWithCount(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pScissors)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetScissorWithCount", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "scissorCount", ToString(scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", PointerDecoderArrayToString(*pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers2(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes,
    PointerDecoder<VkDeviceSize>*               pStrides)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindVertexBuffers2", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstBinding", ToString(firstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffers", HandlePointerDecoderArrayToString(bindingCount, pBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pOffsets", PointerDecoderArrayToString(bindingCount, pOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSizes", PointerDecoderArrayToString(bindingCount, pSizes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStrides", PointerDecoderArrayToString(bindingCount, pStrides, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthTestEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthTestEnable", ToString(depthTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthWriteEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthWriteEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthWriteEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthWriteEnable", ToString(depthWriteEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthCompareOp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCompareOp                                 depthCompareOp)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthCompareOp", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthCompareOp", '"' + ToString(depthCompareOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBoundsTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBoundsTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBoundsTestEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthBoundsTestEnable", ToString(depthBoundsTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilTestEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stencilTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilTestEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stencilTestEnable", ToString(stencilTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilOp(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    VkStencilOp                                 failOp,
    VkStencilOp                                 passOp,
    VkStencilOp                                 depthFailOp,
    VkCompareOp                                 compareOp)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilOp", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "faceMask", ToString(faceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "failOp", '"' + ToString(failOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "passOp", '"' + ToString(passOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthFailOp", '"' + ToString(depthFailOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareOp", '"' + ToString(compareOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRasterizerDiscardEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    rasterizerDiscardEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRasterizerDiscardEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "rasterizerDiscardEnable", ToString(rasterizerDiscardEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBiasEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBiasEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBiasEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthBiasEnable", ToString(depthBiasEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPrimitiveRestartEnable(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    primitiveRestartEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPrimitiveRestartEnable", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "primitiveRestartEnable", ToString(primitiveRestartEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceBufferMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceBufferMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceImageMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceImageMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceImageSparseMemoryRequirements(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceImageSparseMemoryRequirements", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirementCount", PointerDecoderToString(pSparseMemoryRequirementCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirements", PointerDecoderArrayToString(*pSparseMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkDestroySurfaceKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceSupportKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    format::HandleId                            surface,
    PointerDecoder<VkBool32>*                   pSupported)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pSupported", PointerDecoderToString(pSupported, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilitiesKHR>* pSurfaceCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pSurfaceCapabilities", PointerDecoderToString(pSurfaceCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormatsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormatKHR>* pSurfaceFormats)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceFormatsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pSurfaceFormatCount", PointerDecoderToString(pSurfaceFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurfaceFormats", PointerDecoderArrayToString(*pSurfaceFormats, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfacePresentModesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pPresentModeCount", PointerDecoderToString(pPresentModeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentModes", EnumPointerDecoderArrayToString(pPresentModeCount, pPresentModes, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateSwapchainKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchain)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSwapchainKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchain", HandlePointerDecoderToString(pSwapchain));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroySwapchainKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySwapchainKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetSwapchainImagesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pSwapchainImageCount,
    HandlePointerDecoder<VkImage>*              pSwapchainImages)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSwapchainImagesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "pSwapchainImageCount", PointerDecoderToString(pSwapchainImageCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchainImages", HandlePointerDecoderArrayToString(pSwapchainImageCount, pSwapchainImages, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquireNextImageKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    timeout,
    format::HandleId                            semaphore,
    format::HandleId                            fence,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireNextImageKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "timeout", ToString(timeout, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "semaphore", HandleIdToString(semaphore));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
            FieldToString(strStrm, false, "pImageIndex", PointerDecoderToString(pImageIndex, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkQueuePresentKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkPresentInfoKHR>* pPresentInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueuePresentKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "pPresentInfo", PointerDecoderToString(pPresentInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPresentCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceGroupPresentCapabilitiesKHR>* pDeviceGroupPresentCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceGroupPresentCapabilitiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pDeviceGroupPresentCapabilities", PointerDecoderToString(pDeviceGroupPresentCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            surface,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceGroupSurfacePresentModesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pModes", PointerDecoderToString(pModes, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDevicePresentRectanglesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    PointerDecoder<uint32_t>*                   pRectCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pRects)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDevicePresentRectanglesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pRectCount", PointerDecoderToString(pRectCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRects", PointerDecoderArrayToString(*pRects, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquireNextImage2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAcquireNextImageInfoKHR>* pAcquireInfo,
    PointerDecoder<uint32_t>*                   pImageIndex)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireNextImage2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pAcquireInfo", PointerDecoderToString(pAcquireInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageIndex", PointerDecoderToString(pImageIndex, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPropertiesKHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceDisplayPropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlanePropertiesKHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneSupportedDisplaysKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    planeIndex,
    PointerDecoder<uint32_t>*                   pDisplayCount,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplays)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDisplayPlaneSupportedDisplaysKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "planeIndex", ToString(planeIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisplayCount", PointerDecoderToString(pDisplayCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisplays", HandlePointerDecoderArrayToString(pDisplayCount, pDisplays, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDisplayModePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModePropertiesKHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDisplayModePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateDisplayModeKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayModeCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDisplayModeKHR>*     pMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDisplayModeKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMode", HandlePointerDecoderToString(pMode));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilitiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            mode,
    uint32_t                                    planeIndex,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilitiesKHR>* pCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDisplayPlaneCapabilitiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "mode", HandleIdToString(mode));
            FieldToString(strStrm, false, "planeIndex", ToString(planeIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCapabilities", PointerDecoderToString(pCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateDisplayPlaneSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDisplaySurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDisplayPlaneSurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateSharedSwapchainsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    StructPointerDecoder<Decoded_VkSwapchainCreateInfoKHR>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSharedSwapchainsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchainCount", ToString(swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfos", PointerDecoderArrayToString(*pCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchains", HandlePointerDecoderArrayToString(swapchainCount, pSwapchains, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateXlibSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXlibSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateXlibSurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXlibPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dpy,
    size_t                                      visualID)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceXlibPresentationSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dpy", DataPointerDecoderToString(dpy));
            FieldToString(strStrm, false, "visualID", ToString(visualID, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateXcbSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkXcbSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateXcbSurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceXcbPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    connection,
    uint32_t                                    visual_id)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceXcbPresentationSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "connection", DataPointerDecoderToString(connection));
            FieldToString(strStrm, false, "visual_id", ToString(visual_id, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateWaylandSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWaylandSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateWaylandSurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWaylandPresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceWaylandPresentationSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", DataPointerDecoderToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateAndroidSurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkAndroidSurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateAndroidSurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateWin32SurfaceKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkWin32SurfaceCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateWin32SurfaceKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceWin32PresentationSupportKHR(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceWin32PresentationSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderingInfo>* pRenderingInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginRenderingKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRenderingInfo", PointerDecoderToString(pRenderingInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderingKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndRenderingKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFeatures2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures2>* pFeatures)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFeatures2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFeatures", PointerDecoderToString(pFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceProperties2>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    StructPointerDecoder<Decoded_VkFormatProperties2>* pFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFormatProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pFormatProperties", PointerDecoderToString(pFormatProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceImageFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceImageFormatInfo2>* pImageFormatInfo,
    StructPointerDecoder<Decoded_VkImageFormatProperties2>* pImageFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceImageFormatProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pImageFormatInfo", PointerDecoderToString(pImageFormatInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageFormatProperties", PointerDecoderToString(pImageFormatProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pQueueFamilyPropertyCount,
    StructPointerDecoder<Decoded_VkQueueFamilyProperties2>* pQueueFamilyProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceQueueFamilyProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pQueueFamilyPropertyCount", PointerDecoderToString(pQueueFamilyPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pQueueFamilyProperties", PointerDecoderArrayToString(*pQueueFamilyProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMemoryProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceMemoryProperties2>* pMemoryProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceMemoryProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pMemoryProperties", PointerDecoderToString(pMemoryProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSparseImageFormatInfo2>* pFormatInfo,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkSparseImageFormatProperties2>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFormatInfo", PointerDecoderToString(pFormatInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupPeerMemoryFeaturesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    heapIndex,
    uint32_t                                    localDeviceIndex,
    uint32_t                                    remoteDeviceIndex,
    PointerDecoder<VkPeerMemoryFeatureFlags>*   pPeerMemoryFeatures)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceGroupPeerMemoryFeaturesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "heapIndex", ToString(heapIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "localDeviceIndex", ToString(localDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "remoteDeviceIndex", ToString(remoteDeviceIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPeerMemoryFeatures", PointerDecoderToString(pPeerMemoryFeatures, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDeviceMaskKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    deviceMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDeviceMaskKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "deviceMask", ToString(deviceMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDispatchBaseKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    baseGroupX,
    uint32_t                                    baseGroupY,
    uint32_t                                    baseGroupZ,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDispatchBaseKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "baseGroupX", ToString(baseGroupX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseGroupY", ToString(baseGroupY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "baseGroupZ", ToString(baseGroupZ, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountX", ToString(groupCountX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountY", ToString(groupCountY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountZ", ToString(groupCountZ, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkTrimCommandPoolKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            commandPool,
    VkCommandPoolTrimFlags                      flags)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkTrimCommandPoolKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "commandPool", HandleIdToString(commandPool));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceGroupsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    PointerDecoder<uint32_t>*                   pPhysicalDeviceGroupCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceGroupProperties>* pPhysicalDeviceGroupProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkEnumeratePhysicalDeviceGroupsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pPhysicalDeviceGroupCount", PointerDecoderToString(pPhysicalDeviceGroupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPhysicalDeviceGroupProperties", PointerDecoderArrayToString(*pPhysicalDeviceGroupProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalBufferPropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalBufferInfo>* pExternalBufferInfo,
    StructPointerDecoder<Decoded_VkExternalBufferProperties>* pExternalBufferProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalBufferInfo", PointerDecoderToString(pExternalBufferInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalBufferProperties", PointerDecoderToString(pExternalBufferProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetWin32HandleInfoKHR>* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryWin32HandleKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetWin32HandleInfo", PointerDecoderToString(pGetWin32HandleInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHandle", DataPointerDecoderToString(pHandle));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandlePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    handle,
    StructPointerDecoder<Decoded_VkMemoryWin32HandlePropertiesKHR>* pMemoryWin32HandleProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryWin32HandlePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "handleType", '"' + ToString(handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "handle", DataPointerDecoderToString(handle));
            FieldToString(strStrm, false, "pMemoryWin32HandleProperties", PointerDecoderToString(pMemoryWin32HandleProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetFdInfoKHR>* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryFdKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetFdInfo", PointerDecoderToString(pGetFdInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFd", PointerDecoderToString(pFd, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryFdPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    int                                         fd,
    StructPointerDecoder<Decoded_VkMemoryFdPropertiesKHR>* pMemoryFdProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryFdPropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "handleType", '"' + ToString(handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "fd", ToString(fd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryFdProperties", PointerDecoderToString(pMemoryFdProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalSemaphoreInfo>* pExternalSemaphoreInfo,
    StructPointerDecoder<Decoded_VkExternalSemaphoreProperties>* pExternalSemaphoreProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalSemaphoreInfo", PointerDecoderToString(pExternalSemaphoreInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalSemaphoreProperties", PointerDecoderToString(pExternalSemaphoreProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkImportSemaphoreWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreWin32HandleInfoKHR>* pImportSemaphoreWin32HandleInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkImportSemaphoreWin32HandleKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pImportSemaphoreWin32HandleInfo", PointerDecoderToString(pImportSemaphoreWin32HandleInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetWin32HandleInfoKHR>* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSemaphoreWin32HandleKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetWin32HandleInfo", PointerDecoderToString(pGetWin32HandleInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHandle", DataPointerDecoderToString(pHandle));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkImportSemaphoreFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreFdInfoKHR>* pImportSemaphoreFdInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkImportSemaphoreFdKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pImportSemaphoreFdInfo", PointerDecoderToString(pImportSemaphoreFdInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetFdInfoKHR>* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSemaphoreFdKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetFdInfo", PointerDecoderToString(pGetFdInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFd", PointerDecoderToString(pFd, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdPushDescriptorSetKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    StructPointerDecoder<Decoded_VkWriteDescriptorSet>* pDescriptorWrites)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPushDescriptorSetKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "layout", HandleIdToString(layout));
            FieldToString(strStrm, false, "set", ToString(set, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "descriptorWriteCount", ToString(descriptorWriteCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorWrites", PointerDecoderArrayToString(*pDescriptorWrites, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDescriptorUpdateTemplate>* pDescriptorUpdateTemplate)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDescriptorUpdateTemplateKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDescriptorUpdateTemplate", HandlePointerDecoderToString(pDescriptorUpdateTemplate));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDescriptorUpdateTemplateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorUpdateTemplate,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDescriptorUpdateTemplateKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorUpdateTemplate", HandleIdToString(descriptorUpdateTemplate));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderPassCreateInfo2>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkRenderPass>*         pRenderPass)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateRenderPass2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pRenderPass", HandlePointerDecoderToString(pRenderPass));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkRenderPassBeginInfo>* pRenderPassBegin,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>* pSubpassBeginInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginRenderPass2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRenderPassBegin", PointerDecoderToString(pRenderPassBegin, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassBeginInfo", PointerDecoderToString(pSubpassBeginInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdNextSubpass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassBeginInfo>* pSubpassBeginInfo,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>* pSubpassEndInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdNextSubpass2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pSubpassBeginInfo", PointerDecoderToString(pSubpassBeginInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubpassEndInfo", PointerDecoderToString(pSubpassEndInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndRenderPass2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSubpassEndInfo>* pSubpassEndInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndRenderPass2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pSubpassEndInfo", PointerDecoderToString(pSubpassEndInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetSwapchainStatusKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSwapchainStatusKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalFencePropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceExternalFenceInfo>* pExternalFenceInfo,
    StructPointerDecoder<Decoded_VkExternalFenceProperties>* pExternalFenceProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalFencePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pExternalFenceInfo", PointerDecoderToString(pExternalFenceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalFenceProperties", PointerDecoderToString(pExternalFenceProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkImportFenceWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportFenceWin32HandleInfoKHR>* pImportFenceWin32HandleInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkImportFenceWin32HandleKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pImportFenceWin32HandleInfo", PointerDecoderToString(pImportFenceWin32HandleInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetFenceWin32HandleKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceGetWin32HandleInfoKHR>* pGetWin32HandleInfo,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetFenceWin32HandleKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetWin32HandleInfo", PointerDecoderToString(pGetWin32HandleInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHandle", DataPointerDecoderToString(pHandle));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkImportFenceFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportFenceFdInfoKHR>* pImportFenceFdInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkImportFenceFdKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pImportFenceFdInfo", PointerDecoderToString(pImportFenceFdInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetFenceFdKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkFenceGetFdInfoKHR>* pGetFdInfo,
    PointerDecoder<int>*                        pFd)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetFenceFdKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetFdInfo", PointerDecoderToString(pGetFdInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFd", PointerDecoderToString(pFd, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    PointerDecoder<uint32_t>*                   pCounterCount,
    StructPointerDecoder<Decoded_VkPerformanceCounterKHR>* pCounters,
    StructPointerDecoder<Decoded_VkPerformanceCounterDescriptionKHR>* pCounterDescriptions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterCount", PointerDecoderToString(pCounterCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounters", PointerDecoderArrayToString(*pCounters, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterDescriptions", PointerDecoderArrayToString(*pCounterDescriptions, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkQueryPoolPerformanceCreateInfoKHR>* pPerformanceQueryCreateInfo,
    PointerDecoder<uint32_t>*                   pNumPasses)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPerformanceQueryCreateInfo", PointerDecoderToString(pPerformanceQueryCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pNumPasses", PointerDecoderToString(pNumPasses, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkAcquireProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAcquireProfilingLockInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireProfilingLockKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkReleaseProfilingLockKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkReleaseProfilingLockKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>* pSurfaceInfo,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2KHR>* pSurfaceCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pSurfaceInfo", PointerDecoderToString(pSurfaceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurfaceCapabilities", PointerDecoderToString(pSurfaceCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceFormats2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>* pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pSurfaceFormatCount,
    StructPointerDecoder<Decoded_VkSurfaceFormat2KHR>* pSurfaceFormats)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceFormats2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pSurfaceInfo", PointerDecoderToString(pSurfaceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurfaceFormatCount", PointerDecoderToString(pSurfaceFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurfaceFormats", PointerDecoderArrayToString(*pSurfaceFormats, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayProperties2KHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceDisplayProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayPlaneProperties2KHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDisplayModeProperties2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkDisplayModeProperties2KHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDisplayModeProperties2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDisplayPlaneCapabilities2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkDisplayPlaneInfo2KHR>* pDisplayPlaneInfo,
    StructPointerDecoder<Decoded_VkDisplayPlaneCapabilities2KHR>* pCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDisplayPlaneCapabilities2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pDisplayPlaneInfo", PointerDecoderToString(pDisplayPlaneInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCapabilities", PointerDecoderToString(pCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetImageMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageMemoryRequirementsInfo2>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageMemoryRequirements2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferMemoryRequirementsInfo2>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferMemoryRequirements2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageSparseMemoryRequirements2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageSparseMemoryRequirementsInfo2>* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageSparseMemoryRequirements2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirementCount", PointerDecoderToString(pSparseMemoryRequirementCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirements", PointerDecoderArrayToString(*pSparseMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateSamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSamplerYcbcrConversionCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSamplerYcbcrConversion>* pYcbcrConversion)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateSamplerYcbcrConversionKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pYcbcrConversion", HandlePointerDecoderToString(pYcbcrConversion));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroySamplerYcbcrConversionKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            ycbcrConversion,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroySamplerYcbcrConversionKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "ycbcrConversion", HandleIdToString(ycbcrConversion));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBindBufferMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindBufferMemoryInfo>* pBindInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindBufferMemory2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfos", PointerDecoderArrayToString(*pBindInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkBindImageMemory2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindImageMemoryInfo>* pBindInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindImageMemory2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfos", PointerDecoderArrayToString(*pBindInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutSupportKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutSupport>* pSupport)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDescriptorSetLayoutSupportKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSupport", PointerDecoderToString(pSupport, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndirectCountKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndexedIndirectCountKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreCounterValueKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            semaphore,
    PointerDecoder<uint64_t>*                   pValue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSemaphoreCounterValueKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "semaphore", HandleIdToString(semaphore));
            FieldToString(strStrm, false, "pValue", PointerDecoderToString(pValue, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkWaitSemaphoresKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreWaitInfo>* pWaitInfo,
    uint64_t                                    timeout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWaitSemaphoresKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pWaitInfo", PointerDecoderToString(pWaitInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(timeout, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSignalSemaphoreKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreSignalInfo>* pSignalInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSignalSemaphoreKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pSignalInfo", PointerDecoderToString(pSignalInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceFragmentShadingRatesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pFragmentShadingRateCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceFragmentShadingRateKHR>* pFragmentShadingRates)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceFragmentShadingRatesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pFragmentShadingRateCount", PointerDecoderToString(pFragmentShadingRateCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFragmentShadingRates", PointerDecoderArrayToString(*pFragmentShadingRates, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetFragmentShadingRateKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkExtent2D>*   pFragmentSize,
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR>* combinerOps)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetFragmentShadingRateKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pFragmentSize", PointerDecoderToString(pFragmentSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "combinerOps", EnumPointerDecoderArrayToString(2, combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkWaitForPresentKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    uint64_t                                    presentId,
    uint64_t                                    timeout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWaitForPresentKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "presentId", ToString(presentId, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "timeout", ToString(timeout, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddressKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferDeviceAddressKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferOpaqueCaptureAddressKHR(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferOpaqueCaptureAddressKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceMemoryOpaqueCaptureAddressKHR(
    const ApiCallInfo&                          call_info,
    uint64_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceMemoryOpaqueCaptureAddressKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDeferredOperationKHR>* pDeferredOperation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDeferredOperationKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDeferredOperation", HandlePointerDecoderToString(pDeferredOperation));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDeferredOperationKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            operation,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDeferredOperationKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "operation", HandleIdToString(operation));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeferredOperationMaxConcurrencyKHR(
    const ApiCallInfo&                          call_info,
    uint32_t                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeferredOperationMaxConcurrencyKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "operation", HandleIdToString(operation));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeferredOperationResultKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeferredOperationResultKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "operation", HandleIdToString(operation));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDeferredOperationJoinKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            operation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDeferredOperationJoinKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "operation", HandleIdToString(operation));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutablePropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineInfoKHR>* pPipelineInfo,
    PointerDecoder<uint32_t>*                   pExecutableCount,
    StructPointerDecoder<Decoded_VkPipelineExecutablePropertiesKHR>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPipelineExecutablePropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pPipelineInfo", PointerDecoderToString(pPipelineInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExecutableCount", PointerDecoderToString(pExecutableCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableStatisticsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>* pExecutableInfo,
    PointerDecoder<uint32_t>*                   pStatisticCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableStatisticKHR>* pStatistics)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPipelineExecutableStatisticsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pExecutableInfo", PointerDecoderToString(pExecutableInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStatisticCount", PointerDecoderToString(pStatisticCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStatistics", PointerDecoderArrayToString(*pStatistics, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPipelineExecutableInternalRepresentationsKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPipelineExecutableInfoKHR>* pExecutableInfo,
    PointerDecoder<uint32_t>*                   pInternalRepresentationCount,
    StructPointerDecoder<Decoded_VkPipelineExecutableInternalRepresentationKHR>* pInternalRepresentations)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPipelineExecutableInternalRepresentationsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pExecutableInfo", PointerDecoderToString(pExecutableInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInternalRepresentationCount", PointerDecoderToString(pInternalRepresentationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInternalRepresentations", PointerDecoderArrayToString(*pInternalRepresentations, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetEvent2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetEvent2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "pDependencyInfo", PointerDecoderToString(pDependencyInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResetEvent2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            event,
    VkPipelineStageFlags2                       stageMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResetEvent2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "event", HandleIdToString(event));
            FieldToString(strStrm, false, "stageMask", ToString(stageMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWaitEvents2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    eventCount,
    HandlePointerDecoder<VkEvent>*              pEvents,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWaitEvents2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "eventCount", ToString(eventCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pEvents", HandlePointerDecoderArrayToString(eventCount, pEvents, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDependencyInfos", PointerDecoderArrayToString(*pDependencyInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdPipelineBarrier2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDependencyInfo>* pDependencyInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPipelineBarrier2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pDependencyInfo", PointerDecoderToString(pDependencyInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteTimestamp2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            queryPool,
    uint32_t                                    query)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteTimestamp2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stage", ToString(stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueSubmit2KHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    uint32_t                                    submitCount,
    StructPointerDecoder<Decoded_VkSubmitInfo2>* pSubmits,
    format::HandleId                            fence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueSubmit2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "submitCount", ToString(submitCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSubmits", PointerDecoderArrayToString(*pSubmits, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "fence", HandleIdToString(fence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarker2AMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlags2                       stage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteBufferMarker2AMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stage", ToString(stage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "dstOffset", ToString(dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(marker, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointData2NV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointData2NV>* pCheckpointData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetQueueCheckpointData2NV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "pCheckpointDataCount", PointerDecoderToString(pCheckpointDataCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCheckpointData", PointerDecoderArrayToString(*pCheckpointData, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBuffer2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferInfo2>* pCopyBufferInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBuffer2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyBufferInfo", PointerDecoderToString(pCopyBufferInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageInfo2>* pCopyImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImage2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyImageInfo", PointerDecoderToString(pCopyImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyBufferToImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyBufferToImageInfo2>* pCopyBufferToImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyBufferToImage2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyBufferToImageInfo", PointerDecoderToString(pCopyBufferToImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyImageToBuffer2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyImageToBufferInfo2>* pCopyImageToBufferInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyImageToBuffer2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCopyImageToBufferInfo", PointerDecoderToString(pCopyImageToBufferInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBlitImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkBlitImageInfo2>* pBlitImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBlitImage2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pBlitImageInfo", PointerDecoderToString(pBlitImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdResolveImage2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkResolveImageInfo2>* pResolveImageInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdResolveImage2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pResolveImageInfo", PointerDecoderToString(pResolveImageInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysIndirect2KHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkDeviceAddress                             indirectDeviceAddress)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdTraceRaysIndirect2KHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "indirectDeviceAddress", ToString(indirectDeviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceBufferMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceBufferMemoryRequirements>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceBufferMemoryRequirementsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceImageMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceImageMemoryRequirementsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceImageSparseMemoryRequirementsKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceImageMemoryRequirements>* pInfo,
    PointerDecoder<uint32_t>*                   pSparseMemoryRequirementCount,
    StructPointerDecoder<Decoded_VkSparseImageMemoryRequirements2>* pSparseMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceImageSparseMemoryRequirementsKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirementCount", PointerDecoderToString(pSparseMemoryRequirementCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSparseMemoryRequirements", PointerDecoderArrayToString(*pSparseMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugReportCallbackCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugReportCallbackEXT>* pCallback)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDebugReportCallbackEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCallback", HandlePointerDecoderToString(pCallback));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDebugReportCallbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            callback,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDebugReportCallbackEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "callback", HandleIdToString(callback));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkDebugReportMessageEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    StringDecoder*                              pLayerPrefix,
    StringDecoder*                              pMessage)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDebugReportMessageEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "objectType", '"' + ToString(objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "object", ToString(object, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "location", ToString(location, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "messageCode", ToString(messageCode, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayerPrefix", StringDecoderToString(pLayerPrefix));
            FieldToString(strStrm, false, "pMessage", StringDecoderToString(pMessage));
        }
    );
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectTagEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugMarkerObjectTagInfoEXT>* pTagInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDebugMarkerSetObjectTagEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pTagInfo", PointerDecoderToString(pTagInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDebugMarkerSetObjectNameEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugMarkerObjectNameInfoEXT>* pNameInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDebugMarkerSetObjectNameEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pNameInfo", PointerDecoderToString(pNameInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerBeginEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>* pMarkerInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDebugMarkerBeginEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pMarkerInfo", PointerDecoderToString(pMarkerInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerEndEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDebugMarkerEndEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDebugMarkerInsertEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugMarkerMarkerInfoEXT>* pMarkerInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDebugMarkerInsertEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pMarkerInfo", PointerDecoderToString(pMarkerInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindTransformFeedbackBuffersEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindTransformFeedbackBuffersEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstBinding", ToString(firstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffers", HandlePointerDecoderArrayToString(bindingCount, pBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pOffsets", PointerDecoderArrayToString(bindingCount, pOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSizes", PointerDecoderArrayToString(bindingCount, pSizes, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    HandlePointerDecoder<VkBuffer>*             pCounterBuffers,
    PointerDecoder<VkDeviceSize>*               pCounterBufferOffsets)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginTransformFeedbackEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstCounterBuffer", ToString(firstCounterBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterBufferCount", ToString(counterBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterBuffers", HandlePointerDecoderArrayToString(counterBufferCount, pCounterBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterBufferOffsets", PointerDecoderArrayToString(counterBufferCount, pCounterBufferOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndTransformFeedbackEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstCounterBuffer,
    uint32_t                                    counterBufferCount,
    HandlePointerDecoder<VkBuffer>*             pCounterBuffers,
    PointerDecoder<VkDeviceSize>*               pCounterBufferOffsets)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndTransformFeedbackEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstCounterBuffer", ToString(firstCounterBuffer, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterBufferCount", ToString(counterBufferCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterBuffers", HandlePointerDecoderArrayToString(counterBufferCount, pCounterBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCounterBufferOffsets", PointerDecoderArrayToString(counterBufferCount, pCounterBufferOffsets, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    VkQueryControlFlags                         flags,
    uint32_t                                    index)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginQueryIndexedEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "index", ToString(index, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndQueryIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            queryPool,
    uint32_t                                    query,
    uint32_t                                    index)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndQueryIndexedEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "query", ToString(query, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "index", ToString(index, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectByteCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    format::HandleId                            counterBuffer,
    VkDeviceSize                                counterBufferOffset,
    uint32_t                                    counterOffset,
    uint32_t                                    vertexStride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndirectByteCountEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "instanceCount", ToString(instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(firstInstance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterBuffer", HandleIdToString(counterBuffer));
            FieldToString(strStrm, false, "counterBufferOffset", ToString(counterBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "counterOffset", ToString(counterOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexStride", ToString(vertexStride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageViewHandleNVX(
    const ApiCallInfo&                          call_info,
    uint32_t                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImageViewHandleInfoNVX>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageViewHandleNVX", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetImageViewAddressNVX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            imageView,
    StructPointerDecoder<Decoded_VkImageViewAddressPropertiesNVX>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageViewAddressNVX", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "imageView", HandleIdToString(imageView));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndirectCountAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndirectCountAMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawIndexedIndirectCountAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawIndexedIndirectCountAMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetShaderInfoAMD(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    VkShaderStageFlagBits                       shaderStage,
    VkShaderInfoTypeAMD                         infoType,
    PointerDecoder<size_t>*                     pInfoSize,
    PointerDecoder<uint8_t>*                    pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetShaderInfoAMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "shaderStage", '"' + ToString(shaderStage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "infoType", '"' + ToString(infoType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pInfoSize", PointerDecoderToString(pInfoSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInfo", DataPointerDecoderToString(pInfo));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateStreamDescriptorSurfaceGGP(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkStreamDescriptorSurfaceCreateInfoGGP>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateStreamDescriptorSurfaceGGP", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    VkFormat                                    format,
    VkImageType                                 type,
    VkImageTiling                               tiling,
    VkImageUsageFlags                           usage,
    VkImageCreateFlags                          flags,
    VkExternalMemoryHandleTypeFlagsNV           externalHandleType,
    StructPointerDecoder<Decoded_VkExternalImageFormatPropertiesNV>* pExternalImageFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "format", '"' + ToString(format, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "type", '"' + ToString(type, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "tiling", '"' + ToString(tiling, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "usage", ToString(usage, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "flags", ToString(flags, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "externalHandleType", ToString(externalHandleType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExternalImageFormatProperties", PointerDecoderToString(pExternalImageFormatProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryWin32HandleNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            memory,
    VkExternalMemoryHandleTypeFlagsNV           handleType,
    PointerDecoder<uint64_t, void*>*            pHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryWin32HandleNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "handleType", ToString(handleType, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHandle", DataPointerDecoderToString(pHandle));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateViSurfaceNN(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkViSurfaceCreateInfoNN>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateViSurfaceNN", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkConditionalRenderingBeginInfoEXT>* pConditionalRenderingBegin)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginConditionalRenderingEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pConditionalRenderingBegin", PointerDecoderToString(pConditionalRenderingBegin, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndConditionalRenderingEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndConditionalRenderingEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewportWScalingNV>* pViewportWScalings)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportWScalingNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstViewport", ToString(firstViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportWScalings", PointerDecoderArrayToString(*pViewportWScalings, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkReleaseDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkReleaseDisplayEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquireXlibDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    format::HandleId                            display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireXlibDisplayEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "dpy", DataPointerDecoderToString(dpy));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetRandROutputDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint64_t                                    dpy,
    size_t                                      rrOutput,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRandROutputDisplayEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "dpy", DataPointerDecoderToString(dpy));
            FieldToString(strStrm, false, "rrOutput", ToString(rrOutput, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisplay", HandlePointerDecoderToString(pDisplay));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfaceCapabilities2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            surface,
    StructPointerDecoder<Decoded_VkSurfaceCapabilities2EXT>* pSurfaceCapabilities)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "surface", HandleIdToString(surface));
            FieldToString(strStrm, false, "pSurfaceCapabilities", PointerDecoderToString(pSurfaceCapabilities, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDisplayPowerControlEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayPowerInfoEXT>* pDisplayPowerInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDisplayPowerControlEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
            FieldToString(strStrm, false, "pDisplayPowerInfo", PointerDecoderToString(pDisplayPowerInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkRegisterDeviceEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceEventInfoEXT>* pDeviceEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkRegisterDeviceEventEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pDeviceEventInfo", PointerDecoderToString(pDeviceEventInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFence", HandlePointerDecoderToString(pFence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkRegisterDisplayEventEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            display,
    StructPointerDecoder<Decoded_VkDisplayEventInfoEXT>* pDisplayEventInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkFence>*              pFence)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkRegisterDisplayEventEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
            FieldToString(strStrm, false, "pDisplayEventInfo", PointerDecoderToString(pDisplayEventInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFence", HandlePointerDecoderToString(pFence));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetSwapchainCounterEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    VkSurfaceCounterFlagBitsEXT                 counter,
    PointerDecoder<uint64_t>*                   pCounterValue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSwapchainCounterEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "counter", '"' + ToString(counter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pCounterValue", PointerDecoderToString(pCounterValue, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetRefreshCycleDurationGOOGLE(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    StructPointerDecoder<Decoded_VkRefreshCycleDurationGOOGLE>* pDisplayTimingProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRefreshCycleDurationGOOGLE", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "pDisplayTimingProperties", PointerDecoderToString(pDisplayTimingProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPastPresentationTimingGOOGLE(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain,
    PointerDecoder<uint32_t>*                   pPresentationTimingCount,
    StructPointerDecoder<Decoded_VkPastPresentationTimingGOOGLE>* pPresentationTimings)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPastPresentationTimingGOOGLE", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
            FieldToString(strStrm, false, "pPresentationTimingCount", PointerDecoderToString(pPresentationTimingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentationTimings", PointerDecoderArrayToString(*pPresentationTimings, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDiscardRectangleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstDiscardRectangle,
    uint32_t                                    discardRectangleCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pDiscardRectangles)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDiscardRectangleEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstDiscardRectangle", ToString(firstDiscardRectangle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "discardRectangleCount", ToString(discardRectangleCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDiscardRectangles", PointerDecoderArrayToString(*pDiscardRectangles, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkSetHdrMetadataEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    uint32_t                                    swapchainCount,
    HandlePointerDecoder<VkSwapchainKHR>*       pSwapchains,
    StructPointerDecoder<Decoded_VkHdrMetadataEXT>* pMetadata)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetHdrMetadataEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchainCount", ToString(swapchainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSwapchains", HandlePointerDecoderArrayToString(swapchainCount, pSwapchains, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMetadata", PointerDecoderArrayToString(*pMetadata, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateIOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkIOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateIOSSurfaceMVK", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateMacOSSurfaceMVK(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMacOSSurfaceCreateInfoMVK>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateMacOSSurfaceMVK", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectNameEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>* pNameInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetDebugUtilsObjectNameEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pNameInfo", PointerDecoderToString(pNameInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSetDebugUtilsObjectTagEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDebugUtilsObjectTagInfoEXT>* pTagInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetDebugUtilsObjectTagEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pTagInfo", PointerDecoderToString(pTagInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkQueueBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>* pLabelInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueBeginDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "pLabelInfo", PointerDecoderToString(pLabelInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueEndDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
        }
    );
}

void VulkanAsciiConsumer::Process_vkQueueInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>* pLabelInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueInsertDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "pLabelInfo", PointerDecoderToString(pLabelInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBeginDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>* pLabelInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBeginDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pLabelInfo", PointerDecoderToString(pLabelInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdEndDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdEndDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdInsertDebugUtilsLabelEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>* pLabelInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdInsertDebugUtilsLabelEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pLabelInfo", PointerDecoderToString(pLabelInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkDebugUtilsMessengerEXT>* pMessenger)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDebugUtilsMessengerEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMessenger", HandlePointerDecoderToString(pMessenger));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyDebugUtilsMessengerEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    format::HandleId                            messenger,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyDebugUtilsMessengerEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "messenger", HandleIdToString(messenger));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkSubmitDebugUtilsMessageEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            instance,
    VkDebugUtilsMessageSeverityFlagBitsEXT      messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT             messageTypes,
    StructPointerDecoder<Decoded_VkDebugUtilsMessengerCallbackDataEXT>* pCallbackData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSubmitDebugUtilsMessageEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "messageSeverity", '"' + ToString(messageSeverity, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "messageTypes", ToString(messageTypes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCallbackData", PointerDecoderToString(pCallbackData, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetAndroidHardwareBufferPropertiesANDROID(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint64_t                                    buffer,
    StructPointerDecoder<Decoded_VkAndroidHardwareBufferPropertiesANDROID>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetAndroidHardwareBufferPropertiesANDROID", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "buffer", DataPointerDecoderToString(buffer));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryAndroidHardwareBufferANDROID(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID>* pInfo,
    PointerDecoder<uint64_t, void*>*            pBuffer)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryAndroidHardwareBufferANDROID", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffer", DataPointerDecoderToString(pBuffer));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkSampleLocationsInfoEXT>* pSampleLocationsInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetSampleLocationsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pSampleLocationsInfo", PointerDecoderToString(pSampleLocationsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceMultisamplePropertiesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    StructPointerDecoder<Decoded_VkMultisamplePropertiesEXT>* pMultisampleProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceMultisamplePropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "samples", '"' + ToString(samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pMultisampleProperties", PointerDecoderToString(pMultisampleProperties, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageDrmFormatModifierPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageDrmFormatModifierPropertiesEXT>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageDrmFormatModifierPropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkValidationCacheCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkValidationCacheEXT>* pValidationCache)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateValidationCacheEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pValidationCache", HandlePointerDecoderToString(pValidationCache));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyValidationCacheEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyValidationCacheEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "validationCache", HandleIdToString(validationCache));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkMergeValidationCachesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            dstCache,
    uint32_t                                    srcCacheCount,
    HandlePointerDecoder<VkValidationCacheEXT>* pSrcCaches)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkMergeValidationCachesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "dstCache", HandleIdToString(dstCache));
            FieldToString(strStrm, false, "srcCacheCount", ToString(srcCacheCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSrcCaches", HandlePointerDecoderArrayToString(srcCacheCount, pSrcCaches, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetValidationCacheDataEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            validationCache,
    PointerDecoder<size_t>*                     pDataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetValidationCacheDataEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "validationCache", HandleIdToString(validationCache));
            FieldToString(strStrm, false, "pDataSize", PointerDecoderToString(pDataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindShadingRateImageNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindShadingRateImageNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "imageView", HandleIdToString(imageView));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(imageLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportShadingRatePaletteNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkShadingRatePaletteNV>* pShadingRatePalettes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportShadingRatePaletteNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstViewport", ToString(firstViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pShadingRatePalettes", PointerDecoderArrayToString(*pShadingRatePalettes, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoarseSampleOrderNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>* pCustomSampleOrders)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoarseSampleOrderNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "sampleOrderType", '"' + ToString(sampleOrderType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "customSampleOrderCount", ToString(customSampleOrderCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCustomSampleOrders", PointerDecoderArrayToString(*pCustomSampleOrders, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructure)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateAccelerationStructureNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructure", HandlePointerDecoderToString(pAccelerationStructure));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyAccelerationStructureNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "accelerationStructure", HandleIdToString(accelerationStructure));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureMemoryRequirementsInfoNV>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2KHR>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetAccelerationStructureMemoryRequirementsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBindAccelerationStructureMemoryNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    bindInfoCount,
    StructPointerDecoder<Decoded_VkBindAccelerationStructureMemoryInfoNV>* pBindInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindAccelerationStructureMemoryNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "bindInfoCount", ToString(bindInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBindInfos", PointerDecoderArrayToString(*pBindInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBuildAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkAccelerationStructureInfoNV>* pInfo,
    format::HandleId                            instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    format::HandleId                            dst,
    format::HandleId                            src,
    format::HandleId                            scratch,
    VkDeviceSize                                scratchOffset)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBuildAccelerationStructureNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceData", HandleIdToString(instanceData));
            FieldToString(strStrm, false, "instanceOffset", ToString(instanceOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "update", ToString(update, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dst", HandleIdToString(dst));
            FieldToString(strStrm, false, "src", HandleIdToString(src));
            FieldToString(strStrm, false, "scratch", HandleIdToString(scratch));
            FieldToString(strStrm, false, "scratchOffset", ToString(scratchOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            dst,
    format::HandleId                            src,
    VkCopyAccelerationStructureModeKHR          mode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyAccelerationStructureNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "dst", HandleIdToString(dst));
            FieldToString(strStrm, false, "src", HandleIdToString(src));
            FieldToString(strStrm, false, "mode", '"' + ToString(mode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            raygenShaderBindingTableBuffer,
    VkDeviceSize                                raygenShaderBindingOffset,
    format::HandleId                            missShaderBindingTableBuffer,
    VkDeviceSize                                missShaderBindingOffset,
    VkDeviceSize                                missShaderBindingStride,
    format::HandleId                            hitShaderBindingTableBuffer,
    VkDeviceSize                                hitShaderBindingOffset,
    VkDeviceSize                                hitShaderBindingStride,
    format::HandleId                            callableShaderBindingTableBuffer,
    VkDeviceSize                                callableShaderBindingOffset,
    VkDeviceSize                                callableShaderBindingStride,
    uint32_t                                    width,
    uint32_t                                    height,
    uint32_t                                    depth)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdTraceRaysNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "raygenShaderBindingTableBuffer", HandleIdToString(raygenShaderBindingTableBuffer));
            FieldToString(strStrm, false, "raygenShaderBindingOffset", ToString(raygenShaderBindingOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingTableBuffer", HandleIdToString(missShaderBindingTableBuffer));
            FieldToString(strStrm, false, "missShaderBindingOffset", ToString(missShaderBindingOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "missShaderBindingStride", ToString(missShaderBindingStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingTableBuffer", HandleIdToString(hitShaderBindingTableBuffer));
            FieldToString(strStrm, false, "hitShaderBindingOffset", ToString(hitShaderBindingOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "hitShaderBindingStride", ToString(hitShaderBindingStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingTableBuffer", HandleIdToString(callableShaderBindingTableBuffer));
            FieldToString(strStrm, false, "callableShaderBindingOffset", ToString(callableShaderBindingOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "callableShaderBindingStride", ToString(callableShaderBindingStride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(depth, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateRayTracingPipelinesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoNV>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateRayTracingPipelinesNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "createInfoCount", ToString(createInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfos", PointerDecoderArrayToString(*pCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", HandlePointerDecoderArrayToString(createInfoCount, pPipelines, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetRayTracingShaderGroupHandlesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRayTracingShaderGroupHandlesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "firstGroup", ToString(firstGroup, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetRayTracingShaderGroupHandlesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRayTracingShaderGroupHandlesNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "firstGroup", ToString(firstGroup, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureHandleNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetAccelerationStructureHandleNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "accelerationStructure", HandleIdToString(accelerationStructure));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureNV>* pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteAccelerationStructuresPropertiesNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", HandlePointerDecoderArrayToString(accelerationStructureCount, pAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCompileDeferredNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    shader)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCompileDeferredNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "shader", ToString(shader, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryHostPointerPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint64_t                                    pHostPointer,
    StructPointerDecoder<Decoded_VkMemoryHostPointerPropertiesEXT>* pMemoryHostPointerProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryHostPointerPropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "handleType", '"' + ToString(handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pHostPointer", DataPointerDecoderToString(pHostPointer));
            FieldToString(strStrm, false, "pMemoryHostPointerProperties", PointerDecoderToString(pMemoryHostPointerProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteBufferMarkerAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineStageFlagBits                     pipelineStage,
    format::HandleId                            dstBuffer,
    VkDeviceSize                                dstOffset,
    uint32_t                                    marker)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteBufferMarkerAMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineStage", '"' + ToString(pipelineStage, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dstBuffer", HandleIdToString(dstBuffer));
            FieldToString(strStrm, false, "dstOffset", ToString(dstOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "marker", ToString(marker, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pTimeDomainCount,
    PointerDecoder<VkTimeDomainEXT>*            pTimeDomains)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pTimeDomainCount", PointerDecoderToString(pTimeDomainCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimeDomains", EnumPointerDecoderArrayToString(pTimeDomainCount, pTimeDomains, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetCalibratedTimestampsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    timestampCount,
    StructPointerDecoder<Decoded_VkCalibratedTimestampInfoEXT>* pTimestampInfos,
    PointerDecoder<uint64_t>*                   pTimestamps,
    PointerDecoder<uint64_t>*                   pMaxDeviation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetCalibratedTimestampsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "timestampCount", ToString(timestampCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimestampInfos", PointerDecoderArrayToString(*pTimestampInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pTimestamps", PointerDecoderArrayToString(timestampCount, pTimestamps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMaxDeviation", PointerDecoderToString(pMaxDeviation, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "taskCount", ToString(taskCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstTask", ToString(firstTask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksIndirectNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectCountNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksIndirectCountNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetExclusiveScissorNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstExclusiveScissor,
    uint32_t                                    exclusiveScissorCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pExclusiveScissors)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetExclusiveScissorNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstExclusiveScissor", ToString(firstExclusiveScissor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "exclusiveScissorCount", ToString(exclusiveScissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pExclusiveScissors", PointerDecoderArrayToString(*pExclusiveScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCheckpointNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint64_t                                    pCheckpointMarker)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCheckpointNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pCheckpointMarker", DataPointerDecoderToString(pCheckpointMarker));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetQueueCheckpointDataNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            queue,
    PointerDecoder<uint32_t>*                   pCheckpointDataCount,
    StructPointerDecoder<Decoded_VkCheckpointDataNV>* pCheckpointData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetQueueCheckpointDataNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "pCheckpointDataCount", PointerDecoderToString(pCheckpointDataCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCheckpointData", PointerDecoderArrayToString(*pCheckpointData, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkInitializePerformanceApiINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkInitializePerformanceApiInfoINTEL>* pInitializeInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkInitializePerformanceApiINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInitializeInfo", PointerDecoderToString(pInitializeInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkUninitializePerformanceApiINTEL(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkUninitializePerformanceApiINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceMarkerINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceMarkerInfoINTEL>* pMarkerInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPerformanceMarkerINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pMarkerInfo", PointerDecoderToString(pMarkerInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceStreamMarkerINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceStreamMarkerInfoINTEL>* pMarkerInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPerformanceStreamMarkerINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pMarkerInfo", PointerDecoderToString(pMarkerInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPerformanceOverrideINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkPerformanceOverrideInfoINTEL>* pOverrideInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPerformanceOverrideINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pOverrideInfo", PointerDecoderToString(pOverrideInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquirePerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPerformanceConfigurationAcquireInfoINTEL>* pAcquireInfo,
    HandlePointerDecoder<VkPerformanceConfigurationINTEL>* pConfiguration)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquirePerformanceConfigurationINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pAcquireInfo", PointerDecoderToString(pAcquireInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pConfiguration", HandlePointerDecoderToString(pConfiguration));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkReleasePerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            configuration)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkReleasePerformanceConfigurationINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "configuration", HandleIdToString(configuration));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkQueueSetPerformanceConfigurationINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            queue,
    format::HandleId                            configuration)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkQueueSetPerformanceConfigurationINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "queue", HandleIdToString(queue));
            FieldToString(strStrm, false, "configuration", HandleIdToString(configuration));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPerformanceParameterINTEL(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkPerformanceParameterTypeINTEL             parameter,
    StructPointerDecoder<Decoded_VkPerformanceValueINTEL>* pValue)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPerformanceParameterINTEL", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "parameter", '"' + ToString(parameter, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pValue", PointerDecoderToString(pValue, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkSetLocalDimmingAMD(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            swapChain,
    VkBool32                                    localDimmingEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetLocalDimmingAMD", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapChain", HandleIdToString(swapChain));
            FieldToString(strStrm, false, "localDimmingEnable", ToString(localDimmingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateImagePipeSurfaceFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateImagePipeSurfaceFUCHSIA", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateMetalSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkMetalSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateMetalSurfaceEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetBufferDeviceAddressEXT(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkBufferDeviceAddressInfo>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetBufferDeviceAddressEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceToolPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pToolCount,
    StructPointerDecoder<Decoded_VkPhysicalDeviceToolProperties>* pToolProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceToolPropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pToolCount", PointerDecoderToString(pToolCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pToolProperties", PointerDecoderArrayToString(*pToolProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pPropertyCount,
    StructPointerDecoder<Decoded_VkCooperativeMatrixPropertiesNV>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pPropertyCount", PointerDecoderToString(pPropertyCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    PointerDecoder<uint32_t>*                   pCombinationCount,
    StructPointerDecoder<Decoded_VkFramebufferMixedSamplesCombinationNV>* pCombinations)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pCombinationCount", PointerDecoderToString(pCombinationCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCombinations", PointerDecoderArrayToString(*pCombinations, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceSurfacePresentModes2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>* pSurfaceInfo,
    PointerDecoder<uint32_t>*                   pPresentModeCount,
    PointerDecoder<VkPresentModeKHR>*           pPresentModes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceSurfacePresentModes2EXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pSurfaceInfo", PointerDecoderToString(pSurfaceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentModeCount", PointerDecoderToString(pPresentModeCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPresentModes", EnumPointerDecoderArrayToString(pPresentModeCount, pPresentModes, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquireFullScreenExclusiveModeEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireFullScreenExclusiveModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkReleaseFullScreenExclusiveModeEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            swapchain)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkReleaseFullScreenExclusiveModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "swapchain", HandleIdToString(swapchain));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceGroupSurfacePresentModes2EXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPhysicalDeviceSurfaceInfo2KHR>* pSurfaceInfo,
    PointerDecoder<VkDeviceGroupPresentModeFlagsKHR>* pModes)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceGroupSurfacePresentModes2EXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pSurfaceInfo", PointerDecoderToString(pSurfaceInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pModes", PointerDecoderToString(pModes, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateHeadlessSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkHeadlessSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateHeadlessSurfaceEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLineStippleEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    lineStippleFactor,
    uint16_t                                    lineStipplePattern)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLineStippleEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "lineStippleFactor", ToString(lineStippleFactor, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "lineStipplePattern", ToString(lineStipplePattern, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkResetQueryPoolEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery,
    uint32_t                                    queryCount)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkResetQueryPoolEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryCount", ToString(queryCount, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCullModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCullModeFlags                             cullMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCullModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "cullMode", ToString(cullMode, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetFrontFaceEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFrontFace                                 frontFace)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetFrontFaceEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "frontFace", '"' + ToString(frontFace, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPrimitiveTopologyEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPrimitiveTopology                         primitiveTopology)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPrimitiveTopologyEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "primitiveTopology", '"' + ToString(primitiveTopology, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportWithCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewport>*   pViewports)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportWithCountEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewports", PointerDecoderArrayToString(*pViewports, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetScissorWithCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    scissorCount,
    StructPointerDecoder<Decoded_VkRect2D>*     pScissors)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetScissorWithCountEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "scissorCount", ToString(scissorCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pScissors", PointerDecoderArrayToString(*pScissors, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindVertexBuffers2EXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstBinding,
    uint32_t                                    bindingCount,
    HandlePointerDecoder<VkBuffer>*             pBuffers,
    PointerDecoder<VkDeviceSize>*               pOffsets,
    PointerDecoder<VkDeviceSize>*               pSizes,
    PointerDecoder<VkDeviceSize>*               pStrides)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindVertexBuffers2EXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstBinding", ToString(firstBinding, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "bindingCount", ToString(bindingCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pBuffers", HandlePointerDecoderArrayToString(bindingCount, pBuffers, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pOffsets", PointerDecoderArrayToString(bindingCount, pOffsets, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSizes", PointerDecoderArrayToString(bindingCount, pSizes, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pStrides", PointerDecoderArrayToString(bindingCount, pStrides, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthTestEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthTestEnable", ToString(depthTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthWriteEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthWriteEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthWriteEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthWriteEnable", ToString(depthWriteEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthCompareOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCompareOp                                 depthCompareOp)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthCompareOpEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthCompareOp", '"' + ToString(depthCompareOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBoundsTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBoundsTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBoundsTestEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthBoundsTestEnable", ToString(depthBoundsTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilTestEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stencilTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilTestEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stencilTestEnable", ToString(stencilTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetStencilOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkStencilFaceFlags                          faceMask,
    VkStencilOp                                 failOp,
    VkStencilOp                                 passOp,
    VkStencilOp                                 depthFailOp,
    VkCompareOp                                 compareOp)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetStencilOpEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "faceMask", ToString(faceMask, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "failOp", '"' + ToString(failOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "passOp", '"' + ToString(passOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "depthFailOp", '"' + ToString(depthFailOp, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "compareOp", '"' + ToString(compareOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetGeneratedCommandsMemoryRequirementsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV>* pInfo,
    StructPointerDecoder<Decoded_VkMemoryRequirements2>* pMemoryRequirements)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetGeneratedCommandsMemoryRequirementsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryRequirements", PointerDecoderToString(pMemoryRequirements, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdPreprocessGeneratedCommandsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV>* pGeneratedCommandsInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdPreprocessGeneratedCommandsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pGeneratedCommandsInfo", PointerDecoderToString(pGeneratedCommandsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdExecuteGeneratedCommandsNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    isPreprocessed,
    StructPointerDecoder<Decoded_VkGeneratedCommandsInfoNV>* pGeneratedCommandsInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdExecuteGeneratedCommandsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "isPreprocessed", ToString(isPreprocessed, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pGeneratedCommandsInfo", PointerDecoderToString(pGeneratedCommandsInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindPipelineShaderGroupNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    format::HandleId                            pipeline,
    uint32_t                                    groupIndex)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindPipelineShaderGroupNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineBindPoint", '"' + ToString(pipelineBindPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "groupIndex", ToString(groupIndex, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkIndirectCommandsLayoutCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkIndirectCommandsLayoutNV>* pIndirectCommandsLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateIndirectCommandsLayoutNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndirectCommandsLayout", HandlePointerDecoderToString(pIndirectCommandsLayout));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyIndirectCommandsLayoutNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            indirectCommandsLayout,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyIndirectCommandsLayoutNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "indirectCommandsLayout", HandleIdToString(indirectCommandsLayout));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkAcquireDrmDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    int32_t                                     drmFd,
    format::HandleId                            display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireDrmDisplayEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "drmFd", ToString(drmFd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDrmDisplayEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    int32_t                                     drmFd,
    uint32_t                                    connectorId,
    HandlePointerDecoder<VkDisplayKHR>*         display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDrmDisplayEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "drmFd", ToString(drmFd, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "connectorId", ToString(connectorId, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "display", HandlePointerDecoderToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreatePrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkPrivateDataSlotCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPrivateDataSlot>*    pPrivateDataSlot)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreatePrivateDataSlotEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPrivateDataSlot", HandlePointerDecoderToString(pPrivateDataSlot));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyPrivateDataSlotEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            privateDataSlot,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyPrivateDataSlotEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkSetPrivateDataEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    uint64_t                                    data)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetPrivateDataEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "objectType", '"' + ToString(objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "data", ToString(data, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPrivateDataEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkObjectType                                objectType,
    uint64_t                                    objectHandle,
    format::HandleId                            privateDataSlot,
    PointerDecoder<uint64_t>*                   pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPrivateDataEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "objectType", '"' + ToString(objectType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "objectHandle", ToString(objectHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "privateDataSlot", HandleIdToString(privateDataSlot));
            FieldToString(strStrm, false, "pData", PointerDecoderToString(pData, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetFragmentShadingRateEnumNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkFragmentShadingRateNV                     shadingRate,
    PointerDecoder<VkFragmentShadingRateCombinerOpKHR>* combinerOps)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetFragmentShadingRateEnumNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "shadingRate", '"' + ToString(shadingRate, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "combinerOps", EnumPointerDecoderArrayToString(2, combinerOps, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetImageSubresourceLayout2EXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            image,
    StructPointerDecoder<Decoded_VkImageSubresource2EXT>* pSubresource,
    StructPointerDecoder<Decoded_VkSubresourceLayout2EXT>* pLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetImageSubresourceLayout2EXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "image", HandleIdToString(image));
            FieldToString(strStrm, false, "pSubresource", PointerDecoderToString(pSubresource, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pLayout", PointerDecoderToString(pLayout, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceFaultInfoEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDeviceFaultCountsEXT>* pFaultCounts,
    StructPointerDecoder<Decoded_VkDeviceFaultInfoEXT>* pFaultInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceFaultInfoEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pFaultCounts", PointerDecoderToString(pFaultCounts, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFaultInfo", PointerDecoderToString(pFaultInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkAcquireWinrtDisplayNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    format::HandleId                            display)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkAcquireWinrtDisplayNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "display", HandleIdToString(display));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetWinrtDisplayNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    deviceRelativeId,
    HandlePointerDecoder<VkDisplayKHR>*         pDisplay)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetWinrtDisplayNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "deviceRelativeId", ToString(deviceRelativeId, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pDisplay", HandlePointerDecoderToString(pDisplay));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateDirectFBSurfaceEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkDirectFBSurfaceCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateDirectFBSurfaceEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    dfb)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dfb", DataPointerDecoderToString(dfb));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetVertexInputEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    vertexBindingDescriptionCount,
    StructPointerDecoder<Decoded_VkVertexInputBindingDescription2EXT>* pVertexBindingDescriptions,
    uint32_t                                    vertexAttributeDescriptionCount,
    StructPointerDecoder<Decoded_VkVertexInputAttributeDescription2EXT>* pVertexAttributeDescriptions)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetVertexInputEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "vertexBindingDescriptionCount", ToString(vertexBindingDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexBindingDescriptions", PointerDecoderArrayToString(*pVertexBindingDescriptions, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "vertexAttributeDescriptionCount", ToString(vertexAttributeDescriptionCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexAttributeDescriptions", PointerDecoderArrayToString(*pVertexAttributeDescriptions, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetZirconHandleInfoFUCHSIA>* pGetZirconHandleInfo,
    PointerDecoder<uint32_t>*                   pZirconHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryZirconHandleFUCHSIA", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetZirconHandleInfo", PointerDecoderToString(pGetZirconHandleInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pZirconHandle", PointerDecoderToString(pZirconHandle, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryZirconHandlePropertiesFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    VkExternalMemoryHandleTypeFlagBits          handleType,
    uint32_t                                    zirconHandle,
    StructPointerDecoder<Decoded_VkMemoryZirconHandlePropertiesFUCHSIA>* pMemoryZirconHandleProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryZirconHandlePropertiesFUCHSIA", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "handleType", '"' + ToString(handleType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "zirconHandle", ToString(zirconHandle, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMemoryZirconHandleProperties", PointerDecoderToString(pMemoryZirconHandleProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkImportSemaphoreZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA>* pImportSemaphoreZirconHandleInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkImportSemaphoreZirconHandleFUCHSIA", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pImportSemaphoreZirconHandleInfo", PointerDecoderToString(pImportSemaphoreZirconHandleInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetSemaphoreZirconHandleFUCHSIA(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA>* pGetZirconHandleInfo,
    PointerDecoder<uint32_t>*                   pZirconHandle)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetSemaphoreZirconHandleFUCHSIA", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pGetZirconHandleInfo", PointerDecoderToString(pGetZirconHandleInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pZirconHandle", PointerDecoderToString(pZirconHandle, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdBindInvocationMaskHUAWEI(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            imageView,
    VkImageLayout                               imageLayout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBindInvocationMaskHUAWEI", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "imageView", HandleIdToString(imageView));
            FieldToString(strStrm, false, "imageLayout", '"' + ToString(imageLayout, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetMemoryRemoteAddressNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMemoryGetRemoteAddressInfoNV>* pMemoryGetRemoteAddressInfo,
    PointerDecoder<uint64_t, void*>*            pAddress)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMemoryRemoteAddressNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pMemoryGetRemoteAddressInfo", PointerDecoderToString(pMemoryGetRemoteAddressInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAddress", DataPointerDecoderToString(pAddress));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPatchControlPointsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    patchControlPoints)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPatchControlPointsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "patchControlPoints", ToString(patchControlPoints, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRasterizerDiscardEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    rasterizerDiscardEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRasterizerDiscardEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "rasterizerDiscardEnable", ToString(rasterizerDiscardEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthBiasEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthBiasEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthBiasEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthBiasEnable", ToString(depthBiasEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLogicOpEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkLogicOp                                   logicOp)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLogicOpEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "logicOp", '"' + ToString(logicOp, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPrimitiveRestartEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    primitiveRestartEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPrimitiveRestartEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "primitiveRestartEnable", ToString(primitiveRestartEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateScreenSurfaceQNX(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            instance,
    StructPointerDecoder<Decoded_VkScreenSurfaceCreateInfoQNX>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkSurfaceKHR>*         pSurface)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateScreenSurfaceQNX", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "instance", HandleIdToString(instance));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSurface", HandlePointerDecoderToString(pSurface));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceScreenPresentationSupportQNX(
    const ApiCallInfo&                          call_info,
    VkBool32                                    returnValue,
    format::HandleId                            physicalDevice,
    uint32_t                                    queueFamilyIndex,
    uint64_t                                    window)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceScreenPresentationSupportQNX", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "queueFamilyIndex", ToString(queueFamilyIndex, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "window", DataPointerDecoderToString(window));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetColorWriteEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkBool32>*                   pColorWriteEnables)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetColorWriteEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorWriteEnables", PointerDecoderArrayToString(attachmentCount, pColorWriteEnables, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMultiEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    drawCount,
    StructPointerDecoder<Decoded_VkMultiDrawInfoEXT>* pVertexInfo,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMultiEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexInfo", PointerDecoderArrayToString(*pVertexInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(firstInstance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMultiIndexedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    drawCount,
    StructPointerDecoder<Decoded_VkMultiDrawIndexedInfoEXT>* pIndexInfo,
    uint32_t                                    instanceCount,
    uint32_t                                    firstInstance,
    uint32_t                                    stride,
    PointerDecoder<int32_t>*                    pVertexOffset)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMultiIndexedEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIndexInfo", PointerDecoderArrayToString(*pIndexInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "instanceCount", ToString(instanceCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "firstInstance", ToString(firstInstance, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pVertexOffset", PointerDecoderToString(pVertexOffset, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapCreateInfoEXT>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromap)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMicromap", HandlePointerDecoderToString(pMicromap));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            micromap,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "micromap", HandleIdToString(micromap));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdBuildMicromapsEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>* pInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdBuildMicromapsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "infoCount", ToString(infoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInfos", PointerDecoderArrayToString(*pInfos, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBuildMicromapsEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    uint32_t                                    infoCount,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>* pInfos)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBuildMicromapsEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "infoCount", ToString(infoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pInfos", PointerDecoderArrayToString(*pInfos, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCopyMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCopyMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCopyMicromapToMemoryEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCopyMicromapToMemoryEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCopyMemoryToMicromapEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCopyMemoryToMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkWriteMicromapsPropertiesEXT(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    micromapCount,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromaps,
    VkQueryType                                 queryType,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    size_t                                      stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWriteMicromapsPropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "micromapCount", ToString(micromapCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMicromaps", HandlePointerDecoderArrayToString(micromapCount, pMicromaps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMicromapInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyMicromapToMemoryEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMicromapToMemoryInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyMicromapToMemoryEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyMemoryToMicromapEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMemoryToMicromapInfoEXT>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyMemoryToMicromapEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteMicromapsPropertiesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    micromapCount,
    HandlePointerDecoder<VkMicromapEXT>*        pMicromaps,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteMicromapsPropertiesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "micromapCount", ToString(micromapCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMicromaps", HandlePointerDecoderArrayToString(micromapCount, pMicromaps, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceMicromapCompatibilityEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkMicromapVersionInfoEXT>* pVersionInfo,
    PointerDecoder<VkAccelerationStructureCompatibilityKHR>* pCompatibility)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceMicromapCompatibilityEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pVersionInfo", PointerDecoderToString(pVersionInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCompatibility", EnumPointerDecoderToString(pCompatibility));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetMicromapBuildSizesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    VkAccelerationStructureBuildTypeKHR         buildType,
    StructPointerDecoder<Decoded_VkMicromapBuildInfoEXT>* pBuildInfo,
    StructPointerDecoder<Decoded_VkMicromapBuildSizesInfoEXT>* pSizeInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetMicromapBuildSizesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "buildType", '"' + ToString(buildType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pBuildInfo", PointerDecoderToString(pBuildInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSizeInfo", PointerDecoderToString(pSizeInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkSetDeviceMemoryPriorityEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            memory,
    float                                       priority)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkSetDeviceMemoryPriorityEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "memory", HandleIdToString(memory));
            FieldToString(strStrm, false, "priority", ToString(priority, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetLayoutHostMappingInfoVALVE(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkDescriptorSetBindingReferenceVALVE>* pBindingReference,
    StructPointerDecoder<Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE>* pHostMapping)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDescriptorSetLayoutHostMappingInfoVALVE", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pBindingReference", PointerDecoderToString(pBindingReference, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHostMapping", PointerDecoderToString(pHostMapping, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDescriptorSetHostMappingVALVE(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            descriptorSet,
    PointerDecoder<uint64_t, void*>*            ppData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDescriptorSetHostMappingVALVE", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "descriptorSet", HandleIdToString(descriptorSet));
            FieldToString(strStrm, false, "ppData", DataPointerDecoderToString(ppData));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetTessellationDomainOriginEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkTessellationDomainOrigin                  domainOrigin)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetTessellationDomainOriginEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "domainOrigin", '"' + ToString(domainOrigin, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthClampEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthClampEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthClampEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthClampEnable", ToString(depthClampEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetPolygonModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkPolygonMode                               polygonMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetPolygonModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "polygonMode", '"' + ToString(polygonMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRasterizationSamplesEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSampleCountFlagBits                       rasterizationSamples)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRasterizationSamplesEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "rasterizationSamples", '"' + ToString(rasterizationSamples, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetSampleMaskEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkSampleCountFlagBits                       samples,
    PointerDecoder<VkSampleMask>*               pSampleMask)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetSampleMaskEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "samples", '"' + ToString(samples, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "pSampleMask", PointerDecoderArrayToString((samples + 31) / 32, pSampleMask, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetAlphaToCoverageEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    alphaToCoverageEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetAlphaToCoverageEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "alphaToCoverageEnable", ToString(alphaToCoverageEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetAlphaToOneEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    alphaToOneEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetAlphaToOneEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "alphaToOneEnable", ToString(alphaToOneEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLogicOpEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    logicOpEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLogicOpEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "logicOpEnable", ToString(logicOpEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetColorBlendEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkBool32>*                   pColorBlendEnables)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetColorBlendEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstAttachment", ToString(firstAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorBlendEnables", PointerDecoderArrayToString(attachmentCount, pColorBlendEnables, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetColorBlendEquationEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkColorBlendEquationEXT>* pColorBlendEquations)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetColorBlendEquationEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstAttachment", ToString(firstAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorBlendEquations", PointerDecoderArrayToString(*pColorBlendEquations, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetColorWriteMaskEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    PointerDecoder<VkColorComponentFlags>*      pColorWriteMasks)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetColorWriteMaskEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstAttachment", ToString(firstAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorWriteMasks", PointerDecoderArrayToString(attachmentCount, pColorWriteMasks, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRasterizationStreamEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    rasterizationStream)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRasterizationStreamEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "rasterizationStream", ToString(rasterizationStream, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetConservativeRasterizationModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkConservativeRasterizationModeEXT          conservativeRasterizationMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetConservativeRasterizationModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "conservativeRasterizationMode", '"' + ToString(conservativeRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetExtraPrimitiveOverestimationSizeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    float                                       extraPrimitiveOverestimationSize)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetExtraPrimitiveOverestimationSizeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "extraPrimitiveOverestimationSize", ToString(extraPrimitiveOverestimationSize, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthClipEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    depthClipEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthClipEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "depthClipEnable", ToString(depthClipEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetSampleLocationsEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    sampleLocationsEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetSampleLocationsEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "sampleLocationsEnable", ToString(sampleLocationsEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetColorBlendAdvancedEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstAttachment,
    uint32_t                                    attachmentCount,
    StructPointerDecoder<Decoded_VkColorBlendAdvancedEXT>* pColorBlendAdvanced)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetColorBlendAdvancedEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstAttachment", ToString(firstAttachment, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "attachmentCount", ToString(attachmentCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pColorBlendAdvanced", PointerDecoderArrayToString(*pColorBlendAdvanced, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetProvokingVertexModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkProvokingVertexModeEXT                    provokingVertexMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetProvokingVertexModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "provokingVertexMode", '"' + ToString(provokingVertexMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLineRasterizationModeEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkLineRasterizationModeEXT                  lineRasterizationMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLineRasterizationModeEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "lineRasterizationMode", '"' + ToString(lineRasterizationMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetLineStippleEnableEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    stippledLineEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetLineStippleEnableEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "stippledLineEnable", ToString(stippledLineEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetDepthClipNegativeOneToOneEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    negativeOneToOne)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetDepthClipNegativeOneToOneEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "negativeOneToOne", ToString(negativeOneToOne, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportWScalingEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    viewportWScalingEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportWScalingEnableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "viewportWScalingEnable", ToString(viewportWScalingEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetViewportSwizzleNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    StructPointerDecoder<Decoded_VkViewportSwizzleNV>* pViewportSwizzles)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetViewportSwizzleNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "firstViewport", ToString(firstViewport, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "viewportCount", ToString(viewportCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pViewportSwizzles", PointerDecoderArrayToString(*pViewportSwizzles, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageToColorEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    coverageToColorEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageToColorEnableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageToColorEnable", ToString(coverageToColorEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageToColorLocationNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    coverageToColorLocation)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageToColorLocationNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageToColorLocation", ToString(coverageToColorLocation, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageModulationModeNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoverageModulationModeNV                  coverageModulationMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageModulationModeNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageModulationMode", '"' + ToString(coverageModulationMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageModulationTableEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    coverageModulationTableEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageModulationTableEnableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageModulationTableEnable", ToString(coverageModulationTableEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageModulationTableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    coverageModulationTableCount,
    PointerDecoder<float>*                      pCoverageModulationTable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageModulationTableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageModulationTableCount", ToString(coverageModulationTableCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCoverageModulationTable", PointerDecoderArrayToString(coverageModulationTableCount, pCoverageModulationTable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetShadingRateImageEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    shadingRateImageEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetShadingRateImageEnableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "shadingRateImageEnable", ToString(shadingRateImageEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRepresentativeFragmentTestEnableNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkBool32                                    representativeFragmentTestEnable)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRepresentativeFragmentTestEnableNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "representativeFragmentTestEnable", ToString(representativeFragmentTestEnable, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetCoverageReductionModeNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    VkCoverageReductionModeNV                   coverageReductionMode)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetCoverageReductionModeNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "coverageReductionMode", '"' + ToString(coverageReductionMode, toStringFlags, tabCount, tabSize) + '"');
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetShaderModuleIdentifierEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            shaderModule,
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT>* pIdentifier)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetShaderModuleIdentifierEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "shaderModule", HandleIdToString(shaderModule));
            FieldToString(strStrm, false, "pIdentifier", PointerDecoderToString(pIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetShaderModuleCreateInfoIdentifierEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkShaderModuleCreateInfo>* pCreateInfo,
    StructPointerDecoder<Decoded_VkShaderModuleIdentifierEXT>* pIdentifier)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetShaderModuleCreateInfoIdentifierEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pIdentifier", PointerDecoderToString(pIdentifier, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            physicalDevice,
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatInfoNV>* pOpticalFlowImageFormatInfo,
    PointerDecoder<uint32_t>*                   pFormatCount,
    StructPointerDecoder<Decoded_VkOpticalFlowImageFormatPropertiesNV>* pImageFormatProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "physicalDevice", HandleIdToString(physicalDevice));
            FieldToString(strStrm, false, "pOpticalFlowImageFormatInfo", PointerDecoderToString(pOpticalFlowImageFormatInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pFormatCount", PointerDecoderToString(pFormatCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pImageFormatProperties", PointerDecoderArrayToString(*pImageFormatProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkOpticalFlowSessionCreateInfoNV>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkOpticalFlowSessionNV>* pSession)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateOpticalFlowSessionNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pSession", HandlePointerDecoderToString(pSession));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyOpticalFlowSessionNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyOpticalFlowSessionNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "session", HandleIdToString(session));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkBindOpticalFlowSessionImageNV(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            session,
    VkOpticalFlowSessionBindingPointNV          bindingPoint,
    format::HandleId                            view,
    VkImageLayout                               layout)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkBindOpticalFlowSessionImageNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "session", HandleIdToString(session));
            FieldToString(strStrm, false, "bindingPoint", '"' + ToString(bindingPoint, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "view", HandleIdToString(view));
            FieldToString(strStrm, false, "layout", '"' + ToString(layout, toStringFlags, tabCount, tabSize) + '"');
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdOpticalFlowExecuteNV(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            session,
    StructPointerDecoder<Decoded_VkOpticalFlowExecuteInfoNV>* pExecuteInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdOpticalFlowExecuteNV", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "session", HandleIdToString(session));
            FieldToString(strStrm, false, "pExecuteInfo", PointerDecoderToString(pExecuteInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetFramebufferTilePropertiesQCOM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            framebuffer,
    PointerDecoder<uint32_t>*                   pPropertiesCount,
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetFramebufferTilePropertiesQCOM", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "framebuffer", HandleIdToString(framebuffer));
            FieldToString(strStrm, false, "pPropertiesCount", PointerDecoderToString(pPropertiesCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderArrayToString(*pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetDynamicRenderingTilePropertiesQCOM(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkRenderingInfo>* pRenderingInfo,
    StructPointerDecoder<Decoded_VkTilePropertiesQCOM>* pProperties)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDynamicRenderingTilePropertiesQCOM", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pRenderingInfo", PointerDecoderToString(pRenderingInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pProperties", PointerDecoderToString(pProperties, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCreateAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureCreateInfoKHR>* pCreateInfo,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructure)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateAccelerationStructureKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pCreateInfo", PointerDecoderToString(pCreateInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructure", HandlePointerDecoderToString(pAccelerationStructure));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkDestroyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    format::HandleId                            accelerationStructure,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkDestroyAccelerationStructureKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "accelerationStructure", HandleIdToString(accelerationStructure));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCopyAccelerationStructureToMemoryKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCopyAccelerationStructureToMemoryKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCopyMemoryToAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCopyMemoryToAccelerationStructureKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkWriteAccelerationStructuresPropertiesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructures,
    VkQueryType                                 queryType,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData,
    size_t                                      stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkWriteAccelerationStructuresPropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", HandlePointerDecoderArrayToString(accelerationStructureCount, pAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyAccelerationStructureKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyAccelerationStructureToMemoryKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyAccelerationStructureToMemoryInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyAccelerationStructureToMemoryKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdCopyMemoryToAccelerationStructureKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkCopyMemoryToAccelerationStructureInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdCopyMemoryToAccelerationStructureKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetAccelerationStructureDeviceAddressKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceAddress                             returnValue,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureDeviceAddressInfoKHR>* pInfo)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetAccelerationStructureDeviceAddressKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pInfo", PointerDecoderToString(pInfo, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdWriteAccelerationStructuresPropertiesKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    accelerationStructureCount,
    HandlePointerDecoder<VkAccelerationStructureKHR>* pAccelerationStructures,
    VkQueryType                                 queryType,
    format::HandleId                            queryPool,
    uint32_t                                    firstQuery)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdWriteAccelerationStructuresPropertiesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "accelerationStructureCount", ToString(accelerationStructureCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAccelerationStructures", HandlePointerDecoderArrayToString(accelerationStructureCount, pAccelerationStructures, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "queryType", '"' + ToString(queryType, toStringFlags, tabCount, tabSize) + '"');
            FieldToString(strStrm, false, "queryPool", HandleIdToString(queryPool));
            FieldToString(strStrm, false, "firstQuery", ToString(firstQuery, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetDeviceAccelerationStructureCompatibilityKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            device,
    StructPointerDecoder<Decoded_VkAccelerationStructureVersionInfoKHR>* pVersionInfo,
    PointerDecoder<VkAccelerationStructureCompatibilityKHR>* pCompatibility)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetDeviceAccelerationStructureCompatibilityKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pVersionInfo", PointerDecoderToString(pVersionInfo, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCompatibility", EnumPointerDecoderToString(pCompatibility));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pRaygenShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pMissShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pHitShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pCallableShaderBindingTable,
    uint32_t                                    width,
    uint32_t                                    height,
    uint32_t                                    depth)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdTraceRaysKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRaygenShaderBindingTable", PointerDecoderToString(pRaygenShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMissShaderBindingTable", PointerDecoderToString(pMissShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHitShaderBindingTable", PointerDecoderToString(pHitShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCallableShaderBindingTable", PointerDecoderToString(pCallableShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "width", ToString(width, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "height", ToString(height, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "depth", ToString(depth, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCreateRayTracingPipelinesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            deferredOperation,
    format::HandleId                            pipelineCache,
    uint32_t                                    createInfoCount,
    StructPointerDecoder<Decoded_VkRayTracingPipelineCreateInfoKHR>* pCreateInfos,
    StructPointerDecoder<Decoded_VkAllocationCallbacks>* pAllocator,
    HandlePointerDecoder<VkPipeline>*           pPipelines)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCreateRayTracingPipelinesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "deferredOperation", HandleIdToString(deferredOperation));
            FieldToString(strStrm, false, "pipelineCache", HandleIdToString(pipelineCache));
            FieldToString(strStrm, false, "createInfoCount", ToString(createInfoCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCreateInfos", PointerDecoderArrayToString(*pCreateInfos, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pAllocator", PointerDecoderToString(pAllocator, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pPipelines", HandlePointerDecoderArrayToString(createInfoCount, pPipelines, toStringFlags, tabCount, tabSize));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(
    const ApiCallInfo&                          call_info,
    VkResult                                    returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    PointerDecoder<uint8_t>*                    pData)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "firstGroup", ToString(firstGroup, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCount", ToString(groupCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "dataSize", ToString(dataSize, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pData", DataPointerDecoderToString(pData));
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdTraceRaysIndirectKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pRaygenShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pMissShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pHitShaderBindingTable,
    StructPointerDecoder<Decoded_VkStridedDeviceAddressRegionKHR>* pCallableShaderBindingTable,
    VkDeviceAddress                             indirectDeviceAddress)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdTraceRaysIndirectKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pRaygenShaderBindingTable", PointerDecoderToString(pRaygenShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pMissShaderBindingTable", PointerDecoderToString(pMissShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pHitShaderBindingTable", PointerDecoderToString(pHitShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "pCallableShaderBindingTable", PointerDecoderToString(pCallableShaderBindingTable, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "indirectDeviceAddress", ToString(indirectDeviceAddress, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkGetRayTracingShaderGroupStackSizeKHR(
    const ApiCallInfo&                          call_info,
    VkDeviceSize                                returnValue,
    format::HandleId                            device,
    format::HandleId                            pipeline,
    uint32_t                                    group,
    VkShaderGroupShaderKHR                      groupShader)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkGetRayTracingShaderGroupStackSizeKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "device", HandleIdToString(device));
            FieldToString(strStrm, false, "pipeline", HandleIdToString(pipeline));
            FieldToString(strStrm, false, "group", ToString(group, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupShader", '"' + ToString(groupShader, toStringFlags, tabCount, tabSize) + '"');
        }, ToString(returnValue, toStringFlags, tabCount, tabSize)
    );
}

void VulkanAsciiConsumer::Process_vkCmdSetRayTracingPipelineStackSizeKHR(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    pipelineStackSize)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdSetRayTracingPipelineStackSizeKHR", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "pipelineStackSize", ToString(pipelineStackSize, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    uint32_t                                    groupCountX,
    uint32_t                                    groupCountY,
    uint32_t                                    groupCountZ)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "groupCountX", ToString(groupCountX, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountY", ToString(groupCountY, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "groupCountZ", ToString(groupCountZ, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksIndirectEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "drawCount", ToString(drawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}

void VulkanAsciiConsumer::Process_vkCmdDrawMeshTasksIndirectCountEXT(
    const ApiCallInfo&                          call_info,
    format::HandleId                            commandBuffer,
    format::HandleId                            buffer,
    VkDeviceSize                                offset,
    format::HandleId                            countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
    using namespace gfxrecon::util;
    ToStringFlags toStringFlags = kToString_Default;
    uint32_t tabCount = 0;
    uint32_t tabSize = 4;
    WriteApiCallToFile(call_info, "vkCmdDrawMeshTasksIndirectCountEXT", toStringFlags, tabCount, tabSize,
        [&](std::stringstream& strStrm)
        {
            FieldToString(strStrm, true, "commandBuffer", HandleIdToString(commandBuffer));
            FieldToString(strStrm, false, "buffer", HandleIdToString(buffer));
            FieldToString(strStrm, false, "offset", ToString(offset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "countBuffer", HandleIdToString(countBuffer));
            FieldToString(strStrm, false, "countBufferOffset", ToString(countBufferOffset, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "maxDrawCount", ToString(maxDrawCount, toStringFlags, tabCount, tabSize));
            FieldToString(strStrm, false, "stride", ToString(stride, toStringFlags, tabCount, tabSize));
        }
    );
}
GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
