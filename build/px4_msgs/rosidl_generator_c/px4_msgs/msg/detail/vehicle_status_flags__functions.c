// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleStatusFlags__init(px4_msgs__msg__VehicleStatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // calibration_enabled
  // system_sensors_initialized
  // system_hotplug_timeout
  // auto_mission_available
  // angular_velocity_valid
  // attitude_valid
  // local_altitude_valid
  // local_position_valid
  // local_velocity_valid
  // global_position_valid
  // gps_position_valid
  // home_position_valid
  // power_input_valid
  // battery_healthy
  // escs_error
  // escs_failure
  // position_reliant_on_gps
  // position_reliant_on_optical_flow
  // position_reliant_on_vision_position
  // dead_reckoning
  // flight_terminated
  // circuit_breaker_engaged_power_check
  // circuit_breaker_engaged_airspd_check
  // circuit_breaker_engaged_enginefailure_check
  // circuit_breaker_flight_termination_disabled
  // circuit_breaker_engaged_usb_check
  // circuit_breaker_engaged_posfailure_check
  // circuit_breaker_vtol_fw_arming_check
  // offboard_control_signal_lost
  // rc_signal_found_once
  // rc_calibration_in_progress
  // rc_calibration_valid
  // vtol_transition_failure
  // usb_connected
  // sd_card_detected_once
  // avoidance_system_required
  // avoidance_system_valid
  // parachute_system_present
  // parachute_system_healthy
  return true;
}

void
px4_msgs__msg__VehicleStatusFlags__fini(px4_msgs__msg__VehicleStatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // calibration_enabled
  // system_sensors_initialized
  // system_hotplug_timeout
  // auto_mission_available
  // angular_velocity_valid
  // attitude_valid
  // local_altitude_valid
  // local_position_valid
  // local_velocity_valid
  // global_position_valid
  // gps_position_valid
  // home_position_valid
  // power_input_valid
  // battery_healthy
  // escs_error
  // escs_failure
  // position_reliant_on_gps
  // position_reliant_on_optical_flow
  // position_reliant_on_vision_position
  // dead_reckoning
  // flight_terminated
  // circuit_breaker_engaged_power_check
  // circuit_breaker_engaged_airspd_check
  // circuit_breaker_engaged_enginefailure_check
  // circuit_breaker_flight_termination_disabled
  // circuit_breaker_engaged_usb_check
  // circuit_breaker_engaged_posfailure_check
  // circuit_breaker_vtol_fw_arming_check
  // offboard_control_signal_lost
  // rc_signal_found_once
  // rc_calibration_in_progress
  // rc_calibration_valid
  // vtol_transition_failure
  // usb_connected
  // sd_card_detected_once
  // avoidance_system_required
  // avoidance_system_valid
  // parachute_system_present
  // parachute_system_healthy
}

