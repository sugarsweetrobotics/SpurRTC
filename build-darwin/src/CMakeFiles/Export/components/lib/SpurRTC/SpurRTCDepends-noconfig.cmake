#----------------------------------------------------------------
# Generated CMake target import file for configuration "".
#----------------------------------------------------------------

# Commands may need to know the format version.
SET(CMAKE_IMPORT_FILE_VERSION 1)

# Compute the installation prefix relative to this file.
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
GET_FILENAME_COMPONENT(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)

# Make sure the targets which have been exported in some other 
# export set exist.

# Import target "SpurRTC" for configuration ""
SET_PROPERTY(TARGET SpurRTC APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
SET_TARGET_PROPERTIES(SpurRTC PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "omniORB4;omnithread;omniDynamic4;RTC;coil;/usr/local/lib/libypspur.dylib"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/components/lib/SpurRTC.dylib"
  IMPORTED_SONAME_NOCONFIG "SpurRTC.dylib"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS SpurRTC )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_SpurRTC "${_IMPORT_PREFIX}/components/lib/SpurRTC.dylib" )

# Make sure the targets which have been exported in some other 
# export set exist.

# Import target "SpurRTCComp" for configuration ""
SET_PROPERTY(TARGET SpurRTCComp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
SET_TARGET_PROPERTIES(SpurRTCComp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/components/bin/SpurRTCComp"
  )

LIST(APPEND _IMPORT_CHECK_TARGETS SpurRTCComp )
LIST(APPEND _IMPORT_CHECK_FILES_FOR_SpurRTCComp "${_IMPORT_PREFIX}/components/bin/SpurRTCComp" )

# Loop over all imported files and verify that they actually exist
FOREACH(target ${_IMPORT_CHECK_TARGETS} )
  FOREACH(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    IF(NOT EXISTS "${file}" )
      MESSAGE(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    ENDIF()
  ENDFOREACH()
  UNSET(_IMPORT_CHECK_FILES_FOR_${target})
ENDFOREACH()
UNSET(_IMPORT_CHECK_TARGETS)

# Cleanup temporary variables.
SET(_IMPORT_PREFIX)

# Commands beyond this point should not need to know the version.
SET(CMAKE_IMPORT_FILE_VERSION)
