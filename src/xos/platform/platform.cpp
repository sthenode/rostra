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
///   File: platform.cpp
///
/// Author: $author$
///   Date: 3/31/2018
///////////////////////////////////////////////////////////////////////
#include "xos/platform/platform.hpp"
#include "xos/platform/platform.c"

#if defined(WINDOWS)  
#include "xos/platform/platform_microsoft_windows.cpp"
#else /// defined(WINDOWS) 
#if defined(MACOSX)  
#include "xos/platform/platform_apple_osx.cpp"
#else /// defined(MACOSX) 
#if defined(APPIOS)  
#include "xos/platform/platform_apple_ios.cpp"
#else /// defined(APPIOS) 
#include "xos/platform/platform_posix.cpp"
#endif /// defined(APPIOS) 
#endif /// defined(MACOSX) 
#endif /// defined(WINDOWS) 

namespace xos {

} /// namespace xos
