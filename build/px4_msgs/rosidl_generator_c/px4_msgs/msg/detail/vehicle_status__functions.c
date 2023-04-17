// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
px4_msgs__msg__VehicleStatus__init(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // nav_state
  // nav_state_timestamp
  // arming_state
  // hil_state
  // failsafe
  // failsafe_timestamp
  // system_type
  // system_id
  // component_id
  // vehicle_type
  // is_vtol
  // is_vtol_tailsitter
  // vtol_fw_permanent_stab
  // in_transition_mode
  // in_transition_to_fw
  // rc_signal_lost
  // data_link_lost
  // data_link_lost_counter
  // high_latency_data_link_lost
  // engine_failure
  // mission_failure
  // geofence_violated
  // failure_detector_status
  // onboard_control_sensors_present
  // onboard_control_sensors_enabled
  // onboard_control_sensors_health
  // latest_arming_reason
  // latest_disarming_reason
  // armed_time
  // takeoff_time
  return true;
}

void
px4_msgs__msg__VehicleStatus__fini(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // nav_state
  // nav_state_timestamp
  // arming_state
  // hil_state
  // failsafe
  // failsafe_timestamp
  // system_type
  // system_id
  // component_id
  // vehicle_type
  // is_vtol
  // is_vtol_tailsitter
  // vtol_fw_permanent_stab
  // in_transition_mode
  // in_transition_to_fw
  // rc_signal_lost
  // data_link_lost
  // data_link_lost_counter
  // high_latency_data_link_lost
  // engine_failure
  // mission_failure
  // geofence_violated
  // failure_detector_status
  // onboard_control_sensors_present
  // onboard_control_sensors_enabled
  // onboard_control_sensors_health
  // latest_arming_reason
  // latest_disarming_reason
  // armed_time
  // takeoff_time
}

