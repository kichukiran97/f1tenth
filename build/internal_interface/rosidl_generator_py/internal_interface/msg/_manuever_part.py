# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/ManueverPart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManueverPart(type):
    """Metaclass of message 'ManueverPart'."""

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
                'internal_interface.msg.ManueverPart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__manuever_part
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__manuever_part
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__manuever_part
            cls._TYPE_SUPPORT = module.type_support_msg__msg__manuever_part
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__manuever_part

            from internal_interface.msg import ControlInput
            if ControlInput.__class__._TYPE_SUPPORT is None:
                ControlInput.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ManueverPart(metaclass=Metaclass_ManueverPart):
    """Message class 'ManueverPart'."""

    __slots__ = [
        '_control',
        '_duration_seconds',
    ]

    _fields_and_field_types = {
        'control': 'internal_interface/ControlInput',
        'duration_seconds': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['internal_interface', 'msg'], 'ControlInput'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from internal_interface.msg import ControlInput
        self.control = kwargs.get('control', ControlInput())
        self.duration_seconds = kwargs.get('duration_seconds', float())

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
        if self.control != other.control:
            return False
        if self.duration_seconds != other.duration_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def control(self):
        """Message field 'control'."""
        return self._control

    @control.setter
    def control(self, value):
        if __debug__:
            from internal_interface.msg import ControlInput
            assert \
                isinstance(value, ControlInput), \
                "The 'control' field must be a sub message of type 'ControlInput'"
        self._control = value

    @property
    def duration_seconds(self):
        """Message field 'duration_seconds'."""
        return self._duration_seconds

    @duration_seconds.setter
    def duration_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration_seconds' field must be of type 'float'"
        self._duration_seconds = value
