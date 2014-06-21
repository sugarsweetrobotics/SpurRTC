# SpurRTC CMake config file
#
# This file sets the following variables:
# SpurRTC_FOUND - Always TRUE.
# SpurRTC_INCLUDE_DIRS - Directories containing the SpurRTC include files.
# SpurRTC_IDL_DIRS - Directories containing the SpurRTC IDL files.
# SpurRTC_LIBRARIES - Libraries needed to use SpurRTC.
# SpurRTC_DEFINITIONS - Compiler flags for SpurRTC.
# SpurRTC_VERSION - The version of SpurRTC found.
# SpurRTC_VERSION_MAJOR - The major version of SpurRTC found.
# SpurRTC_VERSION_MINOR - The minor version of SpurRTC found.
# SpurRTC_VERSION_REVISION - The revision version of SpurRTC found.
# SpurRTC_VERSION_CANDIDATE - The candidate version of SpurRTC found.

message(STATUS "Found SpurRTC-1.0.0")
set(SpurRTC_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(SpurRTC_INCLUDE_DIRS
#    "/usr/local/include/spurrtc-1"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(SpurRTC_IDL_DIRS
#    "/usr/local/include/spurrtc-1/idl")
set(SpurRTC_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(SpurRTC_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(SpurRTC_LIBRARIES
        "/usr/local/components/lib/libspurrtc.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(SpurRTC_LIBRARIES
        "/usr/local/components/lib/libspurrtc.dylib"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(SpurRTC_DEFINITIONS ${<dependency>_DEFINITIONS})

set(SpurRTC_VERSION 1.0.0)
set(SpurRTC_VERSION_MAJOR 1)
set(SpurRTC_VERSION_MINOR 0)
set(SpurRTC_VERSION_REVISION 0)
set(SpurRTC_VERSION_CANDIDATE )

