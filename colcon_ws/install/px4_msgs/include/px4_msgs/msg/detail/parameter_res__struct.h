// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterRes.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_RES__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_RES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ParameterRes in the package px4_msgs.
typedef struct px4_msgs__msg__ParameterRes
{
  uint64_t timestamp;
  uint8_t param_name[16];
  bool is_int32;
  float value;
} px4_msgs__msg__ParameterRes;

// Struct for a sequence of px4_msgs__msg__ParameterRes.
typedef struct px4_msgs__msg__ParameterRes__Sequence
{
  px4_msgs__msg__ParameterRes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterRes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_RES__STRUCT_H_
