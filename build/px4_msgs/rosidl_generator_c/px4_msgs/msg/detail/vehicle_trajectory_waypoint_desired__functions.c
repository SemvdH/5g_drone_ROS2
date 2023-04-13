// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypointDesired.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_trajectory_waypoint_desired__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
#include "px4_msgs/msg/detail/trajectory_waypoint__functions.h"

bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__init(px4_msgs__msg__VehicleTrajectoryWaypointDesired * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // waypoints
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__TrajectoryWaypoint__init(&msg->waypoints[i])) {
      px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(msg);
      return false;
    }
  }
  return true;
}

void
px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(px4_msgs__msg__VehicleTrajectoryWaypointDesired * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // waypoints
  for (size_t i = 0; i < 5; ++i) {
    px4_msgs__msg__TrajectoryWaypoint__fini(&msg->waypoints[i]);
  }
}

bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__are_equal(const px4_msgs__msg__VehicleTrajectoryWaypointDesired * lhs, const px4_msgs__msg__VehicleTrajectoryWaypointDesired * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // waypoints
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__TrajectoryWaypoint__are_equal(
        &(lhs->waypoints[i]), &(rhs->waypoints[i])))
    {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__copy(
  const px4_msgs__msg__VehicleTrajectoryWaypointDesired * input,
  px4_msgs__msg__VehicleTrajectoryWaypointDesired * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // type
  output->type = input->type;
  // waypoints
  for (size_t i = 0; i < 5; ++i) {
    if (!px4_msgs__msg__TrajectoryWaypoint__copy(
        &(input->waypoints[i]), &(output->waypoints[i])))
    {
      return false;
    }
  }
  return true;
}

px4_msgs__msg__VehicleTrajectoryWaypointDesired *
px4_msgs__msg__VehicleTrajectoryWaypointDesired__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleTrajectoryWaypointDesired * msg = (px4_msgs__msg__VehicleTrajectoryWaypointDesired *)allocator.allocate(sizeof(px4_msgs__msg__VehicleTrajectoryWaypointDesired), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleTrajectoryWaypointDesired));
  bool success = px4_msgs__msg__VehicleTrajectoryWaypointDesired__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleTrajectoryWaypointDesired__destroy(px4_msgs__msg__VehicleTrajectoryWaypointDesired * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__init(px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleTrajectoryWaypointDesired * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleTrajectoryWaypointDesired *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleTrajectoryWaypointDesired), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleTrajectoryWaypointDesired__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__fini(px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * array)
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
      px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(&array->data[i]);
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

px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence *
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * array = (px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__destroy(px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__are_equal(const px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * lhs, const px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleTrajectoryWaypointDesired__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence__copy(
  const px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * input,
  px4_msgs__msg__VehicleTrajectoryWaypointDesired__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleTrajectoryWaypointDesired);
    px4_msgs__msg__VehicleTrajectoryWaypointDesired * data =
      (px4_msgs__msg__VehicleTrajectoryWaypointDesired *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleTrajectoryWaypointDesired__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleTrajectoryWaypointDesired__fini(&data[i]);
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
    if (!px4_msgs__msg__VehicleTrajectoryWaypointDesired__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
