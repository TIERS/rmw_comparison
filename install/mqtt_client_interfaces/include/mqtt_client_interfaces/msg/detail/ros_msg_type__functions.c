// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/msg/detail/ros_msg_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `md5`
// Member `name`
// Member `definition`
#include "rosidl_runtime_c/string_functions.h"

bool
mqtt_client_interfaces__msg__RosMsgType__init(mqtt_client_interfaces__msg__RosMsgType * msg)
{
  if (!msg) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__init(&msg->md5)) {
    mqtt_client_interfaces__msg__RosMsgType__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mqtt_client_interfaces__msg__RosMsgType__fini(msg);
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__init(&msg->definition)) {
    mqtt_client_interfaces__msg__RosMsgType__fini(msg);
    return false;
  }
  // stamped
  return true;
}

void
mqtt_client_interfaces__msg__RosMsgType__fini(mqtt_client_interfaces__msg__RosMsgType * msg)
{
  if (!msg) {
    return;
  }
  // md5
  rosidl_runtime_c__String__fini(&msg->md5);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // definition
  rosidl_runtime_c__String__fini(&msg->definition);
  // stamped
}

bool
mqtt_client_interfaces__msg__RosMsgType__are_equal(const mqtt_client_interfaces__msg__RosMsgType * lhs, const mqtt_client_interfaces__msg__RosMsgType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->definition), &(rhs->definition)))
  {
    return false;
  }
  // stamped
  if (lhs->stamped != rhs->stamped) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__msg__RosMsgType__copy(
  const mqtt_client_interfaces__msg__RosMsgType * input,
  mqtt_client_interfaces__msg__RosMsgType * output)
{
  if (!input || !output) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // definition
  if (!rosidl_runtime_c__String__copy(
      &(input->definition), &(output->definition)))
  {
    return false;
  }
  // stamped
  output->stamped = input->stamped;
  return true;
}

mqtt_client_interfaces__msg__RosMsgType *
mqtt_client_interfaces__msg__RosMsgType__create()
{
  mqtt_client_interfaces__msg__RosMsgType * msg = (mqtt_client_interfaces__msg__RosMsgType *)malloc(sizeof(mqtt_client_interfaces__msg__RosMsgType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__msg__RosMsgType));
  bool success = mqtt_client_interfaces__msg__RosMsgType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__msg__RosMsgType__destroy(mqtt_client_interfaces__msg__RosMsgType * msg)
{
  if (msg) {
    mqtt_client_interfaces__msg__RosMsgType__fini(msg);
  }
  free(msg);
}


bool
mqtt_client_interfaces__msg__RosMsgType__Sequence__init(mqtt_client_interfaces__msg__RosMsgType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mqtt_client_interfaces__msg__RosMsgType * data = NULL;
  if (size) {
    data = (mqtt_client_interfaces__msg__RosMsgType *)calloc(size, sizeof(mqtt_client_interfaces__msg__RosMsgType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__msg__RosMsgType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__msg__RosMsgType__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mqtt_client_interfaces__msg__RosMsgType__Sequence__fini(mqtt_client_interfaces__msg__RosMsgType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__msg__RosMsgType__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mqtt_client_interfaces__msg__RosMsgType__Sequence *
mqtt_client_interfaces__msg__RosMsgType__Sequence__create(size_t size)
{
  mqtt_client_interfaces__msg__RosMsgType__Sequence * array = (mqtt_client_interfaces__msg__RosMsgType__Sequence *)malloc(sizeof(mqtt_client_interfaces__msg__RosMsgType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__msg__RosMsgType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__msg__RosMsgType__Sequence__destroy(mqtt_client_interfaces__msg__RosMsgType__Sequence * array)
{
  if (array) {
    mqtt_client_interfaces__msg__RosMsgType__Sequence__fini(array);
  }
  free(array);
}

bool
mqtt_client_interfaces__msg__RosMsgType__Sequence__are_equal(const mqtt_client_interfaces__msg__RosMsgType__Sequence * lhs, const mqtt_client_interfaces__msg__RosMsgType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__msg__RosMsgType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__msg__RosMsgType__Sequence__copy(
  const mqtt_client_interfaces__msg__RosMsgType__Sequence * input,
  mqtt_client_interfaces__msg__RosMsgType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__msg__RosMsgType);
    mqtt_client_interfaces__msg__RosMsgType * data =
      (mqtt_client_interfaces__msg__RosMsgType *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__msg__RosMsgType__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__msg__RosMsgType__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__msg__RosMsgType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
