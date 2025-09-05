// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ParameterReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__TRAITS_HPP_

#include "px4_msgs/msg/detail/parameter_req__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const px4_msgs::msg::ParameterReq & msg,
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

  // member: param_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param_name.size() == 0) {
      out << "param_name: []\n";
    } else {
      out << "param_name:\n";
      for (auto item : msg.param_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set: ";
    value_to_yaml(msg.set, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const px4_msgs::msg::ParameterReq & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<px4_msgs::msg::ParameterReq>()
{
  return "px4_msgs::msg::ParameterReq";
}

template<>
inline const char * name<px4_msgs::msg::ParameterReq>()
{
  return "px4_msgs/msg/ParameterReq";
}

template<>
struct has_fixed_size<px4_msgs::msg::ParameterReq>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ParameterReq>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ParameterReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__TRAITS_HPP_
