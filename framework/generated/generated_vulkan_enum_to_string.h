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
std::string VkAccessFlagsToString(VkAccessFlags vkFlags);
std::string ToString(const VkAttachmentDescriptionFlagBits& value);
std::string VkAttachmentDescriptionFlagsToString(VkAttachmentDescriptionFlags vkFlags);
std::string ToString(const VkAttachmentLoadOp& value);
std::string ToString(const VkAttachmentStoreOp& value);
std::string ToString(const VkBlendFactor& value);
std::string ToString(const VkBlendOp& value);
std::string ToString(const VkBorderColor& value);
std::string ToString(const VkBufferCreateFlagBits& value);
std::string VkBufferCreateFlagsToString(VkBufferCreateFlags vkFlags);
std::string ToString(const VkBufferUsageFlagBits& value);
std::string VkBufferUsageFlagsToString(VkBufferUsageFlags vkFlags);
std::string ToString(const VkColorComponentFlagBits& value);
std::string VkColorComponentFlagsToString(VkColorComponentFlags vkFlags);
std::string ToString(const VkCommandBufferLevel& value);
std::string ToString(const VkCommandBufferResetFlagBits& value);
std::string VkCommandBufferResetFlagsToString(VkCommandBufferResetFlags vkFlags);
std::string ToString(const VkCommandBufferUsageFlagBits& value);
std::string VkCommandBufferUsageFlagsToString(VkCommandBufferUsageFlags vkFlags);
std::string ToString(const VkCommandPoolCreateFlagBits& value);
std::string VkCommandPoolCreateFlagsToString(VkCommandPoolCreateFlags vkFlags);
std::string ToString(const VkCommandPoolResetFlagBits& value);
std::string VkCommandPoolResetFlagsToString(VkCommandPoolResetFlags vkFlags);
std::string ToString(const VkCompareOp& value);
std::string ToString(const VkComponentSwizzle& value);
std::string ToString(const VkCullModeFlagBits& value);
std::string VkCullModeFlagsToString(VkCullModeFlags vkFlags);
std::string ToString(const VkDependencyFlagBits& value);
std::string VkDependencyFlagsToString(VkDependencyFlags vkFlags);
std::string ToString(const VkDescriptorPoolCreateFlagBits& value);
std::string VkDescriptorPoolCreateFlagsToString(VkDescriptorPoolCreateFlags vkFlags);
std::string ToString(const VkDescriptorSetLayoutCreateFlagBits& value);
std::string VkDescriptorSetLayoutCreateFlagsToString(VkDescriptorSetLayoutCreateFlags vkFlags);
std::string ToString(const VkDescriptorType& value);
std::string ToString(const VkDeviceQueueCreateFlagBits& value);
std::string VkDeviceQueueCreateFlagsToString(VkDeviceQueueCreateFlags vkFlags);
std::string ToString(const VkDynamicState& value);
std::string ToString(const VkEventCreateFlagBits& value);
std::string VkEventCreateFlagsToString(VkEventCreateFlags vkFlags);
std::string ToString(const VkFenceCreateFlagBits& value);
std::string VkFenceCreateFlagsToString(VkFenceCreateFlags vkFlags);
std::string ToString(const VkFilter& value);
std::string ToString(const VkFormat& value);
std::string ToString(const VkFormatFeatureFlagBits& value);
std::string VkFormatFeatureFlagsToString(VkFormatFeatureFlags vkFlags);
std::string ToString(const VkFramebufferCreateFlagBits& value);
std::string VkFramebufferCreateFlagsToString(VkFramebufferCreateFlags vkFlags);
std::string ToString(const VkFrontFace& value);
std::string ToString(const VkImageAspectFlagBits& value);
std::string VkImageAspectFlagsToString(VkImageAspectFlags vkFlags);
std::string ToString(const VkImageCreateFlagBits& value);
std::string VkImageCreateFlagsToString(VkImageCreateFlags vkFlags);
std::string ToString(const VkImageLayout& value);
std::string ToString(const VkImageTiling& value);
std::string ToString(const VkImageType& value);
std::string ToString(const VkImageUsageFlagBits& value);
std::string VkImageUsageFlagsToString(VkImageUsageFlags vkFlags);
std::string ToString(const VkImageViewCreateFlagBits& value);
std::string VkImageViewCreateFlagsToString(VkImageViewCreateFlags vkFlags);
std::string ToString(const VkImageViewType& value);
std::string ToString(const VkIndexType& value);
std::string ToString(const VkInstanceCreateFlagBits& value);
std::string VkInstanceCreateFlagsToString(VkInstanceCreateFlags vkFlags);
std::string ToString(const VkInternalAllocationType& value);
std::string ToString(const VkLogicOp& value);
std::string ToString(const VkMemoryHeapFlagBits& value);
std::string VkMemoryHeapFlagsToString(VkMemoryHeapFlags vkFlags);
std::string ToString(const VkMemoryPropertyFlagBits& value);
std::string VkMemoryPropertyFlagsToString(VkMemoryPropertyFlags vkFlags);
std::string ToString(const VkObjectType& value);
std::string ToString(const VkPhysicalDeviceType& value);
std::string ToString(const VkPipelineBindPoint& value);
std::string ToString(const VkPipelineCacheCreateFlagBits& value);
std::string VkPipelineCacheCreateFlagsToString(VkPipelineCacheCreateFlags vkFlags);
std::string ToString(const VkPipelineCacheHeaderVersion& value);
std::string ToString(const VkPipelineColorBlendStateCreateFlagBits& value);
std::string VkPipelineColorBlendStateCreateFlagsToString(VkPipelineColorBlendStateCreateFlags vkFlags);
std::string ToString(const VkPipelineCreateFlagBits& value);
std::string VkPipelineCreateFlagsToString(VkPipelineCreateFlags vkFlags);
std::string ToString(const VkPipelineDepthStencilStateCreateFlagBits& value);
std::string VkPipelineDepthStencilStateCreateFlagsToString(VkPipelineDepthStencilStateCreateFlags vkFlags);
std::string ToString(const VkPipelineLayoutCreateFlagBits& value);
std::string VkPipelineLayoutCreateFlagsToString(VkPipelineLayoutCreateFlags vkFlags);
std::string ToString(const VkPipelineShaderStageCreateFlagBits& value);
std::string VkPipelineShaderStageCreateFlagsToString(VkPipelineShaderStageCreateFlags vkFlags);
std::string ToString(const VkPipelineStageFlagBits& value);
std::string VkPipelineStageFlagsToString(VkPipelineStageFlags vkFlags);
std::string ToString(const VkPolygonMode& value);
std::string ToString(const VkPrimitiveTopology& value);
std::string ToString(const VkQueryControlFlagBits& value);
std::string VkQueryControlFlagsToString(VkQueryControlFlags vkFlags);
std::string ToString(const VkQueryPipelineStatisticFlagBits& value);
std::string VkQueryPipelineStatisticFlagsToString(VkQueryPipelineStatisticFlags vkFlags);
std::string ToString(const VkQueryResultFlagBits& value);
std::string VkQueryResultFlagsToString(VkQueryResultFlags vkFlags);
std::string ToString(const VkQueryType& value);
std::string ToString(const VkQueueFlagBits& value);
std::string VkQueueFlagsToString(VkQueueFlags vkFlags);
std::string ToString(const VkRenderPassCreateFlagBits& value);
std::string VkRenderPassCreateFlagsToString(VkRenderPassCreateFlags vkFlags);
std::string ToString(const VkResult& value);
std::string ToString(const VkSampleCountFlagBits& value);
std::string VkSampleCountFlagsToString(VkSampleCountFlags vkFlags);
std::string ToString(const VkSamplerAddressMode& value);
std::string ToString(const VkSamplerCreateFlagBits& value);
std::string VkSamplerCreateFlagsToString(VkSamplerCreateFlags vkFlags);
std::string ToString(const VkSamplerMipmapMode& value);
std::string ToString(const VkShaderStageFlagBits& value);
std::string VkShaderStageFlagsToString(VkShaderStageFlags vkFlags);
std::string ToString(const VkSharingMode& value);
std::string ToString(const VkSparseImageFormatFlagBits& value);
std::string VkSparseImageFormatFlagsToString(VkSparseImageFormatFlags vkFlags);
std::string ToString(const VkSparseMemoryBindFlagBits& value);
std::string VkSparseMemoryBindFlagsToString(VkSparseMemoryBindFlags vkFlags);
std::string ToString(const VkStencilFaceFlagBits& value);
std::string VkStencilFaceFlagsToString(VkStencilFaceFlags vkFlags);
std::string ToString(const VkStencilOp& value);
std::string ToString(const VkStructureType& value);
std::string ToString(const VkSubpassContents& value);
std::string ToString(const VkSubpassDescriptionFlagBits& value);
std::string VkSubpassDescriptionFlagsToString(VkSubpassDescriptionFlags vkFlags);
std::string ToString(const VkSystemAllocationScope& value);
std::string ToString(const VkVendorId& value);
std::string ToString(const VkVertexInputRate& value);
std::string ToString(const VkChromaLocation& value);
std::string ToString(const VkDescriptorUpdateTemplateType& value);
std::string ToString(const VkExternalFenceFeatureFlagBits& value);
std::string VkExternalFenceFeatureFlagsToString(VkExternalFenceFeatureFlags vkFlags);
std::string ToString(const VkExternalFenceHandleTypeFlagBits& value);
std::string VkExternalFenceHandleTypeFlagsToString(VkExternalFenceHandleTypeFlags vkFlags);
std::string ToString(const VkExternalMemoryFeatureFlagBits& value);
std::string VkExternalMemoryFeatureFlagsToString(VkExternalMemoryFeatureFlags vkFlags);
std::string ToString(const VkExternalMemoryHandleTypeFlagBits& value);
std::string VkExternalMemoryHandleTypeFlagsToString(VkExternalMemoryHandleTypeFlags vkFlags);
std::string ToString(const VkExternalSemaphoreFeatureFlagBits& value);
std::string VkExternalSemaphoreFeatureFlagsToString(VkExternalSemaphoreFeatureFlags vkFlags);
std::string ToString(const VkExternalSemaphoreHandleTypeFlagBits& value);
std::string VkExternalSemaphoreHandleTypeFlagsToString(VkExternalSemaphoreHandleTypeFlags vkFlags);
std::string ToString(const VkFenceImportFlagBits& value);
std::string VkFenceImportFlagsToString(VkFenceImportFlags vkFlags);
std::string ToString(const VkMemoryAllocateFlagBits& value);
std::string VkMemoryAllocateFlagsToString(VkMemoryAllocateFlags vkFlags);
std::string ToString(const VkPeerMemoryFeatureFlagBits& value);
std::string VkPeerMemoryFeatureFlagsToString(VkPeerMemoryFeatureFlags vkFlags);
std::string ToString(const VkPointClippingBehavior& value);
std::string ToString(const VkSamplerYcbcrModelConversion& value);
std::string ToString(const VkSamplerYcbcrRange& value);
std::string ToString(const VkSemaphoreImportFlagBits& value);
std::string VkSemaphoreImportFlagsToString(VkSemaphoreImportFlags vkFlags);
std::string ToString(const VkSubgroupFeatureFlagBits& value);
std::string VkSubgroupFeatureFlagsToString(VkSubgroupFeatureFlags vkFlags);
std::string ToString(const VkTessellationDomainOrigin& value);
std::string ToString(const VkDescriptorBindingFlagBits& value);
std::string VkDescriptorBindingFlagsToString(VkDescriptorBindingFlags vkFlags);
std::string ToString(const VkDriverId& value);
std::string ToString(const VkResolveModeFlagBits& value);
std::string VkResolveModeFlagsToString(VkResolveModeFlags vkFlags);
std::string ToString(const VkSamplerReductionMode& value);
std::string ToString(const VkSemaphoreType& value);
std::string ToString(const VkSemaphoreWaitFlagBits& value);
std::string VkSemaphoreWaitFlagsToString(VkSemaphoreWaitFlags vkFlags);
std::string ToString(const VkShaderFloatControlsIndependence& value);
std::string VkAccessFlagBits2ToString(const VkAccessFlagBits2 value);
std::string VkAccessFlags2ToString(VkAccessFlags2 vkFlags);
std::string VkFormatFeatureFlagBits2ToString(const VkFormatFeatureFlagBits2 value);
std::string VkFormatFeatureFlags2ToString(VkFormatFeatureFlags2 vkFlags);
std::string ToString(const VkPipelineCreationFeedbackFlagBits& value);
std::string VkPipelineCreationFeedbackFlagsToString(VkPipelineCreationFeedbackFlags vkFlags);
std::string VkPipelineStageFlagBits2ToString(const VkPipelineStageFlagBits2 value);
std::string VkPipelineStageFlags2ToString(VkPipelineStageFlags2 vkFlags);
std::string ToString(const VkRenderingFlagBits& value);
std::string VkRenderingFlagsToString(VkRenderingFlags vkFlags);
std::string ToString(const VkSubmitFlagBits& value);
std::string VkSubmitFlagsToString(VkSubmitFlags vkFlags);
std::string ToString(const VkToolPurposeFlagBits& value);
std::string VkToolPurposeFlagsToString(VkToolPurposeFlags vkFlags);
std::string ToString(const VkColorSpaceKHR& value);
std::string ToString(const VkCompositeAlphaFlagBitsKHR& value);
std::string VkCompositeAlphaFlagsKHRToString(VkCompositeAlphaFlagsKHR vkFlags);
std::string ToString(const VkPresentModeKHR& value);
std::string ToString(const VkSurfaceTransformFlagBitsKHR& value);
std::string VkSurfaceTransformFlagsKHRToString(VkSurfaceTransformFlagsKHR vkFlags);
std::string ToString(const VkDeviceGroupPresentModeFlagBitsKHR& value);
std::string VkDeviceGroupPresentModeFlagsKHRToString(VkDeviceGroupPresentModeFlagsKHR vkFlags);
std::string ToString(const VkSwapchainCreateFlagBitsKHR& value);
std::string VkSwapchainCreateFlagsKHRToString(VkSwapchainCreateFlagsKHR vkFlags);
std::string ToString(const VkDisplayPlaneAlphaFlagBitsKHR& value);
std::string VkDisplayPlaneAlphaFlagsKHRToString(VkDisplayPlaneAlphaFlagsKHR vkFlags);
std::string ToString(const VkAcquireProfilingLockFlagBitsKHR& value);
std::string VkAcquireProfilingLockFlagsKHRToString(VkAcquireProfilingLockFlagsKHR vkFlags);
std::string ToString(const VkPerformanceCounterDescriptionFlagBitsKHR& value);
std::string VkPerformanceCounterDescriptionFlagsKHRToString(VkPerformanceCounterDescriptionFlagsKHR vkFlags);
std::string ToString(const VkPerformanceCounterScopeKHR& value);
std::string ToString(const VkPerformanceCounterStorageKHR& value);
std::string ToString(const VkPerformanceCounterUnitKHR& value);
std::string ToString(const VkQueueGlobalPriorityKHR& value);
std::string ToString(const VkFragmentShadingRateCombinerOpKHR& value);
std::string ToString(const VkPipelineExecutableStatisticFormatKHR& value);
std::string ToString(const VkDebugReportFlagBitsEXT& value);
std::string VkDebugReportFlagsEXTToString(VkDebugReportFlagsEXT vkFlags);
std::string ToString(const VkDebugReportObjectTypeEXT& value);
std::string ToString(const VkRasterizationOrderAMD& value);
std::string ToString(const VkShaderInfoTypeAMD& value);
std::string ToString(const VkExternalMemoryFeatureFlagBitsNV& value);
std::string VkExternalMemoryFeatureFlagsNVToString(VkExternalMemoryFeatureFlagsNV vkFlags);
std::string ToString(const VkExternalMemoryHandleTypeFlagBitsNV& value);
std::string VkExternalMemoryHandleTypeFlagsNVToString(VkExternalMemoryHandleTypeFlagsNV vkFlags);
std::string ToString(const VkValidationCheckEXT& value);
std::string ToString(const VkPipelineRobustnessBufferBehaviorEXT& value);
std::string ToString(const VkPipelineRobustnessImageBehaviorEXT& value);
std::string ToString(const VkConditionalRenderingFlagBitsEXT& value);
std::string VkConditionalRenderingFlagsEXTToString(VkConditionalRenderingFlagsEXT vkFlags);
std::string ToString(const VkSurfaceCounterFlagBitsEXT& value);
std::string VkSurfaceCounterFlagsEXTToString(VkSurfaceCounterFlagsEXT vkFlags);
std::string ToString(const VkDeviceEventTypeEXT& value);
std::string ToString(const VkDisplayEventTypeEXT& value);
std::string ToString(const VkDisplayPowerStateEXT& value);
std::string ToString(const VkViewportCoordinateSwizzleNV& value);
std::string ToString(const VkDiscardRectangleModeEXT& value);
std::string ToString(const VkConservativeRasterizationModeEXT& value);
std::string ToString(const VkDebugUtilsMessageSeverityFlagBitsEXT& value);
std::string VkDebugUtilsMessageSeverityFlagsEXTToString(VkDebugUtilsMessageSeverityFlagsEXT vkFlags);
std::string ToString(const VkDebugUtilsMessageTypeFlagBitsEXT& value);
std::string VkDebugUtilsMessageTypeFlagsEXTToString(VkDebugUtilsMessageTypeFlagsEXT vkFlags);
std::string ToString(const VkBlendOverlapEXT& value);
std::string ToString(const VkCoverageModulationModeNV& value);
std::string ToString(const VkValidationCacheHeaderVersionEXT& value);
std::string ToString(const VkCoarseSampleOrderTypeNV& value);
std::string ToString(const VkShadingRatePaletteEntryNV& value);
std::string ToString(const VkAccelerationStructureMemoryRequirementsTypeNV& value);
std::string ToString(const VkAccelerationStructureTypeKHR& value);
std::string ToString(const VkBuildAccelerationStructureFlagBitsKHR& value);
std::string VkBuildAccelerationStructureFlagsKHRToString(VkBuildAccelerationStructureFlagsKHR vkFlags);
std::string ToString(const VkCopyAccelerationStructureModeKHR& value);
std::string ToString(const VkGeometryFlagBitsKHR& value);
std::string VkGeometryFlagsKHRToString(VkGeometryFlagsKHR vkFlags);
std::string ToString(const VkGeometryInstanceFlagBitsKHR& value);
std::string VkGeometryInstanceFlagsKHRToString(VkGeometryInstanceFlagsKHR vkFlags);
std::string ToString(const VkGeometryTypeKHR& value);
std::string ToString(const VkRayTracingShaderGroupTypeKHR& value);
std::string ToString(const VkPipelineCompilerControlFlagBitsAMD& value);
std::string VkPipelineCompilerControlFlagsAMDToString(VkPipelineCompilerControlFlagsAMD vkFlags);
std::string ToString(const VkTimeDomainEXT& value);
std::string ToString(const VkMemoryOverallocationBehaviorAMD& value);
std::string ToString(const VkPerformanceConfigurationTypeINTEL& value);
std::string ToString(const VkPerformanceOverrideTypeINTEL& value);
std::string ToString(const VkPerformanceParameterTypeINTEL& value);
std::string ToString(const VkPerformanceValueTypeINTEL& value);
std::string ToString(const VkQueryPoolSamplingModeINTEL& value);
std::string ToString(const VkShaderCorePropertiesFlagBitsAMD& value);
std::string VkShaderCorePropertiesFlagsAMDToString(VkShaderCorePropertiesFlagsAMD vkFlags);
std::string ToString(const VkValidationFeatureDisableEXT& value);
std::string ToString(const VkValidationFeatureEnableEXT& value);
std::string ToString(const VkComponentTypeNV& value);
std::string ToString(const VkScopeNV& value);
std::string ToString(const VkCoverageReductionModeNV& value);
std::string ToString(const VkProvokingVertexModeEXT& value);
std::string ToString(const VkFullScreenExclusiveEXT& value);
std::string ToString(const VkLineRasterizationModeEXT& value);
std::string ToString(const VkIndirectCommandsLayoutUsageFlagBitsNV& value);
std::string VkIndirectCommandsLayoutUsageFlagsNVToString(VkIndirectCommandsLayoutUsageFlagsNV vkFlags);
std::string ToString(const VkIndirectCommandsTokenTypeNV& value);
std::string ToString(const VkIndirectStateFlagBitsNV& value);
std::string VkIndirectStateFlagsNVToString(VkIndirectStateFlagsNV vkFlags);
std::string ToString(const VkDeviceMemoryReportEventTypeEXT& value);
std::string ToString(const VkDeviceDiagnosticsConfigFlagBitsNV& value);
std::string VkDeviceDiagnosticsConfigFlagsNVToString(VkDeviceDiagnosticsConfigFlagsNV vkFlags);
std::string ToString(const VkGraphicsPipelineLibraryFlagBitsEXT& value);
std::string VkGraphicsPipelineLibraryFlagsEXTToString(VkGraphicsPipelineLibraryFlagsEXT vkFlags);
std::string ToString(const VkFragmentShadingRateNV& value);
std::string ToString(const VkFragmentShadingRateTypeNV& value);
std::string ToString(const VkAccelerationStructureMotionInstanceTypeNV& value);
std::string ToString(const VkImageCompressionFixedRateFlagBitsEXT& value);
std::string VkImageCompressionFixedRateFlagsEXTToString(VkImageCompressionFixedRateFlagsEXT vkFlags);
std::string ToString(const VkImageCompressionFlagBitsEXT& value);
std::string VkImageCompressionFlagsEXTToString(VkImageCompressionFlagsEXT vkFlags);
std::string ToString(const VkDeviceFaultAddressTypeEXT& value);
std::string ToString(const VkDeviceFaultVendorBinaryHeaderVersionEXT& value);
std::string ToString(const VkDeviceAddressBindingFlagBitsEXT& value);
std::string VkDeviceAddressBindingFlagsEXTToString(VkDeviceAddressBindingFlagsEXT vkFlags);
std::string ToString(const VkDeviceAddressBindingTypeEXT& value);
std::string ToString(const VkAccelerationStructureBuildTypeKHR& value);
std::string ToString(const VkAccelerationStructureCompatibilityKHR& value);
std::string ToString(const VkBuildMicromapFlagBitsEXT& value);
std::string VkBuildMicromapFlagsEXTToString(VkBuildMicromapFlagsEXT vkFlags);
std::string ToString(const VkBuildMicromapModeEXT& value);
std::string ToString(const VkCopyMicromapModeEXT& value);
std::string ToString(const VkMicromapCreateFlagBitsEXT& value);
std::string VkMicromapCreateFlagsEXTToString(VkMicromapCreateFlagsEXT vkFlags);
std::string ToString(const VkMicromapTypeEXT& value);
std::string ToString(const VkOpacityMicromapFormatEXT& value);
std::string ToString(const VkOpacityMicromapSpecialIndexEXT& value);
std::string ToString(const VkSubpassMergeStatusEXT& value);
std::string ToString(const VkDirectDriverLoadingModeLUNARG& value);
std::string ToString(const VkOpticalFlowExecuteFlagBitsNV& value);
std::string VkOpticalFlowExecuteFlagsNVToString(VkOpticalFlowExecuteFlagsNV vkFlags);
std::string ToString(const VkOpticalFlowGridSizeFlagBitsNV& value);
std::string VkOpticalFlowGridSizeFlagsNVToString(VkOpticalFlowGridSizeFlagsNV vkFlags);
std::string ToString(const VkOpticalFlowPerformanceLevelNV& value);
std::string ToString(const VkOpticalFlowSessionBindingPointNV& value);
std::string ToString(const VkOpticalFlowSessionCreateFlagBitsNV& value);
std::string VkOpticalFlowSessionCreateFlagsNVToString(VkOpticalFlowSessionCreateFlagsNV vkFlags);
std::string ToString(const VkOpticalFlowUsageFlagBitsNV& value);
std::string VkOpticalFlowUsageFlagsNVToString(VkOpticalFlowUsageFlagsNV vkFlags);
std::string ToString(const VkRayTracingInvocationReorderModeNV& value);
std::string ToString(const VkAccelerationStructureCreateFlagBitsKHR& value);
std::string VkAccelerationStructureCreateFlagsKHRToString(VkAccelerationStructureCreateFlagsKHR vkFlags);
std::string ToString(const VkBuildAccelerationStructureModeKHR& value);
std::string ToString(const VkShaderGroupShaderKHR& value);
GFXRECON_END_NAMESPACE(util)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif
