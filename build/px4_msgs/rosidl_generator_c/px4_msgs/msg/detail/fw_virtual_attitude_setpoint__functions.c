// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/FwVirtualAttitudeSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/fw_virtual_attitude_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__init(px4_msgs__msg__FwVirtualAttitudeSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // roll_body
  // pitch_body
  // yaw_body
  // yaw_sp_move_rate
  // q_d
  // thrust_body
  // roll_reset_integral
  // pitch_reset_integral
  // yaw_reset_integral
  // fw_control_yaw
  // apply_flaps
  return true;
}

void
px4_msgs__msg__FwVirtualAttitudeSetpoint__fini(px4_msgs__msg__FwVirtualAttitudeSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // roll_body
  // pitch_body
  // yaw_body
  // yaw_sp_move_rate
  // q_d
  // thrust_body
  // roll_reset_integral
  // pitch_reset_integral
  // yaw_reset_integral
  // fw_control_yaw
  // apply_flaps
}

bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__are_equal(const px4_msgs__msg__FwVirtualAttitudeSetpoint * lhs, const px4_msgs__msg__FwVirtualAttitudeSetpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // roll_body
  if (lhs->roll_body != rhs->roll_body) {
    return false;
  }
  // pitch_body
  if (lhs->pitch_body != rhs->pitch_body) {
    return false;
  }
  // yaw_body
  if (lhs->yaw_body != rhs->yaw_body) {
    return false;
  }
  // yaw_sp_move_rate
  if (lhs->yaw_sp_move_rate != rhs->yaw_sp_move_rate) {
    return false;
  }
  // q_d
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->q_d[i] != rhs->q_d[i]) {
      return false;
    }
  }
  // thrust_body
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->thrust_body[i] != rhs->thrust_body[i]) {
      return false;
    }
  }
  // roll_reset_integral
  if (lhs->roll_reset_integral != rhs->roll_reset_integral) {
    return false;
  }
  // pitch_reset_integral
  if (lhs->pitch_reset_integral != rhs->pitch_reset_integral) {
    return false;
  }
  // yaw_reset_integral
  if (lhs->yaw_reset_integral != rhs->yaw_reset_integral) {
    return false;
  }
  // fw_control_yaw
  if (lhs->fw_control_yaw != rhs->fw_control_yaw) {
    return false;
  }
  // apply_flaps
  if (lhs->apply_flaps != rhs->apply_flaps) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__copy(
  const px4_msgs__msg__FwVirtualAttitudeSetpoint * input,
  px4_msgs__msg__FwVirtualAttitudeSetpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // roll_body
  output->roll_body = input->roll_body;
  // pitch_body
  output->pitch_body = input->pitch_body;
  // yaw_body
  output->yaw_body = input->yaw_body;
  // yaw_sp_move_rate
  output->yaw_sp_move_rate = input->yaw_sp_move_rate;
  // q_d
  for (size_t i = 0; i < 4; ++i) {
    output->q_d[i] = input->q_d[i];
  }
  // thrust_body
  for (size_t i = 0; i < 3; ++i) {
    output->thrust_body[i] = input->thrust_body[i];
  }
  // roll_reset_integral
  output->roll_reset_integral = input->roll_reset_integral;
  // pitch_reset_integral
  output->pitch_reset_integral = input->pitch_reset_integral;
  // yaw_reset_integral
  output->yaw_reset_integral = input->yaw_reset_integral;
  // fw_control_yaw
  output->fw_control_yaw = input->fw_control_yaw;
  // apply_flaps
  output->apply_flaps = input->apply_flaps;
  return true;
}

px4_msgs__msg__FwVirtualAttitudeSetpoint *
px4_msgs__msg__FwVirtualAttitudeSetpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FwVirtualAttitudeSetpoint * msg = (px4_msgs__msg__FwVirtualAttitudeSetpoint *)allocator.allocate(sizeof(px4_msgs__msg__FwVirtualAttitudeSetpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__FwVirtualAttitudeSetpoint));
  bool success = px4_msgs__msg__FwVirtualAttitudeSetpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__FwVirtualAttitudeSetpoint__destroy(px4_msgs__msg__FwVirtualAttitudeSetpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__FwVirtualAttitudeSetpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__init(px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FwVirtualAttitudeSetpoint * data = NULL;

  if (size) {
    data = (px4_msgs__msg__FwVirtualAttitudeSetpoint *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__FwVirtualAttitudeSetpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__FwVirtualAttitudeSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__FwVirtualAttitudeSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__fini(px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * array)
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
      px4_msgs__msg__FwVirtualAttitudeSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence *
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * array = (px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__destroy(px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__are_equal(const px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * lhs, const px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__FwVirtualAttitudeSetpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence__copy(
  const px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * input,
  px4_msgs__msg__FwVirtualAttitudeSetpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__FwVirtualAttitudeSetpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_msgs__msg__FwVirtualAttitudeSetpoint * data =
      (px4_msgs__msg__FwVirtualAttitudeSetpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__FwVirtualAttitudeSetpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__FwVirtualAttitudeSetpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_msgs__msg__FwVirtualAttitudeSetpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
