// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorBaroBias.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_baro_bias__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorBaroBias__init(px4_msgs__msg__EstimatorBaroBias * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // baro_device_id
  // bias
  // bias_var
  // innov
  // innov_var
  // innov_test_ratio
  return true;
}

void
px4_msgs__msg__EstimatorBaroBias__fini(px4_msgs__msg__EstimatorBaroBias * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // baro_device_id
  // bias
  // bias_var
  // innov
  // innov_var
  // innov_test_ratio
}

bool
px4_msgs__msg__EstimatorBaroBias__are_equal(const px4_msgs__msg__EstimatorBaroBias * lhs, const px4_msgs__msg__EstimatorBaroBias * rhs)
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
  // baro_device_id
  if (lhs->baro_device_id != rhs->baro_device_id) {
    return false;
  }
  // bias
  if (lhs->bias != rhs->bias) {
    return false;
  }
  // bias_var
  if (lhs->bias_var != rhs->bias_var) {
    return false;
  }
  // innov
  if (lhs->innov != rhs->innov) {
    return false;
  }
  // innov_var
  if (lhs->innov_var != rhs->innov_var) {
    return false;
  }
  // innov_test_ratio
  if (lhs->innov_test_ratio != rhs->innov_test_ratio) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorBaroBias__copy(
  const px4_msgs__msg__EstimatorBaroBias * input,
  px4_msgs__msg__EstimatorBaroBias * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // baro_device_id
  output->baro_device_id = input->baro_device_id;
  // bias
  output->bias = input->bias;
  // bias_var
  output->bias_var = input->bias_var;
  // innov
  output->innov = input->innov;
  // innov_var
  output->innov_var = input->innov_var;
  // innov_test_ratio
  output->innov_test_ratio = input->innov_test_ratio;
  return true;
}

px4_msgs__msg__EstimatorBaroBias *
px4_msgs__msg__EstimatorBaroBias__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorBaroBias * msg = (px4_msgs__msg__EstimatorBaroBias *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorBaroBias), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorBaroBias));
  bool success = px4_msgs__msg__EstimatorBaroBias__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorBaroBias__destroy(px4_msgs__msg__EstimatorBaroBias * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorBaroBias__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorBaroBias__Sequence__init(px4_msgs__msg__EstimatorBaroBias__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorBaroBias * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorBaroBias *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorBaroBias), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorBaroBias__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorBaroBias__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorBaroBias__Sequence__fini(px4_msgs__msg__EstimatorBaroBias__Sequence * array)
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
      px4_msgs__msg__EstimatorBaroBias__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorBaroBias__Sequence *
px4_msgs__msg__EstimatorBaroBias__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorBaroBias__Sequence * array = (px4_msgs__msg__EstimatorBaroBias__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorBaroBias__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorBaroBias__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorBaroBias__Sequence__destroy(px4_msgs__msg__EstimatorBaroBias__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorBaroBias__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorBaroBias__Sequence__are_equal(const px4_msgs__msg__EstimatorBaroBias__Sequence * lhs, const px4_msgs__msg__EstimatorBaroBias__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorBaroBias__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorBaroBias__Sequence__copy(
  const px4_msgs__msg__EstimatorBaroBias__Sequence * input,
  px4_msgs__msg__EstimatorBaroBias__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorBaroBias);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__EstimatorBaroBias * data =
      (px4_msgs__msg__EstimatorBaroBias *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorBaroBias__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorBaroBias__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__EstimatorBaroBias__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
