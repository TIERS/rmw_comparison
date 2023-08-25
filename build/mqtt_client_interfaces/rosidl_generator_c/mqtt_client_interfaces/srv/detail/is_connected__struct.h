// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_H_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/IsConnected in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__srv__IsConnected_Request
{
  uint8_t structure_needs_at_least_one_member;
} mqtt_client_interfaces__srv__IsConnected_Request;

// Struct for a sequence of mqtt_client_interfaces__srv__IsConnected_Request.
typedef struct mqtt_client_interfaces__srv__IsConnected_Request__Sequence
{
  mqtt_client_interfaces__srv__IsConnected_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__srv__IsConnected_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/IsConnected in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__srv__IsConnected_Response
{
  bool connected;
} mqtt_client_interfaces__srv__IsConnected_Response;

// Struct for a sequence of mqtt_client_interfaces__srv__IsConnected_Response.
typedef struct mqtt_client_interfaces__srv__IsConnected_Response__Sequence
{
  mqtt_client_interfaces__srv__IsConnected_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__srv__IsConnected_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__STRUCT_H_
