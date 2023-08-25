// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mqtt_client_interfaces/srv/detail/is_connected__struct.h"
#include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"
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


// forward declare type support functions


using _IsConnected_Request__ros_msg_type = mqtt_client_interfaces__srv__IsConnected_Request;

static bool _IsConnected_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IsConnected_Request__ros_msg_type * ros_message = static_cast<const _IsConnected_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _IsConnected_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IsConnected_Request__ros_msg_type * ros_message = static_cast<_IsConnected_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__srv__IsConnected_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IsConnected_Request__ros_msg_type * ros_message = static_cast<const _IsConnected_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IsConnected_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__srv__IsConnected_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__srv__IsConnected_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IsConnected_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mqtt_client_interfaces__srv__IsConnected_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IsConnected_Request = {
  "mqtt_client_interfaces::srv",
  "IsConnected_Request",
  _IsConnected_Request__cdr_serialize,
  _IsConnected_Request__cdr_deserialize,
  _IsConnected_Request__get_serialized_size,
  _IsConnected_Request__max_serialized_size
};

static rosidl_message_type_support_t _IsConnected_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IsConnected_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, IsConnected_Request)() {
  return &_IsConnected_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__struct.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _IsConnected_Response__ros_msg_type = mqtt_client_interfaces__srv__IsConnected_Response;

static bool _IsConnected_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IsConnected_Response__ros_msg_type * ros_message = static_cast<const _IsConnected_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    cdr << (ros_message->connected ? true : false);
  }

  return true;
}

static bool _IsConnected_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IsConnected_Response__ros_msg_type * ros_message = static_cast<_IsConnected_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connected = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__srv__IsConnected_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IsConnected_Response__ros_msg_type * ros_message = static_cast<const _IsConnected_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name connected
  {
    size_t item_size = sizeof(ros_message->connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IsConnected_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__srv__IsConnected_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__srv__IsConnected_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _IsConnected_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mqtt_client_interfaces__srv__IsConnected_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IsConnected_Response = {
  "mqtt_client_interfaces::srv",
  "IsConnected_Response",
  _IsConnected_Response__cdr_serialize,
  _IsConnected_Response__cdr_deserialize,
  _IsConnected_Response__get_serialized_size,
  _IsConnected_Response__max_serialized_size
};

static rosidl_message_type_support_t _IsConnected_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IsConnected_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, IsConnected_Response)() {
  return &_IsConnected_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mqtt_client_interfaces/srv/is_connected.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t IsConnected__callbacks = {
  "mqtt_client_interfaces::srv",
  "IsConnected",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, IsConnected_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, IsConnected_Response)(),
};

static rosidl_service_type_support_t IsConnected__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &IsConnected__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, IsConnected)() {
  return &IsConnected__handle;
}

#if defined(__cplusplus)
}
#endif
