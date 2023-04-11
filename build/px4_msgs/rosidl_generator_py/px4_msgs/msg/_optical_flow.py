# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/OpticalFlow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpticalFlow(type):
    """Metaclass of message 'OpticalFlow'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODE_UNKNOWN': 0,
        'MODE_BRIGHT': 1,
        'MODE_LOWLIGHT': 2,
        'MODE_SUPER_LOWLIGHT': 3,
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
                'px4_msgs.msg.OpticalFlow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__optical_flow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__optical_flow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__optical_flow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__optical_flow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__optical_flow

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODE_UNKNOWN': cls.__constants['MODE_UNKNOWN'],
            'MODE_BRIGHT': cls.__constants['MODE_BRIGHT'],
            'MODE_LOWLIGHT': cls.__constants['MODE_LOWLIGHT'],
            'MODE_SUPER_LOWLIGHT': cls.__constants['MODE_SUPER_LOWLIGHT'],
        }

    @property
    def MODE_UNKNOWN(self):
        """Message constant 'MODE_UNKNOWN'."""
        return Metaclass_OpticalFlow.__constants['MODE_UNKNOWN']

    @property
    def MODE_BRIGHT(self):
        """Message constant 'MODE_BRIGHT'."""
        return Metaclass_OpticalFlow.__constants['MODE_BRIGHT']

    @property
    def MODE_LOWLIGHT(self):
        """Message constant 'MODE_LOWLIGHT'."""
        return Metaclass_OpticalFlow.__constants['MODE_LOWLIGHT']

    @property
    def MODE_SUPER_LOWLIGHT(self):
        """Message constant 'MODE_SUPER_LOWLIGHT'."""
        return Metaclass_OpticalFlow.__constants['MODE_SUPER_LOWLIGHT']


class OpticalFlow(metaclass=Metaclass_OpticalFlow):
    """
    Message class 'OpticalFlow'.

    Constants:
      MODE_UNKNOWN
      MODE_BRIGHT
      MODE_LOWLIGHT
      MODE_SUPER_LOWLIGHT
    """

    __slots__ = [
        '_timestamp',
        '_sensor_id',
        '_pixel_flow_x_integral',
        '_pixel_flow_y_integral',
        '_gyro_x_rate_integral',
        '_gyro_y_rate_integral',
        '_gyro_z_rate_integral',
        '_ground_distance_m',
        '_integration_timespan',
        '_time_since_last_sonar_update',
        '_frame_count_since_last_readout',
        '_gyro_temperature',
        '_quality',
        '_max_flow_rate',
        '_min_ground_distance',
        '_max_ground_distance',
        '_mode',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'sensor_id': 'uint8',
        'pixel_flow_x_integral': 'float',
        'pixel_flow_y_integral': 'float',
        'gyro_x_rate_integral': 'float',
        'gyro_y_rate_integral': 'float',
        'gyro_z_rate_integral': 'float',
        'ground_distance_m': 'float',
        'integration_timespan': 'uint32',
        'time_since_last_sonar_update': 'uint32',
        'frame_count_since_last_readout': 'uint16',
        'gyro_temperature': 'int16',
        'quality': 'uint8',
        'max_flow_rate': 'float',
        'min_ground_distance': 'float',
        'max_ground_distance': 'float',
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.sensor_id = kwargs.get('sensor_id', int())
        self.pixel_flow_x_integral = kwargs.get('pixel_flow_x_integral', float())
        self.pixel_flow_y_integral = kwargs.get('pixel_flow_y_integral', float())
        self.gyro_x_rate_integral = kwargs.get('gyro_x_rate_integral', float())
        self.gyro_y_rate_integral = kwargs.get('gyro_y_rate_integral', float())
        self.gyro_z_rate_integral = kwargs.get('gyro_z_rate_integral', float())
        self.ground_distance_m = kwargs.get('ground_distance_m', float())
        self.integration_timespan = kwargs.get('integration_timespan', int())
        self.time_since_last_sonar_update = kwargs.get('time_since_last_sonar_update', int())
        self.frame_count_since_last_readout = kwargs.get('frame_count_since_last_readout', int())
        self.gyro_temperature = kwargs.get('gyro_temperature', int())
        self.quality = kwargs.get('quality', int())
        self.max_flow_rate = kwargs.get('max_flow_rate', float())
        self.min_ground_distance = kwargs.get('min_ground_distance', float())
        self.max_ground_distance = kwargs.get('max_ground_distance', float())
        self.mode = kwargs.get('mode', int())

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
        if self.sensor_id != other.sensor_id:
            return False
        if self.pixel_flow_x_integral != other.pixel_flow_x_integral:
            return False
        if self.pixel_flow_y_integral != other.pixel_flow_y_integral:
            return False
        if self.gyro_x_rate_integral != other.gyro_x_rate_integral:
            return False
        if self.gyro_y_rate_integral != other.gyro_y_rate_integral:
            return False
        if self.gyro_z_rate_integral != other.gyro_z_rate_integral:
            return False
        if self.ground_distance_m != other.ground_distance_m:
            return False
        if self.integration_timespan != other.integration_timespan:
            return False
        if self.time_since_last_sonar_update != other.time_since_last_sonar_update:
            return False
        if self.frame_count_since_last_readout != other.frame_count_since_last_readout:
            return False
        if self.gyro_temperature != other.gyro_temperature:
            return False
        if self.quality != other.quality:
            return False
        if self.max_flow_rate != other.max_flow_rate:
            return False
        if self.min_ground_distance != other.min_ground_distance:
            return False
        if self.max_ground_distance != other.max_ground_distance:
            return False
        if self.mode != other.mode:
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
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_id' field must be an unsigned integer in [0, 255]"
        self._sensor_id = value

    @builtins.property
    def pixel_flow_x_integral(self):
        """Message field 'pixel_flow_x_integral'."""
        return self._pixel_flow_x_integral

    @pixel_flow_x_integral.setter
    def pixel_flow_x_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pixel_flow_x_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pixel_flow_x_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pixel_flow_x_integral = value

    @builtins.property
    def pixel_flow_y_integral(self):
        """Message field 'pixel_flow_y_integral'."""
        return self._pixel_flow_y_integral

    @pixel_flow_y_integral.setter
    def pixel_flow_y_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pixel_flow_y_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pixel_flow_y_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pixel_flow_y_integral = value

    @builtins.property
    def gyro_x_rate_integral(self):
        """Message field 'gyro_x_rate_integral'."""
        return self._gyro_x_rate_integral

    @gyro_x_rate_integral.setter
    def gyro_x_rate_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x_rate_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_x_rate_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_x_rate_integral = value

    @builtins.property
    def gyro_y_rate_integral(self):
        """Message field 'gyro_y_rate_integral'."""
        return self._gyro_y_rate_integral

    @gyro_y_rate_integral.setter
    def gyro_y_rate_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y_rate_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_y_rate_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_y_rate_integral = value

    @builtins.property
    def gyro_z_rate_integral(self):
        """Message field 'gyro_z_rate_integral'."""
        return self._gyro_z_rate_integral

    @gyro_z_rate_integral.setter
    def gyro_z_rate_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z_rate_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_z_rate_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_z_rate_integral = value

    @builtins.property
    def ground_distance_m(self):
        """Message field 'ground_distance_m'."""
        return self._ground_distance_m

    @ground_distance_m.setter
    def ground_distance_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ground_distance_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ground_distance_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ground_distance_m = value

    @builtins.property
    def integration_timespan(self):
        """Message field 'integration_timespan'."""
        return self._integration_timespan

    @integration_timespan.setter
    def integration_timespan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integration_timespan' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'integration_timespan' field must be an unsigned integer in [0, 4294967295]"
        self._integration_timespan = value

    @builtins.property
    def time_since_last_sonar_update(self):
        """Message field 'time_since_last_sonar_update'."""
        return self._time_since_last_sonar_update

    @time_since_last_sonar_update.setter
    def time_since_last_sonar_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_last_sonar_update' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_since_last_sonar_update' field must be an unsigned integer in [0, 4294967295]"
        self._time_since_last_sonar_update = value

    @builtins.property
    def frame_count_since_last_readout(self):
        """Message field 'frame_count_since_last_readout'."""
        return self._frame_count_since_last_readout

    @frame_count_since_last_readout.setter
    def frame_count_since_last_readout(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_count_since_last_readout' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'frame_count_since_last_readout' field must be an unsigned integer in [0, 65535]"
        self._frame_count_since_last_readout = value

    @builtins.property
    def gyro_temperature(self):
        """Message field 'gyro_temperature'."""
        return self._gyro_temperature

    @gyro_temperature.setter
    def gyro_temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_temperature' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'gyro_temperature' field must be an integer in [-32768, 32767]"
        self._gyro_temperature = value

    @builtins.property
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality' field must be an unsigned integer in [0, 255]"
        self._quality = value

    @builtins.property
    def max_flow_rate(self):
        """Message field 'max_flow_rate'."""
        return self._max_flow_rate

    @max_flow_rate.setter
    def max_flow_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_flow_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_flow_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_flow_rate = value

    @builtins.property
    def min_ground_distance(self):
        """Message field 'min_ground_distance'."""
        return self._min_ground_distance

    @min_ground_distance.setter
    def min_ground_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_ground_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_ground_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_ground_distance = value

    @builtins.property
    def max_ground_distance(self):
        """Message field 'max_ground_distance'."""
        return self._max_ground_distance

    @max_ground_distance.setter
    def max_ground_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_ground_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_ground_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_ground_distance = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value
