# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jetson_stats_msgs:srv/NVPModel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NVPModel_Request(type):
    """Metaclass of message 'NVPModel_Request'."""

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
                'jetson_stats_msgs.srv.NVPModel_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nvp_model__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nvp_model__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nvp_model__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nvp_model__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nvp_model__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NVPModel_Request(metaclass=Metaclass_NVPModel_Request):
    """Message class 'NVPModel_Request'."""

    __slots__ = [
        '_nvpmodel',
    ]

    _fields_and_field_types = {
        'nvpmodel': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.nvpmodel = kwargs.get('nvpmodel', int())

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
        if self.nvpmodel != other.nvpmodel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def nvpmodel(self):
        """Message field 'nvpmodel'."""
        return self._nvpmodel

    @nvpmodel.setter
    def nvpmodel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nvpmodel' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'nvpmodel' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._nvpmodel = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_NVPModel_Response(type):
    """Metaclass of message 'NVPModel_Response'."""

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
                'jetson_stats_msgs.srv.NVPModel_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__nvp_model__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__nvp_model__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__nvp_model__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__nvp_model__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__nvp_model__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NVPModel_Response(metaclass=Metaclass_NVPModel_Response):
    """Message class 'NVPModel_Response'."""

    __slots__ = [
        '_power_mode',
    ]

    _fields_and_field_types = {
        'power_mode': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.power_mode = kwargs.get('power_mode', str())

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
        if self.power_mode != other.power_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def power_mode(self):
        """Message field 'power_mode'."""
        return self._power_mode

    @power_mode.setter
    def power_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'power_mode' field must be of type 'str'"
        self._power_mode = value


class Metaclass_NVPModel(type):
    """Metaclass of service 'NVPModel'."""

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
                'jetson_stats_msgs.srv.NVPModel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__nvp_model

            from jetson_stats_msgs.srv import _nvp_model
            if _nvp_model.Metaclass_NVPModel_Request._TYPE_SUPPORT is None:
                _nvp_model.Metaclass_NVPModel_Request.__import_type_support__()
            if _nvp_model.Metaclass_NVPModel_Response._TYPE_SUPPORT is None:
                _nvp_model.Metaclass_NVPModel_Response.__import_type_support__()


class NVPModel(metaclass=Metaclass_NVPModel):
    from jetson_stats_msgs.srv._nvp_model import NVPModel_Request as Request
    from jetson_stats_msgs.srv._nvp_model import NVPModel_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
