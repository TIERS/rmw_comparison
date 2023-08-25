// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__BUILDER_HPP_
#define MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__BUILDER_HPP_

#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mqtt_client_interfaces
{

namespace msg
{

namespace builder
{

class Init_RosMsgType_stamped
{
public:
  explicit Init_RosMsgType_stamped(::mqtt_client_interfaces::msg::RosMsgType & msg)
  : msg_(msg)
  {}
  ::mqtt_client_interfaces::msg::RosMsgType stamped(::mqtt_client_interfaces::msg::RosMsgType::_stamped_type arg)
  {
    msg_.stamped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::msg::RosMsgType msg_;
};

class Init_RosMsgType_definition
{
public:
  explicit Init_RosMsgType_definition(::mqtt_client_interfaces::msg::RosMsgType & msg)
  : msg_(msg)
  {}
  Init_RosMsgType_stamped definition(::mqtt_client_interfaces::msg::RosMsgType::_definition_type arg)
  {
    msg_.definition = std::move(arg);
    return Init_RosMsgType_stamped(msg_);
  }

private:
  ::mqtt_client_interfaces::msg::RosMsgType msg_;
};

class Init_RosMsgType_name
{
public:
  explicit Init_RosMsgType_name(::mqtt_client_interfaces::msg::RosMsgType & msg)
  : msg_(msg)
  {}
  Init_RosMsgType_definition name(::mqtt_client_interfaces::msg::RosMsgType::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RosMsgType_definition(msg_);
  }

private:
  ::mqtt_client_interfaces::msg::RosMsgType msg_;
};

class Init_RosMsgType_md5
{
public:
  Init_RosMsgType_md5()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosMsgType_name md5(::mqtt_client_interfaces::msg::RosMsgType::_md5_type arg)
  {
    msg_.md5 = std::move(arg);
    return Init_RosMsgType_name(msg_);
  }

private:
  ::mqtt_client_interfaces::msg::RosMsgType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::msg::RosMsgType>()
{
  return mqtt_client_interfaces::msg::builder::Init_RosMsgType_md5();
}

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__BUILDER_HPP_
