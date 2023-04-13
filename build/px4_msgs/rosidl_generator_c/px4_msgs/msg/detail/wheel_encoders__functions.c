// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/wheel_encoders__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__WheelEncoders__init(px4_msgs__msg__WheelEncoders * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // encoder_position
  // speed
  // pulses_per_rev
  return true;
}

void
px4_msgs__msg__WheelEncoders__fini(px4_msgs__msg__WheelEncoders * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // encoder_position
  // speed
  // pulses_per_rev
}

bool
px4_msgs__msg__WheelEncoders__are_equal(const px4_msgs__msg__WheelEncoders * lhs, const px4_msgs__msg__WheelEncoders * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // encoder_position
  if (lhs->encoder_position != rhs->encoder_position) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // pulses_per_rev
  if (lhs->pulses_per_rev != rhs->pulses_per_rev) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__WheelEncoders__copy(
  const px4_msgs__msg__WheelEncoders * input,
  px4_msgs__msg__WheelEncoders * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // encoder_position
  output->encoder_position = input->encoder_position;
  // speed
  output->speed = input->speed;
  // pulses_per_rev
  output->pulses_per_rev = input->pulses_per_rev;
  return true;
}

px4_msgs__msg__WheelEncoders *
px4_msgs__msg__WheelEncoders__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__WheelEncoders * msg = (px4_msgs__msg__WheelEncoders *)allocator.allocate(sizeof(px4_msgs__msg__WheelEncoders), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__WheelEncoders));
  bool success = px4_msgs__msg__WheelEncoders__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__WheelEncoders__destroy(px4_msgs__msg__WheelEncoders * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__WheelEncoders__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__WheelEncoders__Sequence__init(px4_msgs__msg__WheelEncoders__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__WheelEncoders * data = NULL;

  if (size) {
    data = (px4_msgs__msg__WheelEncoders *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__WheelEncoders), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__WheelEncoders__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__WheelEncoders__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__WheelEncoders__Sequence__fini(px4_msgs__msg__WheelEncoders__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__WheelEncoders__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__WheelEncoders__Sequence *
px4_msgs__msg__WheelEncoders__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__WheelEncoders__Sequence * array = (px4_msgs__msg__WheelEncoders__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__WheelEncoders__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__WheelEncoders__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__WheelEncoders__Sequence__destroy(px4_msgs__msg__WheelEncoders__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__WheelEncoders__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__WheelEncoders__Sequence__are_equal(const px4_msgs__msg__WheelEncoders__Sequence * lhs, const px4_msgs__msg__WheelEncoders__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__WheelEncoders__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__WheelEncoders__Sequence__copy(
  const px4_msgs__msg__WheelEncoders__Sequence * input,
  px4_msgs__msg__WheelEncoders__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__WheelEncoders);
    px4_msgs__msg__WheelEncoders * data =
      (px4_msgs__msg__WheelEncoders *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__WheelEncoders__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__WheelEncoders__fini(&data[i]);
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
    if (!px4_msgs__msg__WheelEncoders__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
