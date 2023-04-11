# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Timesync.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Timesync(type):
    """Metaclass of message 'Timesync'."""

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
                'px4_msgs.msg.Timesync')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__timesync
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__timesync
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__timesync
            cls._TYPE_SUPPORT = module.type_support_msg__msg__timesync
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__timesync

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Timesync(metaclass=Metaclass_Timesync):
    """Message class 'Timesync'."""

    __slots__ = [
        '_timestamp',
        '_seq',
        '_tc1',
        '_ts1',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'seq': 'uint8',
        'tc1': 'int64',
        'ts1': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.seq = kwargs.get('seq', int())
        self.tc1 = kwargs.get('tc1', int())
        self.ts1 = kwargs.get('ts1', int())

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
        if self.seq != other.seq:
            return False
        if self.tc1 != other.tc1:
            return False
        if self.ts1 != other.ts1:
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
    def seq(self):
        """Message field 'seq'."""
        return self._seq

    @seq.setter
    def seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seq' field must be an unsigned integer in [0, 255]"
        self._seq = value

    @builtins.property
    def tc1(self):
        """Message field 'tc1'."""
        return self._tc1

    @tc1.setter
    def tc1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tc1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tc1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tc1 = value

    @builtins.property
    def ts1(self):
        """Message field 'ts1'."""
        return self._ts1

    @ts1.setter
    def ts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ts1' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ts1' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ts1 = value
