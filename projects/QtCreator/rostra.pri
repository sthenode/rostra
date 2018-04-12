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
# QtCreator .pri file for rostra
########################################################################

OTHER_PKG = ../../../../../../..
OTHER_PRJ = ../../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/src/$${THIRDPARTY_NAME}



########################################################################
# rostra
FRAMEWORK_NAME = rostra
FRAMEWORK_SOURCE = src

ROSTRA_PKG = ../../../../..
ROSTRA_BLD = ../..

ROSTRA_PRJ = $${ROSTRA_PKG}
ROSTRA_BIN = $${ROSTRA_BLD}/bin
ROSTRA_LIB = $${ROSTRA_BLD}/lib
ROSTRA_SRC = $${ROSTRA_PKG}/$${FRAMEWORK_SOURCE}

# rostra BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
rostra_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
rostra_DEFINES += RELEASE_BUILD
}

# rostra INCLUDEPATH
#
rostra_INCLUDEPATH += \
$${ROSTRA_SRC} \
$${build_rostra_INCLUDEPATH} \

# rostra DEFINES
#
rostra_DEFINES += \
$${build_rostra_DEFINES} \

# rostra LIBS
#
rostra_LIBS += \
-L$${ROSTRA_LIB}/lib$${FRAMEWORK_NAME} \
-l$${FRAMEWORK_NAME} \


