// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
mqtt_client_interfaces__srv__IsConnected_Request__init(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__fini(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__are_equal(const mqtt_client_interfaces__srv__IsConnected_Request * lhs, const mqtt_client_interfaces__srv__IsConnected_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__copy(
  const mqtt_client_interfaces__srv__IsConnected_Request * input,
  mqtt_client_interfaces__srv__IsConnected_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mqtt_client_interfaces__srv__IsConnected_Request *
mqtt_client_interfaces__srv__IsConnected_Request__create()
{
  mqtt_client_interfaces__srv__IsConnected_Request * msg = (mqtt_client_interfaces__srv__IsConnected_Request *)malloc(sizeof(mqtt_client_interfaces__srv__IsConnected_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__IsConnected_Request));
  bool success = mqtt_client_interfaces__srv__IsConnected_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__destroy(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  if (msg) {
    mqtt_client_interfaces__srv__IsConnected_Request__fini(msg);
  }
  free(msg);
}


bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mqtt_client_interfaces__srv__IsConnected_Request * data = NULL;
  if (size) {
    data = (mqtt_client_interfaces__srv__IsConnected_Request *)calloc(size, sizeof(mqtt_client_interfaces__srv__IsConnected_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__IsConnected_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__IsConnected_Request__fini(&data[i - 1]);
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
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__srv__IsConnected_Request__fini(&array->data[i]);
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

mqtt_client_interfaces__srv__IsConnected_Request__Sequence *
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__create(size_t size)
{
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array = (mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)malloc(sizeof(mqtt_client_interfaces__srv__IsConnected_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__destroy(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array)
{
  if (array) {
    mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(array);
  }
  free(array);
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__are_equal(const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * lhs, const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__copy(
  const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * input,
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__IsConnected_Request);
    mqtt_client_interfaces__srv__IsConnected_Request * data =
      (mqtt_client_interfaces__srv__IsConnected_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__IsConnected_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__IsConnected_Request__fini(&data[i]);
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
    if (!mqtt_client_interfaces__srv__IsConnected_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mqtt_client_interfaces__srv__IsConnected_Response__init(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  if (!msg) {
    return false;
  }
  // connected
  return true;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__fini(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  if (!msg) {
    return;
  }
  // connected
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__are_equal(const mqtt_client_interfaces__srv__IsConnected_Response * lhs, const mqtt_client_interfaces__srv__IsConnected_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__copy(
  const mqtt_client_interfaces__srv__IsConnected_Response * input,
  mqtt_client_interfaces__srv__IsConnected_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // connected
  output->connected = input->connected;
  return true;
}

mqtt_client_interfaces__srv__IsConnected_Response *
mqtt_client_interfaces__srv__IsConnected_Response__create()
{
  mqtt_client_interfaces__srv__IsConnected_Response * msg = (mqtt_client_interfaces__srv__IsConnected_Response *)malloc(sizeof(mqtt_client_interfaces__srv__IsConnected_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__IsConnected_Response));
  bool success = mqtt_client_interfaces__srv__IsConnected_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__destroy(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  if (msg) {
    mqtt_client_interfaces__srv__IsConnected_Response__fini(msg);
  }
  free(msg);
}


bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mqtt_client_interfaces__srv__IsConnected_Response * data = NULL;
  if (size) {
    data = (mqtt_client_interfaces__srv__IsConnected_Response *)calloc(size, sizeof(mqtt_client_interfaces__srv__IsConnected_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__IsConnected_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__IsConnected_Response__fini(&data[i - 1]);
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
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__srv__IsConnected_Response__fini(&array->data[i]);
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

mqtt_client_interfaces__srv__IsConnected_Response__Sequence *
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__create(size_t size)
{
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array = (mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)malloc(sizeof(mqtt_client_interfaces__srv__IsConnected_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__destroy(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array)
{
  if (array) {
    mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(array);
  }
  free(array);
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__are_equal(const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * lhs, const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__copy(
  const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * input,
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__IsConnected_Response);
    mqtt_client_interfaces__srv__IsConnected_Response * data =
      (mqtt_client_interfaces__srv__IsConnected_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__IsConnected_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__IsConnected_Response__fini(&data[i]);
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
    if (!mqtt_client_interfaces__srv__IsConnected_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
