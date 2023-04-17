# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VtolVehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VtolVehicleStatus(type):
    """Metaclass of message 'VtolVehicleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_VTOL_STATE_UNDEFINED': 0,
        'VEHICLE_VTOL_STATE_TRANSITION_TO_FW': 1,
        'VEHICLE_VTOL_STATE_TRANSITION_TO_MC': 2,
        'VEHICLE_VTOL_STATE_MC': 3,
        'VEHICLE_VTOL_STATE_FW': 4,
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
                'px4_msgs.msg.VtolVehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vtol_vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vtol_vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vtol_vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vtol_vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vtol_vehicle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_VTOL_STATE_UNDEFINED': cls.__constants['VEHICLE_VTOL_STATE_UNDEFINED'],
            'VEHICLE_VTOL_STATE_TRANSITION_TO_FW': cls.__constants['VEHICLE_VTOL_STATE_TRANSITION_TO_FW'],
            'VEHICLE_VTOL_STATE_TRANSITION_TO_MC': cls.__constants['VEHICLE_VTOL_STATE_TRANSITION_TO_MC'],
            'VEHICLE_VTOL_STATE_MC': cls.__constants['VEHICLE_VTOL_STATE_MC'],
            'VEHICLE_VTOL_STATE_FW': cls.__constants['VEHICLE_VTOL_STATE_FW'],
        }

    @property
    def VEHICLE_VTOL_STATE_UNDEFINED(self):
        """Message constant 'VEHICLE_VTOL_STATE_UNDEFINED'."""
        return Metaclass_VtolVehicleStatus.__constants['VEHICLE_VTOL_STATE_UNDEFINED']

    @property
    def VEHICLE_VTOL_STATE_TRANSITION_TO_FW(self):
        """Message constant 'VEHICLE_VTOL_STATE_TRANSITION_TO_FW'."""
        return Metaclass_VtolVehicleStatus.__constants['VEHICLE_VTOL_STATE_TRANSITION_TO_FW']

    @property
    def VEHICLE_VTOL_STATE_TRANSITION_TO_MC(self):
        """Message constant 'VEHICLE_VTOL_STATE_TRANSITION_TO_MC'."""
        return Metaclass_VtolVehicleStatus.__constants['VEHICLE_VTOL_STATE_TRANSITION_TO_MC']

    @property
    def VEHICLE_VTOL_STATE_MC(self):
        """Message constant 'VEHICLE_VTOL_STATE_MC'."""
        return Metaclass_VtolVehicleStatus.__constants['VEHICLE_VTOL_STATE_MC']

    @property
    def VEHICLE_VTOL_STATE_FW(self):
        """Message constant 'VEHICLE_VTOL_STATE_FW'."""
        return Metaclass_VtolVehicleStatus.__constants['VEHICLE_VTOL_STATE_FW']


class VtolVehicleStatus(metaclass=Metaclass_VtolVehicleStatus):
    """
    Message class 'VtolVehicleStatus'.

    Constants:
      VEHICLE_VTOL_STATE_UNDEFINED
      VEHICLE_VTOL_STATE_TRANSITION_TO_FW
      VEHICLE_VTOL_STATE_TRANSITION_TO_MC
      VEHICLE_VTOL_STATE_MC
      VEHICLE_VTOL_STATE_FW
    """

    __slots__ = [
        '_timestamp',
        '_vtol_in_rw_mode',
        '_vtol_in_trans_mode',
        '_in_transition_to_fw',
        '_vtol_transition_failsafe',
        '_fw_permanent_stab',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'vtol_in_rw_mode': 'boolean',
        'vtol_in_trans_mode': 'boolean',
        'in_transition_to_fw': 'boolean',
        'vtol_transition_failsafe': 'boolean',
        'fw_permanent_stab': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.vtol_in_rw_mode = kwargs.get('vtol_in_rw_mode', bool())
        self.vtol_in_trans_mode = kwargs.get('vtol_in_trans_mode', bool())
        self.in_transition_to_fw = kwargs.get('in_transition_to_fw', bool())
        self.vtol_transition_failsafe = kwargs.get('vtol_transition_failsafe', bool())
        self.fw_permanent_stab = kwargs.get('fw_permanent_stab', bool())

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
        if self.vtol_in_rw_mode != other.vtol_in_rw_mode:
            return False
        if self.vtol_in_trans_mode != other.vtol_in_trans_mode:
            return False
        if self.in_transition_to_fw != other.in_transition_to_fw:
            return False
        if self.vtol_transition_failsafe != other.vtol_transition_failsafe:
            return False
        if self.fw_permanent_stab != other.fw_permanent_stab:
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
    def vtol_in_rw_mode(self):
        """Message field 'vtol_in_rw_mode'."""
        return self._vtol_in_rw_mode

    @vtol_in_rw_mode.setter
    def vtol_in_rw_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_in_rw_mode' field must be of type 'bool'"
        self._vtol_in_rw_mode = value

    @property
    def vtol_in_trans_mode(self):
        """Message field 'vtol_in_trans_mode'."""
        return self._vtol_in_trans_mode

    @vtol_in_trans_mode.setter
    def vtol_in_trans_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_in_trans_mode' field must be of type 'bool'"
        self._vtol_in_trans_mode = value

    @property
    def in_transition_to_fw(self):
        """Message field 'in_transition_to_fw'."""
        return self._in_transition_to_fw

    @in_transition_to_fw.setter
    def in_transition_to_fw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_transition_to_fw' field must be of type 'bool'"
        self._in_transition_to_fw = value

    @property
    def vtol_transition_failsafe(self):
        """Message field 'vtol_transition_failsafe'."""
        return self._vtol_transition_failsafe

    @vtol_transition_failsafe.setter
    def vtol_transition_failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_transition_failsafe' field must be of type 'bool'"
        self._vtol_transition_failsafe = value

    @property
    def fw_permanent_stab(self):
        """Message field 'fw_permanent_stab'."""
        return self._fw_permanent_stab

    @fw_permanent_stab.setter
    def fw_permanent_stab(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fw_permanent_stab' field must be of type 'bool'"
        self._fw_permanent_stab = value
