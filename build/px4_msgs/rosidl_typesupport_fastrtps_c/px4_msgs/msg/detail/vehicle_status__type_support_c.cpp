// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_status__struct.h"
#include "px4_msgs/msg/detail/vehicle_status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleStatus__ros_msg_type = px4_msgs__msg__VehicleStatus;

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: nav_state
  {
    cdr << ros_message->nav_state;
  }

  // Field name: nav_state_timestamp
  {
    cdr << ros_message->nav_state_timestamp;
  }

  // Field name: arming_state
  {
    cdr << ros_message->arming_state;
  }

  // Field name: hil_state
  {
    cdr << ros_message->hil_state;
  }

  // Field name: failsafe
  {
    cdr << (ros_message->failsafe ? true : false);
  }

  // Field name: failsafe_timestamp
  {
    cdr << ros_message->failsafe_timestamp;
  }

  // Field name: system_type
  {
    cdr << ros_message->system_type;
  }

  // Field name: system_id
  {
    cdr << ros_message->system_id;
  }

  // Field name: component_id
  {
    cdr << ros_message->component_id;
  }

  // Field name: vehicle_type
  {
    cdr << ros_message->vehicle_type;
  }

  // Field name: is_vtol
  {
    cdr << (ros_message->is_vtol ? true : false);
  }

  // Field name: is_vtol_tailsitter
  {
    cdr << (ros_message->is_vtol_tailsitter ? true : false);
  }

  // Field name: vtol_fw_permanent_stab
  {
    cdr << (ros_message->vtol_fw_permanent_stab ? true : false);
  }

  // Field name: in_transition_mode
  {
    cdr << (ros_message->in_transition_mode ? true : false);
  }

  // Field name: in_transition_to_fw
  {
    cdr << (ros_message->in_transition_to_fw ? true : false);
  }

  // Field name: rc_signal_lost
  {
    cdr << (ros_message->rc_signal_lost ? true : false);
  }

  // Field name: data_link_lost
  {
    cdr << (ros_message->data_link_lost ? true : false);
  }

  // Field name: data_link_lost_counter
  {
    cdr << ros_message->data_link_lost_counter;
  }

  // Field name: high_latency_data_link_lost
  {
    cdr << (ros_message->high_latency_data_link_lost ? true : false);
  }

  // Field name: engine_failure
  {
    cdr << (ros_message->engine_failure ? true : false);
  }

  // Field name: mission_failure
  {
    cdr << (ros_message->mission_failure ? true : false);
  }

  // Field name: geofence_violated
  {
    cdr << (ros_message->geofence_violated ? true : false);
  }

  // Field name: failure_detector_status
  {
    cdr << ros_message->failure_detector_status;
  }

  // Field name: onboard_control_sensors_present
  {
    cdr << ros_message->onboard_control_sensors_present;
  }

  // Field name: onboard_control_sensors_enabled
  {
    cdr << ros_message->onboard_control_sensors_enabled;
  }

  // Field name: onboard_control_sensors_health
  {
    cdr << ros_message->onboard_control_sensors_health;
  }

  // Field name: latest_arming_reason
  {
    cdr << ros_message->latest_arming_reason;
  }

  // Field name: latest_disarming_reason
  {
    cdr << ros_message->latest_disarming_reason;
  }

  // Field name: armed_time
  {
    cdr << ros_message->armed_time;
  }

  // Field name: takeoff_time
  {
    cdr << ros_message->takeoff_time;
  }

  return true;
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatus__ros_msg_type * ros_message = static_cast<_VehicleStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: nav_state
  {
    cdr >> ros_message->nav_state;
  }

  // Field name: nav_state_timestamp
  {
    cdr >> ros_message->nav_state_timestamp;
  }

  // Field name: arming_state
  {
    cdr >> ros_message->arming_state;
  }

  // Field name: hil_state
  {
    cdr >> ros_message->hil_state;
  }

  // Field name: failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->failsafe = tmp ? true : false;
  }

  // Field name: failsafe_timestamp
  {
    cdr >> ros_message->failsafe_timestamp;
  }

  // Field name: system_type
  {
    cdr >> ros_message->system_type;
  }

  // Field name: system_id
  {
    cdr >> ros_message->system_id;
  }

  // Field name: component_id
  {
    cdr >> ros_message->component_id;
  }

  // Field name: vehicle_type
  {
    cdr >> ros_message->vehicle_type;
  }

  // Field name: is_vtol
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_vtol = tmp ? true : false;
  }

  // Field name: is_vtol_tailsitter
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_vtol_tailsitter = tmp ? true : false;
  }

  // Field name: vtol_fw_permanent_stab
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_fw_permanent_stab = tmp ? true : false;
  }

  // Field name: in_transition_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_transition_mode = tmp ? true : false;
  }

  // Field name: in_transition_to_fw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_transition_to_fw = tmp ? true : false;
  }

  // Field name: rc_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_signal_lost = tmp ? true : false;
  }

  // Field name: data_link_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data_link_lost = tmp ? true : false;
  }

  // Field name: data_link_lost_counter
  {
    cdr >> ros_message->data_link_lost_counter;
  }

  // Field name: high_latency_data_link_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->high_latency_data_link_lost = tmp ? true : false;
  }

  // Field name: engine_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->engine_failure = tmp ? true : false;
  }

  // Field name: mission_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mission_failure = tmp ? true : false;
  }

  // Field name: geofence_violated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->geofence_violated = tmp ? true : false;
  }

  // Field name: failure_detector_status
  {
    cdr >> ros_message->failure_detector_status;
  }

  // Field name: onboard_control_sensors_present
  {
    cdr >> ros_message->onboard_control_sensors_present;
  }

  // Field name: onboard_control_sensors_enabled
  {
    cdr >> ros_message->onboard_control_sensors_enabled;
  }

  // Field name: onboard_control_sensors_health
  {
    cdr >> ros_message->onboard_control_sensors_health;
  }

  // Field name: latest_arming_reason
  {
    cdr >> ros_message->latest_arming_reason;
  }

  // Field name: latest_disarming_reason
  {
    cdr >> ros_message->latest_disarming_reason;
  }

  // Field name: armed_time
  {
    cdr >> ros_message->armed_time;
  }

  // Field name: takeoff_time
  {
    cdr >> ros_message->takeoff_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatus__ros_msg_type * ros_message = static_cast<const _VehicleStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nav_state
  {
    size_t item_size = sizeof(ros_message->nav_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nav_state_timestamp
  {
    size_t item_size = sizeof(ros_message->nav_state_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arming_state
  {
    size_t item_size = sizeof(ros_message->arming_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hil_state
  {
    size_t item_size = sizeof(ros_message->hil_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failsafe
  {
    size_t item_size = sizeof(ros_message->failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failsafe_timestamp
  {
    size_t item_size = sizeof(ros_message->failsafe_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_type
  {
    size_t item_size = sizeof(ros_message->system_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_id
  {
    size_t item_size = sizeof(ros_message->system_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name component_id
  {
    size_t item_size = sizeof(ros_message->component_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_type
  {
    size_t item_size = sizeof(ros_message->vehicle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_vtol
  {
    size_t item_size = sizeof(ros_message->is_vtol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_vtol_tailsitter
  {
    size_t item_size = sizeof(ros_message->is_vtol_tailsitter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_fw_permanent_stab
  {
    size_t item_size = sizeof(ros_message->vtol_fw_permanent_stab);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_transition_mode
  {
    size_t item_size = sizeof(ros_message->in_transition_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_transition_to_fw
  {
    size_t item_size = sizeof(ros_message->in_transition_to_fw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_signal_lost
  {
    size_t item_size = sizeof(ros_message->rc_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_link_lost
  {
    size_t item_size = sizeof(ros_message->data_link_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data_link_lost_counter
  {
    size_t item_size = sizeof(ros_message->data_link_lost_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_latency_data_link_lost
  {
    size_t item_size = sizeof(ros_message->high_latency_data_link_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_failure
  {
    size_t item_size = sizeof(ros_message->engine_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mission_failure
  {
    size_t item_size = sizeof(ros_message->mission_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name geofence_violated
  {
    size_t item_size = sizeof(ros_message->geofence_violated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failure_detector_status
  {
    size_t item_size = sizeof(ros_message->failure_detector_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name onboard_control_sensors_present
  {
    size_t item_size = sizeof(ros_message->onboard_control_sensors_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name onboard_control_sensors_enabled
  {
    size_t item_size = sizeof(ros_message->onboard_control_sensors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name onboard_control_sensors_health
  {
    size_t item_size = sizeof(ros_message->onboard_control_sensors_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latest_arming_reason
  {
    size_t item_size = sizeof(ros_message->latest_arming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latest_disarming_reason
  {
    size_t item_size = sizeof(ros_message->latest_disarming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name armed_time
  {
    size_t item_size = sizeof(ros_message->armed_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name takeoff_time
  {
    size_t item_size = sizeof(ros_message->takeoff_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nav_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nav_state_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: arming_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hil_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failsafe_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: system_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: component_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vehicle_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_vtol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_vtol_tailsitter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_fw_permanent_stab
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_transition_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_transition_to_fw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data_link_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data_link_lost_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: high_latency_data_link_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mission_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: geofence_violated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failure_detector_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: onboard_control_sensors_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: onboard_control_sensors_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: onboard_control_sensors_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latest_arming_reason
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: latest_disarming_reason
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: armed_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: takeoff_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleStatus = {
  "px4_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleStatus)() {
  return &_VehicleStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
