// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__VehicleStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatus_
{
  using Type = VehicleStatus_<ContainerAllocator>;

  explicit VehicleStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_state = 0;
      this->nav_state_timestamp = 0ull;
      this->arming_state = 0;
      this->hil_state = 0;
      this->failsafe = false;
      this->failsafe_timestamp = 0ull;
      this->system_type = 0;
      this->system_id = 0;
      this->component_id = 0;
      this->vehicle_type = 0;
      this->is_vtol = false;
      this->is_vtol_tailsitter = false;
      this->vtol_fw_permanent_stab = false;
      this->in_transition_mode = false;
      this->in_transition_to_fw = false;
      this->rc_signal_lost = false;
      this->data_link_lost = false;
      this->data_link_lost_counter = 0;
      this->high_latency_data_link_lost = false;
      this->engine_failure = false;
      this->mission_failure = false;
      this->geofence_violated = false;
      this->failure_detector_status = 0;
      this->onboard_control_sensors_present = 0ull;
      this->onboard_control_sensors_enabled = 0ull;
      this->onboard_control_sensors_health = 0ull;
      this->latest_arming_reason = 0;
      this->latest_disarming_reason = 0;
      this->armed_time = 0ull;
      this->takeoff_time = 0ull;
    }
  }

  explicit VehicleStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->nav_state = 0;
      this->nav_state_timestamp = 0ull;
      this->arming_state = 0;
      this->hil_state = 0;
      this->failsafe = false;
      this->failsafe_timestamp = 0ull;
      this->system_type = 0;
      this->system_id = 0;
      this->component_id = 0;
      this->vehicle_type = 0;
      this->is_vtol = false;
      this->is_vtol_tailsitter = false;
      this->vtol_fw_permanent_stab = false;
      this->in_transition_mode = false;
      this->in_transition_to_fw = false;
      this->rc_signal_lost = false;
      this->data_link_lost = false;
      this->data_link_lost_counter = 0;
      this->high_latency_data_link_lost = false;
      this->engine_failure = false;
      this->mission_failure = false;
      this->geofence_violated = false;
      this->failure_detector_status = 0;
      this->onboard_control_sensors_present = 0ull;
      this->onboard_control_sensors_enabled = 0ull;
      this->onboard_control_sensors_health = 0ull;
      this->latest_arming_reason = 0;
      this->latest_disarming_reason = 0;
      this->armed_time = 0ull;
      this->takeoff_time = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _nav_state_type =
    uint8_t;
  _nav_state_type nav_state;
  using _nav_state_timestamp_type =
    uint64_t;
  _nav_state_timestamp_type nav_state_timestamp;
  using _arming_state_type =
    uint8_t;
  _arming_state_type arming_state;
  using _hil_state_type =
    uint8_t;
  _hil_state_type hil_state;
  using _failsafe_type =
    bool;
  _failsafe_type failsafe;
  using _failsafe_timestamp_type =
    uint64_t;
  _failsafe_timestamp_type failsafe_timestamp;
  using _system_type_type =
    uint8_t;
  _system_type_type system_type;
  using _system_id_type =
    uint8_t;
  _system_id_type system_id;
  using _component_id_type =
    uint8_t;
  _component_id_type component_id;
  using _vehicle_type_type =
    uint8_t;
  _vehicle_type_type vehicle_type;
  using _is_vtol_type =
    bool;
  _is_vtol_type is_vtol;
  using _is_vtol_tailsitter_type =
    bool;
  _is_vtol_tailsitter_type is_vtol_tailsitter;
  using _vtol_fw_permanent_stab_type =
    bool;
  _vtol_fw_permanent_stab_type vtol_fw_permanent_stab;
  using _in_transition_mode_type =
    bool;
  _in_transition_mode_type in_transition_mode;
  using _in_transition_to_fw_type =
    bool;
  _in_transition_to_fw_type in_transition_to_fw;
  using _rc_signal_lost_type =
    bool;
  _rc_signal_lost_type rc_signal_lost;
  using _data_link_lost_type =
    bool;
  _data_link_lost_type data_link_lost;
  using _data_link_lost_counter_type =
    uint8_t;
  _data_link_lost_counter_type data_link_lost_counter;
  using _high_latency_data_link_lost_type =
    bool;
  _high_latency_data_link_lost_type high_latency_data_link_lost;
  using _engine_failure_type =
    bool;
  _engine_failure_type engine_failure;
  using _mission_failure_type =
    bool;
  _mission_failure_type mission_failure;
  using _geofence_violated_type =
    bool;
  _geofence_violated_type geofence_violated;
  using _failure_detector_status_type =
    uint8_t;
  _failure_detector_status_type failure_detector_status;
  using _onboard_control_sensors_present_type =
    uint64_t;
  _onboard_control_sensors_present_type onboard_control_sensors_present;
  using _onboard_control_sensors_enabled_type =
    uint64_t;
  _onboard_control_sensors_enabled_type onboard_control_sensors_enabled;
  using _onboard_control_sensors_health_type =
    uint64_t;
  _onboard_control_sensors_health_type onboard_control_sensors_health;
  using _latest_arming_reason_type =
    uint8_t;
  _latest_arming_reason_type latest_arming_reason;
  using _latest_disarming_reason_type =
    uint8_t;
  _latest_disarming_reason_type latest_disarming_reason;
  using _armed_time_type =
    uint64_t;
  _armed_time_type armed_time;
  using _takeoff_time_type =
    uint64_t;
  _takeoff_time_type takeoff_time;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__nav_state(
    const uint8_t & _arg)
  {
    this->nav_state = _arg;
    return *this;
  }
  Type & set__nav_state_timestamp(
    const uint64_t & _arg)
  {
    this->nav_state_timestamp = _arg;
    return *this;
  }
  Type & set__arming_state(
    const uint8_t & _arg)
  {
    this->arming_state = _arg;
    return *this;
  }
  Type & set__hil_state(
    const uint8_t & _arg)
  {
    this->hil_state = _arg;
    return *this;
  }
  Type & set__failsafe(
    const bool & _arg)
  {
    this->failsafe = _arg;
    return *this;
  }
  Type & set__failsafe_timestamp(
    const uint64_t & _arg)
  {
    this->failsafe_timestamp = _arg;
    return *this;
  }
  Type & set__system_type(
    const uint8_t & _arg)
  {
    this->system_type = _arg;
    return *this;
  }
  Type & set__system_id(
    const uint8_t & _arg)
  {
    this->system_id = _arg;
    return *this;
  }
  Type & set__component_id(
    const uint8_t & _arg)
  {
    this->component_id = _arg;
    return *this;
  }
  Type & set__vehicle_type(
    const uint8_t & _arg)
  {
    this->vehicle_type = _arg;
    return *this;
  }
  Type & set__is_vtol(
    const bool & _arg)
  {
    this->is_vtol = _arg;
    return *this;
  }
  Type & set__is_vtol_tailsitter(
    const bool & _arg)
  {
    this->is_vtol_tailsitter = _arg;
    return *this;
  }
  Type & set__vtol_fw_permanent_stab(
    const bool & _arg)
  {
    this->vtol_fw_permanent_stab = _arg;
    return *this;
  }
  Type & set__in_transition_mode(
    const bool & _arg)
  {
    this->in_transition_mode = _arg;
    return *this;
  }
  Type & set__in_transition_to_fw(
    const bool & _arg)
  {
    this->in_transition_to_fw = _arg;
    return *this;
  }
  Type & set__rc_signal_lost(
    const bool & _arg)
  {
    this->rc_signal_lost = _arg;
    return *this;
  }
  Type & set__data_link_lost(
    const bool & _arg)
  {
    this->data_link_lost = _arg;
    return *this;
  }
  Type & set__data_link_lost_counter(
    const uint8_t & _arg)
  {
    this->data_link_lost_counter = _arg;
    return *this;
  }
  Type & set__high_latency_data_link_lost(
    const bool & _arg)
  {
    this->high_latency_data_link_lost = _arg;
    return *this;
  }
  Type & set__engine_failure(
    const bool & _arg)
  {
    this->engine_failure = _arg;
    return *this;
  }
  Type & set__mission_failure(
    const bool & _arg)
  {
    this->mission_failure = _arg;
    return *this;
  }
  Type & set__geofence_violated(
    const bool & _arg)
  {
    this->geofence_violated = _arg;
    return *this;
  }
  Type & set__failure_detector_status(
    const uint8_t & _arg)
  {
    this->failure_detector_status = _arg;
    return *this;
  }
  Type & set__onboard_control_sensors_present(
    const uint64_t & _arg)
  {
    this->onboard_control_sensors_present = _arg;
    return *this;
  }
  Type & set__onboard_control_sensors_enabled(
    const uint64_t & _arg)
  {
    this->onboard_control_sensors_enabled = _arg;
    return *this;
  }
  Type & set__onboard_control_sensors_health(
    const uint64_t & _arg)
  {
    this->onboard_control_sensors_health = _arg;
    return *this;
  }
  Type & set__latest_arming_reason(
    const uint8_t & _arg)
  {
    this->latest_arming_reason = _arg;
    return *this;
  }
  Type & set__latest_disarming_reason(
    const uint8_t & _arg)
  {
    this->latest_disarming_reason = _arg;
    return *this;
  }
  Type & set__armed_time(
    const uint64_t & _arg)
  {
    this->armed_time = _arg;
    return *this;
  }
  Type & set__takeoff_time(
    const uint64_t & _arg)
  {
    this->takeoff_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ARMING_STATE_INIT =
    0u;
  static constexpr uint8_t ARMING_STATE_STANDBY =
    1u;
  static constexpr uint8_t ARMING_STATE_ARMED =
    2u;
  static constexpr uint8_t ARMING_STATE_STANDBY_ERROR =
    3u;
  static constexpr uint8_t ARMING_STATE_SHUTDOWN =
    4u;
  static constexpr uint8_t ARMING_STATE_IN_AIR_RESTORE =
    5u;
  static constexpr uint8_t ARMING_STATE_MAX =
    6u;
  static constexpr uint8_t FAILURE_NONE =
    0u;
  static constexpr uint8_t FAILURE_ROLL =
    1u;
  static constexpr uint8_t FAILURE_PITCH =
    2u;
  static constexpr uint8_t FAILURE_ALT =
    4u;
  static constexpr uint8_t FAILURE_EXT =
    8u;
  static constexpr uint8_t FAILURE_ARM_ESC =
    16u;
  static constexpr uint8_t FAILURE_HIGH_WIND =
    32u;
  static constexpr uint8_t FAILURE_BATTERY =
    64u;
  static constexpr uint8_t FAILURE_IMBALANCED_PROP =
    128u;
  static constexpr uint8_t HIL_STATE_OFF =
    0u;
  static constexpr uint8_t HIL_STATE_ON =
    1u;
  static constexpr uint8_t NAVIGATION_STATE_MANUAL =
    0u;
  static constexpr uint8_t NAVIGATION_STATE_ALTCTL =
    1u;
  static constexpr uint8_t NAVIGATION_STATE_POSCTL =
    2u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_MISSION =
    3u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_LOITER =
    4u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_RTL =
    5u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_LANDENGFAIL =
    8u;
  static constexpr uint8_t NAVIGATION_STATE_UNUSED =
    9u;
  static constexpr uint8_t NAVIGATION_STATE_ACRO =
    10u;
  static constexpr uint8_t NAVIGATION_STATE_UNUSED1 =
    11u;
  static constexpr uint8_t NAVIGATION_STATE_DESCEND =
    12u;
  static constexpr uint8_t NAVIGATION_STATE_TERMINATION =
    13u;
  static constexpr uint8_t NAVIGATION_STATE_OFFBOARD =
    14u;
  static constexpr uint8_t NAVIGATION_STATE_STAB =
    15u;
  static constexpr uint8_t NAVIGATION_STATE_UNUSED2 =
    16u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_TAKEOFF =
    17u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_LAND =
    18u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_FOLLOW_TARGET =
    19u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_PRECLAND =
    20u;
  static constexpr uint8_t NAVIGATION_STATE_ORBIT =
    21u;
  static constexpr uint8_t NAVIGATION_STATE_AUTO_VTOL_TAKEOFF =
    22u;
  static constexpr uint8_t NAVIGATION_STATE_MAX =
    23u;
  static constexpr uint8_t VEHICLE_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t VEHICLE_TYPE_ROTARY_WING =
    1u;
  static constexpr uint8_t VEHICLE_TYPE_FIXED_WING =
    2u;
  static constexpr uint8_t VEHICLE_TYPE_ROVER =
    3u;
  static constexpr uint8_t VEHICLE_TYPE_AIRSHIP =
    4u;
  static constexpr uint8_t ARM_DISARM_REASON_TRANSITION_TO_STANDBY =
    0u;
  static constexpr uint8_t ARM_DISARM_REASON_RC_STICK =
    1u;
  static constexpr uint8_t ARM_DISARM_REASON_RC_SWITCH =
    2u;
  static constexpr uint8_t ARM_DISARM_REASON_COMMAND_INTERNAL =
    3u;
  static constexpr uint8_t ARM_DISARM_REASON_COMMAND_EXTERNAL =
    4u;
  static constexpr uint8_t ARM_DISARM_REASON_MISSION_START =
    5u;
  static constexpr uint8_t ARM_DISARM_REASON_SAFETY_BUTTON =
    6u;
  static constexpr uint8_t ARM_DISARM_REASON_AUTO_DISARM_LAND =
    7u;
  static constexpr uint8_t ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT =
    8u;
  static constexpr uint8_t ARM_DISARM_REASON_KILL_SWITCH =
    9u;
  static constexpr uint8_t ARM_DISARM_REASON_LOCKDOWN =
    10u;
  static constexpr uint8_t ARM_DISARM_REASON_FAILURE_DETECTOR =
    11u;
  static constexpr uint8_t ARM_DISARM_REASON_SHUTDOWN =
    12u;
  static constexpr uint8_t ARM_DISARM_REASON_UNIT_TEST =
    13u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleStatus
    std::shared_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleStatus
    std::shared_ptr<px4_msgs::msg::VehicleStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->nav_state != other.nav_state) {
      return false;
    }
    if (this->nav_state_timestamp != other.nav_state_timestamp) {
      return false;
    }
    if (this->arming_state != other.arming_state) {
      return false;
    }
    if (this->hil_state != other.hil_state) {
      return false;
    }
    if (this->failsafe != other.failsafe) {
      return false;
    }
    if (this->failsafe_timestamp != other.failsafe_timestamp) {
      return false;
    }
    if (this->system_type != other.system_type) {
      return false;
    }
    if (this->system_id != other.system_id) {
      return false;
    }
    if (this->component_id != other.component_id) {
      return false;
    }
    if (this->vehicle_type != other.vehicle_type) {
      return false;
    }
    if (this->is_vtol != other.is_vtol) {
      return false;
    }
    if (this->is_vtol_tailsitter != other.is_vtol_tailsitter) {
      return false;
    }
    if (this->vtol_fw_permanent_stab != other.vtol_fw_permanent_stab) {
      return false;
    }
    if (this->in_transition_mode != other.in_transition_mode) {
      return false;
    }
    if (this->in_transition_to_fw != other.in_transition_to_fw) {
      return false;
    }
    if (this->rc_signal_lost != other.rc_signal_lost) {
      return false;
    }
    if (this->data_link_lost != other.data_link_lost) {
      return false;
    }
    if (this->data_link_lost_counter != other.data_link_lost_counter) {
      return false;
    }
    if (this->high_latency_data_link_lost != other.high_latency_data_link_lost) {
      return false;
    }
    if (this->engine_failure != other.engine_failure) {
      return false;
    }
    if (this->mission_failure != other.mission_failure) {
      return false;
    }
    if (this->geofence_violated != other.geofence_violated) {
      return false;
    }
    if (this->failure_detector_status != other.failure_detector_status) {
      return false;
    }
    if (this->onboard_control_sensors_present != other.onboard_control_sensors_present) {
      return false;
    }
    if (this->onboard_control_sensors_enabled != other.onboard_control_sensors_enabled) {
      return false;
    }
    if (this->onboard_control_sensors_health != other.onboard_control_sensors_health) {
      return false;
    }
    if (this->latest_arming_reason != other.latest_arming_reason) {
      return false;
    }
    if (this->latest_disarming_reason != other.latest_disarming_reason) {
      return false;
    }
    if (this->armed_time != other.armed_time) {
      return false;
    }
    if (this->takeoff_time != other.takeoff_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatus_

// alias to use template instance with default allocator
using VehicleStatus =
  px4_msgs::msg::VehicleStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_INIT;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_STANDBY;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_ARMED;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_STANDBY_ERROR;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_SHUTDOWN;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_IN_AIR_RESTORE;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARMING_STATE_MAX;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_ROLL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_PITCH;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_ALT;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_EXT;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_ARM_ESC;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_HIGH_WIND;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_BATTERY;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::FAILURE_IMBALANCED_PROP;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::HIL_STATE_OFF;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::HIL_STATE_ON;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_MANUAL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_ALTCTL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_POSCTL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_MISSION;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_LOITER;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_RTL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_LANDENGFAIL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_UNUSED;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_ACRO;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_UNUSED1;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_DESCEND;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_TERMINATION;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_OFFBOARD;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_STAB;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_UNUSED2;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_LAND;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_FOLLOW_TARGET;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_PRECLAND;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_ORBIT;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_AUTO_VTOL_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::NAVIGATION_STATE_MAX;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::VEHICLE_TYPE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::VEHICLE_TYPE_ROTARY_WING;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::VEHICLE_TYPE_FIXED_WING;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::VEHICLE_TYPE_ROVER;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::VEHICLE_TYPE_AIRSHIP;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_TRANSITION_TO_STANDBY;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_RC_STICK;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_RC_SWITCH;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_COMMAND_INTERNAL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_COMMAND_EXTERNAL;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_MISSION_START;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_SAFETY_BUTTON;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_AUTO_DISARM_LAND;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_KILL_SWITCH;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_LOCKDOWN;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_FAILURE_DETECTOR;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_SHUTDOWN;
template<typename ContainerAllocator>
constexpr uint8_t VehicleStatus_<ContainerAllocator>::ARM_DISARM_REASON_UNIT_TEST;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS__STRUCT_HPP_
