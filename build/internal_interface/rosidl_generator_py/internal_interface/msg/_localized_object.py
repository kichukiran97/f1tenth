# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/LocalizedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LocalizedObject(type):
    """Metaclass of message 'LocalizedObject'."""

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
                'internal_interface.msg.LocalizedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__localized_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__localized_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__localized_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__localized_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__localized_object

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LocalizedObject(metaclass=Metaclass_LocalizedObject):
    """Message class 'LocalizedObject'."""

    __slots__ = [
        '_local_x',
        '_local_y',
        '_map_x',
        '_map_y',
        '_label',
    ]

    _fields_and_field_types = {
        'local_x': 'double',
        'local_y': 'double',
        'map_x': 'double',
        'map_y': 'double',
        'label': 'string',
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
        self.local_x = kwargs.get('local_x', float())
        self.local_y = kwargs.get('local_y', float())
        self.map_x = kwargs.get('map_x', float())
        self.map_y = kwargs.get('map_y', float())
        self.label = kwargs.get('label', str())

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
        if self.local_x != other.local_x:
            return False
        if self.local_y != other.local_y:
            return False
        if self.map_x != other.map_x:
            return False
        if self.map_y != other.map_y:
            return False
        if self.label != other.label:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def local_x(self):
        """Message field 'local_x'."""
        return self._local_x

    @local_x.setter
    def local_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_x' field must be of type 'float'"
        self._local_x = value

    @property
    def local_y(self):
        """Message field 'local_y'."""
        return self._local_y

    @local_y.setter
    def local_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'local_y' field must be of type 'float'"
        self._local_y = value

    @property
    def map_x(self):
        """Message field 'map_x'."""
        return self._map_x

    @map_x.setter
    def map_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'map_x' field must be of type 'float'"
        self._map_x = value

    @property
    def map_y(self):
        """Message field 'map_y'."""
        return self._map_y

    @map_y.setter
    def map_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'map_y' field must be of type 'float'"
        self._map_y = value

    @property
    def label(self):
        """Message field 'label'."""
        return self._label

    @label.setter
    def label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'label' field must be of type 'str'"
        self._label = value
