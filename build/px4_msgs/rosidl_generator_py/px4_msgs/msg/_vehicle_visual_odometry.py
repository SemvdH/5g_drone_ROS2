# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleVisualOdometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'q'
# Member 'q_offset'
# Member 'pose_covariance'
# Member 'velocity_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleVisualOdometry(type):
    """Metaclass of message 'VehicleVisualOdometry'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COVARIANCE_MATRIX_X_VARIANCE': 0,
        'COVARIANCE_MATRIX_Y_VARIANCE': 6,
        'COVARIANCE_MATRIX_Z_VARIANCE': 11,
        'COVARIANCE_MATRIX_ROLL_VARIANCE': 15,
        'COVARIANCE_MATRIX_PITCH_VARIANCE': 18,
        'COVARIANCE_MATRIX_YAW_VARIANCE': 20,
        'COVARIANCE_MATRIX_VX_VARIANCE': 0,
        'COVARIANCE_MATRIX_VY_VARIANCE': 6,
        'COVARIANCE_MATRIX_VZ_VARIANCE': 11,
        'COVARIANCE_MATRIX_ROLLRATE_VARIANCE': 15,
        'COVARIANCE_MATRIX_PITCHRATE_VARIANCE': 18,
        'COVARIANCE_MATRIX_YAWRATE_VARIANCE': 20,
        'LOCAL_FRAME_NED': 0,
        'LOCAL_FRAME_FRD': 1,
        'LOCAL_FRAME_OTHER': 2,
        'BODY_FRAME_FRD': 3,
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
                'px4_msgs.msg.VehicleVisualOdometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_visual_odometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_visual_odometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_visual_odometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_visual_odometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_visual_odometry

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COVARIANCE_MATRIX_X_VARIANCE': cls.__constants['COVARIANCE_MATRIX_X_VARIANCE'],
            'COVARIANCE_MATRIX_Y_VARIANCE': cls.__constants['COVARIANCE_MATRIX_Y_VARIANCE'],
            'COVARIANCE_MATRIX_Z_VARIANCE': cls.__constants['COVARIANCE_MATRIX_Z_VARIANCE'],
            'COVARIANCE_MATRIX_ROLL_VARIANCE': cls.__constants['COVARIANCE_MATRIX_ROLL_VARIANCE'],
            'COVARIANCE_MATRIX_PITCH_VARIANCE': cls.__constants['COVARIANCE_MATRIX_PITCH_VARIANCE'],
            'COVARIANCE_MATRIX_YAW_VARIANCE': cls.__constants['COVARIANCE_MATRIX_YAW_VARIANCE'],
            'COVARIANCE_MATRIX_VX_VARIANCE': cls.__constants['COVARIANCE_MATRIX_VX_VARIANCE'],
            'COVARIANCE_MATRIX_VY_VARIANCE': cls.__constants['COVARIANCE_MATRIX_VY_VARIANCE'],
            'COVARIANCE_MATRIX_VZ_VARIANCE': cls.__constants['COVARIANCE_MATRIX_VZ_VARIANCE'],
            'COVARIANCE_MATRIX_ROLLRATE_VARIANCE': cls.__constants['COVARIANCE_MATRIX_ROLLRATE_VARIANCE'],
            'COVARIANCE_MATRIX_PITCHRATE_VARIANCE': cls.__constants['COVARIANCE_MATRIX_PITCHRATE_VARIANCE'],
            'COVARIANCE_MATRIX_YAWRATE_VARIANCE': cls.__constants['COVARIANCE_MATRIX_YAWRATE_VARIANCE'],
            'LOCAL_FRAME_NED': cls.__constants['LOCAL_FRAME_NED'],
            'LOCAL_FRAME_FRD': cls.__constants['LOCAL_FRAME_FRD'],
            'LOCAL_FRAME_OTHER': cls.__constants['LOCAL_FRAME_OTHER'],
            'BODY_FRAME_FRD': cls.__constants['BODY_FRAME_FRD'],
        }

    @property
    def COVARIANCE_MATRIX_X_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_X_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_X_VARIANCE']

    @property
    def COVARIANCE_MATRIX_Y_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_Y_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_Y_VARIANCE']

    @property
    def COVARIANCE_MATRIX_Z_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_Z_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_Z_VARIANCE']

    @property
    def COVARIANCE_MATRIX_ROLL_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_ROLL_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_ROLL_VARIANCE']

    @property
    def COVARIANCE_MATRIX_PITCH_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_PITCH_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_PITCH_VARIANCE']

    @property
    def COVARIANCE_MATRIX_YAW_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_YAW_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_YAW_VARIANCE']

    @property
    def COVARIANCE_MATRIX_VX_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_VX_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_VX_VARIANCE']

    @property
    def COVARIANCE_MATRIX_VY_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_VY_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_VY_VARIANCE']

    @property
    def COVARIANCE_MATRIX_VZ_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_VZ_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_VZ_VARIANCE']

    @property
    def COVARIANCE_MATRIX_ROLLRATE_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_ROLLRATE_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_ROLLRATE_VARIANCE']

    @property
    def COVARIANCE_MATRIX_PITCHRATE_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_PITCHRATE_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_PITCHRATE_VARIANCE']

    @property
    def COVARIANCE_MATRIX_YAWRATE_VARIANCE(self):
        """Message constant 'COVARIANCE_MATRIX_YAWRATE_VARIANCE'."""
        return Metaclass_VehicleVisualOdometry.__constants['COVARIANCE_MATRIX_YAWRATE_VARIANCE']

    @property
    def LOCAL_FRAME_NED(self):
        """Message constant 'LOCAL_FRAME_NED'."""
        return Metaclass_VehicleVisualOdometry.__constants['LOCAL_FRAME_NED']

    @property
    def LOCAL_FRAME_FRD(self):
        """Message constant 'LOCAL_FRAME_FRD'."""
        return Metaclass_VehicleVisualOdometry.__constants['LOCAL_FRAME_FRD']

    @property
    def LOCAL_FRAME_OTHER(self):
        """Message constant 'LOCAL_FRAME_OTHER'."""
        return Metaclass_VehicleVisualOdometry.__constants['LOCAL_FRAME_OTHER']

    @property
    def BODY_FRAME_FRD(self):
        """Message constant 'BODY_FRAME_FRD'."""
        return Metaclass_VehicleVisualOdometry.__constants['BODY_FRAME_FRD']


class VehicleVisualOdometry(metaclass=Metaclass_VehicleVisualOdometry):
    """
    Message class 'VehicleVisualOdometry'.

    Constants:
      COVARIANCE_MATRIX_X_VARIANCE
      COVARIANCE_MATRIX_Y_VARIANCE
      COVARIANCE_MATRIX_Z_VARIANCE
      COVARIANCE_MATRIX_ROLL_VARIANCE
      COVARIANCE_MATRIX_PITCH_VARIANCE
      COVARIANCE_MATRIX_YAW_VARIANCE
      COVARIANCE_MATRIX_VX_VARIANCE
      COVARIANCE_MATRIX_VY_VARIANCE
      COVARIANCE_MATRIX_VZ_VARIANCE
      COVARIANCE_MATRIX_ROLLRATE_VARIANCE
      COVARIANCE_MATRIX_PITCHRATE_VARIANCE
      COVARIANCE_MATRIX_YAWRATE_VARIANCE
      LOCAL_FRAME_NED
      LOCAL_FRAME_FRD
      LOCAL_FRAME_OTHER
      BODY_FRAME_FRD
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_local_frame',
        '_x',
        '_y',
        '_z',
        '_q',
        '_q_offset',
        '_pose_covariance',
        '_velocity_frame',
        '_vx',
        '_vy',
        '_vz',
        '_rollspeed',
        '_pitchspeed',
        '_yawspeed',
        '_velocity_covariance',
        '_reset_counter',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'local_frame': 'uint8',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'q': 'float[4]',
        'q_offset': 'float[4]',
        'pose_covariance': 'float[21]',
        'velocity_frame': 'uint8',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'rollspeed': 'float',
        'pitchspeed': 'float',
        'yawspeed': 'float',
        'velocity_covariance': 'float[21]',
        'reset_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 21),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 21),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.local_frame = kwargs.get('local_frame', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        if 'q' not in kwargs:
            self.q = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float32)
            assert self.q.shape == (4, )
        if 'q_offset' not in kwargs:
            self.q_offset = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q_offset = numpy.array(kwargs.get('q_offset'), dtype=numpy.float32)
            assert self.q_offset.shape == (4, )
        if 'pose_covariance' not in kwargs:
            self.pose_covariance = numpy.zeros(21, dtype=numpy.float32)
        else:
            self.pose_covariance = numpy.array(kwargs.get('pose_covariance'), dtype=numpy.float32)
            assert self.pose_covariance.shape == (21, )
        self.velocity_frame = kwargs.get('velocity_frame', int())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.rollspeed = kwargs.get('rollspeed', float())
        self.pitchspeed = kwargs.get('pitchspeed', float())
        self.yawspeed = kwargs.get('yawspeed', float())
        if 'velocity_covariance' not in kwargs:
            self.velocity_covariance = numpy.zeros(21, dtype=numpy.float32)
        else:
            self.velocity_covariance = numpy.array(kwargs.get('velocity_covariance'), dtype=numpy.float32)
            assert self.velocity_covariance.shape == (21, )
        self.reset_counter = kwargs.get('reset_counter', int())

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
        if self.local_frame != other.local_frame:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if all(self.q != other.q):
            return False
        if all(self.q_offset != other.q_offset):
            return False
        if all(self.pose_covariance != other.pose_covariance):
            return False
        if self.velocity_frame != other.velocity_frame:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.rollspeed != other.rollspeed:
            return False
        if self.pitchspeed != other.pitchspeed:
            return False
        if self.yawspeed != other.yawspeed:
            return False
        if all(self.velocity_covariance != other.velocity_covariance):
            return False
        if self.reset_counter != other.reset_counter:
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

    @builtins.property
    def local_frame(self):
        """Message field 'local_frame'."""
        return self._local_frame

    @local_frame.setter
    def local_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'local_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'local_frame' field must be an unsigned integer in [0, 255]"
        self._local_frame = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'q' numpy.ndarray() must have a size of 4"
            self._q = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def q_offset(self):
        """Message field 'q_offset'."""
        return self._q_offset

    @q_offset.setter
    def q_offset(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q_offset' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'q_offset' numpy.ndarray() must have a size of 4"
            self._q_offset = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q_offset' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q_offset = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def pose_covariance(self):
        """Message field 'pose_covariance'."""
        return self._pose_covariance

    @pose_covariance.setter
    def pose_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pose_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 21, \
                "The 'pose_covariance' numpy.ndarray() must have a size of 21"
            self._pose_covariance = value
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
                 len(value) == 21 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'pose_covariance' field must be a set or sequence with length 21 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pose_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocity_frame(self):
        """Message field 'velocity_frame'."""
        return self._velocity_frame

    @velocity_frame.setter
    def velocity_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'velocity_frame' field must be an unsigned integer in [0, 255]"
        self._velocity_frame = value

    @builtins.property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz = value

    @builtins.property
    def rollspeed(self):
        """Message field 'rollspeed'."""
        return self._rollspeed

    @rollspeed.setter
    def rollspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rollspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rollspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rollspeed = value

    @builtins.property
    def pitchspeed(self):
        """Message field 'pitchspeed'."""
        return self._pitchspeed

    @pitchspeed.setter
    def pitchspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitchspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitchspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitchspeed = value

    @builtins.property
    def yawspeed(self):
        """Message field 'yawspeed'."""
        return self._yawspeed

    @yawspeed.setter
    def yawspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yawspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yawspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yawspeed = value

    @builtins.property
    def velocity_covariance(self):
        """Message field 'velocity_covariance'."""
        return self._velocity_covariance

    @velocity_covariance.setter
    def velocity_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 21, \
                "The 'velocity_covariance' numpy.ndarray() must have a size of 21"
            self._velocity_covariance = value
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
                 len(value) == 21 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity_covariance' field must be a set or sequence with length 21 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def reset_counter(self):
        """Message field 'reset_counter'."""
        return self._reset_counter

    @reset_counter.setter
    def reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_counter' field must be an unsigned integer in [0, 255]"
        self._reset_counter = value
