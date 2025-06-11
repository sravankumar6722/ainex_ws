// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ainex_interfaces:srv/GetServoStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/get_servo_status.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__BUILDER_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ainex_interfaces/srv/detail/get_servo_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ainex_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::GetServoStatus_Request>()
{
  return ::ainex_interfaces::srv::GetServoStatus_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetServoStatus_Response_message
{
public:
  explicit Init_GetServoStatus_Response_message(::ainex_interfaces::srv::GetServoStatus_Response & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::GetServoStatus_Response message(::ainex_interfaces::srv::GetServoStatus_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Response msg_;
};

class Init_GetServoStatus_Response_success
{
public:
  explicit Init_GetServoStatus_Response_success(::ainex_interfaces::srv::GetServoStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetServoStatus_Response_message success(::ainex_interfaces::srv::GetServoStatus_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetServoStatus_Response_message(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Response msg_;
};

class Init_GetServoStatus_Response_raw_positions
{
public:
  explicit Init_GetServoStatus_Response_raw_positions(::ainex_interfaces::srv::GetServoStatus_Response & msg)
  : msg_(msg)
  {}
  Init_GetServoStatus_Response_success raw_positions(::ainex_interfaces::srv::GetServoStatus_Response::_raw_positions_type arg)
  {
    msg_.raw_positions = std::move(arg);
    return Init_GetServoStatus_Response_success(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Response msg_;
};

class Init_GetServoStatus_Response_angles
{
public:
  Init_GetServoStatus_Response_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetServoStatus_Response_raw_positions angles(::ainex_interfaces::srv::GetServoStatus_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_GetServoStatus_Response_raw_positions(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::GetServoStatus_Response>()
{
  return ainex_interfaces::srv::builder::Init_GetServoStatus_Response_angles();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetServoStatus_Event_response
{
public:
  explicit Init_GetServoStatus_Event_response(::ainex_interfaces::srv::GetServoStatus_Event & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::GetServoStatus_Event response(::ainex_interfaces::srv::GetServoStatus_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Event msg_;
};

class Init_GetServoStatus_Event_request
{
public:
  explicit Init_GetServoStatus_Event_request(::ainex_interfaces::srv::GetServoStatus_Event & msg)
  : msg_(msg)
  {}
  Init_GetServoStatus_Event_response request(::ainex_interfaces::srv::GetServoStatus_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetServoStatus_Event_response(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Event msg_;
};

class Init_GetServoStatus_Event_info
{
public:
  Init_GetServoStatus_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetServoStatus_Event_request info(::ainex_interfaces::srv::GetServoStatus_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetServoStatus_Event_request(msg_);
  }

private:
  ::ainex_interfaces::srv::GetServoStatus_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::GetServoStatus_Event>()
{
  return ainex_interfaces::srv::builder::Init_GetServoStatus_Event_info();
}

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__GET_SERVO_STATUS__BUILDER_HPP_
