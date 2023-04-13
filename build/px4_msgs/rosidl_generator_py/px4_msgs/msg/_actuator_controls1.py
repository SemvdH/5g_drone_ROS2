# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ActuatorControls1.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'control'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorControls1(type):
    """Metaclass of message 'ActuatorControls1'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NUM_ACTUATOR_CONTROLS': 8,
        'NUM_ACTUATOR_CONTROL_GROUPS': 4,
        'INDEX_ROLL': 0,
        'INDEX_PITCH': 1,
        'INDEX_YAW': 2,
        'INDEX_THROTTLE': 3,
        'INDEX_FLAPS': 4,
        'INDEX_SPOILERS': 5,
        'INDEX_AIRBRAKES': 6,
        'INDEX_LANDING_GEAR': 7,
        'INDEX_GIMBAL_SHUTTER': 3,
        'INDEX_CAMERA_ZOOM': 4,
        'GROUP_INDEX_ATTITUDE': 0,
        'GROUP_INDEX_ATTITUDE_ALTERNATE': 1,
        'GROUP_INDEX_GIMBAL': 2,
        'GROUP_INDEX_MANUAL_PASSTHROUGH': 3,
        'GROUP_INDEX_PAYLOAD': 6,
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
                'px4_msgs.msg.ActuatorControls1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_controls1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_controls1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_controls1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_controls1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_controls1

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUM_ACTUATOR_CONTROLS': cls.__constants['NUM_ACTUATOR_CONTROLS'],
            'NUM_ACTUATOR_CONTROL_GROUPS': cls.__constants['NUM_ACTUATOR_CONTROL_GROUPS'],
            'INDEX_ROLL': cls.__constants['INDEX_ROLL'],
            'INDEX_PITCH': cls.__constants['INDEX_PITCH'],
            'INDEX_YAW': cls.__constants['INDEX_YAW'],
            'INDEX_THROTTLE': cls.__constants['INDEX_THROTTLE'],
            'INDEX_FLAPS': cls.__constants['INDEX_FLAPS'],
            'INDEX_SPOILERS': cls.__constants['INDEX_SPOILERS'],
            'INDEX_AIRBRAKES': cls.__constants['INDEX_AIRBRAKES'],
            'INDEX_LANDING_GEAR': cls.__constants['INDEX_LANDING_GEAR'],
            'INDEX_GIMBAL_SHUTTER': cls.__constants['INDEX_GIMBAL_SHUTTER'],
            'INDEX_CAMERA_ZOOM': cls.__constants['INDEX_CAMERA_ZOOM'],
            'GROUP_INDEX_ATTITUDE': cls.__constants['GROUP_INDEX_ATTITUDE'],
            'GROUP_INDEX_ATTITUDE_ALTERNATE': cls.__constants['GROUP_INDEX_ATTITUDE_ALTERNATE'],
            'GROUP_INDEX_GIMBAL': cls.__constants['GROUP_INDEX_GIMBAL'],
            'GROUP_INDEX_MANUAL_PASSTHROUGH': cls.__constants['GROUP_INDEX_MANUAL_PASSTHROUGH'],
            'GROUP_INDEX_PAYLOAD': cls.__constants['GROUP_INDEX_PAYLOAD'],
        }

    @property
    def NUM_ACTUATOR_CONTROLS(self):
        """Message constant 'NUM_ACTUATOR_CONTROLS'."""
        return Metaclass_ActuatorControls1.__constants['NUM_ACTUATOR_CONTROLS']

    @property
    def NUM_ACTUATOR_CONTROL_GROUPS(self):
        """Message constant 'NUM_ACTUATOR_CONTROL_GROUPS'."""
        return Metaclass_ActuatorControls1.__constants['NUM_ACTUATOR_CONTROL_GROUPS']

    @property
    def INDEX_ROLL(self):
        """Message constant 'INDEX_ROLL'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_ROLL']

    @property
    def INDEX_PITCH(self):
        """Message constant 'INDEX_PITCH'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_PITCH']

    @property
    def INDEX_YAW(self):
        """Message constant 'INDEX_YAW'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_YAW']

    @property
    def INDEX_THROTTLE(self):
        """Message constant 'INDEX_THROTTLE'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_THROTTLE']

    @property
    def INDEX_FLAPS(self):
        """Message constant 'INDEX_FLAPS'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_FLAPS']

    @property
    def INDEX_SPOILERS(self):
        """Message constant 'INDEX_SPOILERS'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_SPOILERS']

    @property
    def INDEX_AIRBRAKES(self):
        """Message constant 'INDEX_AIRBRAKES'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_AIRBRAKES']

    @property
    def INDEX_LANDING_GEAR(self):
        """Message constant 'INDEX_LANDING_GEAR'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_LANDING_GEAR']

    @property
    def INDEX_GIMBAL_SHUTTER(self):
        """Message constant 'INDEX_GIMBAL_SHUTTER'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_GIMBAL_SHUTTER']

    @property
    def INDEX_CAMERA_ZOOM(self):
        """Message constant 'INDEX_CAMERA_ZOOM'."""
        return Metaclass_ActuatorControls1.__constants['INDEX_CAMERA_ZOOM']

    @property
    def GROUP_INDEX_ATTITUDE(self):
        """Message constant 'GROUP_INDEX_ATTITUDE'."""
        return Metaclass_ActuatorControls1.__constants['GROUP_INDEX_ATTITUDE']

    @property
    def GROUP_INDEX_ATTITUDE_ALTERNATE(self):
        """Message constant 'GROUP_INDEX_ATTITUDE_ALTERNATE'."""
        return Metaclass_ActuatorControls1.__constants['GROUP_INDEX_ATTITUDE_ALTERNATE']

    @property
    def GROUP_INDEX_GIMBAL(self):
        """Message constant 'GROUP_INDEX_GIMBAL'."""
        return Metaclass_ActuatorControls1.__constants['GROUP_INDEX_GIMBAL']

    @property
    def GROUP_INDEX_MANUAL_PASSTHROUGH(self):
        """Message constant 'GROUP_INDEX_MANUAL_PASSTHROUGH'."""
        return Metaclass_ActuatorControls1.__constants['GROUP_INDEX_MANUAL_PASSTHROUGH']

    @property
    def GROUP_INDEX_PAYLOAD(self):
        """Message constant 'GROUP_INDEX_PAYLOAD'."""
        return Metaclass_ActuatorControls1.__constants['GROUP_INDEX_PAYLOAD']


