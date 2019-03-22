# set minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# create proj
SET(MY_PROJ_NAME "MINI_PROJ")
PROJECT(${MY_PROJ_NAME})

# set target file
SET(MY_TARGET ${MY_PROJ_NAME})

# set C compiler & CXX compiler
SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

# set executable file output path & lib output path
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# set install prefix
SET(CMAKE_INSTALL_PREFIX /tmp/${MY_PROJ_NAME})

# add sub dir
ADD_SUBDIRECTORY(src)
