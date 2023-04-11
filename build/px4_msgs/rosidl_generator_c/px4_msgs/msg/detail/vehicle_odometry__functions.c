// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_odometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleOdometry__init(px4_msgs__msg__VehicleOdometry * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // local_frame
  // x
  // y
  // z
  // q
  // q_offset
  // pose_covariance
  // velocity_frame
  // vx
  // vy
  // vz
  // rollspeed
  // pitchspeed
  // yawspeed
  // velocity_covariance
  // reset_counter
  return true;
}

void
px4_msgs__msg__VehicleOdometry__fini(px4_msgs__msg__VehicleOdometry * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // local_frame
  // x
  // y
  // z
  // q
  // q_offset
  // pose_covariance
  // velocity_frame
  // vx
  // vy
  // vz
  // rollspeed
  // pitchspeed
  // yawspeed
  // velocity_covariance
  // reset_counter
}

bool
px4_msgs__msg__VehicleOdometry__are_equal(const px4_msgs__msg__VehicleOdometry * lhs, const px4_msgs__msg__VehicleOdometry * rhs)
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
  // local_frame
  if (lhs->local_frame != rhs->local_frame) {
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
  // q
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // q_offset
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q_offset[i] != rhs->q_offset[i]) {
      return false;
    }
  }
  // pose_covariance
  for (size_t i = 0; i < 21; ++i) {
    if (lhs->pose_covariance[i] != rhs->pose_covariance[i]) {
      return false;
    }
  }
  // velocity_frame
  if (lhs->velocity_frame != rhs->velocity_frame) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // rollspeed
  if (lhs->rollspeed != rhs->rollspeed) {
    return false;
  }
  // pitchspeed
  if (lhs->pitchspeed != rhs->pitchspeed) {
    return false;
  }
  // yawspeed
  if (lhs->yawspeed != rhs->yawspeed) {
    return false;
  }
  // velocity_covariance
  for (size_t i = 0; i < 21; ++i) {
    if (lhs->velocity_covariance[i] != rhs->velocity_covariance[i]) {
      return false;
    }
  }
  // reset_counter
  if (lhs->reset_counter != rhs->reset_counter) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleOdometry__copy(
  const px4_msgs__msg__VehicleOdometry * input,
  px4_msgs__msg__VehicleOdometry * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // timestamp_sample
  output->timestamp_sample = input->timestamp_sample;
  // local_frame
  output->local_frame = input->local_frame;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // q
  for (size_t i = 0; i < 4; ++i) {
    output->q[i] = input->q[i];
  }
  // q_offset
  for (size_t i = 0; i < 4; ++i) {
    output->q_offset[i] = input->q_offset[i];
  }
  // pose_covariance
  for (size_t i = 0; i < 21; ++i) {
    output->pose_covariance[i] = input->pose_covariance[i];
  }
  // velocity_frame
  output->velocity_frame = input->velocity_frame;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // rollspeed
  output->rollspeed = input->rollspeed;
  // pitchspeed
  output->pitchspeed = input->pitchspeed;
  // yawspeed
  output->yawspeed = input->yawspeed;
  // velocity_covariance
  for (size_t i = 0; i < 21; ++i) {
    output->velocity_covariance[i] = input->velocity_covariance[i];
  }
  // reset_counter
  output->reset_counter = input->reset_counter;
  return true;
}

px4_msgs__msg__VehicleOdometry *
px4_msgs__msg__VehicleOdometry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOdometry * msg = (px4_msgs__msg__VehicleOdometry *)allocator.allocate(sizeof(px4_msgs__msg__VehicleOdometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleOdometry));
  bool success = px4_msgs__msg__VehicleOdometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleOdometry__destroy(px4_msgs__msg__VehicleOdometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleOdometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleOdometry__Sequence__init(px4_msgs__msg__VehicleOdometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOdometry * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleOdometry *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleOdometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleOdometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleOdometry__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleOdometry__Sequence__fini(px4_msgs__msg__VehicleOdometry__Sequence * array)
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
      px4_msgs__msg__VehicleOdometry__fini(&array->data[i]);
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

px4_msgs__msg__VehicleOdometry__Sequence *
px4_msgs__msg__VehicleOdometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleOdometry__Sequence * array = (px4_msgs__msg__VehicleOdometry__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleOdometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleOdometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleOdometry__Sequence__destroy(px4_msgs__msg__VehicleOdometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleOdometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleOdometry__Sequence__are_equal(const px4_msgs__msg__VehicleOdometry__Sequence * lhs, const px4_msgs__msg__VehicleOdometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleOdometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleOdometry__Sequence__copy(
  const px4_msgs__msg__VehicleOdometry__Sequence * input,
  px4_msgs__msg__VehicleOdometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleOdometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__VehicleOdometry * data =
      (px4_msgs__msg__VehicleOdometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleOdometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleOdometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__VehicleOdometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
