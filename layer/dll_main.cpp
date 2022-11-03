/*
** Copyright (c) 2018, 2022 Valve Corporation
** Copyright (c) 2018, 2022 LunarG, Inc.
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
/// @file Handlers for shared library lifecycle events from the linker / OS.
///
/// On shared library detach we flush both open writeable files as cheap
/// insurance against a crash in another shared library during shutdown.
/// While this is unnecessary in the case of a clean shutdown as our dynamically
/// linked libc will flush and close files for us in its own detach
/// notification, a hard crash in another shared library such as a SEGV will
/// prevent the libc detach from ever happening.
/// Shutdown is a time in an application lifecycle during which it is easy for
/// a developer to ignore a crash that doesn't corrupt their data since it has
/// no negative effect on their users.
/// We would also like to be robust to use during development when
/// any of the shared libraries in the system may still be of beta or alpha
/// quality, and to be used alongside other layers that may be hacked together
/// and therefore of lower robustness as a deliberate design decision trading
/// development time versus utility.

#include "encode/vulkan_capture_manager.h"
#include "layer/trace_layer.h"

#if defined(WIN32)

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    BOOL success = TRUE;

    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            gfxrecon::encode::VulkanCaptureManager::SetLayerFuncs(gfxrecon::dispatch_CreateInstance,
                                                                  gfxrecon::dispatch_CreateDevice);
            break;
        case DLL_PROCESS_DETACH:
            // TODO: We assume that lpvReserved will always be NULL, because FreeLibrary should be
            //       invoked by the loader from vkDestroyInstance.  If this is not always the case,
            //       we will need to split destroy_layer into a shutdown function, responsible for
            //       performing any finalization work, that would always run and a destroy funtion,
            //       responsible for releasing resources, that would only run when the process was
            //       not terminating.
            if (lpvReserved == nullptr)
            {
                // TODO: Ensure that the trace is finalized.
            }
            // Flush all open write-mode files (capture and log):
            fflush(0);
            break;
    }

    return success;
}

#else // WIN32

__attribute__((constructor)) static void create_trace_layer()
{
    gfxrecon::encode::VulkanCaptureManager::SetLayerFuncs(gfxrecon::dispatch_CreateInstance,
                                                          gfxrecon::dispatch_CreateDevice);
}

__attribute__((destructor)) static void destroy_trace_layer()
{
    // TODO: Ensure that the trace is finalized.

    // Flush all open write-mode files (capture and log):
    fflush(0);
}

#endif // WIN32
