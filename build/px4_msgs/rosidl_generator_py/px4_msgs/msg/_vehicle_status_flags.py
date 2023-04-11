# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatusFlags(type):
    """Metaclass of message 'VehicleStatusFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VehicleStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatusFlags(metaclass=Metaclass_VehicleStatusFlags):
    """Message class 'VehicleStatusFlags'."""

    __slots__ = [
        '_timestamp',
        '_calibration_enabled',
        '_system_sensors_initialized',
        '_system_hotplug_timeout',
        '_auto_mission_available',
        '_angular_velocity_valid',
        '_attitude_valid',
        '_local_altitude_valid',
        '_local_position_valid',
        '_local_velocity_valid',
        '_global_position_valid',
        '_gps_position_valid',
        '_home_position_valid',
        '_power_input_valid',
        '_battery_healthy',
        '_escs_error',
        '_escs_failure',
        '_position_reliant_on_gps',
        '_position_reliant_on_optical_flow',
        '_position_reliant_on_vision_position',
        '_dead_reckoning',
        '_flight_terminated',
        '_circuit_breaker_engaged_power_check',
        '_circuit_breaker_engaged_airspd_check',
        '_circuit_breaker_engaged_enginefailure_check',
        '_circuit_breaker_flight_termination_disabled',
        '_circuit_breaker_engaged_usb_check',
        '_circuit_breaker_engaged_posfailure_check',
        '_circuit_breaker_vtol_fw_arming_check',
        '_offboard_control_signal_lost',
        '_rc_signal_found_once',
        '_rc_calibration_in_progress',
        '_rc_calibration_valid',
        '_vtol_transition_failure',
        '_usb_connected',
        '_sd_card_detected_once',
        '_avoidance_system_required',
        '_avoidance_system_valid',
        '_parachute_system_present',
        '_parachute_system_healthy',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'calibration_enabled': 'boolean',
        'system_sensors_initialized': 'boolean',
        'system_hotplug_timeout': 'boolean',
        'auto_mission_available': 'boolean',
        'angular_velocity_valid': 'boolean',
        'attitude_valid': 'boolean',
        'local_altitude_valid': 'boolean',
        'local_position_valid': 'boolean',
        'local_velocity_valid': 'boolean',
        'global_position_valid': 'boolean',
        'gps_position_valid': 'boolean',
        'home_position_valid': 'boolean',
        'power_input_valid': 'boolean',
        'battery_healthy': 'boolean',
        'escs_error': 'boolean',
        'escs_failure': 'boolean',
        'position_reliant_on_gps': 'boolean',
        'position_reliant_on_optical_flow': 'boolean',
        'position_reliant_on_vision_position': 'boolean',
        'dead_reckoning': 'boolean',
        'flight_terminated': 'boolean',
        'circuit_breaker_engaged_power_check': 'boolean',
        'circuit_breaker_engaged_airspd_check': 'boolean',
        'circuit_breaker_engaged_enginefailure_check': 'boolean',
        'circuit_breaker_flight_termination_disabled': 'boolean',
        'circuit_breaker_engaged_usb_check': 'boolean',
        'circuit_breaker_engaged_posfailure_check': 'boolean',
        'circuit_breaker_vtol_fw_arming_check': 'boolean',
        'offboard_control_signal_lost': 'boolean',
        'rc_signal_found_once': 'boolean',
        'rc_calibration_in_progress': 'boolean',
        'rc_calibration_valid': 'boolean',
        'vtol_transition_failure': 'boolean',
        'usb_connected': 'boolean',
        'sd_card_detected_once': 'boolean',
        'avoidance_system_required': 'boolean',
        'avoidance_system_valid': 'boolean',
        'parachute_system_present': 'boolean',
        'parachute_system_healthy': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.calibration_enabled = kwargs.get('calibration_enabled', bool())
        self.system_sensors_initialized = kwargs.get('system_sensors_initialized', bool())
        self.system_hotplug_timeout = kwargs.get('system_hotplug_timeout', bool())
        self.auto_mission_available = kwargs.get('auto_mission_available', bool())
        self.angular_velocity_valid = kwargs.get('angular_velocity_valid', bool())
        self.attitude_valid = kwargs.get('attitude_valid', bool())
        self.local_altitude_valid = kwargs.get('local_altitude_valid', bool())
        self.local_position_valid = kwargs.get('local_position_valid', bool())
        self.local_velocity_valid = kwargs.get('local_velocity_valid', bool())
        self.global_position_valid = kwargs.get('global_position_valid', bool())
        self.gps_position_valid = kwargs.get('gps_position_valid', bool())
        self.home_position_valid = kwargs.get('home_position_valid', bool())
        self.power_input_valid = kwargs.get('power_input_valid', bool())
        self.battery_healthy = kwargs.get('battery_healthy', bool())
        self.escs_error = kwargs.get('escs_error', bool())
        self.escs_failure = kwargs.get('escs_failure', bool())
        self.position_reliant_on_gps = kwargs.get('position_reliant_on_gps', bool())
        self.position_reliant_on_optical_flow = kwargs.get('position_reliant_on_optical_flow', bool())
        self.position_reliant_on_vision_position = kwargs.get('position_reliant_on_vision_position', bool())
        self.dead_reckoning = kwargs.get('dead_reckoning', bool())
        self.flight_terminated = kwargs.get('flight_terminated', bool())
        self.circuit_breaker_engaged_power_check = kwargs.get('circuit_breaker_engaged_power_check', bool())
        self.circuit_breaker_engaged_airspd_check = kwargs.get('circuit_breaker_engaged_airspd_check', bool())
        self.circuit_breaker_engaged_enginefailure_check = kwargs.get('circuit_breaker_engaged_enginefailure_check', bool())
        self.circuit_breaker_flight_termination_disabled = kwargs.get('circuit_breaker_flight_termination_disabled', bool())
        self.circuit_breaker_engaged_usb_check = kwargs.get('circuit_breaker_engaged_usb_check', bool())
        self.circuit_breaker_engaged_posfailure_check = kwargs.get('circuit_breaker_engaged_posfailure_check', bool())
        self.circuit_breaker_vtol_fw_arming_check = kwargs.get('circuit_breaker_vtol_fw_arming_check', bool())
        self.offboard_control_signal_lost = kwargs.get('offboard_control_signal_lost', bool())
        self.rc_signal_found_once = kwargs.get('rc_signal_found_once', bool())
        self.rc_calibration_in_progress = kwargs.get('rc_calibration_in_progress', bool())
        self.rc_calibration_valid = kwargs.get('rc_calibration_valid', bool())
        self.vtol_transition_failure = kwargs.get('vtol_transition_failure', bool())
        self.usb_connected = kwargs.get('usb_connected', bool())
        self.sd_card_detected_once = kwargs.get('sd_card_detected_once', bool())
        self.avoidance_system_required = kwargs.get('avoidance_system_required', bool())
        self.avoidance_system_valid = kwargs.get('avoidance_system_valid', bool())
        self.parachute_system_present = kwargs.get('parachute_system_present', bool())
        self.parachute_system_healthy = kwargs.get('parachute_system_healthy', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.calibration_enabled != other.calibration_enabled:
            return False
        if self.system_sensors_initialized != other.system_sensors_initialized:
            return False
        if self.system_hotplug_timeout != other.system_hotplug_timeout:
            return False
        if self.auto_mission_available != other.auto_mission_available:
            return False
        if self.angular_velocity_valid != other.angular_velocity_valid:
            return False
        if self.attitude_valid != other.attitude_valid:
            return False
        if self.local_altitude_valid != other.local_altitude_valid:
            return False
        if self.local_position_valid != other.local_position_valid:
            return False
        if self.local_velocity_valid != other.local_velocity_valid:
            return False
        if self.global_position_valid != other.global_position_valid:
            return False
        if self.gps_position_valid != other.gps_position_valid:
            return False
        if self.home_position_valid != other.home_position_valid:
            return False
        if self.power_input_valid != other.power_input_valid:
            return False
        if self.battery_healthy != other.battery_healthy:
            return False
        if self.escs_error != other.escs_error:
            return False
        if self.escs_failure != other.escs_failure:
            return False
        if self.position_reliant_on_gps != other.position_reliant_on_gps:
            return False
        if self.position_reliant_on_optical_flow != other.position_reliant_on_optical_flow:
            return False
        if self.position_reliant_on_vision_position != other.position_reliant_on_vision_position:
            return False
        if self.dead_reckoning != other.dead_reckoning:
            return False
        if self.flight_terminated != other.flight_terminated:
            return False
        if self.circuit_breaker_engaged_power_check != other.circuit_breaker_engaged_power_check:
            return False
        if self.circuit_breaker_engaged_airspd_check != other.circuit_breaker_engaged_airspd_check:
            return False
        if self.circuit_breaker_engaged_enginefailure_check != other.circuit_breaker_engaged_enginefailure_check:
            return False
        if self.circuit_breaker_flight_termination_disabled != other.circuit_breaker_flight_termination_disabled:
            return False
        if self.circuit_breaker_engaged_usb_check != other.circuit_breaker_engaged_usb_check:
            return False
        if self.circuit_breaker_engaged_posfailure_check != other.circuit_breaker_engaged_posfailure_check:
            return False
        if self.circuit_breaker_vtol_fw_arming_check != other.circuit_breaker_vtol_fw_arming_check:
            return False
        if self.offboard_control_signal_lost != other.offboard_control_signal_lost:
            return False
        if self.rc_signal_found_once != other.rc_signal_found_once:
            return False
        if self.rc_calibration_in_progress != other.rc_calibration_in_progress:
            return False
        if self.rc_calibration_valid != other.rc_calibration_valid:
            return False
        if self.vtol_transition_failure != other.vtol_transition_failure:
            return False
        if self.usb_connected != other.usb_connected:
            return False
        if self.sd_card_detected_once != other.sd_card_detected_once:
            return False
        if self.avoidance_system_required != other.avoidance_system_required:
            return False
        if self.avoidance_system_valid != other.avoidance_system_valid:
            return False
        if self.parachute_system_present != other.parachute_system_present:
            return False
        if self.parachute_system_healthy != other.parachute_system_healthy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def calibration_enabled(self):
        """Message field 'calibration_enabled'."""
        return self._calibration_enabled

    @calibration_enabled.setter
    def calibration_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_enabled' field must be of type 'bool'"
        self._calibration_enabled = value

    @builtins.property
    def system_sensors_initialized(self):
        """Message field 'system_sensors_initialized'."""
        return self._system_sensors_initialized

    @system_sensors_initialized.setter
    def system_sensors_initialized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'system_sensors_initialized' field must be of type 'bool'"
        self._system_sensors_initialized = value

    @builtins.property
    def system_hotplug_timeout(self):
        """Message field 'system_hotplug_timeout'."""
        return self._system_hotplug_timeout

    @system_hotplug_timeout.setter
    def system_hotplug_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'system_hotplug_timeout' field must be of type 'bool'"
        self._system_hotplug_timeout = value

    @builtins.property
    def auto_mission_available(self):
        """Message field 'auto_mission_available'."""
        return self._auto_mission_available

    @auto_mission_available.setter
    def auto_mission_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mission_available' field must be of type 'bool'"
        self._auto_mission_available = value

    @builtins.property
    def angular_velocity_valid(self):
        """Message field 'angular_velocity_valid'."""
        return self._angular_velocity_valid

    @angular_velocity_valid.setter
    def angular_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'angular_velocity_valid' field must be of type 'bool'"
        self._angular_velocity_valid = value

    @builtins.property
    def attitude_valid(self):
        """Message field 'attitude_valid'."""
        return self._attitude_valid

    @attitude_valid.setter
    def attitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_valid' field must be of type 'bool'"
        self._attitude_valid = value

    @builtins.property
    def local_altitude_valid(self):
        """Message field 'local_altitude_valid'."""
        return self._local_altitude_valid

    @local_altitude_valid.setter
    def local_altitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_altitude_valid' field must be of type 'bool'"
        self._local_altitude_valid = value

    @builtins.property
    def local_position_valid(self):
        """Message field 'local_position_valid'."""
        return self._local_position_valid

    @local_position_valid.setter
    def local_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_valid' field must be of type 'bool'"
        self._local_position_valid = value

    @builtins.property
    def local_velocity_valid(self):
        """Message field 'local_velocity_valid'."""
        return self._local_velocity_valid

    @local_velocity_valid.setter
    def local_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_velocity_valid' field must be of type 'bool'"
        self._local_velocity_valid = value

    @builtins.property
    def global_position_valid(self):
        """Message field 'global_position_valid'."""
        return self._global_position_valid

    @global_position_valid.setter
    def global_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_position_valid' field must be of type 'bool'"
        self._global_position_valid = value

    @builtins.property
    def gps_position_valid(self):
        """Message field 'gps_position_valid'."""
        return self._gps_position_valid

    @gps_position_valid.setter
    def gps_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_position_valid' field must be of type 'bool'"
        self._gps_position_valid = value

    @builtins.property
    def home_position_valid(self):
        """Message field 'home_position_valid'."""
        return self._home_position_valid

    @home_position_valid.setter
    def home_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'home_position_valid' field must be of type 'bool'"
        self._home_position_valid = value

    @builtins.property
    def power_input_valid(self):
        """Message field 'power_input_valid'."""
        return self._power_input_valid

    @power_input_valid.setter
    def power_input_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_input_valid' field must be of type 'bool'"
        self._power_input_valid = value

    @builtins.property
    def battery_healthy(self):
        """Message field 'battery_healthy'."""
        return self._battery_healthy

    @battery_healthy.setter
    def battery_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_healthy' field must be of type 'bool'"
        self._battery_healthy = value

    @builtins.property
    def escs_error(self):
        """Message field 'escs_error'."""
        return self._escs_error

    @escs_error.setter
    def escs_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'escs_error' field must be of type 'bool'"
        self._escs_error = value

    @builtins.property
    def escs_failure(self):
        """Message field 'escs_failure'."""
        return self._escs_failure

    @escs_failure.setter
    def escs_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'escs_failure' field must be of type 'bool'"
        self._escs_failure = value

    @builtins.property
    def position_reliant_on_gps(self):
        """Message field 'position_reliant_on_gps'."""
        return self._position_reliant_on_gps

    @position_reliant_on_gps.setter
    def position_reliant_on_gps(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_reliant_on_gps' field must be of type 'bool'"
        self._position_reliant_on_gps = value

    @builtins.property
    def position_reliant_on_optical_flow(self):
        """Message field 'position_reliant_on_optical_flow'."""
        return self._position_reliant_on_optical_flow

    @position_reliant_on_optical_flow.setter
    def position_reliant_on_optical_flow(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_reliant_on_optical_flow' field must be of type 'bool'"
        self._position_reliant_on_optical_flow = value

    @builtins.property
    def position_reliant_on_vision_position(self):
        """Message field 'position_reliant_on_vision_position'."""
        return self._position_reliant_on_vision_position

    @position_reliant_on_vision_position.setter
    def position_reliant_on_vision_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_reliant_on_vision_position' field must be of type 'bool'"
        self._position_reliant_on_vision_position = value

    @builtins.property
    def dead_reckoning(self):
        """Message field 'dead_reckoning'."""
        return self._dead_reckoning

    @dead_reckoning.setter
    def dead_reckoning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dead_reckoning' field must be of type 'bool'"
        self._dead_reckoning = value

    @builtins.property
    def flight_terminated(self):
        """Message field 'flight_terminated'."""
        return self._flight_terminated

    @flight_terminated.setter
    def flight_terminated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flight_terminated' field must be of type 'bool'"
        self._flight_terminated = value

    @builtins.property
    def circuit_breaker_engaged_power_check(self):
        """Message field 'circuit_breaker_engaged_power_check'."""
        return self._circuit_breaker_engaged_power_check

    @circuit_breaker_engaged_power_check.setter
    def circuit_breaker_engaged_power_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_power_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_power_check = value

    @builtins.property
    def circuit_breaker_engaged_airspd_check(self):
        """Message field 'circuit_breaker_engaged_airspd_check'."""
        return self._circuit_breaker_engaged_airspd_check

    @circuit_breaker_engaged_airspd_check.setter
    def circuit_breaker_engaged_airspd_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_airspd_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_airspd_check = value

    @builtins.property
    def circuit_breaker_engaged_enginefailure_check(self):
        """Message field 'circuit_breaker_engaged_enginefailure_check'."""
        return self._circuit_breaker_engaged_enginefailure_check

    @circuit_breaker_engaged_enginefailure_check.setter
    def circuit_breaker_engaged_enginefailure_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_enginefailure_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_enginefailure_check = value

    @builtins.property
    def circuit_breaker_flight_termination_disabled(self):
        """Message field 'circuit_breaker_flight_termination_disabled'."""
        return self._circuit_breaker_flight_termination_disabled

    @circuit_breaker_flight_termination_disabled.setter
    def circuit_breaker_flight_termination_disabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_flight_termination_disabled' field must be of type 'bool'"
        self._circuit_breaker_flight_termination_disabled = value

    @builtins.property
    def circuit_breaker_engaged_usb_check(self):
        """Message field 'circuit_breaker_engaged_usb_check'."""
        return self._circuit_breaker_engaged_usb_check

    @circuit_breaker_engaged_usb_check.setter
    def circuit_breaker_engaged_usb_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_usb_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_usb_check = value

    @builtins.property
    def circuit_breaker_engaged_posfailure_check(self):
        """Message field 'circuit_breaker_engaged_posfailure_check'."""
        return self._circuit_breaker_engaged_posfailure_check

    @circuit_breaker_engaged_posfailure_check.setter
    def circuit_breaker_engaged_posfailure_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_posfailure_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_posfailure_check = value

    @builtins.property
    def circuit_breaker_vtol_fw_arming_check(self):
        """Message field 'circuit_breaker_vtol_fw_arming_check'."""
        return self._circuit_breaker_vtol_fw_arming_check

    @circuit_breaker_vtol_fw_arming_check.setter
    def circuit_breaker_vtol_fw_arming_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_vtol_fw_arming_check' field must be of type 'bool'"
        self._circuit_breaker_vtol_fw_arming_check = value

    @builtins.property
    def offboard_control_signal_lost(self):
        """Message field 'offboard_control_signal_lost'."""
        return self._offboard_control_signal_lost

    @offboard_control_signal_lost.setter
    def offboard_control_signal_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'offboard_control_signal_lost' field must be of type 'bool'"
        self._offboard_control_signal_lost = value

    @builtins.property
    def rc_signal_found_once(self):
        """Message field 'rc_signal_found_once'."""
        return self._rc_signal_found_once

    @rc_signal_found_once.setter
    def rc_signal_found_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_signal_found_once' field must be of type 'bool'"
        self._rc_signal_found_once = value

    @builtins.property
    def rc_calibration_in_progress(self):
        """Message field 'rc_calibration_in_progress'."""
        return self._rc_calibration_in_progress

    @rc_calibration_in_progress.setter
    def rc_calibration_in_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_calibration_in_progress' field must be of type 'bool'"
        self._rc_calibration_in_progress = value

    @builtins.property
    def rc_calibration_valid(self):
        """Message field 'rc_calibration_valid'."""
        return self._rc_calibration_valid

    @rc_calibration_valid.setter
    def rc_calibration_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_calibration_valid' field must be of type 'bool'"
        self._rc_calibration_valid = value

    @builtins.property
    def vtol_transition_failure(self):
        """Message field 'vtol_transition_failure'."""
        return self._vtol_transition_failure

    @vtol_transition_failure.setter
    def vtol_transition_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_transition_failure' field must be of type 'bool'"
        self._vtol_transition_failure = value

    @builtins.property
    def usb_connected(self):
        """Message field 'usb_connected'."""
        return self._usb_connected

    @usb_connected.setter
    def usb_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usb_connected' field must be of type 'bool'"
        self._usb_connected = value

    @builtins.property
    def sd_card_detected_once(self):
        """Message field 'sd_card_detected_once'."""
        return self._sd_card_detected_once

    @sd_card_detected_once.setter
    def sd_card_detected_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_card_detected_once' field must be of type 'bool'"
        self._sd_card_detected_once = value

    @builtins.property
    def avoidance_system_required(self):
        """Message field 'avoidance_system_required'."""
        return self._avoidance_system_required

    @avoidance_system_required.setter
    def avoidance_system_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_required' field must be of type 'bool'"
        self._avoidance_system_required = value

    @builtins.property
    def avoidance_system_valid(self):
        """Message field 'avoidance_system_valid'."""
        return self._avoidance_system_valid

    @avoidance_system_valid.setter
    def avoidance_system_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_valid' field must be of type 'bool'"
        self._avoidance_system_valid = value

    @builtins.property
    def parachute_system_present(self):
        """Message field 'parachute_system_present'."""
        return self._parachute_system_present

    @parachute_system_present.setter
    def parachute_system_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parachute_system_present' field must be of type 'bool'"
        self._parachute_system_present = value

    @builtins.property
    def parachute_system_healthy(self):
        """Message field 'parachute_system_healthy'."""
        return self._parachute_system_healthy

    @parachute_system_healthy.setter
    def parachute_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parachute_system_healthy' field must be of type 'bool'"
        self._parachute_system_healthy = value
