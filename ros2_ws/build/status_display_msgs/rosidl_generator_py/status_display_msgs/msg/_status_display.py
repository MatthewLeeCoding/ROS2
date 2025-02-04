# generated from rosidl_generator_py/resource/_idl.py.em
# with input from status_display_msgs:msg/StatusDisplay.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusDisplay(type):
    """Metaclass of message 'StatusDisplay'."""

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
            module = import_type_support('status_display_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'status_display_msgs.msg.StatusDisplay')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status_display
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status_display
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status_display
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status_display
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status_display

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StatusDisplay(metaclass=Metaclass_StatusDisplay):
    """Message class 'StatusDisplay'."""

    __slots__ = [
        '_left_setpoint',
        '_left_velocity',
        '_left_output',
        '_right_setpoint',
        '_right_velocity',
        '_right_output',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'left_setpoint': 'double',
        'left_velocity': 'double',
        'left_output': 'double',
        'right_setpoint': 'double',
        'right_velocity': 'double',
        'right_output': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_setpoint = kwargs.get('left_setpoint', float())
        self.left_velocity = kwargs.get('left_velocity', float())
        self.left_output = kwargs.get('left_output', float())
        self.right_setpoint = kwargs.get('right_setpoint', float())
        self.right_velocity = kwargs.get('right_velocity', float())
        self.right_output = kwargs.get('right_output', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.left_setpoint != other.left_setpoint:
            return False
        if self.left_velocity != other.left_velocity:
            return False
        if self.left_output != other.left_output:
            return False
        if self.right_setpoint != other.right_setpoint:
            return False
        if self.right_velocity != other.right_velocity:
            return False
        if self.right_output != other.right_output:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_setpoint(self):
        """Message field 'left_setpoint'."""
        return self._left_setpoint

    @left_setpoint.setter
    def left_setpoint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_setpoint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_setpoint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_setpoint = value

    @builtins.property
    def left_velocity(self):
        """Message field 'left_velocity'."""
        return self._left_velocity

    @left_velocity.setter
    def left_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_velocity = value

    @builtins.property
    def left_output(self):
        """Message field 'left_output'."""
        return self._left_output

    @left_output.setter
    def left_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'left_output' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'left_output' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._left_output = value

    @builtins.property
    def right_setpoint(self):
        """Message field 'right_setpoint'."""
        return self._right_setpoint

    @right_setpoint.setter
    def right_setpoint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_setpoint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_setpoint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_setpoint = value

    @builtins.property
    def right_velocity(self):
        """Message field 'right_velocity'."""
        return self._right_velocity

    @right_velocity.setter
    def right_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_velocity = value

    @builtins.property
    def right_output(self):
        """Message field 'right_output'."""
        return self._right_output

    @right_output.setter
    def right_output(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'right_output' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'right_output' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._right_output = value
