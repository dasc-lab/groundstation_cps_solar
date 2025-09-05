# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SimpleBatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SimpleBatteryStatus(type):
    """Metaclass of message 'SimpleBatteryStatus'."""

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
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.SimpleBatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__simple_battery_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__simple_battery_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__simple_battery_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__simple_battery_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__simple_battery_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SimpleBatteryStatus(metaclass=Metaclass_SimpleBatteryStatus):
    """Message class 'SimpleBatteryStatus'."""

    __slots__ = [
        '_timestamp',
        '_voltage_v',
        '_voltage_filtered_v',
        '_current_a',
        '_current_filtered_a',
        '_current_average_a',
        '_discharged_mah',
        '_remaining',
        '_scale',
        '_time_remaining_s',
        '_cell_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'voltage_v': 'float',
        'voltage_filtered_v': 'float',
        'current_a': 'float',
        'current_filtered_a': 'float',
        'current_average_a': 'float',
        'discharged_mah': 'float',
        'remaining': 'float',
        'scale': 'float',
        'time_remaining_s': 'float',
        'cell_count': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.voltage_filtered_v = kwargs.get('voltage_filtered_v', float())
        self.current_a = kwargs.get('current_a', float())
        self.current_filtered_a = kwargs.get('current_filtered_a', float())
        self.current_average_a = kwargs.get('current_average_a', float())
        self.discharged_mah = kwargs.get('discharged_mah', float())
        self.remaining = kwargs.get('remaining', float())
        self.scale = kwargs.get('scale', float())
        self.time_remaining_s = kwargs.get('time_remaining_s', float())
        self.cell_count = kwargs.get('cell_count', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.voltage_v != other.voltage_v:
            return False
        if self.voltage_filtered_v != other.voltage_filtered_v:
            return False
        if self.current_a != other.current_a:
            return False
        if self.current_filtered_a != other.current_filtered_a:
            return False
        if self.current_average_a != other.current_average_a:
            return False
        if self.discharged_mah != other.discharged_mah:
            return False
        if self.remaining != other.remaining:
            return False
        if self.scale != other.scale:
            return False
        if self.time_remaining_s != other.time_remaining_s:
            return False
        if self.cell_count != other.cell_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_v' field must be of type 'float'"
        self._voltage_v = value

    @property
    def voltage_filtered_v(self):
        """Message field 'voltage_filtered_v'."""
        return self._voltage_filtered_v

    @voltage_filtered_v.setter
    def voltage_filtered_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_filtered_v' field must be of type 'float'"
        self._voltage_filtered_v = value

    @property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
        self._current_a = value

    @property
    def current_filtered_a(self):
        """Message field 'current_filtered_a'."""
        return self._current_filtered_a

    @current_filtered_a.setter
    def current_filtered_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_filtered_a' field must be of type 'float'"
        self._current_filtered_a = value

    @property
    def current_average_a(self):
        """Message field 'current_average_a'."""
        return self._current_average_a

    @current_average_a.setter
    def current_average_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_average_a' field must be of type 'float'"
        self._current_average_a = value

    @property
    def discharged_mah(self):
        """Message field 'discharged_mah'."""
        return self._discharged_mah

    @discharged_mah.setter
    def discharged_mah(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'discharged_mah' field must be of type 'float'"
        self._discharged_mah = value

    @property
    def remaining(self):
        """Message field 'remaining'."""
        return self._remaining

    @remaining.setter
    def remaining(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remaining' field must be of type 'float'"
        self._remaining = value

    @property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'scale' field must be of type 'float'"
        self._scale = value

    @property
    def time_remaining_s(self):
        """Message field 'time_remaining_s'."""
        return self._time_remaining_s

    @time_remaining_s.setter
    def time_remaining_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_remaining_s' field must be of type 'float'"
        self._time_remaining_s = value

    @property
    def cell_count(self):
        """Message field 'cell_count'."""
        return self._cell_count

    @cell_count.setter
    def cell_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cell_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cell_count' field must be an unsigned integer in [0, 255]"
        self._cell_count = value
