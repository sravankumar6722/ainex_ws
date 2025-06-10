// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ainex_interfaces:srv/MoveHand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/srv/move_hand.hpp"


#ifndef AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__BUILDER_HPP_
#define AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ainex_interfaces/srv/detail/move_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveHand_Request_angles
{
public:
  Init_MoveHand_Request_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ainex_interfaces::srv::MoveHand_Request angles(::ainex_interfaces::srv::MoveHand_Request::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::MoveHand_Request>()
{
  return ainex_interfaces::srv::builder::Init_MoveHand_Request_angles();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveHand_Response_message
{
public:
  explicit Init_MoveHand_Response_message(::ainex_interfaces::srv::MoveHand_Response & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::MoveHand_Response message(::ainex_interfaces::srv::MoveHand_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Response msg_;
};

class Init_MoveHand_Response_success
{
public:
  Init_MoveHand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveHand_Response_message success(::ainex_interfaces::srv::MoveHand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveHand_Response_message(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::MoveHand_Response>()
{
  return ainex_interfaces::srv::builder::Init_MoveHand_Response_success();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveHand_Event_response
{
public:
  explicit Init_MoveHand_Event_response(::ainex_interfaces::srv::MoveHand_Event & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::srv::MoveHand_Event response(::ainex_interfaces::srv::MoveHand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Event msg_;
};

class Init_MoveHand_Event_request
{
public:
  explicit Init_MoveHand_Event_request(::ainex_interfaces::srv::MoveHand_Event & msg)
  : msg_(msg)
  {}
  Init_MoveHand_Event_response request(::ainex_interfaces::srv::MoveHand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveHand_Event_response(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Event msg_;
};

class Init_MoveHand_Event_info
{
public:
  Init_MoveHand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveHand_Event_request info(::ainex_interfaces::srv::MoveHand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveHand_Event_request(msg_);
  }

private:
  ::ainex_interfaces::srv::MoveHand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::srv::MoveHand_Event>()
{
  return ainex_interfaces::srv::builder::Init_MoveHand_Event_info();
}

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__SRV__DETAIL__MOVE_HAND__BUILDER_HPP_
