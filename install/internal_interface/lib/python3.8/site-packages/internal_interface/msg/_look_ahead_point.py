# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/LookAheadPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LookAheadPoint(type):
    """Metaclass of message 'LookAheadPoint'."""

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
                'internal_interface.msg.LookAheadPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__look_ahead_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__look_ahead_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__look_ahead_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__look_ahead_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__look_ahead_point

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LookAheadPoint(metaclass=Metaclass_LookAheadPoint):
    """Message class 'LookAheadPoint'."""

    __slots__ = [
        '_alpha',
        '_look_ahead_distance',
        '_confidence',
        '_source',
    ]

    _fields_and_field_types = {
        'alpha': 'double',
        'look_ahead_distance': 'double',
        'confidence': 'double',
        'source': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alpha = kwargs.get('alpha', float())
        self.look_ahead_distance = kwargs.get('look_ahead_distance', float())
        self.confidence = kwargs.get('confidence', float())
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
        if self.alpha != other.alpha:
            return False
        if self.look_ahead_distance != other.look_ahead_distance:
            return False
        if self.confidence != other.confidence:
            return False
        if self.source != other.source:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def alpha(self):
        """Message field 'alpha'."""
        return self._alpha

    @alpha.setter
    def alpha(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha' field must be of type 'float'"
        self._alpha = value

    @property
    def look_ahead_distance(self):
        """Message field 'look_ahead_distance'."""
        return self._look_ahead_distance

    @look_ahead_distance.setter
    def look_ahead_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'look_ahead_distance' field must be of type 'float'"
        self._look_ahead_distance = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

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
