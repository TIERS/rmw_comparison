# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mqtt_client_interfaces:msg/RosMsgType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosMsgType(type):
    """Metaclass of message 'RosMsgType'."""

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
            module = import_type_support('mqtt_client_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mqtt_client_interfaces.msg.RosMsgType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ros_msg_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ros_msg_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ros_msg_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ros_msg_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ros_msg_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosMsgType(metaclass=Metaclass_RosMsgType):
    """Message class 'RosMsgType'."""

    __slots__ = [
        '_md5',
        '_name',
        '_definition',
        '_stamped',
    ]

    _fields_and_field_types = {
        'md5': 'string',
        'name': 'string',
        'definition': 'string',
        'stamped': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.md5 = kwargs.get('md5', str())
        self.name = kwargs.get('name', str())
        self.definition = kwargs.get('definition', str())
        self.stamped = kwargs.get('stamped', bool())

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
        if self.md5 != other.md5:
            return False
        if self.name != other.name:
            return False
        if self.definition != other.definition:
            return False
        if self.stamped != other.stamped:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def md5(self):
        """Message field 'md5'."""
        return self._md5

    @md5.setter
    def md5(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'md5' field must be of type 'str'"
        self._md5 = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def definition(self):
        """Message field 'definition'."""
        return self._definition

    @definition.setter
    def definition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'definition' field must be of type 'str'"
        self._definition = value

    @property
    def stamped(self):
        """Message field 'stamped'."""
        return self._stamped

    @stamped.setter
    def stamped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stamped' field must be of type 'bool'"
        self._stamped = value
