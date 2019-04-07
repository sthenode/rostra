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
# build Gcc Makefile for rostra
########################################################################

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

ifndef USE_HOME_BUILD_nadir
USE_HOME_BUILD_nadir = no
endif

ifeq ($(USE_HOME_BUILD_nadir),yes)
#
# home build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \
-I$(HOME)/build/nadir/include \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \
-L$(HOME)/build/nadir/lib \

build_nadir_LIBS += \
-lnadir \

build_nadir_FRAMEWORKS += \

else
#
# build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \

build_nadir_LIBS += \

build_nadir_FRAMEWORKS += \

endif

########################################################################
# rostra

# build rostra USRDEFINES
#
build_rostra_USRDEFINES += \
${build_nadir_USRDEFINES} \


# build rostra USRINCLUDES
#
build_rostra_USRINCLUDES += \
${build_nadir_USRINCLUDES} \


# build rostra USRCXXFLAGS
#
build_rostra_USRCXXFLAGS += \
${build_nadir_USRCXXFLAGS} \


# build rostra USRLIBDIRS
#
build_rostra_USRLIBDIRS += \
${build_nadir_USRLIBDIRS} \


# build rostra FRAMEWORKS
#
build_rostra_FRAMEWORKS += \
${build_nadir_FRAMEWORKS} \


# build rostra LIBS
#
build_rostra_LIBS += \
${build_nadir_LIBS} \
${build_rostra_FRAMEWORKS}