bool
px4_msgs__msg__VehicleStatusFlags__are_equal(const px4_msgs__msg__VehicleStatusFlags * lhs, const px4_msgs__msg__VehicleStatusFlags * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // calibration_enabled
  if (lhs->calibration_enabled != rhs->calibration_enabled) {
    return false;
  }
  // system_sensors_initialized
  if (lhs->system_sensors_initialized != rhs->system_sensors_initialized) {
    return false;
  }
  // system_hotplug_timeout
  if (lhs->system_hotplug_timeout != rhs->system_hotplug_timeout) {
    return false;
  }
  // auto_mission_available
  if (lhs->auto_mission_available != rhs->auto_mission_available) {
    return false;
  }
  // angular_velocity_valid
  if (lhs->angular_velocity_valid != rhs->angular_velocity_valid) {
    return false;
  }
  // attitude_valid
  if (lhs->attitude_valid != rhs->attitude_valid) {
    return false;
  }
  // local_altitude_valid
  if (lhs->local_altitude_valid != rhs->local_altitude_valid) {
    return false;
  }
  // local_position_valid
  if (lhs->local_position_valid != rhs->local_position_valid) {
    return false;
  }
  // local_velocity_valid
  if (lhs->local_velocity_valid != rhs->local_velocity_valid) {
    return false;
  }
  // global_position_valid
  if (lhs->global_position_valid != rhs->global_position_valid) {
    return false;
  }
  // gps_position_valid
  if (lhs->gps_position_valid != rhs->gps_position_valid) {
    return false;
  }
  // home_position_valid
  if (lhs->home_position_valid != rhs->home_position_valid) {
    return false;
  }
  // power_input_valid
  if (lhs->power_input_valid != rhs->power_input_valid) {
    return false;
  }
  // battery_healthy
  if (lhs->battery_healthy != rhs->battery_healthy) {
    return false;
  }
  // escs_error
  if (lhs->escs_error != rhs->escs_error) {
    return false;
  }
  // escs_failure
  if (lhs->escs_failure != rhs->escs_failure) {
    return false;
  }
  // position_reliant_on_gps
  if (lhs->position_reliant_on_gps != rhs->position_reliant_on_gps) {
    return false;
  }
  // position_reliant_on_optical_flow
  if (lhs->position_reliant_on_optical_flow != rhs->position_reliant_on_optical_flow) {
    return false;
  }
  // position_reliant_on_vision_position
  if (lhs->position_reliant_on_vision_position != rhs->position_reliant_on_vision_position) {
    return false;
  }
  // dead_reckoning
  if (lhs->dead_reckoning != rhs->dead_reckoning) {
    return false;
  }
  // flight_terminated
  if (lhs->flight_terminated != rhs->flight_terminated) {
    return false;
  }
  // circuit_breaker_engaged_power_check
  if (lhs->circuit_breaker_engaged_power_check != rhs->circuit_breaker_engaged_power_check) {
    return false;
  }
  // circuit_breaker_engaged_airspd_check
  if (lhs->circuit_breaker_engaged_airspd_check != rhs->circuit_breaker_engaged_airspd_check) {
    return false;
  }
  // circuit_breaker_engaged_enginefailure_check
  if (lhs->circuit_breaker_engaged_enginefailure_check != rhs->circuit_breaker_engaged_enginefailure_check) {
    return false;
  }
  // circuit_breaker_flight_termination_disabled
  if (lhs->circuit_breaker_flight_termination_disabled != rhs->circuit_breaker_flight_termination_disabled) {
    return false;
  }
  // circuit_breaker_engaged_usb_check
  if (lhs->circuit_breaker_engaged_usb_check != rhs->circuit_breaker_engaged_usb_check) {
    return false;
  }
  // circuit_breaker_engaged_posfailure_check
  if (lhs->circuit_breaker_engaged_posfailure_check != rhs->circuit_breaker_engaged_posfailure_check) {
    return false;
  }
  // circuit_breaker_vtol_fw_arming_check
  if (lhs->circuit_breaker_vtol_fw_arming_check != rhs->circuit_breaker_vtol_fw_arming_check) {
    return false;
  }
  // offboard_control_signal_lost
  if (lhs->offboard_control_signal_lost != rhs->offboard_control_signal_lost) {
    return false;
  }
  // rc_signal_found_once
  if (lhs->rc_signal_found_once != rhs->rc_signal_found_once) {
    return false;
  }
  // rc_calibration_in_progress
  if (lhs->rc_calibration_in_progress != rhs->rc_calibration_in_progress) {
    return false;
  }
  // rc_calibration_valid
  if (lhs->rc_calibration_valid != rhs->rc_calibration_valid) {
    return false;
  }
  // vtol_transition_failure
  if (lhs->vtol_transition_failure != rhs->vtol_transition_failure) {
    return false;
  }
  // usb_connected
  if (lhs->usb_connected != rhs->usb_connected) {
    return false;
  }
  // sd_card_detected_once
  if (lhs->sd_card_detected_once != rhs->sd_card_detected_once) {
    return false;
  }
  // avoidance_system_required
  if (lhs->avoidance_system_required != rhs->avoidance_system_required) {
    return false;
  }
  // avoidance_system_valid
  if (lhs->avoidance_system_valid != rhs->avoidance_system_valid) {
    return false;
  }
  // parachute_system_present
  if (lhs->parachute_system_present != rhs->parachute_system_present) {
    return false;
  }
  // parachute_system_healthy
  if (lhs->parachute_system_healthy != rhs->parachute_system_healthy) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatusFlags__copy(
  const px4_msgs__msg__VehicleStatusFlags * input,
  px4_msgs__msg__VehicleStatusFlags * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // calibration_enabled
  output->calibration_enabled = input->calibration_enabled;
  // system_sensors_initialized
  output->system_sensors_initialized = input->system_sensors_initialized;
  // system_hotplug_timeout
  output->system_hotplug_timeout = input->system_hotplug_timeout;
  // auto_mission_available
  output->auto_mission_available = input->auto_mission_available;
  // angular_velocity_valid
  output->angular_velocity_valid = input->angular_velocity_valid;
  // attitude_valid
  output->attitude_valid = input->attitude_valid;
  // local_altitude_valid
  output->local_altitude_valid = input->local_altitude_valid;
  // local_position_valid
  output->local_position_valid = input->local_position_valid;
  // local_velocity_valid
  output->local_velocity_valid = input->local_velocity_valid;
  // global_position_valid
  output->global_position_valid = input->global_position_valid;
  // gps_position_valid
  output->gps_position_valid = input->gps_position_valid;
  // home_position_valid
  output->home_position_valid = input->home_position_valid;
  // power_input_valid
  output->power_input_valid = input->power_input_valid;
  // battery_healthy
  output->battery_healthy = input->battery_healthy;
  // escs_error
  output->escs_error = input->escs_error;
  // escs_failure
  output->escs_failure = input->escs_failure;
  // position_reliant_on_gps
  output->position_reliant_on_gps = input->position_reliant_on_gps;
  // position_reliant_on_optical_flow
  output->position_reliant_on_optical_flow = input->position_reliant_on_optical_flow;
  // position_reliant_on_vision_position
  output->position_reliant_on_vision_position = input->position_reliant_on_vision_position;
  // dead_reckoning
  output->dead_reckoning = input->dead_reckoning;
  // flight_terminated
  output->flight_terminated = input->flight_terminated;
  // circuit_breaker_engaged_power_check
  output->circuit_breaker_engaged_power_check = input->circuit_breaker_engaged_power_check;
  // circuit_breaker_engaged_airspd_check
  output->circuit_breaker_engaged_airspd_check = input->circuit_breaker_engaged_airspd_check;
  // circuit_breaker_engaged_enginefailure_check
  output->circuit_breaker_engaged_enginefailure_check = input->circuit_breaker_engaged_enginefailure_check;
  // circuit_breaker_flight_termination_disabled
  output->circuit_breaker_flight_termination_disabled = input->circuit_breaker_flight_termination_disabled;
  // circuit_breaker_engaged_usb_check
  output->circuit_breaker_engaged_usb_check = input->circuit_breaker_engaged_usb_check;
  // circuit_breaker_engaged_posfailure_check
  output->circuit_breaker_engaged_posfailure_check = input->circuit_breaker_engaged_posfailure_check;
  // circuit_breaker_vtol_fw_arming_check
  output->circuit_breaker_vtol_fw_arming_check = input->circuit_breaker_vtol_fw_arming_check;
  // offboard_control_signal_lost
  output->offboard_control_signal_lost = input->offboard_control_signal_lost;
  // rc_signal_found_once
  output->rc_signal_found_once = input->rc_signal_found_once;
  // rc_calibration_in_progress
  output->rc_calibration_in_progress = input->rc_calibration_in_progress;
  // rc_calibration_valid
  output->rc_calibration_valid = input->rc_calibration_valid;
  // vtol_transition_failure
  output->vtol_transition_failure = input->vtol_transition_failure;
  // usb_connected
  output->usb_connected = input->usb_connected;
  // sd_card_detected_once
  output->sd_card_detected_once = input->sd_card_detected_once;
  // avoidance_system_required
  output->avoidance_system_required = input->avoidance_system_required;
  // avoidance_system_valid
  output->avoidance_system_valid = input->avoidance_system_valid;
  // parachute_system_present
  output->parachute_system_present = input->parachute_system_present;
  // parachute_system_healthy
  output->parachute_system_healthy = input->parachute_system_healthy;
  return true;
}

px4_msgs__msg__VehicleStatusFlags *
px4_msgs__msg__VehicleStatusFlags__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags * msg = (px4_msgs__msg__VehicleStatusFlags *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatusFlags), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleStatusFlags));
  bool success = px4_msgs__msg__VehicleStatusFlags__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleStatusFlags__destroy(px4_msgs__msg__VehicleStatusFlags * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleStatusFlags__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleStatusFlags__Sequence__init(px4_msgs__msg__VehicleStatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleStatusFlags *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleStatusFlags), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleStatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleStatusFlags__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleStatusFlags__Sequence__fini(px4_msgs__msg__VehicleStatusFlags__Sequence * array)
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
      px4_msgs__msg__VehicleStatusFlags__fini(&array->data[i]);
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

px4_msgs__msg__VehicleStatusFlags__Sequence *
px4_msgs__msg__VehicleStatusFlags__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatusFlags__Sequence * array = (px4_msgs__msg__VehicleStatusFlags__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatusFlags__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleStatusFlags__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleStatusFlags__Sequence__destroy(px4_msgs__msg__VehicleStatusFlags__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleStatusFlags__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleStatusFlags__Sequence__are_equal(const px4_msgs__msg__VehicleStatusFlags__Sequence * lhs, const px4_msgs__msg__VehicleStatusFlags__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleStatusFlags__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatusFlags__Sequence__copy(
  const px4_msgs__msg__VehicleStatusFlags__Sequence * input,
  px4_msgs__msg__VehicleStatusFlags__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleStatusFlags);
    px4_msgs__msg__VehicleStatusFlags * data =
      (px4_msgs__msg__VehicleStatusFlags *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleStatusFlags__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleStatusFlags__fini(&data[i]);
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
    if (!px4_msgs__msg__VehicleStatusFlags__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
