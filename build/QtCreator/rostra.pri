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
# build QtCreator .pri file for rostra
########################################################################

BUILD_OS = ROSTRA_OS

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

# build nadir INCLUDEPATH
#
build_nadir_INCLUDEPATH += \

# build nadir DEFINES
#
build_nadir_DEFINES += \

# build nadir LIBS
#
build_nadir_LIBS += \

########################################################################
# rostra

# build rostra INCLUDEPATH
#
build_rostra_INCLUDEPATH += \
$${build_nadir_INCLUDEPATH} \


# build rostra DEFINES
#
build_rostra_DEFINES += \
$${build_nadir_DEFINES} \


# build rostra LIBS
#
build_rostra_LIBS += \
$${build_nadir_LIBS} \


