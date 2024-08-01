# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/CarState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarState(type):
    """Metaclass of message 'CarState'."""

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
            module = import_type_support('internal_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'internal_interface.msg.CarState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarState(metaclass=Metaclass_CarState):
    """Message class 'CarState'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_vel_x',
        '_vel_y',
        '_vel_z',
        '_accel_x',
        '_accel_y',
        '_accel_z',
        '_yaw',
        '_roll',
        '_pitch',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'vel_x': 'double',
        'vel_y': 'double',
        'vel_z': 'double',
        'accel_x': 'double',
        'accel_y': 'double',
        'accel_z': 'double',
        'yaw': 'float',
        'roll': 'float',
        'pitch': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.vel_x = kwargs.get('vel_x', float())
        self.vel_y = kwargs.get('vel_y', float())
        self.vel_z = kwargs.get('vel_z', float())
        self.accel_x = kwargs.get('accel_x', float())
        self.accel_y = kwargs.get('accel_y', float())
        self.accel_z = kwargs.get('accel_z', float())
        self.yaw = kwargs.get('yaw', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.vel_x != other.vel_x:
            return False
        if self.vel_y != other.vel_y:
            return False
        if self.vel_z != other.vel_z:
            return False
        if self.accel_x != other.accel_x:
            return False
        if self.accel_y != other.accel_y:
            return False
        if self.accel_z != other.accel_z:
            return False
        if self.yaw != other.yaw:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def vel_x(self):
        """Message field 'vel_x'."""
        return self._vel_x

    @vel_x.setter
    def vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_x' field must be of type 'float'"
        self._vel_x = value

    @property
    def vel_y(self):
        """Message field 'vel_y'."""
        return self._vel_y

    @vel_y.setter
    def vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_y' field must be of type 'float'"
        self._vel_y = value

    @property
    def vel_z(self):
        """Message field 'vel_z'."""
        return self._vel_z

    @vel_z.setter
    def vel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_z' field must be of type 'float'"
        self._vel_z = value

    @property
    def accel_x(self):
        """Message field 'accel_x'."""
        return self._accel_x

    @accel_x.setter
    def accel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_x' field must be of type 'float'"
        self._accel_x = value

    @property
    def accel_y(self):
        """Message field 'accel_y'."""
        return self._accel_y

    @accel_y.setter
    def accel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_y' field must be of type 'float'"
        self._accel_y = value

    @property
    def accel_z(self):
        """Message field 'accel_z'."""
        return self._accel_z

    @accel_z.setter
    def accel_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_z' field must be of type 'float'"
        self._accel_z = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value
