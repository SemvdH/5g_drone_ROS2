// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/optical_flow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__OpticalFlow__init(px4_msgs__msg__OpticalFlow * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // sensor_id
  // pixel_flow_x_integral
  // pixel_flow_y_integral
  // gyro_x_rate_integral
  // gyro_y_rate_integral
  // gyro_z_rate_integral
  // ground_distance_m
  // integration_timespan
  // time_since_last_sonar_update
  // frame_count_since_last_readout
  // gyro_temperature
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
  // mode
  return true;
}

void
px4_msgs__msg__OpticalFlow__fini(px4_msgs__msg__OpticalFlow * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // sensor_id
  // pixel_flow_x_integral
  // pixel_flow_y_integral
  // gyro_x_rate_integral
  // gyro_y_rate_integral
  // gyro_z_rate_integral
  // ground_distance_m
  // integration_timespan
  // time_since_last_sonar_update
  // frame_count_since_last_readout
  // gyro_temperature
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
  // mode
}

bool
px4_msgs__msg__OpticalFlow__are_equal(const px4_msgs__msg__OpticalFlow * lhs, const px4_msgs__msg__OpticalFlow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // pixel_flow_x_integral
  if (lhs->pixel_flow_x_integral != rhs->pixel_flow_x_integral) {
    return false;
  }
  // pixel_flow_y_integral
  if (lhs->pixel_flow_y_integral != rhs->pixel_flow_y_integral) {
    return false;
  }
  // gyro_x_rate_integral
  if (lhs->gyro_x_rate_integral != rhs->gyro_x_rate_integral) {
    return false;
  }
  // gyro_y_rate_integral
  if (lhs->gyro_y_rate_integral != rhs->gyro_y_rate_integral) {
    return false;
  }
  // gyro_z_rate_integral
  if (lhs->gyro_z_rate_integral != rhs->gyro_z_rate_integral) {
    return false;
  }
  // ground_distance_m
  if (lhs->ground_distance_m != rhs->ground_distance_m) {
    return false;
  }
  // integration_timespan
  if (lhs->integration_timespan != rhs->integration_timespan) {
    return false;
  }
  // time_since_last_sonar_update
  if (lhs->time_since_last_sonar_update != rhs->time_since_last_sonar_update) {
    return false;
  }
  // frame_count_since_last_readout
  if (lhs->frame_count_since_last_readout != rhs->frame_count_since_last_readout) {
    return false;
  }
  // gyro_temperature
  if (lhs->gyro_temperature != rhs->gyro_temperature) {
    return false;
  }
  // quality
  if (lhs->quality != rhs->quality) {
    return false;
  }
  // max_flow_rate
  if (lhs->max_flow_rate != rhs->max_flow_rate) {
    return false;
  }
  // min_ground_distance
  if (lhs->min_ground_distance != rhs->min_ground_distance) {
    return false;
  }
  // max_ground_distance
  if (lhs->max_ground_distance != rhs->max_ground_distance) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__OpticalFlow__copy(
  const px4_msgs__msg__OpticalFlow * input,
  px4_msgs__msg__OpticalFlow * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // sensor_id
  output->sensor_id = input->sensor_id;
  // pixel_flow_x_integral
  output->pixel_flow_x_integral = input->pixel_flow_x_integral;
  // pixel_flow_y_integral
  output->pixel_flow_y_integral = input->pixel_flow_y_integral;
  // gyro_x_rate_integral
  output->gyro_x_rate_integral = input->gyro_x_rate_integral;
  // gyro_y_rate_integral
  output->gyro_y_rate_integral = input->gyro_y_rate_integral;
  // gyro_z_rate_integral
  output->gyro_z_rate_integral = input->gyro_z_rate_integral;
  // ground_distance_m
  output->ground_distance_m = input->ground_distance_m;
  // integration_timespan
  output->integration_timespan = input->integration_timespan;
  // time_since_last_sonar_update
  output->time_since_last_sonar_update = input->time_since_last_sonar_update;
  // frame_count_since_last_readout
  output->frame_count_since_last_readout = input->frame_count_since_last_readout;
  // gyro_temperature
  output->gyro_temperature = input->gyro_temperature;
  // quality
  output->quality = input->quality;
  // max_flow_rate
  output->max_flow_rate = input->max_flow_rate;
  // min_ground_distance
  output->min_ground_distance = input->min_ground_distance;
  // max_ground_distance
  output->max_ground_distance = input->max_ground_distance;
  // mode
  output->mode = input->mode;
  return true;
}

px4_msgs__msg__OpticalFlow *
px4_msgs__msg__OpticalFlow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpticalFlow * msg = (px4_msgs__msg__OpticalFlow *)allocator.allocate(sizeof(px4_msgs__msg__OpticalFlow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OpticalFlow));
  bool success = px4_msgs__msg__OpticalFlow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OpticalFlow__destroy(px4_msgs__msg__OpticalFlow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__OpticalFlow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__OpticalFlow__Sequence__init(px4_msgs__msg__OpticalFlow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpticalFlow * data = NULL;

  if (size) {
    data = (px4_msgs__msg__OpticalFlow *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__OpticalFlow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OpticalFlow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OpticalFlow__fini(&data[i - 1]);
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
px4_msgs__msg__OpticalFlow__Sequence__fini(px4_msgs__msg__OpticalFlow__Sequence * array)
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
      px4_msgs__msg__OpticalFlow__fini(&array->data[i]);
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

px4_msgs__msg__OpticalFlow__Sequence *
px4_msgs__msg__OpticalFlow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__OpticalFlow__Sequence * array = (px4_msgs__msg__OpticalFlow__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__OpticalFlow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OpticalFlow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OpticalFlow__Sequence__destroy(px4_msgs__msg__OpticalFlow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__OpticalFlow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__OpticalFlow__Sequence__are_equal(const px4_msgs__msg__OpticalFlow__Sequence * lhs, const px4_msgs__msg__OpticalFlow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__OpticalFlow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__OpticalFlow__Sequence__copy(
  const px4_msgs__msg__OpticalFlow__Sequence * input,
  px4_msgs__msg__OpticalFlow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__OpticalFlow);
    px4_msgs__msg__OpticalFlow * data =
      (px4_msgs__msg__OpticalFlow *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__OpticalFlow__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__OpticalFlow__fini(&data[i]);
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
    if (!px4_msgs__msg__OpticalFlow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
