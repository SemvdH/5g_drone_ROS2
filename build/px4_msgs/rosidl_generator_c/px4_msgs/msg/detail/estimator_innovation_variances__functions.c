// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorInnovationVariances.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_innovation_variances__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__EstimatorInnovationVariances__init(px4_msgs__msg__EstimatorInnovationVariances * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // gps_hvel
  // gps_vvel
  // gps_hpos
  // gps_vpos
  // ev_hvel
  // ev_vvel
  // ev_hpos
  // ev_vpos
  // rng_vpos
  // baro_vpos
  // aux_hvel
  // aux_vvel
  // flow
  // heading
  // mag_field
  // drag
  // airspeed
  // beta
  // hagl
  // hagl_rate
  return true;
}

void
px4_msgs__msg__EstimatorInnovationVariances__fini(px4_msgs__msg__EstimatorInnovationVariances * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // gps_hvel
  // gps_vvel
  // gps_hpos
  // gps_vpos
  // ev_hvel
  // ev_vvel
  // ev_hpos
  // ev_vpos
  // rng_vpos
  // baro_vpos
  // aux_hvel
  // aux_vvel
  // flow
  // heading
  // mag_field
  // drag
  // airspeed
  // beta
  // hagl
  // hagl_rate
}

bool
px4_msgs__msg__EstimatorInnovationVariances__are_equal(const px4_msgs__msg__EstimatorInnovationVariances * lhs, const px4_msgs__msg__EstimatorInnovationVariances * rhs)
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
  // gps_hvel
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gps_hvel[i] != rhs->gps_hvel[i]) {
      return false;
    }
  }
  // gps_vvel
  if (lhs->gps_vvel != rhs->gps_vvel) {
    return false;
  }
  // gps_hpos
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->gps_hpos[i] != rhs->gps_hpos[i]) {
      return false;
    }
  }
  // gps_vpos
  if (lhs->gps_vpos != rhs->gps_vpos) {
    return false;
  }
  // ev_hvel
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->ev_hvel[i] != rhs->ev_hvel[i]) {
      return false;
    }
  }
  // ev_vvel
  if (lhs->ev_vvel != rhs->ev_vvel) {
    return false;
  }
  // ev_hpos
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->ev_hpos[i] != rhs->ev_hpos[i]) {
      return false;
    }
  }
  // ev_vpos
  if (lhs->ev_vpos != rhs->ev_vpos) {
    return false;
  }
  // rng_vpos
  if (lhs->rng_vpos != rhs->rng_vpos) {
    return false;
  }
  // baro_vpos
  if (lhs->baro_vpos != rhs->baro_vpos) {
    return false;
  }
  // aux_hvel
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->aux_hvel[i] != rhs->aux_hvel[i]) {
      return false;
    }
  }
  // aux_vvel
  if (lhs->aux_vvel != rhs->aux_vvel) {
    return false;
  }
  // flow
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->flow[i] != rhs->flow[i]) {
      return false;
    }
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // mag_field
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->mag_field[i] != rhs->mag_field[i]) {
      return false;
    }
  }
  // drag
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->drag[i] != rhs->drag[i]) {
      return false;
    }
  }
  // airspeed
  if (lhs->airspeed != rhs->airspeed) {
    return false;
  }
  // beta
  if (lhs->beta != rhs->beta) {
    return false;
  }
  // hagl
  if (lhs->hagl != rhs->hagl) {
    return false;
  }
  // hagl_rate
  if (lhs->hagl_rate != rhs->hagl_rate) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__EstimatorInnovationVariances__copy(
  const px4_msgs__msg__EstimatorInnovationVariances * input,
  px4_msgs__msg__EstimatorInnovationVariances * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // gps_hvel
  for (size_t i = 0; i < 2; ++i) {
    output->gps_hvel[i] = input->gps_hvel[i];
  }
  // gps_vvel
  output->gps_vvel = input->gps_vvel;
  // gps_hpos
  for (size_t i = 0; i < 2; ++i) {
    output->gps_hpos[i] = input->gps_hpos[i];
  }
  // gps_vpos
  output->gps_vpos = input->gps_vpos;
  // ev_hvel
  for (size_t i = 0; i < 2; ++i) {
    output->ev_hvel[i] = input->ev_hvel[i];
  }
  // ev_vvel
  output->ev_vvel = input->ev_vvel;
  // ev_hpos
  for (size_t i = 0; i < 2; ++i) {
    output->ev_hpos[i] = input->ev_hpos[i];
  }
  // ev_vpos
  output->ev_vpos = input->ev_vpos;
  // rng_vpos
  output->rng_vpos = input->rng_vpos;
  // baro_vpos
  output->baro_vpos = input->baro_vpos;
  // aux_hvel
  for (size_t i = 0; i < 2; ++i) {
    output->aux_hvel[i] = input->aux_hvel[i];
  }
  // aux_vvel
  output->aux_vvel = input->aux_vvel;
  // flow
  for (size_t i = 0; i < 2; ++i) {
    output->flow[i] = input->flow[i];
  }
  // heading
  output->heading = input->heading;
  // mag_field
  for (size_t i = 0; i < 3; ++i) {
    output->mag_field[i] = input->mag_field[i];
  }
  // drag
  for (size_t i = 0; i < 2; ++i) {
    output->drag[i] = input->drag[i];
  }
  // airspeed
  output->airspeed = input->airspeed;
  // beta
  output->beta = input->beta;
  // hagl
  output->hagl = input->hagl;
  // hagl_rate
  output->hagl_rate = input->hagl_rate;
  return true;
}

