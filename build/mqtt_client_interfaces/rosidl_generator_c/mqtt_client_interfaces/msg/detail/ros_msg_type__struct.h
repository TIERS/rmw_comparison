// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_H_
#define MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'md5'
// Member 'name'
// Member 'definition'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/RosMsgType in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__msg__RosMsgType
{
  rosidl_runtime_c__String md5;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String definition;
  bool stamped;
} mqtt_client_interfaces__msg__RosMsgType;

// Struct for a sequence of mqtt_client_interfaces__msg__RosMsgType.
typedef struct mqtt_client_interfaces__msg__RosMsgType__Sequence
{
  mqtt_client_interfaces__msg__RosMsgType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__msg__RosMsgType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__STRUCT_H_
