// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ainex_interfaces:srv/SetMotionParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/set_motion_params.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__BUILDER_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ainex_interfaces/srv/detail/set_motion_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotionParams_Request_step_degree
{
public:
  explicit Init_SetMotionParams_Request_step_degree(::ainex_interfaces::srv::SetMotionParams_Request & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::SetMotionParams_Request step_degree(::ainex_interfaces::srv::SetMotionParams_Request::_step_degree_type arg)
  {
    msg_.step_degree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Request msg_;
};

class Init_SetMotionParams_Request_acceleration
{
public:
  explicit Init_SetMotionParams_Request_acceleration(::ainex_interfaces::srv::SetMotionParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetMotionParams_Request_step_degree acceleration(::ainex_interfaces::srv::SetMotionParams_Request::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_SetMotionParams_Request_step_degree(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Request msg_;
};

class Init_SetMotionParams_Request_speed
{
public:
  Init_SetMotionParams_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotionParams_Request_acceleration speed(::ainex_interfaces::srv::SetMotionParams_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SetMotionParams_Request_acceleration(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::SetMotionParams_Request>()
{
  return ainex_interfaces::srv::builder::Init_SetMotionParams_Request_speed();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotionParams_Response_message
{
public:
  explicit Init_SetMotionParams_Response_message(::ainex_interfaces::srv::SetMotionParams_Response & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::SetMotionParams_Response message(::ainex_interfaces::srv::SetMotionParams_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Response msg_;
};

class Init_SetMotionParams_Response_success
{
public:
  Init_SetMotionParams_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotionParams_Response_message success(::ainex_interfaces::srv::SetMotionParams_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetMotionParams_Response_message(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::SetMotionParams_Response>()
{
  return ainex_interfaces::srv::builder::Init_SetMotionParams_Response_success();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetMotionParams_Event_response
{
public:
  explicit Init_SetMotionParams_Event_response(::ainex_interfaces::srv::SetMotionParams_Event & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::SetMotionParams_Event response(::ainex_interfaces::srv::SetMotionParams_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Event msg_;
};

class Init_SetMotionParams_Event_request
{
public:
  explicit Init_SetMotionParams_Event_request(::ainex_interfaces::srv::SetMotionParams_Event & msg)
  : msg_(msg)
  {}
  Init_SetMotionParams_Event_response request(::ainex_interfaces::srv::SetMotionParams_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetMotionParams_Event_response(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Event msg_;
};

class Init_SetMotionParams_Event_info
{
public:
  Init_SetMotionParams_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetMotionParams_Event_request info(::ainex_interfaces::srv::SetMotionParams_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetMotionParams_Event_request(msg_);
  }

private:
  ::ainex_interfaces::srv::SetMotionParams_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::SetMotionParams_Event>()
{
  return ainex_interfaces::srv::builder::Init_SetMotionParams_Event_info();
}

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__SET_MOTION_PARAMS__BUILDER_HPP_
