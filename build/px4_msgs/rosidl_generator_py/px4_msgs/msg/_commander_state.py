# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/CommanderState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CommanderState(type):
    """Metaclass of message 'CommanderState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAIN_STATE_MANUAL': 0,
        'MAIN_STATE_ALTCTL': 1,
        'MAIN_STATE_POSCTL': 2,
        'MAIN_STATE_AUTO_MISSION': 3,
        'MAIN_STATE_AUTO_LOITER': 4,
        'MAIN_STATE_AUTO_RTL': 5,
        'MAIN_STATE_ACRO': 6,
        'MAIN_STATE_OFFBOARD': 7,
        'MAIN_STATE_STAB': 8,
        'MAIN_STATE_AUTO_TAKEOFF': 10,
        'MAIN_STATE_AUTO_LAND': 11,
        'MAIN_STATE_AUTO_FOLLOW_TARGET': 12,
        'MAIN_STATE_AUTO_PRECLAND': 13,
        'MAIN_STATE_ORBIT': 14,
        'MAIN_STATE_AUTO_VTOL_TAKEOFF': 15,
        'MAIN_STATE_MAX': 16,
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
                'px4_msgs.msg.CommanderState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__commander_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__commander_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__commander_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__commander_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__commander_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAIN_STATE_MANUAL': cls.__constants['MAIN_STATE_MANUAL'],
            'MAIN_STATE_ALTCTL': cls.__constants['MAIN_STATE_ALTCTL'],
            'MAIN_STATE_POSCTL': cls.__constants['MAIN_STATE_POSCTL'],
            'MAIN_STATE_AUTO_MISSION': cls.__constants['MAIN_STATE_AUTO_MISSION'],
            'MAIN_STATE_AUTO_LOITER': cls.__constants['MAIN_STATE_AUTO_LOITER'],
            'MAIN_STATE_AUTO_RTL': cls.__constants['MAIN_STATE_AUTO_RTL'],
            'MAIN_STATE_ACRO': cls.__constants['MAIN_STATE_ACRO'],
            'MAIN_STATE_OFFBOARD': cls.__constants['MAIN_STATE_OFFBOARD'],
            'MAIN_STATE_STAB': cls.__constants['MAIN_STATE_STAB'],
            'MAIN_STATE_AUTO_TAKEOFF': cls.__constants['MAIN_STATE_AUTO_TAKEOFF'],
            'MAIN_STATE_AUTO_LAND': cls.__constants['MAIN_STATE_AUTO_LAND'],
            'MAIN_STATE_AUTO_FOLLOW_TARGET': cls.__constants['MAIN_STATE_AUTO_FOLLOW_TARGET'],
            'MAIN_STATE_AUTO_PRECLAND': cls.__constants['MAIN_STATE_AUTO_PRECLAND'],
            'MAIN_STATE_ORBIT': cls.__constants['MAIN_STATE_ORBIT'],
            'MAIN_STATE_AUTO_VTOL_TAKEOFF': cls.__constants['MAIN_STATE_AUTO_VTOL_TAKEOFF'],
            'MAIN_STATE_MAX': cls.__constants['MAIN_STATE_MAX'],
        }

    @property
    def MAIN_STATE_MANUAL(self):
        """Message constant 'MAIN_STATE_MANUAL'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_MANUAL']

    @property
    def MAIN_STATE_ALTCTL(self):
        """Message constant 'MAIN_STATE_ALTCTL'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_ALTCTL']

    @property
    def MAIN_STATE_POSCTL(self):
        """Message constant 'MAIN_STATE_POSCTL'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_POSCTL']

    @property
    def MAIN_STATE_AUTO_MISSION(self):
        """Message constant 'MAIN_STATE_AUTO_MISSION'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_MISSION']

    @property
    def MAIN_STATE_AUTO_LOITER(self):
        """Message constant 'MAIN_STATE_AUTO_LOITER'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_LOITER']

    @property
    def MAIN_STATE_AUTO_RTL(self):
        """Message constant 'MAIN_STATE_AUTO_RTL'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_RTL']

    @property
    def MAIN_STATE_ACRO(self):
        """Message constant 'MAIN_STATE_ACRO'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_ACRO']

    @property
    def MAIN_STATE_OFFBOARD(self):
        """Message constant 'MAIN_STATE_OFFBOARD'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_OFFBOARD']

    @property
    def MAIN_STATE_STAB(self):
        """Message constant 'MAIN_STATE_STAB'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_STAB']

    @property
    def MAIN_STATE_AUTO_TAKEOFF(self):
        """Message constant 'MAIN_STATE_AUTO_TAKEOFF'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_TAKEOFF']

    @property
    def MAIN_STATE_AUTO_LAND(self):
        """Message constant 'MAIN_STATE_AUTO_LAND'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_LAND']

    @property
    def MAIN_STATE_AUTO_FOLLOW_TARGET(self):
        """Message constant 'MAIN_STATE_AUTO_FOLLOW_TARGET'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_FOLLOW_TARGET']

    @property
    def MAIN_STATE_AUTO_PRECLAND(self):
        """Message constant 'MAIN_STATE_AUTO_PRECLAND'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_PRECLAND']

    @property
    def MAIN_STATE_ORBIT(self):
        """Message constant 'MAIN_STATE_ORBIT'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_ORBIT']

    @property
    def MAIN_STATE_AUTO_VTOL_TAKEOFF(self):
        """Message constant 'MAIN_STATE_AUTO_VTOL_TAKEOFF'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_AUTO_VTOL_TAKEOFF']

    @property
    def MAIN_STATE_MAX(self):
        """Message constant 'MAIN_STATE_MAX'."""
        return Metaclass_CommanderState.__constants['MAIN_STATE_MAX']


class CommanderState(metaclass=Metaclass_CommanderState):
    """
    Message class 'CommanderState'.

    Constants:
      MAIN_STATE_MANUAL
      MAIN_STATE_ALTCTL
      MAIN_STATE_POSCTL
      MAIN_STATE_AUTO_MISSION
      MAIN_STATE_AUTO_LOITER
      MAIN_STATE_AUTO_RTL
      MAIN_STATE_ACRO
      MAIN_STATE_OFFBOARD
      MAIN_STATE_STAB
      MAIN_STATE_AUTO_TAKEOFF
      MAIN_STATE_AUTO_LAND
      MAIN_STATE_AUTO_FOLLOW_TARGET
      MAIN_STATE_AUTO_PRECLAND
      MAIN_STATE_ORBIT
      MAIN_STATE_AUTO_VTOL_TAKEOFF
      MAIN_STATE_MAX
    """

    __slots__ = [
        '_timestamp',
        '_main_state',
        '_main_state_changes',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'main_state': 'uint8',
        'main_state_changes': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.main_state = kwargs.get('main_state', int())
        self.main_state_changes = kwargs.get('main_state_changes', int())

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
        if self.main_state != other.main_state:
            return False
        if self.main_state_changes != other.main_state_changes:
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
    def main_state(self):
        """Message field 'main_state'."""
        return self._main_state

    @main_state.setter
    def main_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'main_state' field must be an unsigned integer in [0, 255]"
        self._main_state = value

    @property
    def main_state_changes(self):
        """Message field 'main_state_changes'."""
        return self._main_state_changes

    @main_state_changes.setter
    def main_state_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_state_changes' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'main_state_changes' field must be an unsigned integer in [0, 65535]"
        self._main_state_changes = value
