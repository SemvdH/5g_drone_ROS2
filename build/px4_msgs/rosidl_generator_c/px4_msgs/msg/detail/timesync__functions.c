// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Timesync.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/timesync__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__Timesync__init(px4_msgs__msg__Timesync * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // seq
  // tc1
  // ts1
  return true;
}

void
px4_msgs__msg__Timesync__fini(px4_msgs__msg__Timesync * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // seq
  // tc1
  // ts1
}

bool
px4_msgs__msg__Timesync__are_equal(const px4_msgs__msg__Timesync * lhs, const px4_msgs__msg__Timesync * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // tc1
  if (lhs->tc1 != rhs->tc1) {
    return false;
  }
  // ts1
  if (lhs->ts1 != rhs->ts1) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__Timesync__copy(
  const px4_msgs__msg__Timesync * input,
  px4_msgs__msg__Timesync * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // seq
  output->seq = input->seq;
  // tc1
  output->tc1 = input->tc1;
  // ts1
  output->ts1 = input->ts1;
  return true;
}

px4_msgs__msg__Timesync *
px4_msgs__msg__Timesync__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Timesync * msg = (px4_msgs__msg__Timesync *)allocator.allocate(sizeof(px4_msgs__msg__Timesync), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Timesync));
  bool success = px4_msgs__msg__Timesync__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Timesync__destroy(px4_msgs__msg__Timesync * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__Timesync__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__Timesync__Sequence__init(px4_msgs__msg__Timesync__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Timesync * data = NULL;

  if (size) {
    data = (px4_msgs__msg__Timesync *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__Timesync), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Timesync__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Timesync__fini(&data[i - 1]);
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
px4_msgs__msg__Timesync__Sequence__fini(px4_msgs__msg__Timesync__Sequence * array)
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
      px4_msgs__msg__Timesync__fini(&array->data[i]);
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

px4_msgs__msg__Timesync__Sequence *
px4_msgs__msg__Timesync__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__Timesync__Sequence * array = (px4_msgs__msg__Timesync__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__Timesync__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Timesync__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Timesync__Sequence__destroy(px4_msgs__msg__Timesync__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__Timesync__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__Timesync__Sequence__are_equal(const px4_msgs__msg__Timesync__Sequence * lhs, const px4_msgs__msg__Timesync__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__Timesync__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__Timesync__Sequence__copy(
  const px4_msgs__msg__Timesync__Sequence * input,
  px4_msgs__msg__Timesync__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__Timesync);
    px4_msgs__msg__Timesync * data =
      (px4_msgs__msg__Timesync *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__Timesync__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__Timesync__fini(&data[i]);
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
    if (!px4_msgs__msg__Timesync__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
