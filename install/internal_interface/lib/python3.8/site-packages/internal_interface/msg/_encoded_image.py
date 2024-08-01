# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/EncodedImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EncodedImage(type):
    """Metaclass of message 'EncodedImage'."""

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
                'internal_interface.msg.EncodedImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoded_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoded_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoded_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoded_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoded_image

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EncodedImage(metaclass=Metaclass_EncodedImage):
    """Message class 'EncodedImage'."""

    __slots__ = [
        '_capture_ts',
        '_publish_ts',
        '_data',
    ]

    _fields_and_field_types = {
        'capture_ts': 'double',
        'publish_ts': 'double',
        'data': 'sequence<octet>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('octet')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capture_ts = kwargs.get('capture_ts', float())
        self.publish_ts = kwargs.get('publish_ts', float())
        self.data = kwargs.get('data', [])

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
        if self.capture_ts != other.capture_ts:
            return False
        if self.publish_ts != other.publish_ts:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def capture_ts(self):
        """Message field 'capture_ts'."""
        return self._capture_ts

    @capture_ts.setter
    def capture_ts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'capture_ts' field must be of type 'float'"
        self._capture_ts = value

    @property
    def publish_ts(self):
        """Message field 'publish_ts'."""
        return self._publish_ts

    @publish_ts.setter
    def publish_ts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'publish_ts' field must be of type 'float'"
        self._publish_ts = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
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
                 all(isinstance(v, bytes) for v in value) and
                 True), \
                "The 'data' field must be a set or sequence and each value of type 'bytes'"
        self._data = value
