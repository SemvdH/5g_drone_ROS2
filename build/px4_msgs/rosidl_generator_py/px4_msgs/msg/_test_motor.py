# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TestMotor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TestMotor(type):
    """Metaclass of message 'TestMotor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NUM_MOTOR_OUTPUTS': 8,
        'ACTION_STOP': 0,
        'ACTION_RUN': 1,
        'ORB_QUEUE_LENGTH': 4,
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
                'px4_msgs.msg.TestMotor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__test_motor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__test_motor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__test_motor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__test_motor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__test_motor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUM_MOTOR_OUTPUTS': cls.__constants['NUM_MOTOR_OUTPUTS'],
            'ACTION_STOP': cls.__constants['ACTION_STOP'],
            'ACTION_RUN': cls.__constants['ACTION_RUN'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def NUM_MOTOR_OUTPUTS(self):
        """Message constant 'NUM_MOTOR_OUTPUTS'."""
        return Metaclass_TestMotor.__constants['NUM_MOTOR_OUTPUTS']

    @property
    def ACTION_STOP(self):
        """Message constant 'ACTION_STOP'."""
        return Metaclass_TestMotor.__constants['ACTION_STOP']

    @property
    def ACTION_RUN(self):
        """Message constant 'ACTION_RUN'."""
        return Metaclass_TestMotor.__constants['ACTION_RUN']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_TestMotor.__constants['ORB_QUEUE_LENGTH']


class TestMotor(metaclass=Metaclass_TestMotor):
    """
    Message class 'TestMotor'.

    Constants:
      NUM_MOTOR_OUTPUTS
      ACTION_STOP
      ACTION_RUN
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_action',
        '_motor_number',
        '_value',
        '_timeout_ms',
        '_driver_instance',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'action': 'uint8',
        'motor_number': 'uint32',
        'value': 'float',
        'timeout_ms': 'uint32',
        'driver_instance': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.action = kwargs.get('action', int())
        self.motor_number = kwargs.get('motor_number', int())
        self.value = kwargs.get('value', float())
        self.timeout_ms = kwargs.get('timeout_ms', int())
        self.driver_instance = kwargs.get('driver_instance', int())

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
        if self.action != other.action:
            return False
        if self.motor_number != other.motor_number:
            return False
        if self.value != other.value:
            return False
        if self.timeout_ms != other.timeout_ms:
            return False
        if self.driver_instance != other.driver_instance:
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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @property
    def motor_number(self):
        """Message field 'motor_number'."""
        return self._motor_number

    @motor_number.setter
    def motor_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'motor_number' field must be an unsigned integer in [0, 4294967295]"
        self._motor_number = value

    @property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
        self._value = value

    @property
    def timeout_ms(self):
        """Message field 'timeout_ms'."""
        return self._timeout_ms

    @timeout_ms.setter
    def timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._timeout_ms = value

    @property
    def driver_instance(self):
        """Message field 'driver_instance'."""
        return self._driver_instance

    @driver_instance.setter
    def driver_instance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'driver_instance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'driver_instance' field must be an unsigned integer in [0, 255]"
        self._driver_instance = value
