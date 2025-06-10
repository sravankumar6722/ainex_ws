// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ainex_interfaces:action/ExecuteGesture.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ainex_interfaces/action/execute_gesture.hpp"


#ifndef AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__BUILDER_HPP_
#define AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ainex_interfaces/action/detail/execute_gesture__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_Goal_gesture_name
{
public:
  Init_ExecuteGesture_Goal_gesture_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ainex_interfaces::action::ExecuteGesture_Goal gesture_name(::ainex_interfaces::action::ExecuteGesture_Goal::_gesture_name_type arg)
  {
    msg_.gesture_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_Goal>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_Goal_gesture_name();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_Result_message
{
public:
  explicit Init_ExecuteGesture_Result_message(::ainex_interfaces::action::ExecuteGesture_Result & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_Result message(::ainex_interfaces::action::ExecuteGesture_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_Result msg_;
};

class Init_ExecuteGesture_Result_success
{
public:
  Init_ExecuteGesture_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_Result_message success(::ainex_interfaces::action::ExecuteGesture_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteGesture_Result_message(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_Result>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_Result_success();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_Feedback_status
{
public:
  Init_ExecuteGesture_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ainex_interfaces::action::ExecuteGesture_Feedback status(::ainex_interfaces::action::ExecuteGesture_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_Feedback>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_Feedback_status();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteGesture_SendGoal_Request_goal(::ainex_interfaces::action::ExecuteGesture_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Request goal(::ainex_interfaces::action::ExecuteGesture_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Request msg_;
};

class Init_ExecuteGesture_SendGoal_Request_goal_id
{
public:
  Init_ExecuteGesture_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_SendGoal_Request_goal goal_id(::ainex_interfaces::action::ExecuteGesture_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteGesture_SendGoal_Request_goal(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_SendGoal_Request>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_SendGoal_Request_goal_id();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteGesture_SendGoal_Response_stamp(::ainex_interfaces::action::ExecuteGesture_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Response stamp(::ainex_interfaces::action::ExecuteGesture_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Response msg_;
};

class Init_ExecuteGesture_SendGoal_Response_accepted
{
public:
  Init_ExecuteGesture_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_SendGoal_Response_stamp accepted(::ainex_interfaces::action::ExecuteGesture_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteGesture_SendGoal_Response_stamp(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_SendGoal_Response>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_SendGoal_Response_accepted();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_SendGoal_Event_response
{
public:
  explicit Init_ExecuteGesture_SendGoal_Event_response(::ainex_interfaces::action::ExecuteGesture_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Event response(::ainex_interfaces::action::ExecuteGesture_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Event msg_;
};

class Init_ExecuteGesture_SendGoal_Event_request
{
public:
  explicit Init_ExecuteGesture_SendGoal_Event_request(::ainex_interfaces::action::ExecuteGesture_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteGesture_SendGoal_Event_response request(::ainex_interfaces::action::ExecuteGesture_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteGesture_SendGoal_Event_response(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Event msg_;
};

class Init_ExecuteGesture_SendGoal_Event_info
{
public:
  Init_ExecuteGesture_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_SendGoal_Event_request info(::ainex_interfaces::action::ExecuteGesture_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteGesture_SendGoal_Event_request(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_SendGoal_Event>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_SendGoal_Event_info();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_GetResult_Request_goal_id
{
public:
  Init_ExecuteGesture_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Request goal_id(::ainex_interfaces::action::ExecuteGesture_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_GetResult_Request>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_GetResult_Request_goal_id();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_GetResult_Response_result
{
public:
  explicit Init_ExecuteGesture_GetResult_Response_result(::ainex_interfaces::action::ExecuteGesture_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Response result(::ainex_interfaces::action::ExecuteGesture_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Response msg_;
};

class Init_ExecuteGesture_GetResult_Response_status
{
public:
  Init_ExecuteGesture_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_GetResult_Response_result status(::ainex_interfaces::action::ExecuteGesture_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteGesture_GetResult_Response_result(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_GetResult_Response>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_GetResult_Response_status();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_GetResult_Event_response
{
public:
  explicit Init_ExecuteGesture_GetResult_Event_response(::ainex_interfaces::action::ExecuteGesture_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Event response(::ainex_interfaces::action::ExecuteGesture_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Event msg_;
};

class Init_ExecuteGesture_GetResult_Event_request
{
public:
  explicit Init_ExecuteGesture_GetResult_Event_request(::ainex_interfaces::action::ExecuteGesture_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteGesture_GetResult_Event_response request(::ainex_interfaces::action::ExecuteGesture_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteGesture_GetResult_Event_response(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Event msg_;
};

class Init_ExecuteGesture_GetResult_Event_info
{
public:
  Init_ExecuteGesture_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_GetResult_Event_request info(::ainex_interfaces::action::ExecuteGesture_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteGesture_GetResult_Event_request(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_GetResult_Event>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_GetResult_Event_info();
}

}  // namespace ainex_interfaces


namespace ainex_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteGesture_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteGesture_FeedbackMessage_feedback(::ainex_interfaces::action::ExecuteGesture_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ainex_interfaces::action::ExecuteGesture_FeedbackMessage feedback(::ainex_interfaces::action::ExecuteGesture_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_FeedbackMessage msg_;
};

class Init_ExecuteGesture_FeedbackMessage_goal_id
{
public:
  Init_ExecuteGesture_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteGesture_FeedbackMessage_feedback goal_id(::ainex_interfaces::action::ExecuteGesture_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteGesture_FeedbackMessage_feedback(msg_);
  }

private:
  ::ainex_interfaces::action::ExecuteGesture_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ainex_interfaces::action::ExecuteGesture_FeedbackMessage>()
{
  return ainex_interfaces::action::builder::Init_ExecuteGesture_FeedbackMessage_goal_id();
}

}  // namespace ainex_interfaces

#endif  // AINEX_INTERFACES__ACTION__DETAIL__EXECUTE_GESTURE__BUILDER_HPP_
