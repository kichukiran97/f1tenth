# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/ControlInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlInput(type):
    """Metaclass of message 'ControlInput'."""

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
                'internal_interface.msg.ControlInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlInput(metaclass=Metaclass_ControlInput):
    """Message class 'ControlInput'."""

    __slots__ = [
        '_speed',
        '_steer',
        '_speed_confidence',
        '_steer_confidence',
        '_source',
    ]

    _fields_and_field_types = {
        'speed': 'double',
        'steer': 'double',
        'speed_confidence': 'double',
        'steer_confidence': 'double',
        'source': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed = kwargs.get('speed', float())
        self.steer = kwargs.get('steer', float())
        self.speed_confidence = kwargs.get('speed_confidence', float())
        self.steer_confidence = kwargs.get('steer_confidence', float())
        self.source = kwargs.get('source', str())

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
        if self.speed != other.speed:
            return False
        if self.steer != other.steer:
            return False
        if self.speed_confidence != other.speed_confidence:
            return False
        if self.steer_confidence != other.steer_confidence:
            return False
        if self.source != other.source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def steer(self):
        """Message field 'steer'."""
        return self._steer

    @steer.setter
    def steer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer' field must be of type 'float'"
        self._steer = value

    @property
    def speed_confidence(self):
        """Message field 'speed_confidence'."""
        return self._speed_confidence

    @speed_confidence.setter
    def speed_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_confidence' field must be of type 'float'"
        self._speed_confidence = value

    @property
    def steer_confidence(self):
        """Message field 'steer_confidence'."""
        return self._steer_confidence

    @steer_confidence.setter
    def steer_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_confidence' field must be of type 'float'"
        self._steer_confidence = value

    @property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value