bool
px4_msgs__msg__VehicleStatus__are_equal(const px4_msgs__msg__VehicleStatus * lhs, const px4_msgs__msg__VehicleStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // nav_state
  if (lhs->nav_state != rhs->nav_state) {
    return false;
  }
  // nav_state_timestamp
  if (lhs->nav_state_timestamp != rhs->nav_state_timestamp) {
    return false;
  }
  // arming_state
  if (lhs->arming_state != rhs->arming_state) {
    return false;
  }
  // hil_state
  if (lhs->hil_state != rhs->hil_state) {
    return false;
  }
  // failsafe
  if (lhs->failsafe != rhs->failsafe) {
    return false;
  }
  // failsafe_timestamp
  if (lhs->failsafe_timestamp != rhs->failsafe_timestamp) {
    return false;
  }
  // system_type
  if (lhs->system_type != rhs->system_type) {
    return false;
  }
  // system_id
  if (lhs->system_id != rhs->system_id) {
    return false;
  }
  // component_id
  if (lhs->component_id != rhs->component_id) {
    return false;
  }
  // vehicle_type
  if (lhs->vehicle_type != rhs->vehicle_type) {
    return false;
  }
  // is_vtol
  if (lhs->is_vtol != rhs->is_vtol) {
    return false;
  }
  // is_vtol_tailsitter
  if (lhs->is_vtol_tailsitter != rhs->is_vtol_tailsitter) {
    return false;
  }
  // vtol_fw_permanent_stab
  if (lhs->vtol_fw_permanent_stab != rhs->vtol_fw_permanent_stab) {
    return false;
  }
  // in_transition_mode
  if (lhs->in_transition_mode != rhs->in_transition_mode) {
    return false;
  }
  // in_transition_to_fw
  if (lhs->in_transition_to_fw != rhs->in_transition_to_fw) {
    return false;
  }
  // rc_signal_lost
  if (lhs->rc_signal_lost != rhs->rc_signal_lost) {
    return false;
  }
  // data_link_lost
  if (lhs->data_link_lost != rhs->data_link_lost) {
    return false;
  }
  // data_link_lost_counter
  if (lhs->data_link_lost_counter != rhs->data_link_lost_counter) {
    return false;
  }
  // high_latency_data_link_lost
  if (lhs->high_latency_data_link_lost != rhs->high_latency_data_link_lost) {
    return false;
  }
  // engine_failure
  if (lhs->engine_failure != rhs->engine_failure) {
    return false;
  }
  // mission_failure
  if (lhs->mission_failure != rhs->mission_failure) {
    return false;
  }
  // geofence_violated
  if (lhs->geofence_violated != rhs->geofence_violated) {
    return false;
  }
  // failure_detector_status
  if (lhs->failure_detector_status != rhs->failure_detector_status) {
    return false;
  }
  // onboard_control_sensors_present
  if (lhs->onboard_control_sensors_present != rhs->onboard_control_sensors_present) {
    return false;
  }
  // onboard_control_sensors_enabled
  if (lhs->onboard_control_sensors_enabled != rhs->onboard_control_sensors_enabled) {
    return false;
  }
  // onboard_control_sensors_health
  if (lhs->onboard_control_sensors_health != rhs->onboard_control_sensors_health) {
    return false;
  }
  // latest_arming_reason
  if (lhs->latest_arming_reason != rhs->latest_arming_reason) {
    return false;
  }
  // latest_disarming_reason
  if (lhs->latest_disarming_reason != rhs->latest_disarming_reason) {
    return false;
  }
  // armed_time
  if (lhs->armed_time != rhs->armed_time) {
    return false;
  }
  // takeoff_time
  if (lhs->takeoff_time != rhs->takeoff_time) {
    return false;
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatus__copy(
  const px4_msgs__msg__VehicleStatus * input,
  px4_msgs__msg__VehicleStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // nav_state
  output->nav_state = input->nav_state;
  // nav_state_timestamp
  output->nav_state_timestamp = input->nav_state_timestamp;
  // arming_state
  output->arming_state = input->arming_state;
  // hil_state
  output->hil_state = input->hil_state;
  // failsafe
  output->failsafe = input->failsafe;
  // failsafe_timestamp
  output->failsafe_timestamp = input->failsafe_timestamp;
  // system_type
  output->system_type = input->system_type;
  // system_id
  output->system_id = input->system_id;
  // component_id
  output->component_id = input->component_id;
  // vehicle_type
  output->vehicle_type = input->vehicle_type;
  // is_vtol
  output->is_vtol = input->is_vtol;
  // is_vtol_tailsitter
  output->is_vtol_tailsitter = input->is_vtol_tailsitter;
  // vtol_fw_permanent_stab
  output->vtol_fw_permanent_stab = input->vtol_fw_permanent_stab;
  // in_transition_mode
  output->in_transition_mode = input->in_transition_mode;
  // in_transition_to_fw
  output->in_transition_to_fw = input->in_transition_to_fw;
  // rc_signal_lost
  output->rc_signal_lost = input->rc_signal_lost;
  // data_link_lost
  output->data_link_lost = input->data_link_lost;
  // data_link_lost_counter
  output->data_link_lost_counter = input->data_link_lost_counter;
  // high_latency_data_link_lost
  output->high_latency_data_link_lost = input->high_latency_data_link_lost;
  // engine_failure
  output->engine_failure = input->engine_failure;
  // mission_failure
  output->mission_failure = input->mission_failure;
  // geofence_violated
  output->geofence_violated = input->geofence_violated;
  // failure_detector_status
  output->failure_detector_status = input->failure_detector_status;
  // onboard_control_sensors_present
  output->onboard_control_sensors_present = input->onboard_control_sensors_present;
  // onboard_control_sensors_enabled
  output->onboard_control_sensors_enabled = input->onboard_control_sensors_enabled;
  // onboard_control_sensors_health
  output->onboard_control_sensors_health = input->onboard_control_sensors_health;
  // latest_arming_reason
  output->latest_arming_reason = input->latest_arming_reason;
  // latest_disarming_reason
  output->latest_disarming_reason = input->latest_disarming_reason;
  // armed_time
  output->armed_time = input->armed_time;
  // takeoff_time
  output->takeoff_time = input->takeoff_time;
  return true;
}

px4_msgs__msg__VehicleStatus *
px4_msgs__msg__VehicleStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus * msg = (px4_msgs__msg__VehicleStatus *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleStatus));
  bool success = px4_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleStatus__destroy(px4_msgs__msg__VehicleStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_msgs__msg__VehicleStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_msgs__msg__VehicleStatus__Sequence__init(px4_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus * data = NULL;

  if (size) {
    data = (px4_msgs__msg__VehicleStatus *)allocator.zero_allocate(size, sizeof(px4_msgs__msg__VehicleStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleStatus__fini(&data[i - 1]);
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
px4_msgs__msg__VehicleStatus__Sequence__fini(px4_msgs__msg__VehicleStatus__Sequence * array)
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
      px4_msgs__msg__VehicleStatus__fini(&array->data[i]);
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

px4_msgs__msg__VehicleStatus__Sequence *
px4_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_msgs__msg__VehicleStatus__Sequence * array = (px4_msgs__msg__VehicleStatus__Sequence *)allocator.allocate(sizeof(px4_msgs__msg__VehicleStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleStatus__Sequence__destroy(px4_msgs__msg__VehicleStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_msgs__msg__VehicleStatus__Sequence__are_equal(const px4_msgs__msg__VehicleStatus__Sequence * lhs, const px4_msgs__msg__VehicleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_msgs__msg__VehicleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_msgs__msg__VehicleStatus__Sequence__copy(
  const px4_msgs__msg__VehicleStatus__Sequence * input,
  px4_msgs__msg__VehicleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_msgs__msg__VehicleStatus);
    px4_msgs__msg__VehicleStatus * data =
      (px4_msgs__msg__VehicleStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_msgs__msg__VehicleStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          px4_msgs__msg__VehicleStatus__fini(&data[i]);
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
    if (!px4_msgs__msg__VehicleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
