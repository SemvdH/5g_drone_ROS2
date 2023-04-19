// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice
#include "beacon_positioning/msg/detail/tracker_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
beacon_positioning__msg__TrackerPosition__init(beacon_positioning__msg__TrackerPosition * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // x_pos
  // y_pos
  // z_pos
  // anchor_distances
  return true;
}

void
beacon_positioning__msg__TrackerPosition__fini(beacon_positioning__msg__TrackerPosition * msg)
{
  if (!msg) {
    return;
  }
  // id
  // x_pos
  // y_pos
  // z_pos
  // anchor_distances
}

bool
beacon_positioning__msg__TrackerPosition__are_equal(const beacon_positioning__msg__TrackerPosition * lhs, const beacon_positioning__msg__TrackerPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // x_pos
  if (lhs->x_pos != rhs->x_pos) {
    return false;
  }
  // y_pos
  if (lhs->y_pos != rhs->y_pos) {
    return false;
  }
  // z_pos
  if (lhs->z_pos != rhs->z_pos) {
    return false;
  }
  // anchor_distances
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->anchor_distances[i] != rhs->anchor_distances[i]) {
      return false;
    }
  }
  return true;
}

bool
beacon_positioning__msg__TrackerPosition__copy(
  const beacon_positioning__msg__TrackerPosition * input,
  beacon_positioning__msg__TrackerPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // x_pos
  output->x_pos = input->x_pos;
  // y_pos
  output->y_pos = input->y_pos;
  // z_pos
  output->z_pos = input->z_pos;
  // anchor_distances
  for (size_t i = 0; i < 4; ++i) {
    output->anchor_distances[i] = input->anchor_distances[i];
  }
  return true;
}

beacon_positioning__msg__TrackerPosition *
beacon_positioning__msg__TrackerPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beacon_positioning__msg__TrackerPosition * msg = (beacon_positioning__msg__TrackerPosition *)allocator.allocate(sizeof(beacon_positioning__msg__TrackerPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(beacon_positioning__msg__TrackerPosition));
  bool success = beacon_positioning__msg__TrackerPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
beacon_positioning__msg__TrackerPosition__destroy(beacon_positioning__msg__TrackerPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    beacon_positioning__msg__TrackerPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
beacon_positioning__msg__TrackerPosition__Sequence__init(beacon_positioning__msg__TrackerPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beacon_positioning__msg__TrackerPosition * data = NULL;

  if (size) {
    data = (beacon_positioning__msg__TrackerPosition *)allocator.zero_allocate(size, sizeof(beacon_positioning__msg__TrackerPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = beacon_positioning__msg__TrackerPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        beacon_positioning__msg__TrackerPosition__fini(&data[i - 1]);
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
beacon_positioning__msg__TrackerPosition__Sequence__fini(beacon_positioning__msg__TrackerPosition__Sequence * array)
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
      beacon_positioning__msg__TrackerPosition__fini(&array->data[i]);
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

beacon_positioning__msg__TrackerPosition__Sequence *
beacon_positioning__msg__TrackerPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  beacon_positioning__msg__TrackerPosition__Sequence * array = (beacon_positioning__msg__TrackerPosition__Sequence *)allocator.allocate(sizeof(beacon_positioning__msg__TrackerPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = beacon_positioning__msg__TrackerPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
beacon_positioning__msg__TrackerPosition__Sequence__destroy(beacon_positioning__msg__TrackerPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    beacon_positioning__msg__TrackerPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
beacon_positioning__msg__TrackerPosition__Sequence__are_equal(const beacon_positioning__msg__TrackerPosition__Sequence * lhs, const beacon_positioning__msg__TrackerPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!beacon_positioning__msg__TrackerPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
beacon_positioning__msg__TrackerPosition__Sequence__copy(
  const beacon_positioning__msg__TrackerPosition__Sequence * input,
  beacon_positioning__msg__TrackerPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(beacon_positioning__msg__TrackerPosition);
    beacon_positioning__msg__TrackerPosition * data =
      (beacon_positioning__msg__TrackerPosition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!beacon_positioning__msg__TrackerPosition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          beacon_positioning__msg__TrackerPosition__fini(&data[i]);
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
    if (!beacon_positioning__msg__TrackerPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
