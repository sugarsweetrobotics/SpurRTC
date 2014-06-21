# Install script for directory: /Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "component")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/lib" TYPE SHARED_LIBRARY FILES "/Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/build-darwin/src/SpurRTC.dylib")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC.dylib")
    EXECUTE_PROCESS(COMMAND "/usr/bin/install_name_tool"
      -id "SpurRTC.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC.dylib")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC.dylib")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "component")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "component")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/bin" TYPE EXECUTABLE FILES "/Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/build-darwin/src/SpurRTCComp")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/bin/SpurRTCComp" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/bin/SpurRTCComp")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/bin/SpurRTCComp")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "component")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC/SpurRTCDepends.cmake")
    FILE(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC/SpurRTCDepends.cmake"
         "/Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/build-darwin/src/CMakeFiles/Export/components/lib/SpurRTC/SpurRTCDepends.cmake")
    IF(EXPORT_FILE_CHANGED)
      FILE(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC/SpurRTCDepends-*.cmake")
      IF(OLD_CONFIG_FILES)
        MESSAGE(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC/SpurRTCDepends.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        FILE(REMOVE ${OLD_CONFIG_FILES})
      ENDIF(OLD_CONFIG_FILES)
    ENDIF(EXPORT_FILE_CHANGED)
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC" TYPE FILE FILES "/Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/build-darwin/src/CMakeFiles/Export/components/lib/SpurRTC/SpurRTCDepends.cmake")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/components/lib/SpurRTC" TYPE FILE FILES "/Users/ysuga/Development/rtm/wasanbon/workspace/spur_test/rtc/SpurRTC/build-darwin/src/CMakeFiles/Export/components/lib/SpurRTC/SpurRTCDepends-noconfig.cmake")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

