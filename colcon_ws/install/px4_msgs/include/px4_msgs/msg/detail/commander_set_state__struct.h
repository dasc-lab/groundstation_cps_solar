// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/CommanderSetState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_DISARMED'.
enum
{
  px4_msgs__msg__CommanderSetState__STATE_DISARMED = 0
};

/// Constant 'STATE_ARMED'.
enum
{
  px4_msgs__msg__CommanderSetState__STATE_ARMED = 1
};

/// Constant 'STATE_OFFBOARD'.
enum
{
  px4_msgs__msg__CommanderSetState__STATE_OFFBOARD = 2
};

/// Constant 'STATE_LAND'.
enum
{
  px4_msgs__msg__CommanderSetState__STATE_LAND = 3
};

// Struct defined in msg/CommanderSetState in the package px4_msgs.
typedef struct px4_msgs__msg__CommanderSetState
{
  uint64_t timestamp;
  uint8_t new_state;
} px4_msgs__msg__CommanderSetState;

// Struct for a sequence of px4_msgs__msg__CommanderSetState.
typedef struct px4_msgs__msg__CommanderSetState__Sequence
{
  px4_msgs__msg__CommanderSetState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__CommanderSetState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_SET_STATE__STRUCT_H_
