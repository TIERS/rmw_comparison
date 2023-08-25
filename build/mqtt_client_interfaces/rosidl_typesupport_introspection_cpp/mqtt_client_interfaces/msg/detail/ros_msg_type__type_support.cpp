// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mqtt_client_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RosMsgType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mqtt_client_interfaces::msg::RosMsgType(_init);
}

void RosMsgType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mqtt_client_interfaces::msg::RosMsgType *>(message_memory);
  typed_message->~RosMsgType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosMsgType_message_member_array[4] = {
  {
    "md5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces::msg::RosMsgType, md5),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces::msg::RosMsgType, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "definition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces::msg::RosMsgType, definition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamped",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces::msg::RosMsgType, stamped),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosMsgType_message_members = {
  "mqtt_client_interfaces::msg",  // message namespace
  "RosMsgType",  // message name
  4,  // number of fields
  sizeof(mqtt_client_interfaces::msg::RosMsgType),
  RosMsgType_message_member_array,  // message members
  RosMsgType_init_function,  // function to initialize message memory (memory has to be allocated)
  RosMsgType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosMsgType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosMsgType_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mqtt_client_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mqtt_client_interfaces::msg::RosMsgType>()
{
  return &::mqtt_client_interfaces::msg::rosidl_typesupport_introspection_cpp::RosMsgType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mqtt_client_interfaces, msg, RosMsgType)() {
  return &::mqtt_client_interfaces::msg::rosidl_typesupport_introspection_cpp::RosMsgType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
