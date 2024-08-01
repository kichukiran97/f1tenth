# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/ProximityStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProximityStatus(type):
    """Metaclass of message 'ProximityStatus'."""

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
                'internal_interface.msg.ProximityStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__proximity_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__proximity_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__proximity_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__proximity_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__proximity_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProximityStatus(metaclass=Metaclass_ProximityStatus):
    """Message class 'ProximityStatus'."""

    __slots__ = [
        '_front_is_clear',
        '_left_is_clear',
        '_right_is_clear',
        '_front_very_close',
        '_left_very_close',
        '_right_very_close',
        '_front_cm',
        '_left_cm',
        '_right_cm',
    ]

    _fields_and_field_types = {
        'front_is_clear': 'boolean',
        'left_is_clear': 'boolean',
        'right_is_clear': 'boolean',
        'front_very_close': 'boolean',
        'left_very_close': 'boolean',
        'right_very_close': 'boolean',
        'front_cm': 'double',
        'left_cm': 'double',
        'right_cm': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.front_is_clear = kwargs.get('front_is_clear', bool())
        self.left_is_clear = kwargs.get('left_is_clear', bool())
        self.right_is_clear = kwargs.get('right_is_clear', bool())
        self.front_very_close = kwargs.get('front_very_close', bool())
        self.left_very_close = kwargs.get('left_very_close', bool())
        self.right_very_close = kwargs.get('right_very_close', bool())
        self.front_cm = kwargs.get('front_cm', float())
        self.left_cm = kwargs.get('left_cm', float())
        self.right_cm = kwargs.get('right_cm', float())

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
        if self.front_is_clear != other.front_is_clear:
            return False
        if self.left_is_clear != other.left_is_clear:
            return False
        if self.right_is_clear != other.right_is_clear:
            return False
        if self.front_very_close != other.front_very_close:
            return False
        if self.left_very_close != other.left_very_close:
            return False
        if self.right_very_close != other.right_very_close:
            return False
        if self.front_cm != other.front_cm:
            return False
        if self.left_cm != other.left_cm:
            return False
        if self.right_cm != other.right_cm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def front_is_clear(self):
        """Message field 'front_is_clear'."""
        return self._front_is_clear

    @front_is_clear.setter
    def front_is_clear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'front_is_clear' field must be of type 'bool'"
        self._front_is_clear = value

    @property
    def left_is_clear(self):
        """Message field 'left_is_clear'."""
        return self._left_is_clear

    @left_is_clear.setter
    def left_is_clear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_is_clear' field must be of type 'bool'"
        self._left_is_clear = value

    @property
    def right_is_clear(self):
        """Message field 'right_is_clear'."""
        return self._right_is_clear

    @right_is_clear.setter
    def right_is_clear(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_is_clear' field must be of type 'bool'"
        self._right_is_clear = value

    @property
    def front_very_close(self):
        """Message field 'front_very_close'."""
        return self._front_very_close

    @front_very_close.setter
    def front_very_close(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'front_very_close' field must be of type 'bool'"
        self._front_very_close = value

    @property
    def left_very_close(self):
        """Message field 'left_very_close'."""
        return self._left_very_close

    @left_very_close.setter
    def left_very_close(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'left_very_close' field must be of type 'bool'"
        self._left_very_close = value

    @property
    def right_very_close(self):
        """Message field 'right_very_close'."""
        return self._right_very_close

    @right_very_close.setter
    def right_very_close(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'right_very_close' field must be of type 'bool'"
        self._right_very_close = value

    @property
    def front_cm(self):
        """Message field 'front_cm'."""
        return self._front_cm

    @front_cm.setter
    def front_cm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'front_cm' field must be of type 'float'"
        self._front_cm = value

    @property
    def left_cm(self):
        """Message field 'left_cm'."""
        return self._left_cm

    @left_cm.setter
    def left_cm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_cm' field must be of type 'float'"
        self._left_cm = value

    @property
    def right_cm(self):
        """Message field 'right_cm'."""
        return self._right_cm

    @right_cm.setter
    def right_cm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_cm' field must be of type 'float'"
        self._right_cm = value
