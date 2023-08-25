// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_

#include "mqtt_client_interfaces/srv/detail/is_connected__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mqtt_client_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::IsConnected_Request>()
{
  return ::mqtt_client_interfaces::srv::IsConnected_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mqtt_client_interfaces


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_IsConnected_Response_connected
{
public:
  Init_IsConnected_Response_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mqtt_client_interfaces::srv::IsConnected_Response connected(::mqtt_client_interfaces::srv::IsConnected_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::IsConnected_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::IsConnected_Response>()
{
  return mqtt_client_interfaces::srv::builder::Init_IsConnected_Response_connected();
}

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
