// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mqtt_client_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mqtt_client_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RosMsgType_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosMsgType_type_support_ids_t;

static const _RosMsgType_type_support_ids_t _RosMsgType_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RosMsgType_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosMsgType_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosMsgType_type_support_symbol_names_t _RosMsgType_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, msg, RosMsgType)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, msg, RosMsgType)),
  }
};

typedef struct _RosMsgType_type_support_data_t
{
  void * data[2];
} _RosMsgType_type_support_data_t;

static _RosMsgType_type_support_data_t _RosMsgType_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosMsgType_message_typesupport_map = {
  2,
  "mqtt_client_interfaces",
  &_RosMsgType_message_typesupport_ids.typesupport_identifier[0],
  &_RosMsgType_message_typesupport_symbol_names.symbol_name[0],
  &_RosMsgType_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosMsgType_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosMsgType_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace mqtt_client_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mqtt_client_interfaces, msg, RosMsgType)() {
  return &::mqtt_client_interfaces::msg::rosidl_typesupport_c::RosMsgType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
