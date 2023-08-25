// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_
#define MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_

#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mqtt_client_interfaces::msg::RosMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5: ";
    value_to_yaml(msg.md5, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: definition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "definition: ";
    value_to_yaml(msg.definition, out);
    out << "\n";
  }

  // member: stamped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamped: ";
    value_to_yaml(msg.stamped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mqtt_client_interfaces::msg::RosMsgType & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mqtt_client_interfaces::msg::RosMsgType>()
{
  return "mqtt_client_interfaces::msg::RosMsgType";
}

template<>
inline const char * name<mqtt_client_interfaces::msg::RosMsgType>()
{
  return "mqtt_client_interfaces/msg/RosMsgType";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::msg::RosMsgType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::msg::RosMsgType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mqtt_client_interfaces::msg::RosMsgType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_
