// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#ifndef DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__TRAITS_HPP_
#define DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__TRAITS_HPP_

#include "dasc_msgs/msg/detail/di_trajectory__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twists'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'accelerations'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const dasc_msgs::msg::DITrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dt: ";
    value_to_yaml(msg.dt, out);
    out << "\n";
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: twists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.twists.size() == 0) {
      out << "twists: []\n";
    } else {
      out << "twists:\n";
      for (auto item : msg.twists) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: accelerations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accelerations.size() == 0) {
      out << "accelerations: []\n";
    } else {
      out << "accelerations:\n";
      for (auto item : msg.accelerations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const dasc_msgs::msg::DITrajectory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<dasc_msgs::msg::DITrajectory>()
{
  return "dasc_msgs::msg::DITrajectory";
}

template<>
inline const char * name<dasc_msgs::msg::DITrajectory>()
{
  return "dasc_msgs/msg/DITrajectory";
}

template<>
struct has_fixed_size<dasc_msgs::msg::DITrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dasc_msgs::msg::DITrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dasc_msgs::msg::DITrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__TRAITS_HPP_
