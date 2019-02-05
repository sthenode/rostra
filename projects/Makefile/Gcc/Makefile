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
#   File: Makefile
#
# Author: $author$
#   Date: 8/8/2018
#
# generic Gcc Makefile for rostra
########################################################################

OTHER_VERSION_PKG = ${PKG}
OTHER_DEPENDS_PKG = ${PKG}/..
OTHER_THIRDPARTY_NAME = thirdparty
OTHER_THIRDPARTY_VERSION_PKG = ${OTHER_VERSION_PKG}/${OTHER_THIRDPARTY_NAME}

ROSTRA_PKG = ${PKG}
ROSTRA_SRC = ${ROSTRA_PKG}/src
ROSTRA_BLD = ${ROSTRA_PKG}/${BLD}/${BUILD_TYPE}
ROSTRA_LIB = ${ROSTRA_BLD}/lib
ROSTRA_BIN = ${ROSTRA_BLD}/bin


########################################################################
# rostra

# rostra USRDEFINES
#
rostra_USRDEFINES += \
${build_rostra_USRDEFINES} \

# rostra USRINCLUDES
#
rostra_USRINCLUDES += \
-I${ROSTRA_SRC} \
${build_rostra_USRINCLUDES} \

# rostra USRCXXFLAGS
#
rostra_USRCXXFLAGS += \
${build_rostra_USRCXXFLAGS} \

# rostra USRLIBDIRS
#
rostra_USRLIBDIRS += \
-L${ROSTRA_LIB} \
${build_rostra_USRLIBDIRS} \

# rostra LIBS
#
rostra_LIBS += \
-lrostra \
${build_rostra_LIBS} \

########################################################################

