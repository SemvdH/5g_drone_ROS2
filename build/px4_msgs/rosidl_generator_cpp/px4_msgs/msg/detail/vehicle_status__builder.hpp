// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatus_takeoff_time
{
public:
  explicit Init_VehicleStatus_takeoff_time(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleStatus takeoff_time(::px4_msgs::msg::VehicleStatus::_takeoff_time_type arg)
  {
    msg_.takeoff_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_armed_time
{
public:
  explicit Init_VehicleStatus_armed_time(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_takeoff_time armed_time(::px4_msgs::msg::VehicleStatus::_armed_time_type arg)
  {
    msg_.armed_time = std::move(arg);
    return Init_VehicleStatus_takeoff_time(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_latest_disarming_reason
{
public:
  explicit Init_VehicleStatus_latest_disarming_reason(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_armed_time latest_disarming_reason(::px4_msgs::msg::VehicleStatus::_latest_disarming_reason_type arg)
  {
    msg_.latest_disarming_reason = std::move(arg);
    return Init_VehicleStatus_armed_time(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_latest_arming_reason
{
public:
  explicit Init_VehicleStatus_latest_arming_reason(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_latest_disarming_reason latest_arming_reason(::px4_msgs::msg::VehicleStatus::_latest_arming_reason_type arg)
  {
    msg_.latest_arming_reason = std::move(arg);
    return Init_VehicleStatus_latest_disarming_reason(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_onboard_control_sensors_health
{
public:
  explicit Init_VehicleStatus_onboard_control_sensors_health(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_latest_arming_reason onboard_control_sensors_health(::px4_msgs::msg::VehicleStatus::_onboard_control_sensors_health_type arg)
  {
    msg_.onboard_control_sensors_health = std::move(arg);
    return Init_VehicleStatus_latest_arming_reason(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_onboard_control_sensors_enabled
{
public:
  explicit Init_VehicleStatus_onboard_control_sensors_enabled(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_onboard_control_sensors_health onboard_control_sensors_enabled(::px4_msgs::msg::VehicleStatus::_onboard_control_sensors_enabled_type arg)
  {
    msg_.onboard_control_sensors_enabled = std::move(arg);
    return Init_VehicleStatus_onboard_control_sensors_health(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_onboard_control_sensors_present
{
public:
  explicit Init_VehicleStatus_onboard_control_sensors_present(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_onboard_control_sensors_enabled onboard_control_sensors_present(::px4_msgs::msg::VehicleStatus::_onboard_control_sensors_present_type arg)
  {
    msg_.onboard_control_sensors_present = std::move(arg);
    return Init_VehicleStatus_onboard_control_sensors_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failure_detector_status
{
public:
  explicit Init_VehicleStatus_failure_detector_status(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_onboard_control_sensors_present failure_detector_status(::px4_msgs::msg::VehicleStatus::_failure_detector_status_type arg)
  {
    msg_.failure_detector_status = std::move(arg);
    return Init_VehicleStatus_onboard_control_sensors_present(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_geofence_violated
{
public:
  explicit Init_VehicleStatus_geofence_violated(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failure_detector_status geofence_violated(::px4_msgs::msg::VehicleStatus::_geofence_violated_type arg)
  {
    msg_.geofence_violated = std::move(arg);
    return Init_VehicleStatus_failure_detector_status(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_mission_failure
{
public:
  explicit Init_VehicleStatus_mission_failure(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_geofence_violated mission_failure(::px4_msgs::msg::VehicleStatus::_mission_failure_type arg)
  {
    msg_.mission_failure = std::move(arg);
    return Init_VehicleStatus_geofence_violated(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_engine_failure
{
public:
  explicit Init_VehicleStatus_engine_failure(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_mission_failure engine_failure(::px4_msgs::msg::VehicleStatus::_engine_failure_type arg)
  {
    msg_.engine_failure = std::move(arg);
    return Init_VehicleStatus_mission_failure(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_high_latency_data_link_lost
{
public:
  explicit Init_VehicleStatus_high_latency_data_link_lost(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_engine_failure high_latency_data_link_lost(::px4_msgs::msg::VehicleStatus::_high_latency_data_link_lost_type arg)
  {
    msg_.high_latency_data_link_lost = std::move(arg);
    return Init_VehicleStatus_engine_failure(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_data_link_lost_counter
{
public:
  explicit Init_VehicleStatus_data_link_lost_counter(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_high_latency_data_link_lost data_link_lost_counter(::px4_msgs::msg::VehicleStatus::_data_link_lost_counter_type arg)
  {
    msg_.data_link_lost_counter = std::move(arg);
    return Init_VehicleStatus_high_latency_data_link_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_data_link_lost
{
public:
  explicit Init_VehicleStatus_data_link_lost(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_data_link_lost_counter data_link_lost(::px4_msgs::msg::VehicleStatus::_data_link_lost_type arg)
  {
    msg_.data_link_lost = std::move(arg);
    return Init_VehicleStatus_data_link_lost_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_rc_signal_lost
{
public:
  explicit Init_VehicleStatus_rc_signal_lost(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_data_link_lost rc_signal_lost(::px4_msgs::msg::VehicleStatus::_rc_signal_lost_type arg)
  {
    msg_.rc_signal_lost = std::move(arg);
    return Init_VehicleStatus_data_link_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_in_transition_to_fw
{
public:
  explicit Init_VehicleStatus_in_transition_to_fw(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_rc_signal_lost in_transition_to_fw(::px4_msgs::msg::VehicleStatus::_in_transition_to_fw_type arg)
  {
    msg_.in_transition_to_fw = std::move(arg);
    return Init_VehicleStatus_rc_signal_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_in_transition_mode
{
public:
  explicit Init_VehicleStatus_in_transition_mode(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_in_transition_to_fw in_transition_mode(::px4_msgs::msg::VehicleStatus::_in_transition_mode_type arg)
  {
    msg_.in_transition_mode = std::move(arg);
    return Init_VehicleStatus_in_transition_to_fw(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_vtol_fw_permanent_stab
{
public:
  explicit Init_VehicleStatus_vtol_fw_permanent_stab(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_in_transition_mode vtol_fw_permanent_stab(::px4_msgs::msg::VehicleStatus::_vtol_fw_permanent_stab_type arg)
  {
    msg_.vtol_fw_permanent_stab = std::move(arg);
    return Init_VehicleStatus_in_transition_mode(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_vtol_tailsitter
{
public:
  explicit Init_VehicleStatus_is_vtol_tailsitter(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_vtol_fw_permanent_stab is_vtol_tailsitter(::px4_msgs::msg::VehicleStatus::_is_vtol_tailsitter_type arg)
  {
    msg_.is_vtol_tailsitter = std::move(arg);
    return Init_VehicleStatus_vtol_fw_permanent_stab(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_is_vtol
{
public:
  explicit Init_VehicleStatus_is_vtol(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_vtol_tailsitter is_vtol(::px4_msgs::msg::VehicleStatus::_is_vtol_type arg)
  {
    msg_.is_vtol = std::move(arg);
    return Init_VehicleStatus_is_vtol_tailsitter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_vehicle_type
{
public:
  explicit Init_VehicleStatus_vehicle_type(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_is_vtol vehicle_type(::px4_msgs::msg::VehicleStatus::_vehicle_type_type arg)
  {
    msg_.vehicle_type = std::move(arg);
    return Init_VehicleStatus_is_vtol(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_component_id
{
public:
  explicit Init_VehicleStatus_component_id(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_vehicle_type component_id(::px4_msgs::msg::VehicleStatus::_component_id_type arg)
  {
    msg_.component_id = std::move(arg);
    return Init_VehicleStatus_vehicle_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_system_id
{
public:
  explicit Init_VehicleStatus_system_id(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_component_id system_id(::px4_msgs::msg::VehicleStatus::_system_id_type arg)
  {
    msg_.system_id = std::move(arg);
    return Init_VehicleStatus_component_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_system_type
{
public:
  explicit Init_VehicleStatus_system_type(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_system_id system_type(::px4_msgs::msg::VehicleStatus::_system_type_type arg)
  {
    msg_.system_type = std::move(arg);
    return Init_VehicleStatus_system_id(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failsafe_timestamp
{
public:
  explicit Init_VehicleStatus_failsafe_timestamp(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_system_type failsafe_timestamp(::px4_msgs::msg::VehicleStatus::_failsafe_timestamp_type arg)
  {
    msg_.failsafe_timestamp = std::move(arg);
    return Init_VehicleStatus_system_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_failsafe
{
public:
  explicit Init_VehicleStatus_failsafe(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failsafe_timestamp failsafe(::px4_msgs::msg::VehicleStatus::_failsafe_type arg)
  {
    msg_.failsafe = std::move(arg);
    return Init_VehicleStatus_failsafe_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_hil_state
{
public:
  explicit Init_VehicleStatus_hil_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_failsafe hil_state(::px4_msgs::msg::VehicleStatus::_hil_state_type arg)
  {
    msg_.hil_state = std::move(arg);
    return Init_VehicleStatus_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_arming_state
{
public:
  explicit Init_VehicleStatus_arming_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_hil_state arming_state(::px4_msgs::msg::VehicleStatus::_arming_state_type arg)
  {
    msg_.arming_state = std::move(arg);
    return Init_VehicleStatus_hil_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_nav_state_timestamp
{
public:
  explicit Init_VehicleStatus_nav_state_timestamp(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_arming_state nav_state_timestamp(::px4_msgs::msg::VehicleStatus::_nav_state_timestamp_type arg)
  {
    msg_.nav_state_timestamp = std::move(arg);
    return Init_VehicleStatus_arming_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_nav_state
{
public:
  explicit Init_VehicleStatus_nav_state(::px4_msgs::msg::VehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VehicleStatus_nav_state_timestamp nav_state(::px4_msgs::msg::VehicleStatus::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return Init_VehicleStatus_nav_state_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

class Init_VehicleStatus_timestamp
{
public:
  Init_VehicleStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatus_nav_state timestamp(::px4_msgs::msg::VehicleStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleStatus_nav_state(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleStatus>()
{
  return px4_msgs::msg::builder::Init_VehicleStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__BUILDER_HPP_
