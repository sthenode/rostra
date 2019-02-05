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
///   File: platform_microsoft_windows.hpp
///
/// Author: $author$
///   Date: 3/31/2018
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_PLATFORM_PLATFORM_MICROSOFT_WINDOWS_HPP
#define _XOS_PLATFORM_PLATFORM_MICROSOFT_WINDOWS_HPP

#include "xos/platform/platform_microsoft_windows.h"

#if (_MSC_VER > MSC_VER_6)
#if !defined(__interface__)
#define interface __interface__
#endif /// !defined(__interface__)
#endif /// (_MSC_VER > MSC_VER_6)

namespace xos {
namespace platform {

} /// namespace platform
} /// namespace xos 

#endif /// _XOS_PLATFORM_PLATFORM_MICROSOFT_WINDOWS_HPP
