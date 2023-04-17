// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: nav_state
  cdr << ros_message.nav_state;
  // Member: nav_state_timestamp
  cdr << ros_message.nav_state_timestamp;
  // Member: arming_state
  cdr << ros_message.arming_state;
  // Member: hil_state
  cdr << ros_message.hil_state;
  // Member: failsafe
  cdr << (ros_message.failsafe ? true : false);
  // Member: failsafe_timestamp
  cdr << ros_message.failsafe_timestamp;
  // Member: system_type
  cdr << ros_message.system_type;
  // Member: system_id
  cdr << ros_message.system_id;
  // Member: component_id
  cdr << ros_message.component_id;
  // Member: vehicle_type
  cdr << ros_message.vehicle_type;
  // Member: is_vtol
  cdr << (ros_message.is_vtol ? true : false);
  // Member: is_vtol_tailsitter
  cdr << (ros_message.is_vtol_tailsitter ? true : false);
  // Member: vtol_fw_permanent_stab
  cdr << (ros_message.vtol_fw_permanent_stab ? true : false);
  // Member: in_transition_mode
  cdr << (ros_message.in_transition_mode ? true : false);
  // Member: in_transition_to_fw
  cdr << (ros_message.in_transition_to_fw ? true : false);
  // Member: rc_signal_lost
  cdr << (ros_message.rc_signal_lost ? true : false);
  // Member: data_link_lost
  cdr << (ros_message.data_link_lost ? true : false);
  // Member: data_link_lost_counter
  cdr << ros_message.data_link_lost_counter;
  // Member: high_latency_data_link_lost
  cdr << (ros_message.high_latency_data_link_lost ? true : false);
  // Member: engine_failure
  cdr << (ros_message.engine_failure ? true : false);
  // Member: mission_failure
  cdr << (ros_message.mission_failure ? true : false);
  // Member: geofence_violated
  cdr << (ros_message.geofence_violated ? true : false);
  // Member: failure_detector_status
  cdr << ros_message.failure_detector_status;
  // Member: onboard_control_sensors_present
  cdr << ros_message.onboard_control_sensors_present;
  // Member: onboard_control_sensors_enabled
  cdr << ros_message.onboard_control_sensors_enabled;
  // Member: onboard_control_sensors_health
  cdr << ros_message.onboard_control_sensors_health;
  // Member: latest_arming_reason
  cdr << ros_message.latest_arming_reason;
  // Member: latest_disarming_reason
  cdr << ros_message.latest_disarming_reason;
  // Member: armed_time
  cdr << ros_message.armed_time;
  // Member: takeoff_time
  cdr << ros_message.takeoff_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: nav_state
  cdr >> ros_message.nav_state;

  // Member: nav_state_timestamp
  cdr >> ros_message.nav_state_timestamp;

  // Member: arming_state
  cdr >> ros_message.arming_state;

  // Member: hil_state
  cdr >> ros_message.hil_state;

  // Member: failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.failsafe = tmp ? true : false;
  }

  // Member: failsafe_timestamp
  cdr >> ros_message.failsafe_timestamp;

  // Member: system_type
  cdr >> ros_message.system_type;

  // Member: system_id
  cdr >> ros_message.system_id;

  // Member: component_id
  cdr >> ros_message.component_id;

  // Member: vehicle_type
  cdr >> ros_message.vehicle_type;

  // Member: is_vtol
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_vtol = tmp ? true : false;
  }

  // Member: is_vtol_tailsitter
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_vtol_tailsitter = tmp ? true : false;
  }

  // Member: vtol_fw_permanent_stab
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_fw_permanent_stab = tmp ? true : false;
  }

  // Member: in_transition_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition_mode = tmp ? true : false;
  }

  // Member: in_transition_to_fw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_transition_to_fw = tmp ? true : false;
  }

  // Member: rc_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_signal_lost = tmp ? true : false;
  }

  // Member: data_link_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.data_link_lost = tmp ? true : false;
  }

  // Member: data_link_lost_counter
  cdr >> ros_message.data_link_lost_counter;

  // Member: high_latency_data_link_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.high_latency_data_link_lost = tmp ? true : false;
  }

  // Member: engine_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.engine_failure = tmp ? true : false;
  }

  // Member: mission_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mission_failure = tmp ? true : false;
  }

  // Member: geofence_violated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.geofence_violated = tmp ? true : false;
  }

  // Member: failure_detector_status
  cdr >> ros_message.failure_detector_status;

  // Member: onboard_control_sensors_present
  cdr >> ros_message.onboard_control_sensors_present;

  // Member: onboard_control_sensors_enabled
  cdr >> ros_message.onboard_control_sensors_enabled;

  // Member: onboard_control_sensors_health
  cdr >> ros_message.onboard_control_sensors_health;

  // Member: latest_arming_reason
  cdr >> ros_message.latest_arming_reason;

  // Member: latest_disarming_reason
  cdr >> ros_message.latest_disarming_reason;

  // Member: armed_time
  cdr >> ros_message.armed_time;

  // Member: takeoff_time
  cdr >> ros_message.takeoff_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_state
  {
    size_t item_size = sizeof(ros_message.nav_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nav_state_timestamp
  {
    size_t item_size = sizeof(ros_message.nav_state_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arming_state
  {
    size_t item_size = sizeof(ros_message.arming_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hil_state
  {
    size_t item_size = sizeof(ros_message.hil_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe
  {
    size_t item_size = sizeof(ros_message.failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe_timestamp
  {
    size_t item_size = sizeof(ros_message.failsafe_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_type
  {
    size_t item_size = sizeof(ros_message.system_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_id
  {
    size_t item_size = sizeof(ros_message.system_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: component_id
  {
    size_t item_size = sizeof(ros_message.component_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vehicle_type
  {
    size_t item_size = sizeof(ros_message.vehicle_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_vtol
  {
    size_t item_size = sizeof(ros_message.is_vtol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_vtol_tailsitter
  {
    size_t item_size = sizeof(ros_message.is_vtol_tailsitter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_fw_permanent_stab
  {
    size_t item_size = sizeof(ros_message.vtol_fw_permanent_stab);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition_mode
  {
    size_t item_size = sizeof(ros_message.in_transition_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_transition_to_fw
  {
    size_t item_size = sizeof(ros_message.in_transition_to_fw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_signal_lost
  {
    size_t item_size = sizeof(ros_message.rc_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_link_lost
  {
    size_t item_size = sizeof(ros_message.data_link_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: data_link_lost_counter
  {
    size_t item_size = sizeof(ros_message.data_link_lost_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_latency_data_link_lost
  {
    size_t item_size = sizeof(ros_message.high_latency_data_link_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_failure
  {
    size_t item_size = sizeof(ros_message.engine_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mission_failure
  {
    size_t item_size = sizeof(ros_message.mission_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: geofence_violated
  {
    size_t item_size = sizeof(ros_message.geofence_violated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failure_detector_status
  {
    size_t item_size = sizeof(ros_message.failure_detector_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: onboard_control_sensors_present
  {
    size_t item_size = sizeof(ros_message.onboard_control_sensors_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: onboard_control_sensors_enabled
  {
    size_t item_size = sizeof(ros_message.onboard_control_sensors_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: onboard_control_sensors_health
  {
    size_t item_size = sizeof(ros_message.onboard_control_sensors_health);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latest_arming_reason
  {
    size_t item_size = sizeof(ros_message.latest_arming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latest_disarming_reason
  {
    size_t item_size = sizeof(ros_message.latest_disarming_reason);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: armed_time
  {
    size_t item_size = sizeof(ros_message.armed_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: takeoff_time
  {
    size_t item_size = sizeof(ros_message.takeoff_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: nav_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nav_state_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: arming_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hil_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: system_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: component_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vehicle_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_vtol
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_vtol_tailsitter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_fw_permanent_stab
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_transition_to_fw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data_link_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: data_link_lost_counter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: high_latency_data_link_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mission_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: geofence_violated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failure_detector_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: onboard_control_sensors_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: onboard_control_sensors_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: onboard_control_sensors_health
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: latest_arming_reason
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latest_disarming_reason
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: armed_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: takeoff_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleStatus__callbacks = {
  "px4_msgs::msg",
  "VehicleStatus",
  _VehicleStatus__cdr_serialize,
  _VehicleStatus__cdr_deserialize,
  _VehicleStatus__get_serialized_size,
  _VehicleStatus__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatus__handle;
}

#ifdef __cplusplus
}
#endif
