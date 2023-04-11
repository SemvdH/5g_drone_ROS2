#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELWITHDEBINFO".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "px4_msgs::px4_msgs__rosidl_generator_py" for configuration "RELWITHDEBINFO"
set_property(TARGET px4_msgs::px4_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(px4_msgs::px4_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpx4_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libpx4_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS px4_msgs::px4_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_px4_msgs::px4_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libpx4_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
