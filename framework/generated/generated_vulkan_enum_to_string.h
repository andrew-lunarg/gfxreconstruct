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

#ifndef  GFXRECON_GENERATED_VULKAN_ENUM_TO_STRING_H
#define  GFXRECON_GENERATED_VULKAN_ENUM_TO_STRING_H

#include "format/platform_types.h"
#include "util/to_string.h"
#include "vulkan/vulkan.h"
GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(util)
std::string ToString(const VkAccessFlagBits& value);
template <> std::string ToString<VkAccessFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkAttachmentDescriptionFlagBits& value);
template <> std::string ToString<VkAttachmentDescriptionFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkAttachmentLoadOp& value);
std::string ToString(const VkAttachmentStoreOp& value);
std::string ToString(const VkBlendFactor& value);
std::string ToString(const VkBlendOp& value);
std::string ToString(const VkBorderColor& value);
std::string ToString(const VkBufferCreateFlagBits& value);
template <> std::string ToString<VkBufferCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkBufferUsageFlagBits& value);
template <> std::string ToString<VkBufferUsageFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkColorComponentFlagBits& value);
template <> std::string ToString<VkColorComponentFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCommandBufferLevel& value);
std::string ToString(const VkCommandBufferResetFlagBits& value);
template <> std::string ToString<VkCommandBufferResetFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCommandBufferUsageFlagBits& value);
template <> std::string ToString<VkCommandBufferUsageFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCommandPoolCreateFlagBits& value);
template <> std::string ToString<VkCommandPoolCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCommandPoolResetFlagBits& value);
template <> std::string ToString<VkCommandPoolResetFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCompareOp& value);
std::string ToString(const VkComponentSwizzle& value);
std::string ToString(const VkCullModeFlagBits& value);
template <> std::string ToString<VkCullModeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDependencyFlagBits& value);
template <> std::string ToString<VkDependencyFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDescriptorPoolCreateFlagBits& value);
template <> std::string ToString<VkDescriptorPoolCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDescriptorSetLayoutCreateFlagBits& value);
template <> std::string ToString<VkDescriptorSetLayoutCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDescriptorType& value);
std::string ToString(const VkDeviceQueueCreateFlagBits& value);
template <> std::string ToString<VkDeviceQueueCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDynamicState& value);
std::string ToString(const VkEventCreateFlagBits& value);
template <> std::string ToString<VkEventCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFenceCreateFlagBits& value);
template <> std::string ToString<VkFenceCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFilter& value);
std::string ToString(const VkFormat& value);
std::string ToString(const VkFormatFeatureFlagBits& value);
template <> std::string ToString<VkFormatFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFramebufferCreateFlagBits& value);
template <> std::string ToString<VkFramebufferCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFrontFace& value);
std::string ToString(const VkImageAspectFlagBits& value);
template <> std::string ToString<VkImageAspectFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkImageCreateFlagBits& value);
template <> std::string ToString<VkImageCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkImageLayout& value);
std::string ToString(const VkImageTiling& value);
std::string ToString(const VkImageType& value);
std::string ToString(const VkImageUsageFlagBits& value);
template <> std::string ToString<VkImageUsageFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkImageViewCreateFlagBits& value);
template <> std::string ToString<VkImageViewCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkImageViewType& value);
std::string ToString(const VkIndexType& value);
std::string ToString(const VkInstanceCreateFlagBits& value);
template <> std::string ToString<VkInstanceCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkInternalAllocationType& value);
std::string ToString(const VkLogicOp& value);
std::string ToString(const VkMemoryHeapFlagBits& value);
template <> std::string ToString<VkMemoryHeapFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkMemoryPropertyFlagBits& value);
template <> std::string ToString<VkMemoryPropertyFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkObjectType& value);
std::string ToString(const VkPhysicalDeviceType& value);
std::string ToString(const VkPipelineBindPoint& value);
std::string ToString(const VkPipelineCacheCreateFlagBits& value);
template <> std::string ToString<VkPipelineCacheCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineCacheHeaderVersion& value);
std::string ToString(const VkPipelineColorBlendStateCreateFlagBits& value);
template <> std::string ToString<VkPipelineColorBlendStateCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineCreateFlagBits& value);
template <> std::string ToString<VkPipelineCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineDepthStencilStateCreateFlagBits& value);
template <> std::string ToString<VkPipelineDepthStencilStateCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineLayoutCreateFlagBits& value);
template <> std::string ToString<VkPipelineLayoutCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineShaderStageCreateFlagBits& value);
template <> std::string ToString<VkPipelineShaderStageCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPipelineStageFlagBits& value);
template <> std::string ToString<VkPipelineStageFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPolygonMode& value);
std::string ToString(const VkPrimitiveTopology& value);
std::string ToString(const VkQueryControlFlagBits& value);
template <> std::string ToString<VkQueryControlFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkQueryPipelineStatisticFlagBits& value);
template <> std::string ToString<VkQueryPipelineStatisticFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkQueryResultFlagBits& value);
template <> std::string ToString<VkQueryResultFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkQueryType& value);
std::string ToString(const VkQueueFlagBits& value);
template <> std::string ToString<VkQueueFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkRenderPassCreateFlagBits& value);
template <> std::string ToString<VkRenderPassCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkResult& value);
std::string ToString(const VkSampleCountFlagBits& value);
template <> std::string ToString<VkSampleCountFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSamplerAddressMode& value);
std::string ToString(const VkSamplerCreateFlagBits& value);
template <> std::string ToString<VkSamplerCreateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSamplerMipmapMode& value);
std::string ToString(const VkShaderStageFlagBits& value);
template <> std::string ToString<VkShaderStageFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSharingMode& value);
std::string ToString(const VkSparseImageFormatFlagBits& value);
template <> std::string ToString<VkSparseImageFormatFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSparseMemoryBindFlagBits& value);
template <> std::string ToString<VkSparseMemoryBindFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkStencilFaceFlagBits& value);
template <> std::string ToString<VkStencilFaceFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkStencilOp& value);
std::string ToString(const VkStructureType& value);
std::string ToString(const VkSubpassContents& value);
std::string ToString(const VkSubpassDescriptionFlagBits& value);
template <> std::string ToString<VkSubpassDescriptionFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSystemAllocationScope& value);
std::string ToString(const VkVendorId& value);
std::string ToString(const VkVertexInputRate& value);
std::string ToString(const VkChromaLocation& value);
std::string ToString(const VkDescriptorUpdateTemplateType& value);
std::string ToString(const VkExternalFenceFeatureFlagBits& value);
template <> std::string ToString<VkExternalFenceFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalFenceHandleTypeFlagBits& value);
template <> std::string ToString<VkExternalFenceHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalMemoryFeatureFlagBits& value);
template <> std::string ToString<VkExternalMemoryFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalMemoryHandleTypeFlagBits& value);
template <> std::string ToString<VkExternalMemoryHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalSemaphoreFeatureFlagBits& value);
template <> std::string ToString<VkExternalSemaphoreFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalSemaphoreHandleTypeFlagBits& value);
template <> std::string ToString<VkExternalSemaphoreHandleTypeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFenceImportFlagBits& value);
template <> std::string ToString<VkFenceImportFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkMemoryAllocateFlagBits& value);
template <> std::string ToString<VkMemoryAllocateFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPeerMemoryFeatureFlagBits& value);
template <> std::string ToString<VkPeerMemoryFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPointClippingBehavior& value);
std::string ToString(const VkSamplerYcbcrModelConversion& value);
std::string ToString(const VkSamplerYcbcrRange& value);
std::string ToString(const VkSemaphoreImportFlagBits& value);
template <> std::string ToString<VkSemaphoreImportFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSubgroupFeatureFlagBits& value);
template <> std::string ToString<VkSubgroupFeatureFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkTessellationDomainOrigin& value);
std::string ToString(const VkDescriptorBindingFlagBits& value);
template <> std::string ToString<VkDescriptorBindingFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDriverId& value);
std::string ToString(const VkResolveModeFlagBits& value);
template <> std::string ToString<VkResolveModeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSamplerReductionMode& value);
std::string ToString(const VkSemaphoreType& value);
std::string ToString(const VkSemaphoreWaitFlagBits& value);
template <> std::string ToString<VkSemaphoreWaitFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkShaderFloatControlsIndependence& value);
std::string VkAccessFlagBits2ToString(const VkAccessFlagBits2 value);
std::string VkAccessFlags2ToString(VkFlags64 vkFlags);
std::string VkFormatFeatureFlagBits2ToString(const VkFormatFeatureFlagBits2 value);
std::string VkFormatFeatureFlags2ToString(VkFlags64 vkFlags);
std::string ToString(const VkPipelineCreationFeedbackFlagBits& value);
template <> std::string ToString<VkPipelineCreationFeedbackFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string VkPipelineStageFlagBits2ToString(const VkPipelineStageFlagBits2 value);
std::string VkPipelineStageFlags2ToString(VkFlags64 vkFlags);
std::string ToString(const VkRenderingFlagBits& value);
template <> std::string ToString<VkRenderingFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSubmitFlagBits& value);
template <> std::string ToString<VkSubmitFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkToolPurposeFlagBits& value);
template <> std::string ToString<VkToolPurposeFlagBits>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkColorSpaceKHR& value);
std::string ToString(const VkCompositeAlphaFlagBitsKHR& value);
template <> std::string ToString<VkCompositeAlphaFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPresentModeKHR& value);
std::string ToString(const VkSurfaceTransformFlagBitsKHR& value);
template <> std::string ToString<VkSurfaceTransformFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDeviceGroupPresentModeFlagBitsKHR& value);
template <> std::string ToString<VkDeviceGroupPresentModeFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSwapchainCreateFlagBitsKHR& value);
template <> std::string ToString<VkSwapchainCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDisplayPlaneAlphaFlagBitsKHR& value);
template <> std::string ToString<VkDisplayPlaneAlphaFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkAcquireProfilingLockFlagBitsKHR& value);
template <> std::string ToString<VkAcquireProfilingLockFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPerformanceCounterDescriptionFlagBitsKHR& value);
template <> std::string ToString<VkPerformanceCounterDescriptionFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkPerformanceCounterScopeKHR& value);
std::string ToString(const VkPerformanceCounterStorageKHR& value);
std::string ToString(const VkPerformanceCounterUnitKHR& value);
std::string ToString(const VkQueueGlobalPriorityKHR& value);
std::string ToString(const VkFragmentShadingRateCombinerOpKHR& value);
std::string ToString(const VkPipelineExecutableStatisticFormatKHR& value);
std::string ToString(const VkDebugReportFlagBitsEXT& value);
template <> std::string ToString<VkDebugReportFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDebugReportObjectTypeEXT& value);
std::string ToString(const VkRasterizationOrderAMD& value);
std::string ToString(const VkShaderInfoTypeAMD& value);
std::string ToString(const VkExternalMemoryFeatureFlagBitsNV& value);
template <> std::string ToString<VkExternalMemoryFeatureFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkExternalMemoryHandleTypeFlagBitsNV& value);
template <> std::string ToString<VkExternalMemoryHandleTypeFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkValidationCheckEXT& value);
std::string ToString(const VkPipelineRobustnessBufferBehaviorEXT& value);
std::string ToString(const VkPipelineRobustnessImageBehaviorEXT& value);
std::string ToString(const VkConditionalRenderingFlagBitsEXT& value);
template <> std::string ToString<VkConditionalRenderingFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkSurfaceCounterFlagBitsEXT& value);
template <> std::string ToString<VkSurfaceCounterFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDeviceEventTypeEXT& value);
std::string ToString(const VkDisplayEventTypeEXT& value);
std::string ToString(const VkDisplayPowerStateEXT& value);
std::string ToString(const VkViewportCoordinateSwizzleNV& value);
std::string ToString(const VkDiscardRectangleModeEXT& value);
std::string ToString(const VkConservativeRasterizationModeEXT& value);
std::string ToString(const VkDebugUtilsMessageSeverityFlagBitsEXT& value);
template <> std::string ToString<VkDebugUtilsMessageSeverityFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDebugUtilsMessageTypeFlagBitsEXT& value);
template <> std::string ToString<VkDebugUtilsMessageTypeFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkBlendOverlapEXT& value);
std::string ToString(const VkCoverageModulationModeNV& value);
std::string ToString(const VkValidationCacheHeaderVersionEXT& value);
std::string ToString(const VkCoarseSampleOrderTypeNV& value);
std::string ToString(const VkShadingRatePaletteEntryNV& value);
std::string ToString(const VkAccelerationStructureMemoryRequirementsTypeNV& value);
std::string ToString(const VkAccelerationStructureTypeKHR& value);
std::string ToString(const VkBuildAccelerationStructureFlagBitsKHR& value);
template <> std::string ToString<VkBuildAccelerationStructureFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkCopyAccelerationStructureModeKHR& value);
std::string ToString(const VkGeometryFlagBitsKHR& value);
template <> std::string ToString<VkGeometryFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkGeometryInstanceFlagBitsKHR& value);
template <> std::string ToString<VkGeometryInstanceFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkGeometryTypeKHR& value);
std::string ToString(const VkRayTracingShaderGroupTypeKHR& value);
std::string ToString(const VkPipelineCompilerControlFlagBitsAMD& value);
template <> std::string ToString<VkPipelineCompilerControlFlagBitsAMD>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkTimeDomainEXT& value);
std::string ToString(const VkMemoryOverallocationBehaviorAMD& value);
std::string ToString(const VkPerformanceConfigurationTypeINTEL& value);
std::string ToString(const VkPerformanceOverrideTypeINTEL& value);
std::string ToString(const VkPerformanceParameterTypeINTEL& value);
std::string ToString(const VkPerformanceValueTypeINTEL& value);
std::string ToString(const VkQueryPoolSamplingModeINTEL& value);
std::string ToString(const VkShaderCorePropertiesFlagBitsAMD& value);
template <> std::string ToString<VkShaderCorePropertiesFlagBitsAMD>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkValidationFeatureDisableEXT& value);
std::string ToString(const VkValidationFeatureEnableEXT& value);
std::string ToString(const VkComponentTypeNV& value);
std::string ToString(const VkScopeNV& value);
std::string ToString(const VkCoverageReductionModeNV& value);
std::string ToString(const VkProvokingVertexModeEXT& value);
std::string ToString(const VkFullScreenExclusiveEXT& value);
std::string ToString(const VkLineRasterizationModeEXT& value);
std::string ToString(const VkIndirectCommandsLayoutUsageFlagBitsNV& value);
template <> std::string ToString<VkIndirectCommandsLayoutUsageFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkIndirectCommandsTokenTypeNV& value);
std::string ToString(const VkIndirectStateFlagBitsNV& value);
template <> std::string ToString<VkIndirectStateFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDeviceMemoryReportEventTypeEXT& value);
std::string ToString(const VkDeviceDiagnosticsConfigFlagBitsNV& value);
template <> std::string ToString<VkDeviceDiagnosticsConfigFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkGraphicsPipelineLibraryFlagBitsEXT& value);
template <> std::string ToString<VkGraphicsPipelineLibraryFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkFragmentShadingRateNV& value);
std::string ToString(const VkFragmentShadingRateTypeNV& value);
std::string ToString(const VkAccelerationStructureMotionInstanceTypeNV& value);
std::string ToString(const VkImageCompressionFixedRateFlagBitsEXT& value);
template <> std::string ToString<VkImageCompressionFixedRateFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkImageCompressionFlagBitsEXT& value);
template <> std::string ToString<VkImageCompressionFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDeviceFaultAddressTypeEXT& value);
std::string ToString(const VkDeviceFaultVendorBinaryHeaderVersionEXT& value);
std::string ToString(const VkDeviceAddressBindingFlagBitsEXT& value);
template <> std::string ToString<VkDeviceAddressBindingFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkDeviceAddressBindingTypeEXT& value);
std::string ToString(const VkAccelerationStructureBuildTypeKHR& value);
std::string ToString(const VkAccelerationStructureCompatibilityKHR& value);
std::string ToString(const VkBuildMicromapFlagBitsEXT& value);
template <> std::string ToString<VkBuildMicromapFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkBuildMicromapModeEXT& value);
std::string ToString(const VkCopyMicromapModeEXT& value);
std::string ToString(const VkMicromapCreateFlagBitsEXT& value);
template <> std::string ToString<VkMicromapCreateFlagBitsEXT>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkMicromapTypeEXT& value);
std::string ToString(const VkOpacityMicromapFormatEXT& value);
std::string ToString(const VkOpacityMicromapSpecialIndexEXT& value);
std::string ToString(const VkSubpassMergeStatusEXT& value);
std::string ToString(const VkDirectDriverLoadingModeLUNARG& value);
std::string ToString(const VkOpticalFlowExecuteFlagBitsNV& value);
template <> std::string ToString<VkOpticalFlowExecuteFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkOpticalFlowGridSizeFlagBitsNV& value);
template <> std::string ToString<VkOpticalFlowGridSizeFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkOpticalFlowPerformanceLevelNV& value);
std::string ToString(const VkOpticalFlowSessionBindingPointNV& value);
std::string ToString(const VkOpticalFlowSessionCreateFlagBitsNV& value);
template <> std::string ToString<VkOpticalFlowSessionCreateFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkOpticalFlowUsageFlagBitsNV& value);
template <> std::string ToString<VkOpticalFlowUsageFlagBitsNV>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkRayTracingInvocationReorderModeNV& value);
std::string ToString(const VkAccelerationStructureCreateFlagBitsKHR& value);
template <> std::string ToString<VkAccelerationStructureCreateFlagBitsKHR>(VkFlags vkFlags, ToStringFlags toStringFlags, uint32_t tabCount, uint32_t tabSize);
std::string ToString(const VkBuildAccelerationStructureModeKHR& value);
std::string ToString(const VkShaderGroupShaderKHR& value);
GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