class ActuatorControls1(metaclass=Metaclass_ActuatorControls1):
    """
    Message class 'ActuatorControls1'.

    Constants:
      NUM_ACTUATOR_CONTROLS
      NUM_ACTUATOR_CONTROL_GROUPS
      INDEX_ROLL
      INDEX_PITCH
      INDEX_YAW
      INDEX_THROTTLE
      INDEX_FLAPS
      INDEX_SPOILERS
      INDEX_AIRBRAKES
      INDEX_LANDING_GEAR
      INDEX_GIMBAL_SHUTTER
      INDEX_CAMERA_ZOOM
      GROUP_INDEX_ATTITUDE
      GROUP_INDEX_ATTITUDE_ALTERNATE
      GROUP_INDEX_GIMBAL
      GROUP_INDEX_MANUAL_PASSTHROUGH
      GROUP_INDEX_PAYLOAD
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_control',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'control': 'float[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        if 'control' not in kwargs:
            self.control = numpy.zeros(8, dtype=numpy.float32)
        else:
            self.control = numpy.array(kwargs.get('control'), dtype=numpy.float32)
            assert self.control.shape == (8, )

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if all(self.control != other.control):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
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

    @property
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @property
    def control(self):
        """Message field 'control'."""
        return self._control

    @control.setter
    def control(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'control' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 8, \
                "The 'control' numpy.ndarray() must have a size of 8"
            self._control = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 8 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'control' field must be a set or sequence with length 8 and each value of type 'float'"
        self._control = numpy.array(value, dtype=numpy.float32)
