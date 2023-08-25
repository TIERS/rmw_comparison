// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_

#include "mqtt_client_interfaces/srv/detail/is_connected__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mqtt_client_interfaces::srv::IsConnected_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mqtt_client_interfaces::srv::IsConnected_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mqtt_client_interfaces::srv::IsConnected_Request>()
{
  return "mqtt_client_interfaces::srv::IsConnected_Request";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::IsConnected_Request>()
{
  return "mqtt_client_interfaces/srv/IsConnected_Request";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::IsConnected_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::IsConnected_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mqtt_client_interfaces::srv::IsConnected_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mqtt_client_interfaces::srv::IsConnected_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connected: ";
    value_to_yaml(msg.connected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mqtt_client_interfaces::srv::IsConnected_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mqtt_client_interfaces::srv::IsConnected_Response>()
{
  return "mqtt_client_interfaces::srv::IsConnected_Response";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::IsConnected_Response>()
{
  return "mqtt_client_interfaces/srv/IsConnected_Response";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::IsConnected_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::IsConnected_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mqtt_client_interfaces::srv::IsConnected_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mqtt_client_interfaces::srv::IsConnected>()
{
  return "mqtt_client_interfaces::srv::IsConnected";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::IsConnected>()
{
  return "mqtt_client_interfaces/srv/IsConnected";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::IsConnected>
  : std::integral_constant<
    bool,
    has_fixed_size<mqtt_client_interfaces::srv::IsConnected_Request>::value &&
    has_fixed_size<mqtt_client_interfaces::srv::IsConnected_Response>::value
  >
{
};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::IsConnected>
  : std::integral_constant<
    bool,
    has_bounded_size<mqtt_client_interfaces::srv::IsConnected_Request>::value &&
    has_bounded_size<mqtt_client_interfaces::srv::IsConnected_Response>::value
  >
{
};

template<>
struct is_service<mqtt_client_interfaces::srv::IsConnected>
  : std::true_type
{
};

template<>
struct is_service_request<mqtt_client_interfaces::srv::IsConnected_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mqtt_client_interfaces::srv::IsConnected_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__TRAITS_HPP_
