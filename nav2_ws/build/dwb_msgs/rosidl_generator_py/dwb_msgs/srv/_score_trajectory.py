# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dwb_msgs:srv/ScoreTrajectory.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ScoreTrajectory_Request(type):
    """Metaclass of message 'ScoreTrajectory_Request'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__score_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__score_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__score_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__score_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__score_trajectory__request

            from dwb_msgs.msg import Trajectory2D
            if Trajectory2D.__class__._TYPE_SUPPORT is None:
                Trajectory2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Path2D
            if Path2D.__class__._TYPE_SUPPORT is None:
                Path2D.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Pose2DStamped
            if Pose2DStamped.__class__._TYPE_SUPPORT is None:
                Pose2DStamped.__class__.__import_type_support__()

            from nav_2d_msgs.msg import Twist2D
            if Twist2D.__class__._TYPE_SUPPORT is None:
                Twist2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScoreTrajectory_Request(metaclass=Metaclass_ScoreTrajectory_Request):
    """Message class 'ScoreTrajectory_Request'."""

    __slots__ = [
        '_pose',
        '_velocity',
        '_global_plan',
        '_traj',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'pose': 'nav_2d_msgs/Pose2DStamped',
        'velocity': 'nav_2d_msgs/Twist2D',
        'global_plan': 'nav_2d_msgs/Path2D',
        'traj': 'dwb_msgs/Trajectory2D',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Pose2DStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Twist2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav_2d_msgs', 'msg'], 'Path2D'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'Trajectory2D'),  # noqa: E501
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
        from nav_2d_msgs.msg import Pose2DStamped
        self.pose = kwargs.get('pose', Pose2DStamped())
        from nav_2d_msgs.msg import Twist2D
        self.velocity = kwargs.get('velocity', Twist2D())
        from nav_2d_msgs.msg import Path2D
        self.global_plan = kwargs.get('global_plan', Path2D())
        from dwb_msgs.msg import Trajectory2D
        self.traj = kwargs.get('traj', Trajectory2D())

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
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.global_plan != other.global_plan:
            return False
        if self.traj != other.traj:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from nav_2d_msgs.msg import Pose2DStamped
            assert \
                isinstance(value, Pose2DStamped), \
                "The 'pose' field must be a sub message of type 'Pose2DStamped'"
        self._pose = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from nav_2d_msgs.msg import Twist2D
            assert \
                isinstance(value, Twist2D), \
                "The 'velocity' field must be a sub message of type 'Twist2D'"
        self._velocity = value

    @builtins.property
    def global_plan(self):
        """Message field 'global_plan'."""
        return self._global_plan

    @global_plan.setter
    def global_plan(self, value):
        if self._check_fields:
            from nav_2d_msgs.msg import Path2D
            assert \
                isinstance(value, Path2D), \
                "The 'global_plan' field must be a sub message of type 'Path2D'"
        self._global_plan = value

    @builtins.property
    def traj(self):
        """Message field 'traj'."""
        return self._traj

    @traj.setter
    def traj(self, value):
        if self._check_fields:
            from dwb_msgs.msg import Trajectory2D
            assert \
                isinstance(value, Trajectory2D), \
                "The 'traj' field must be a sub message of type 'Trajectory2D'"
        self._traj = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ScoreTrajectory_Response(type):
    """Metaclass of message 'ScoreTrajectory_Response'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__score_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__score_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__score_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__score_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__score_trajectory__response

            from dwb_msgs.msg import TrajectoryScore
            if TrajectoryScore.__class__._TYPE_SUPPORT is None:
                TrajectoryScore.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScoreTrajectory_Response(metaclass=Metaclass_ScoreTrajectory_Response):
    """Message class 'ScoreTrajectory_Response'."""

    __slots__ = [
        '_score',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'score': 'dwb_msgs/TrajectoryScore',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['dwb_msgs', 'msg'], 'TrajectoryScore'),  # noqa: E501
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
        from dwb_msgs.msg import TrajectoryScore
        self.score = kwargs.get('score', TrajectoryScore())

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
        if self.score != other.score:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def score(self):
        """Message field 'score'."""
        return self._score

    @score.setter
    def score(self, value):
        if self._check_fields:
            from dwb_msgs.msg import TrajectoryScore
            assert \
                isinstance(value, TrajectoryScore), \
                "The 'score' field must be a sub message of type 'TrajectoryScore'"
        self._score = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ScoreTrajectory_Event(type):
    """Metaclass of message 'ScoreTrajectory_Event'."""

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
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__score_trajectory__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__score_trajectory__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__score_trajectory__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__score_trajectory__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__score_trajectory__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ScoreTrajectory_Event(metaclass=Metaclass_ScoreTrajectory_Event):
    """Message class 'ScoreTrajectory_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<dwb_msgs/ScoreTrajectory_Request, 1>',
        'response': 'sequence<dwb_msgs/ScoreTrajectory_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dwb_msgs', 'srv'], 'ScoreTrajectory_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['dwb_msgs', 'srv'], 'ScoreTrajectory_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from dwb_msgs.srv import ScoreTrajectory_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, ScoreTrajectory_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'ScoreTrajectory_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from dwb_msgs.srv import ScoreTrajectory_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, ScoreTrajectory_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'ScoreTrajectory_Response'"
        self._response = value


class Metaclass_ScoreTrajectory(type):
    """Metaclass of service 'ScoreTrajectory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dwb_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dwb_msgs.srv.ScoreTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__score_trajectory

            from dwb_msgs.srv import _score_trajectory
            if _score_trajectory.Metaclass_ScoreTrajectory_Request._TYPE_SUPPORT is None:
                _score_trajectory.Metaclass_ScoreTrajectory_Request.__import_type_support__()
            if _score_trajectory.Metaclass_ScoreTrajectory_Response._TYPE_SUPPORT is None:
                _score_trajectory.Metaclass_ScoreTrajectory_Response.__import_type_support__()
            if _score_trajectory.Metaclass_ScoreTrajectory_Event._TYPE_SUPPORT is None:
                _score_trajectory.Metaclass_ScoreTrajectory_Event.__import_type_support__()


class ScoreTrajectory(metaclass=Metaclass_ScoreTrajectory):
    from dwb_msgs.srv._score_trajectory import ScoreTrajectory_Request as Request
    from dwb_msgs.srv._score_trajectory import ScoreTrajectory_Response as Response
    from dwb_msgs.srv._score_trajectory import ScoreTrajectory_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
