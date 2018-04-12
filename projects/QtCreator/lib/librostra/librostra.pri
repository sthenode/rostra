########################################################################
# Copyright (c) 1988-2018 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: librostra.pri
#
# Author: $author$
#   Date: 4/1/2018
#
# QtCreator .pri file for rostra library librostra
########################################################################

########################################################################
# librostra

# librostra TARGET
#
librostra_TARGET = rostra
librostra_TEMPLATE = lib
librostra_CONFIG += staticlib

# librostra INCLUDEPATH
#
librostra_INCLUDEPATH += \
$${rostra_INCLUDEPATH} \

# librostra DEFINES
#
librostra_DEFINES += \
$${rostra_DEFINES} \

########################################################################
# librostra OBJECTIVE_HEADERS
#
#librostra_OBJECTIVE_HEADERS += \
#$${ROSTRA_SRC}/rostra/base/Base.hh \

# librostra OBJECTIVE_SOURCES
#
#librostra_OBJECTIVE_SOURCES += \
#$${ROSTRA_SRC}/rostra/base/Base.mm \

########################################################################
# librostra HEADERS
#
librostra_HEADERS += \
$${ROSTRA_SRC}/xos/platform/platform.h \ 
$${ROSTRA_SRC}/xos/platform/platform_packed_begin.h \ 
$${ROSTRA_SRC}/xos/platform/platform_packed_end.h \ 
$${ROSTRA_SRC}/xos/platform/platform_apple_osx.h \
$${ROSTRA_SRC}/xos/platform/platform_build.h \
$${ROSTRA_SRC}/xos/platform/platform_compiler.h \
$${ROSTRA_SRC}/xos/platform/platform_configure.h \
$${ROSTRA_SRC}/xos/platform/platform_defines.h \
$${ROSTRA_SRC}/xos/platform/platform_includes.h \
$${ROSTRA_SRC}/xos/platform/platform_microsoft_windows.h \
$${ROSTRA_SRC}/xos/platform/platform_posix.h \
$${ROSTRA_SRC}/xos/platform/platform_types.h \
$${ROSTRA_SRC}/xos/platform/platform.hpp \
$${ROSTRA_SRC}/xos/platform/platform_apple_osx.hpp \
$${ROSTRA_SRC}/xos/platform/platform_microsoft_windows.hpp \
$${ROSTRA_SRC}/xos/platform/platform_posix.hpp \
$${ROSTRA_SRC}/xos/base/base.hpp \

# librostra SOURCES
#
librostra_SOURCES += \
$${ROSTRA_SRC}/xos/platform/platform.cpp \
$${ROSTRA_SRC}/xos/base/base.cpp \

########################################################################
