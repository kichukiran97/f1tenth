# generated from rosidl_generator_py/resource/_idl.py.em
# with input from internal_interface:msg/StopSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StopSignal(type):
    """Metaclass of message 'StopSignal'."""

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
                'internal_interface.msg.StopSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stop_signal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stop_signal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stop_signal
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stop_signal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stop_signal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StopSignal(metaclass=Metaclass_StopSignal):
    """Message class 'StopSignal'."""

    __slots__ = [
        '_should_stop',
        '_delay',
    ]

    _fields_and_field_types = {
        'should_stop': 'boolean',
        'delay': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.should_stop = kwargs.get('should_stop', bool())
        self.delay = kwargs.get('delay', float())

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
        if self.should_stop != other.should_stop:
            return False
        if self.delay != other.delay:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def should_stop(self):
        """Message field 'should_stop'."""
        return self._should_stop

    @should_stop.setter
    def should_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'should_stop' field must be of type 'bool'"
        self._should_stop = value

    @property
    def delay(self):
        """Message field 'delay'."""
        return self._delay

    @delay.setter
    def delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delay' field must be of type 'float'"
        self._delay = value
