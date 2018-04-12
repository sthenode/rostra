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
#   File: rostra.pri
#
# Author: $author$
#   Date: 4/1/2018
#
# QtCreator .pri file for rostra executable rostra
########################################################################

########################################################################
# rostra

# rostra_exe TARGET
#
rostra_exe_TARGET = rostra

# rostra_exe INCLUDEPATH
#
rostra_exe_INCLUDEPATH += \
$${rostra_INCLUDEPATH} \

# rostra_exe DEFINES
#
rostra_exe_DEFINES += \
$${rostra_DEFINES} \

########################################################################
# rostra_exe OBJECTIVE_HEADERS
#
#rostra_exe_OBJECTIVE_HEADERS += \
#$${ROSTRA_SRC}/rostra/base/Base.hh \

# rostra_exe OBJECTIVE_SOURCES
#
#rostra_exe_OBJECTIVE_SOURCES += \
#$${ROSTRA_SRC}/rostra/base/Base.mm \

########################################################################
# rostra_exe HEADERS
#
#rostra_exe_HEADERS += \
#$${ROSTRA_SRC}/rostra/base/Base.hpp \

# rostra_exe SOURCES
#
#rostra_exe_SOURCES += \
#$${ROSTRA_SRC}/rostra/base/Base.cpp \

########################################################################
# rostra_exe FRAMEWORKS
#
rostra_exe_FRAMEWORKS += \
$${rostra_FRAMEWORKS} \

# rostra_exe LIBS
#
rostra_exe_LIBS += \
$${rostra_LIBS} \


