// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ParameterReq in the package px4_msgs.
typedef struct px4_msgs__msg__ParameterReq
{
  uint64_t timestamp;
  uint8_t param_name[16];
  bool set;
  float value;
} px4_msgs__msg__ParameterReq;

// Struct for a sequence of px4_msgs__msg__ParameterReq.
typedef struct px4_msgs__msg__ParameterReq__Sequence
{
  px4_msgs__msg__ParameterReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__STRUCT_H_
