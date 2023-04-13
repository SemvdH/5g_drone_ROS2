// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/ManualControlInput.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/manual_control_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__ManualControlInput__init(px4_msgs__msg__ManualControlInput * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // valid
  // data_source
  // x
  // y
  // z
  // r
  // flaps
  // aux1
  // aux2
  // aux3
  // aux4
  // aux5
  // aux6
  // sticks_moving
  return true;
}

void
px4_msgs__msg__ManualControlInput__fini(px4_msgs__msg__ManualControlInput * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // valid
  // data_source
  // x
  // y
  // z
  // r
  // flaps
  // aux1
  // aux2
  // aux3
  // aux4
  // aux5
  // aux6
  // sticks_moving
}

bool
px4_msgs__msg__ManualControlInput__are_equal(const px4_msgs__msg__ManualControlInput * lhs, const px4_msgs__msg__ManualControlInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // timestamp_sample
  if (lhs->timestamp_sample != rhs->timestamp_sample) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // data_source
  if (lhs->data_source != rhs->data_source) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // flaps
  if (lhs->flaps != rhs->flaps) {
    return false;
  }
  // aux1
  if (lhs->aux1 != rhs->aux1) {
    return false;
  }
  // aux2
  if (lhs->aux2 != rhs->aux2) {
    return false;
  }
  // aux3
  if (lhs->aux3 != rhs->aux3) {
    return false;
  }
  // aux4
  if (lhs->aux4 != rhs->aux4) {
    return false;
  }
  // aux5
  if (lhs->aux5 != rhs->aux5) {
    return false;
  }
  // aux6
  if (lhs->aux6 != rhs->aux6) {
    return false;
  }
  // sticks_moving
  if (lhs->sticks_moving != rhs->sticks_moving) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__ManualControlInput__copy(
  const px4_msgs__msg__ManualControlInput * input,
  px4_msgs__msg__ManualControlInput * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // valid
  output->valid = input->valid;
  // data_source
  output->data_source = input->data_source;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // r
  output->r = input->r;
  // flaps
  output->flaps = input->flaps;
  // aux1
  output->aux1 = input->aux1;
  // aux2
  output->aux2 = input->aux2;
  // aux3
  output->aux3 = input->aux3;
  // aux4
  output->aux4 = input->aux4;
  // aux5
  output->aux5 = input->aux5;
  // aux6
  output->aux6 = input->aux6;
  // sticks_moving
  output->sticks_moving = input->sticks_moving;
  return true;
}

px4_msgs__msg__ManualControlInput *
px4_msgs__msg__ManualControlInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlInput * msg = (px4_msgs__msg__ManualControlInput *)allocator.allocate(sizeof(px4_msgs__msg__ManualControlInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__ManualControlInput));
  bool success = px4_msgs__msg__ManualControlInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__ManualControlInput__destroy(px4_msgs__msg__ManualControlInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__ManualControlInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__ManualControlInput__Sequence__init(px4_msgs__msg__ManualControlInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlInput * data = NULL;

  if (size) {
    data = (px4_msgs__msg__ManualControlInput *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__ManualControlInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__ManualControlInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__ManualControlInput__fini(&data[i - 1]);
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
px4_msgs__msg__ManualControlInput__Sequence__fini(px4_msgs__msg__ManualControlInput__Sequence * array)
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
      px4_msgs__msg__ManualControlInput__fini(&array->data[i]);
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

px4_msgs__msg__ManualControlInput__Sequence *
px4_msgs__msg__ManualControlInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__ManualControlInput__Sequence * array = (px4_msgs__msg__ManualControlInput__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__ManualControlInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__ManualControlInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__ManualControlInput__Sequence__destroy(px4_msgs__msg__ManualControlInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__ManualControlInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__ManualControlInput__Sequence__are_equal(const px4_msgs__msg__ManualControlInput__Sequence * lhs, const px4_msgs__msg__ManualControlInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__ManualControlInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__ManualControlInput__Sequence__copy(
  const px4_msgs__msg__ManualControlInput__Sequence * input,
  px4_msgs__msg__ManualControlInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__ManualControlInput);
    px4_msgs__msg__ManualControlInput * data =
      (px4_msgs__msg__ManualControlInput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__ManualControlInput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__ManualControlInput__fini(&data[i]);
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
    if (!px4_msgs__msg__ManualControlInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
