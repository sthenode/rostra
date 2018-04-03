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
///   File: platform_posix.hpp
///
/// Author: $author$
///   Date: 3/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_PLATFORM_PLATFORM_POSIX_HPP
#define _XOS_PLATFORM_PLATFORM_POSIX_HPP

#include "xos/platform/platform_posix.h"

namespace xos {
namespace platform {

namespace microsoft {
namespace windows {
///////////////////////////////////////////////////////////////////////
/// Class Handle
///////////////////////////////////////////////////////////////////////
class _EXPORT_CLASS Handle {
public:
    Handle() {}
    virtual ~Handle() {}
    virtual BOOL CloseHandle() {
        BOOL success = FALSE;
        return success;
    }
    virtual BOOL ReleaseMutex() {
        BOOL success = FALSE;
        return success;
    }
    virtual BOOL ReleaseSemaphore(LONG lReleaseCount, LPLONG lpPreviousCount) {
        BOOL success = FALSE;
        return success;
    }
    virtual DWORD WaitForSingleObject(DWORD dwMilliseconds) {
        DWORD dwStatus = WAIT_FAILED;
        return dwStatus;
    }
    virtual DWORD GetLastError(void) {
        DWORD dwLastError = 1;
        return dwLastError;
    }
};
} /// namespace windows
} /// namespace microsoft

} /// namespace platform
} /// namespace xos 

#endif /// _XOS_PLATFORM_PLATFORM_POSIX_HPP
