// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#ifndef DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_H_
#define DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twists'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'accelerations'
#include "geometry_msgs/msg/detail/accel__struct.h"

// Struct defined in msg/DITrajectory in the package dasc_msgs.
typedef struct dasc_msgs__msg__DITrajectory
{
  std_msgs__msg__Header header;
  double dt;
  geometry_msgs__msg__Pose__Sequence poses;
  geometry_msgs__msg__Twist__Sequence twists;
  geometry_msgs__msg__Accel__Sequence accelerations;
} dasc_msgs__msg__DITrajectory;

// Struct for a sequence of dasc_msgs__msg__DITrajectory.
typedef struct dasc_msgs__msg__DITrajectory__Sequence
{
  dasc_msgs__msg__DITrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dasc_msgs__msg__DITrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_H_
