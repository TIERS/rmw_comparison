// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.h"
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // definition, md5, name
#include "rosidl_runtime_c/string_functions.h"  // definition, md5, name

// forward declare type support functions


using _RosMsgType__ros_msg_type = mqtt_client_interfaces__msg__RosMsgType;

static bool _RosMsgType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosMsgType__ros_msg_type * ros_message = static_cast<const _RosMsgType__ros_msg_type *>(untyped_ros_message);
  // Field name: md5
  {
    const rosidl_runtime_c__String * str = &ros_message->md5;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: definition
  {
    const rosidl_runtime_c__String * str = &ros_message->definition;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stamped
  {
    cdr << (ros_message->stamped ? true : false);
  }

  return true;
}

static bool _RosMsgType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosMsgType__ros_msg_type * ros_message = static_cast<_RosMsgType__ros_msg_type *>(untyped_ros_message);
  // Field name: md5
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->md5.data) {
      rosidl_runtime_c__String__init(&ros_message->md5);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->md5,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'md5'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: definition
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->definition.data) {
      rosidl_runtime_c__String__init(&ros_message->definition);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->definition,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'definition'\n");
      return false;
    }
  }

  // Field name: stamped
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->stamped = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__msg__RosMsgType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosMsgType__ros_msg_type * ros_message = static_cast<const _RosMsgType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name md5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->md5.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name definition
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->definition.size + 1);
  // field.name stamped
  {
    size_t item_size = sizeof(ros_message->stamped);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosMsgType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__msg__RosMsgType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__msg__RosMsgType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: md5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: definition
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: stamped
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _RosMsgType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mqtt_client_interfaces__msg__RosMsgType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RosMsgType = {
  "mqtt_client_interfaces::msg",
  "RosMsgType",
  _RosMsgType__cdr_serialize,
  _RosMsgType__cdr_deserialize,
  _RosMsgType__get_serialized_size,
  _RosMsgType__max_serialized_size
};

static rosidl_message_type_support_t _RosMsgType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosMsgType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, msg, RosMsgType)() {
  return &_RosMsgType__type_support;
}

#if defined(__cplusplus)
}
#endif
