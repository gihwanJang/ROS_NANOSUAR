# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jetson_stats_msgs:srv/Fan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Fan_Request(type):
    """Metaclass of message 'Fan_Request'."""

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
            module = import_type_support('jetson_stats_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetson_stats_msgs.srv.Fan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Fan_Request(metaclass=Metaclass_Fan_Request):
    """Message class 'Fan_Request'."""

    __slots__ = [
        '_mode',
        '_speed',
    ]

    _fields_and_field_types = {
        'mode': 'string',
        'speed': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mode = kwargs.get('mode', str())
        self.speed = kwargs.get('speed', int())

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
        if self.mode != other.mode:
            return False
        if self.speed != other.speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mode' field must be of type 'str'"
        self._mode = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._speed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Fan_Response(type):
    """Metaclass of message 'Fan_Response'."""

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
            module = import_type_support('jetson_stats_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetson_stats_msgs.srv.Fan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__fan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__fan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__fan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__fan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__fan__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Fan_Response(metaclass=Metaclass_Fan_Response):
    """Message class 'Fan_Response'."""

    __slots__ = [
        '_set_fan_mode',
        '_set_fan_speed',
    ]

    _fields_and_field_types = {
        'set_fan_mode': 'string',
        'set_fan_speed': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_fan_mode = kwargs.get('set_fan_mode', str())
        self.set_fan_speed = kwargs.get('set_fan_speed', int())

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
        if self.set_fan_mode != other.set_fan_mode:
            return False
        if self.set_fan_speed != other.set_fan_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def set_fan_mode(self):
        """Message field 'set_fan_mode'."""
        return self._set_fan_mode

    @set_fan_mode.setter
    def set_fan_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_fan_mode' field must be of type 'str'"
        self._set_fan_mode = value

    @property
    def set_fan_speed(self):
        """Message field 'set_fan_speed'."""
        return self._set_fan_speed

    @set_fan_speed.setter
    def set_fan_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_fan_speed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'set_fan_speed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._set_fan_speed = value


class Metaclass_Fan(type):
    """Metaclass of service 'Fan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('jetson_stats_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jetson_stats_msgs.srv.Fan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__fan

            from jetson_stats_msgs.srv import _fan
            if _fan.Metaclass_Fan_Request._TYPE_SUPPORT is None:
                _fan.Metaclass_Fan_Request.__import_type_support__()
            if _fan.Metaclass_Fan_Response._TYPE_SUPPORT is None:
                _fan.Metaclass_Fan_Response.__import_type_support__()


class Fan(metaclass=Metaclass_Fan):
    from jetson_stats_msgs.srv._fan import Fan_Request as Request
    from jetson_stats_msgs.srv._fan import Fan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
