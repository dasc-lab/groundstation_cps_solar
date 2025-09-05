// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SimpleBatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__TRAITS_HPP_

#include "px4_msgs/msg/detail/simple_battery_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::SimpleBatteryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_v: ";
    value_to_yaml(msg.voltage_v, out);
    out << "\n";
  }

  // member: voltage_filtered_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage_filtered_v: ";
    value_to_yaml(msg.voltage_filtered_v, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: current_filtered_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_filtered_a: ";
    value_to_yaml(msg.current_filtered_a, out);
    out << "\n";
  }

  // member: current_average_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_average_a: ";
    value_to_yaml(msg.current_average_a, out);
    out << "\n";
  }

  // member: discharged_mah
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "discharged_mah: ";
    value_to_yaml(msg.discharged_mah, out);
    out << "\n";
  }

  // member: remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining: ";
    value_to_yaml(msg.remaining, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: time_remaining_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_remaining_s: ";
    value_to_yaml(msg.time_remaining_s, out);
    out << "\n";
  }

  // member: cell_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_count: ";
    value_to_yaml(msg.cell_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::SimpleBatteryStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::SimpleBatteryStatus>()
{
  return "px4_msgs::msg::SimpleBatteryStatus";
}

template<>
inline const char * name<px4_msgs::msg::SimpleBatteryStatus>()
{
  return "px4_msgs/msg/SimpleBatteryStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::SimpleBatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SimpleBatteryStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SimpleBatteryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SIMPLE_BATTERY_STATUS__TRAITS_HPP_