px4_msgs__msg__EstimatorInnovationVariances *
px4_msgs__msg__EstimatorInnovationVariances__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorInnovationVariances * msg = (px4_msgs__msg__EstimatorInnovationVariances *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorInnovationVariances), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorInnovationVariances));
  bool success = px4_msgs__msg__EstimatorInnovationVariances__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorInnovationVariances__destroy(px4_msgs__msg__EstimatorInnovationVariances * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__EstimatorInnovationVariances__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__EstimatorInnovationVariances__Sequence__init(px4_msgs__msg__EstimatorInnovationVariances__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorInnovationVariances * data = NULL;

  if (size) {
    data = (px4_msgs__msg__EstimatorInnovationVariances *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__EstimatorInnovationVariances), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorInnovationVariances__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorInnovationVariances__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorInnovationVariances__Sequence__fini(px4_msgs__msg__EstimatorInnovationVariances__Sequence * array)
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
      px4_msgs__msg__EstimatorInnovationVariances__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorInnovationVariances__Sequence *
px4_msgs__msg__EstimatorInnovationVariances__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__EstimatorInnovationVariances__Sequence * array = (px4_msgs__msg__EstimatorInnovationVariances__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__EstimatorInnovationVariances__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorInnovationVariances__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorInnovationVariances__Sequence__destroy(px4_msgs__msg__EstimatorInnovationVariances__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__EstimatorInnovationVariances__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__EstimatorInnovationVariances__Sequence__are_equal(const px4_msgs__msg__EstimatorInnovationVariances__Sequence * lhs, const px4_msgs__msg__EstimatorInnovationVariances__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__EstimatorInnovationVariances__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__EstimatorInnovationVariances__Sequence__copy(
  const px4_msgs__msg__EstimatorInnovationVariances__Sequence * input,
  px4_msgs__msg__EstimatorInnovationVariances__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__EstimatorInnovationVariances);
    px4_msgs__msg__EstimatorInnovationVariances * data =
      (px4_msgs__msg__EstimatorInnovationVariances *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__EstimatorInnovationVariances__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__EstimatorInnovationVariances__fini(&data[i]);
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
    if (!px4_msgs__msg__EstimatorInnovationVariances__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
