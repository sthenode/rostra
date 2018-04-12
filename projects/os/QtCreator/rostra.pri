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
# Os QtCreator .pri file for rostra
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
ROSTRA_OS = macosx
} else {
ROSTRA_OS = linux
}

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# rostra

# rostra INCLUDEPATH
#
rostra_INCLUDEPATH += \

# rostra DEFINES
#
rostra_DEFINES += \

# rostra LIBS
#
rostra_LIBS += \
$${build_rostra_LIBS} \
-lpthread \
-ldl \

contains(ROSTRA_OS,linux) {
rostra_LIBS += \
-lrt
} else {
}

