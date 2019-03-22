# set lib head file dir
SET(SELF_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/include")
SET(THIRD_PARTY_INCLUDE_DIRECTORIES "/tmp/mylib/include/")
INCLUDE_DIRECTORIES(${SELF_INCLUDE_DIRECTORIES} ${THIRD_PARTY_INCLUDE_DIRECTORIES})

# get all source file
MACRO(SUBDIRLIST result curdir)
    FILE(GLOB_RECURSE children RELATIVE ${curdir} *.c *.cc *.cpp)
    SET(${result} ${children})
ENDMACRO()

SUBDIRLIST(SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR})

# generate target file
ADD_EXECUTABLE(${MY_TARGET} ${SRC_LIST})
TARGET_LINK_LIBRARIES(${MY_TARGET} mylib)

# set loop mode
#SET(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS ON)


#MACRO(SUBDIRLIST result curdir)
#    FILE(GLOB_RECURSE children RELATIVE ${curdir} *.c *.cc *.cpp)
#    #SET(dirlist "")
#    #FOREACH(child ${children})
#    #    IF(IS_DIRECTORY ${curdir}/${child})
#    #        LIST(APPEND dirlist ${child})
#    #    ENDIF()
#    #ENDFOREACH()
#    SET(${result} ${children})
#ENDMACRO()
