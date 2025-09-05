// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SimpleBatteryStatus in the package px4_msgs.
typedef struct px4_msgs__msg__SimpleBatteryStatus
{
  uint64_t timestamp;
  float voltage_v;
  float voltage_filtered_v;
  float current_a;
  float current_filtered_a;
  float current_average_a;
  float discharged_mah;
  float remaining;
  float scale;
  float time_remaining_s;
  uint8_t cell_count;
} px4_msgs__msg__SimpleBatteryStatus;

// Struct for a sequence of px4_msgs__msg__SimpleBatteryStatus.
typedef struct px4_msgs__msg__SimpleBatteryStatus__Sequence
{
  px4_msgs__msg__SimpleBatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SimpleBatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__STRUCT_H_
