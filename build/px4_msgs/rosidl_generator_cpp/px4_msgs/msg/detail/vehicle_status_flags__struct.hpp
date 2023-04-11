// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatusFlags_
{
  using Type = VehicleStatusFlags_<ContainerAllocator>;

  explicit VehicleStatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->calibration_enabled = false;
      this->system_sensors_initialized = false;
      this->system_hotplug_timeout = false;
      this->auto_mission_available = false;
      this->angular_velocity_valid = false;
      this->attitude_valid = false;
      this->local_altitude_valid = false;
      this->local_position_valid = false;
      this->local_velocity_valid = false;
      this->global_position_valid = false;
      this->gps_position_valid = false;
      this->home_position_valid = false;
      this->power_input_valid = false;
      this->battery_healthy = false;
      this->escs_error = false;
      this->escs_failure = false;
      this->position_reliant_on_gps = false;
      this->position_reliant_on_optical_flow = false;
      this->position_reliant_on_vision_position = false;
      this->dead_reckoning = false;
      this->flight_terminated = false;
      this->circuit_breaker_engaged_power_check = false;
      this->circuit_breaker_engaged_airspd_check = false;
      this->circuit_breaker_engaged_enginefailure_check = false;
      this->circuit_breaker_flight_termination_disabled = false;
      this->circuit_breaker_engaged_usb_check = false;
      this->circuit_breaker_engaged_posfailure_check = false;
      this->circuit_breaker_vtol_fw_arming_check = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_calibration_in_progress = false;
      this->rc_calibration_valid = false;
      this->vtol_transition_failure = false;
      this->usb_connected = false;
      this->sd_card_detected_once = false;
      this->avoidance_system_required = false;
      this->avoidance_system_valid = false;
      this->parachute_system_present = false;
      this->parachute_system_healthy = false;
    }
  }

  explicit VehicleStatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->calibration_enabled = false;
      this->system_sensors_initialized = false;
      this->system_hotplug_timeout = false;
      this->auto_mission_available = false;
      this->angular_velocity_valid = false;
      this->attitude_valid = false;
      this->local_altitude_valid = false;
      this->local_position_valid = false;
      this->local_velocity_valid = false;
      this->global_position_valid = false;
      this->gps_position_valid = false;
      this->home_position_valid = false;
      this->power_input_valid = false;
      this->battery_healthy = false;
      this->escs_error = false;
      this->escs_failure = false;
      this->position_reliant_on_gps = false;
      this->position_reliant_on_optical_flow = false;
      this->position_reliant_on_vision_position = false;
      this->dead_reckoning = false;
      this->flight_terminated = false;
      this->circuit_breaker_engaged_power_check = false;
      this->circuit_breaker_engaged_airspd_check = false;
      this->circuit_breaker_engaged_enginefailure_check = false;
      this->circuit_breaker_flight_termination_disabled = false;
      this->circuit_breaker_engaged_usb_check = false;
      this->circuit_breaker_engaged_posfailure_check = false;
      this->circuit_breaker_vtol_fw_arming_check = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_calibration_in_progress = false;
      this->rc_calibration_valid = false;
      this->vtol_transition_failure = false;
      this->usb_connected = false;
      this->sd_card_detected_once = false;
      this->avoidance_system_required = false;
      this->avoidance_system_valid = false;
      this->parachute_system_present = false;
      this->parachute_system_healthy = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _calibration_enabled_type =
    bool;
  _calibration_enabled_type calibration_enabled;
  using _system_sensors_initialized_type =
    bool;
  _system_sensors_initialized_type system_sensors_initialized;
  using _system_hotplug_timeout_type =
    bool;
  _system_hotplug_timeout_type system_hotplug_timeout;
  using _auto_mission_available_type =
    bool;
  _auto_mission_available_type auto_mission_available;
  using _angular_velocity_valid_type =
    bool;
  _angular_velocity_valid_type angular_velocity_valid;
  using _attitude_valid_type =
    bool;
  _attitude_valid_type attitude_valid;
  using _local_altitude_valid_type =
    bool;
  _local_altitude_valid_type local_altitude_valid;
  using _local_position_valid_type =
    bool;
  _local_position_valid_type local_position_valid;
  using _local_velocity_valid_type =
    bool;
  _local_velocity_valid_type local_velocity_valid;
  using _global_position_valid_type =
    bool;
  _global_position_valid_type global_position_valid;
  using _gps_position_valid_type =
    bool;
  _gps_position_valid_type gps_position_valid;
  using _home_position_valid_type =
    bool;
  _home_position_valid_type home_position_valid;
  using _power_input_valid_type =
    bool;
  _power_input_valid_type power_input_valid;
  using _battery_healthy_type =
    bool;
  _battery_healthy_type battery_healthy;
  using _escs_error_type =
    bool;
  _escs_error_type escs_error;
  using _escs_failure_type =
    bool;
  _escs_failure_type escs_failure;
  using _position_reliant_on_gps_type =
    bool;
  _position_reliant_on_gps_type position_reliant_on_gps;
  using _position_reliant_on_optical_flow_type =
    bool;
  _position_reliant_on_optical_flow_type position_reliant_on_optical_flow;
  using _position_reliant_on_vision_position_type =
    bool;
  _position_reliant_on_vision_position_type position_reliant_on_vision_position;
  using _dead_reckoning_type =
    bool;
  _dead_reckoning_type dead_reckoning;
  using _flight_terminated_type =
    bool;
  _flight_terminated_type flight_terminated;
  using _circuit_breaker_engaged_power_check_type =
    bool;
  _circuit_breaker_engaged_power_check_type circuit_breaker_engaged_power_check;
  using _circuit_breaker_engaged_airspd_check_type =
    bool;
  _circuit_breaker_engaged_airspd_check_type circuit_breaker_engaged_airspd_check;
  using _circuit_breaker_engaged_enginefailure_check_type =
    bool;
  _circuit_breaker_engaged_enginefailure_check_type circuit_breaker_engaged_enginefailure_check;
  using _circuit_breaker_flight_termination_disabled_type =
    bool;
  _circuit_breaker_flight_termination_disabled_type circuit_breaker_flight_termination_disabled;
  using _circuit_breaker_engaged_usb_check_type =
    bool;
  _circuit_breaker_engaged_usb_check_type circuit_breaker_engaged_usb_check;
  using _circuit_breaker_engaged_posfailure_check_type =
    bool;
  _circuit_breaker_engaged_posfailure_check_type circuit_breaker_engaged_posfailure_check;
  using _circuit_breaker_vtol_fw_arming_check_type =
    bool;
  _circuit_breaker_vtol_fw_arming_check_type circuit_breaker_vtol_fw_arming_check;
  using _offboard_control_signal_lost_type =
    bool;
  _offboard_control_signal_lost_type offboard_control_signal_lost;
  using _rc_signal_found_once_type =
    bool;
  _rc_signal_found_once_type rc_signal_found_once;
  using _rc_calibration_in_progress_type =
    bool;
  _rc_calibration_in_progress_type rc_calibration_in_progress;
  using _rc_calibration_valid_type =
    bool;
  _rc_calibration_valid_type rc_calibration_valid;
  using _vtol_transition_failure_type =
    bool;
  _vtol_transition_failure_type vtol_transition_failure;
  using _usb_connected_type =
    bool;
  _usb_connected_type usb_connected;
  using _sd_card_detected_once_type =
    bool;
  _sd_card_detected_once_type sd_card_detected_once;
  using _avoidance_system_required_type =
    bool;
  _avoidance_system_required_type avoidance_system_required;
  using _avoidance_system_valid_type =
    bool;
  _avoidance_system_valid_type avoidance_system_valid;
  using _parachute_system_present_type =
    bool;
  _parachute_system_present_type parachute_system_present;
  using _parachute_system_healthy_type =
    bool;
  _parachute_system_healthy_type parachute_system_healthy;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__calibration_enabled(
    const bool & _arg)
  {
    this->calibration_enabled = _arg;
    return *this;
  }
  Type & set__system_sensors_initialized(
    const bool & _arg)
  {
    this->system_sensors_initialized = _arg;
    return *this;
  }
  Type & set__system_hotplug_timeout(
    const bool & _arg)
  {
    this->system_hotplug_timeout = _arg;
    return *this;
  }
  Type & set__auto_mission_available(
    const bool & _arg)
  {
    this->auto_mission_available = _arg;
    return *this;
  }
  Type & set__angular_velocity_valid(
    const bool & _arg)
  {
    this->angular_velocity_valid = _arg;
    return *this;
  }
  Type & set__attitude_valid(
    const bool & _arg)
  {
    this->attitude_valid = _arg;
    return *this;
  }
  Type & set__local_altitude_valid(
    const bool & _arg)
  {
    this->local_altitude_valid = _arg;
    return *this;
  }
  Type & set__local_position_valid(
    const bool & _arg)
  {
    this->local_position_valid = _arg;
    return *this;
  }
  Type & set__local_velocity_valid(
    const bool & _arg)
  {
    this->local_velocity_valid = _arg;
    return *this;
  }
  Type & set__global_position_valid(
    const bool & _arg)
  {
    this->global_position_valid = _arg;
    return *this;
  }
  Type & set__gps_position_valid(
    const bool & _arg)
  {
    this->gps_position_valid = _arg;
    return *this;
  }
  Type & set__home_position_valid(
    const bool & _arg)
  {
    this->home_position_valid = _arg;
    return *this;
  }
  Type & set__power_input_valid(
    const bool & _arg)
  {
    this->power_input_valid = _arg;
    return *this;
  }
  Type & set__battery_healthy(
    const bool & _arg)
  {
    this->battery_healthy = _arg;
    return *this;
  }
  Type & set__escs_error(
    const bool & _arg)
  {
    this->escs_error = _arg;
    return *this;
  }
  Type & set__escs_failure(
    const bool & _arg)
  {
    this->escs_failure = _arg;
    return *this;
  }
  Type & set__position_reliant_on_gps(
    const bool & _arg)
  {
    this->position_reliant_on_gps = _arg;
    return *this;
  }
  Type & set__position_reliant_on_optical_flow(
    const bool & _arg)
  {
    this->position_reliant_on_optical_flow = _arg;
    return *this;
  }
  Type & set__position_reliant_on_vision_position(
    const bool & _arg)
  {
    this->position_reliant_on_vision_position = _arg;
    return *this;
  }
  Type & set__dead_reckoning(
    const bool & _arg)
  {
    this->dead_reckoning = _arg;
    return *this;
  }
  Type & set__flight_terminated(
    const bool & _arg)
  {
    this->flight_terminated = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_power_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_power_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_airspd_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_airspd_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_enginefailure_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_enginefailure_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_flight_termination_disabled(
    const bool & _arg)
  {
    this->circuit_breaker_flight_termination_disabled = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_usb_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_usb_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_posfailure_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_posfailure_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_vtol_fw_arming_check(
    const bool & _arg)
  {
    this->circuit_breaker_vtol_fw_arming_check = _arg;
    return *this;
  }
  Type & set__offboard_control_signal_lost(
    const bool & _arg)
  {
    this->offboard_control_signal_lost = _arg;
    return *this;
  }
  Type & set__rc_signal_found_once(
    const bool & _arg)
  {
    this->rc_signal_found_once = _arg;
    return *this;
  }
  Type & set__rc_calibration_in_progress(
    const bool & _arg)
  {
    this->rc_calibration_in_progress = _arg;
    return *this;
  }
  Type & set__rc_calibration_valid(
    const bool & _arg)
  {
    this->rc_calibration_valid = _arg;
    return *this;
  }
  Type & set__vtol_transition_failure(
    const bool & _arg)
  {
    this->vtol_transition_failure = _arg;
    return *this;
  }
  Type & set__usb_connected(
    const bool & _arg)
  {
    this->usb_connected = _arg;
    return *this;
  }
  Type & set__sd_card_detected_once(
    const bool & _arg)
  {
    this->sd_card_detected_once = _arg;
    return *this;
  }
  Type & set__avoidance_system_required(
    const bool & _arg)
  {
    this->avoidance_system_required = _arg;
    return *this;
  }
  Type & set__avoidance_system_valid(
    const bool & _arg)
  {
    this->avoidance_system_valid = _arg;
    return *this;
  }
  Type & set__parachute_system_present(
    const bool & _arg)
  {
    this->parachute_system_present = _arg;
    return *this;
  }
  Type & set__parachute_system_healthy(
    const bool & _arg)
  {
    this->parachute_system_healthy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatusFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->calibration_enabled != other.calibration_enabled) {
      return false;
    }
    if (this->system_sensors_initialized != other.system_sensors_initialized) {
      return false;
    }
    if (this->system_hotplug_timeout != other.system_hotplug_timeout) {
      return false;
    }
    if (this->auto_mission_available != other.auto_mission_available) {
      return false;
    }
    if (this->angular_velocity_valid != other.angular_velocity_valid) {
      return false;
    }
    if (this->attitude_valid != other.attitude_valid) {
      return false;
    }
    if (this->local_altitude_valid != other.local_altitude_valid) {
      return false;
    }
    if (this->local_position_valid != other.local_position_valid) {
      return false;
    }
    if (this->local_velocity_valid != other.local_velocity_valid) {
      return false;
    }
    if (this->global_position_valid != other.global_position_valid) {
      return false;
    }
    if (this->gps_position_valid != other.gps_position_valid) {
      return false;
    }
    if (this->home_position_valid != other.home_position_valid) {
      return false;
    }
    if (this->power_input_valid != other.power_input_valid) {
      return false;
    }
    if (this->battery_healthy != other.battery_healthy) {
      return false;
    }
    if (this->escs_error != other.escs_error) {
      return false;
    }
    if (this->escs_failure != other.escs_failure) {
      return false;
    }
    if (this->position_reliant_on_gps != other.position_reliant_on_gps) {
      return false;
    }
    if (this->position_reliant_on_optical_flow != other.position_reliant_on_optical_flow) {
      return false;
    }
    if (this->position_reliant_on_vision_position != other.position_reliant_on_vision_position) {
      return false;
    }
    if (this->dead_reckoning != other.dead_reckoning) {
      return false;
    }
    if (this->flight_terminated != other.flight_terminated) {
      return false;
    }
    if (this->circuit_breaker_engaged_power_check != other.circuit_breaker_engaged_power_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_airspd_check != other.circuit_breaker_engaged_airspd_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_enginefailure_check != other.circuit_breaker_engaged_enginefailure_check) {
      return false;
    }
    if (this->circuit_breaker_flight_termination_disabled != other.circuit_breaker_flight_termination_disabled) {
      return false;
    }
    if (this->circuit_breaker_engaged_usb_check != other.circuit_breaker_engaged_usb_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_posfailure_check != other.circuit_breaker_engaged_posfailure_check) {
      return false;
    }
    if (this->circuit_breaker_vtol_fw_arming_check != other.circuit_breaker_vtol_fw_arming_check) {
      return false;
    }
    if (this->offboard_control_signal_lost != other.offboard_control_signal_lost) {
      return false;
    }
    if (this->rc_signal_found_once != other.rc_signal_found_once) {
      return false;
    }
    if (this->rc_calibration_in_progress != other.rc_calibration_in_progress) {
      return false;
    }
    if (this->rc_calibration_valid != other.rc_calibration_valid) {
      return false;
    }
    if (this->vtol_transition_failure != other.vtol_transition_failure) {
      return false;
    }
    if (this->usb_connected != other.usb_connected) {
      return false;
    }
    if (this->sd_card_detected_once != other.sd_card_detected_once) {
      return false;
    }
    if (this->avoidance_system_required != other.avoidance_system_required) {
      return false;
    }
    if (this->avoidance_system_valid != other.avoidance_system_valid) {
      return false;
    }
    if (this->parachute_system_present != other.parachute_system_present) {
      return false;
    }
    if (this->parachute_system_healthy != other.parachute_system_healthy) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatusFlags_

// alias to use template instance with default allocator
using VehicleStatusFlags =
  px4_msgs::msg::VehicleStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_HPP_
