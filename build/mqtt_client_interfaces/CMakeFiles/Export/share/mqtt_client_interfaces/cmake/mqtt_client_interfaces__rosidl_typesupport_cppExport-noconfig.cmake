#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mqtt_client_interfaces::mqtt_client_interfaces__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET mqtt_client_interfaces::mqtt_client_interfaces__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mqtt_client_interfaces::mqtt_client_interfaces__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmqtt_client_interfaces__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libmqtt_client_interfaces__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mqtt_client_interfaces::mqtt_client_interfaces__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_mqtt_client_interfaces::mqtt_client_interfaces__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libmqtt_client_interfaces__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
