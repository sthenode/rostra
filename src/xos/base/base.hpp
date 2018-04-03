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
///   File: base.hpp
///
/// Author: $author$
///   Date: 4/1/2018
///////////////////////////////////////////////////////////////////////
#ifndef _XOS_BASE_BASE_HPP
#define _XOS_BASE_BASE_HPP

#include "xos/platform/platform.hpp"

namespace xos {

///////////////////////////////////////////////////////////////////////
/// Enum error_t
///////////////////////////////////////////////////////////////////////
typedef int error_t;
enum {
    error_none = 0,
    error_failed = 1
};

///////////////////////////////////////////////////////////////////////
///  Class: implement_baset
///////////////////////////////////////////////////////////////////////
template <typename TError = error_t>
class _EXPORT_CLASS implement_baset {
public:
    virtual ~implement_baset() {
    }
};
typedef implement_baset<> implement_base;

typedef implement_base baset_implements;
///////////////////////////////////////////////////////////////////////
///  Class: baset
///////////////////////////////////////////////////////////////////////
template <class TImplements = baset_implements>
class _EXPORT_CLASS baset: virtual public TImplements {
public:
    typedef TImplements implements;
    baset() {
    }
    baset(const baset &copy) {
    }
    virtual ~baset() {
    }
};
typedef baset<> base;

} /// namespace xos

#endif /// _XOS_BASE_BASE_HPP 
