// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mqtt_client_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mqtt_client_interfaces
cdr_serialize(
  const mqtt_client_interfaces::msg::RosMsgType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: md5
  cdr << ros_message.md5;
  // Member: name
  cdr << ros_message.name;
  // Member: definition
  cdr << ros_message.definition;
  // Member: stamped
  cdr << (ros_message.stamped ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mqtt_client_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mqtt_client_interfaces::msg::RosMsgType & ros_message)
{
  // Member: md5
  cdr >> ros_message.md5;

  // Member: name
  cdr >> ros_message.name;

  // Member: definition
  cdr >> ros_message.definition;

  // Member: stamped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.stamped = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mqtt_client_interfaces
get_serialized_size(
  const mqtt_client_interfaces::msg::RosMsgType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: md5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.md5.size() + 1);
  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: definition
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.definition.size() + 1);
  // Member: stamped
  {
    size_t item_size = sizeof(ros_message.stamped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mqtt_client_interfaces
max_serialized_size_RosMsgType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: md5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: definition
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: stamped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _RosMsgType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mqtt_client_interfaces::msg::RosMsgType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosMsgType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mqtt_client_interfaces::msg::RosMsgType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosMsgType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mqtt_client_interfaces::msg::RosMsgType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosMsgType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RosMsgType(full_bounded, 0);
}

static message_type_support_callbacks_t _RosMsgType__callbacks = {
  "mqtt_client_interfaces::msg",
  "RosMsgType",
  _RosMsgType__cdr_serialize,
  _RosMsgType__cdr_deserialize,
  _RosMsgType__get_serialized_size,
  _RosMsgType__max_serialized_size
};

static rosidl_message_type_support_t _RosMsgType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosMsgType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mqtt_client_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mqtt_client_interfaces::msg::RosMsgType>()
{
  return &mqtt_client_interfaces::msg::typesupport_fastrtps_cpp::_RosMsgType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mqtt_client_interfaces, msg, RosMsgType)() {
  return &mqtt_client_interfaces::msg::typesupport_fastrtps_cpp::_RosMsgType__handle;
}

#ifdef __cplusplus
}
#endif
