/*/
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
///   File: platform.h
///
/// Author: $author$
///   Date: 3/31/2018
///////////////////////////////////////////////////////////////////////
/*/
#ifndef _XOS_PLATFORM_PLATFORM_H
#define _XOS_PLATFORM_PLATFORM_H

#include "xos/platform/platform_build.h"
#include "xos/platform/platform_compiler.h"
#include "xos/platform/platform_includes.h"
#include "xos/platform/platform_defines.h"
#include "xos/platform/platform_types.h"
#include "xos/platform/platform_configure.h"

#if defined(WINDOWS)  
#include "xos/platform/platform_microsoft_windows.h"
#else /*/ defined(WINDOWS)  /*/
#if defined(MACOSX)  
#include "xos/platform/platform_apple_osx.h"
#else /*/ defined(MACOSX)  /*/
#if defined(APPIOS)  
#include "xos/platform/platform_apple_ios.h"
#else /*/ defined(APPIOS)  /*/
#include "xos/platform/platform_posix.h"
#endif /*/ defined(APPIOS)  /*/
#endif /*/ defined(MACOSX)  /*/
#endif /*/ defined(WINDOWS)  /*/

#if defined(__cplusplus)  
#else /*/ defined(__cplusplus)  /*/
#endif /*/ defined(__cplusplus)  /*/

#if defined(__cplusplus)
namespace xos {
namespace platform {
#endif /*/ defined(__cplusplus)  /*/

#if defined(__cplusplus)
#else /*/ defined(__cplusplus)  /*/
#endif /*/ defined(__cplusplus)  /*/

#if defined(__cplusplus)
} /*/ namespace platform /*/
} /*/ namespace xos /*/
#endif /*/ defined(__cplusplus)  /*/

#endif /*/ _XOS_PLATFORM_PLATFORM_H /*/
