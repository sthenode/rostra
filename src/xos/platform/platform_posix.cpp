///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2018 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: platform_posix.cpp
///
/// Author: $author$
///   Date: 3/31/2018
///////////////////////////////////////////////////////////////////////
#include "xos/platform/platform_posix.hpp"
#include <sys/time.h>

namespace xos {
namespace platform {
/*/
namespace microsoft {
namespace windows {

} /// namespace windows
} /// namespace microsoft
/*/
} /// namespace platform
} /// namespace xos

#if defined(MACOSX)
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
int clock_gettime(clockid_t clk_id, struct timespec *res) {
    if ((res) && (CLOCK_REALTIME == clk_id)) {
        int err = 0;
        struct timeval tv;
        if ((err = gettimeofday(&tv, NULL))) {
            res->tv_sec = 0;
            res->tv_nsec = 0;
            return errno;
        } else {
            res->tv_sec = tv.tv_sec;
            res->tv_nsec = ::xos::useconds_nseconds(tv.tv_usec);
            return 0;
        }
    }
    return EINVAL;
}
/*/
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
int pthread_tryjoin_np(pthread_t thread, void **retval) {
    return EINVAL;
}
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
int pthread_timedjoin_np
(pthread_t thread, void **retval, const struct timespec *abstime) {
    return EINVAL;
}
/*/
#endif // defined(MACOSX)

/*/
#if !defined(WINDOWS)
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
BOOL WINAPI CloseHandle(
  _In_ HANDLE hObject
) {
    ::xos::platform::microsoft::windows::Handle* handle = 0;
    if ((handle = ((::xos::platform::microsoft::windows::Handle*)hObject))) {
        BOOL success = handle->CloseHandle();
        delete handle;
        return success;
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
BOOL WINAPI ReleaseMutex(
  _In_ HANDLE hMutex
) {
    ::xos::platform::microsoft::windows::Handle* handle = 0;
    if ((handle = ((::xos::platform::microsoft::windows::Handle*)hMutex))) {
        BOOL success = handle->ReleaseMutex();
        return success;
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
BOOL WINAPI ReleaseSemaphore(
  _In_      HANDLE hSemaphore,
  _In_      LONG   lReleaseCount,
  _Out_opt_ LPLONG lpPreviousCount
) {
    ::xos::platform::microsoft::windows::Handle* handle = 0;
    if ((handle = ((::xos::platform::microsoft::windows::Handle*)hSemaphore))) {
        BOOL success = handle->ReleaseSemaphore(lReleaseCount, lpPreviousCount);
        return success;
    }
    return FALSE;
}
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
DWORD WINAPI WaitForSingleObject(
  _In_ HANDLE hHandle,
  _In_ DWORD  dwMilliseconds
) {
    ::xos::platform::microsoft::windows::Handle* handle = 0;
    if ((handle = ((::xos::platform::microsoft::windows::Handle*)hHandle))) {
        DWORD dwStatus = handle->WaitForSingleObject(dwMilliseconds);
        return dwStatus;
    }
    return WAIT_FAILED;
}
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
DWORD WINAPI GetLastError(void) {
    DWORD dwLastError = 1;
    return dwLastError;
}

int _fileno(
   FILE *stream
) {
    return ::fileno(stream);
}
int _setmode (
   int fd,
   int mode
) {
    if (0 <= (fd)) {
        return 0;
    }
    return -1;
}
#endif // !defined(WINDOWS)
/*/
