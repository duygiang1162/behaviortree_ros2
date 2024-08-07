// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behaviortree_ros2:action/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__BUILDER_HPP_
#define BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behaviortree_ros2/action/detail/sleep__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_Goal_msec_timeout
{
public:
  Init_Sleep_Goal_msec_timeout()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behaviortree_ros2::action::Sleep_Goal msec_timeout(::behaviortree_ros2::action::Sleep_Goal::_msec_timeout_type arg)
  {
    msg_.msec_timeout = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_Goal>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_Goal_msec_timeout();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_Result_done
{
public:
  Init_Sleep_Result_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behaviortree_ros2::action::Sleep_Result done(::behaviortree_ros2::action::Sleep_Result::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_Result>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_Result_done();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_Feedback_cycle
{
public:
  Init_Sleep_Feedback_cycle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behaviortree_ros2::action::Sleep_Feedback cycle(::behaviortree_ros2::action::Sleep_Feedback::_cycle_type arg)
  {
    msg_.cycle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_Feedback>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_Feedback_cycle();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_SendGoal_Request_goal
{
public:
  explicit Init_Sleep_SendGoal_Request_goal(::behaviortree_ros2::action::Sleep_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::behaviortree_ros2::action::Sleep_SendGoal_Request goal(::behaviortree_ros2::action::Sleep_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_SendGoal_Request msg_;
};

class Init_Sleep_SendGoal_Request_goal_id
{
public:
  Init_Sleep_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sleep_SendGoal_Request_goal goal_id(::behaviortree_ros2::action::Sleep_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sleep_SendGoal_Request_goal(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_SendGoal_Request>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_SendGoal_Request_goal_id();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_SendGoal_Response_stamp
{
public:
  explicit Init_Sleep_SendGoal_Response_stamp(::behaviortree_ros2::action::Sleep_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::behaviortree_ros2::action::Sleep_SendGoal_Response stamp(::behaviortree_ros2::action::Sleep_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_SendGoal_Response msg_;
};

class Init_Sleep_SendGoal_Response_accepted
{
public:
  Init_Sleep_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sleep_SendGoal_Response_stamp accepted(::behaviortree_ros2::action::Sleep_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Sleep_SendGoal_Response_stamp(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_SendGoal_Response>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_SendGoal_Response_accepted();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_GetResult_Request_goal_id
{
public:
  Init_Sleep_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behaviortree_ros2::action::Sleep_GetResult_Request goal_id(::behaviortree_ros2::action::Sleep_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_GetResult_Request>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_GetResult_Request_goal_id();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_GetResult_Response_result
{
public:
  explicit Init_Sleep_GetResult_Response_result(::behaviortree_ros2::action::Sleep_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::behaviortree_ros2::action::Sleep_GetResult_Response result(::behaviortree_ros2::action::Sleep_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_GetResult_Response msg_;
};

class Init_Sleep_GetResult_Response_status
{
public:
  Init_Sleep_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sleep_GetResult_Response_result status(::behaviortree_ros2::action::Sleep_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Sleep_GetResult_Response_result(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_GetResult_Response>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_GetResult_Response_status();
}

}  // namespace behaviortree_ros2


namespace behaviortree_ros2
{

namespace action
{

namespace builder
{

class Init_Sleep_FeedbackMessage_feedback
{
public:
  explicit Init_Sleep_FeedbackMessage_feedback(::behaviortree_ros2::action::Sleep_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::behaviortree_ros2::action::Sleep_FeedbackMessage feedback(::behaviortree_ros2::action::Sleep_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_FeedbackMessage msg_;
};

class Init_Sleep_FeedbackMessage_goal_id
{
public:
  Init_Sleep_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sleep_FeedbackMessage_feedback goal_id(::behaviortree_ros2::action::Sleep_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Sleep_FeedbackMessage_feedback(msg_);
  }

private:
  ::behaviortree_ros2::action::Sleep_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::behaviortree_ros2::action::Sleep_FeedbackMessage>()
{
  return behaviortree_ros2::action::builder::Init_Sleep_FeedbackMessage_goal_id();
}

}  // namespace behaviortree_ros2

#endif  // BEHAVIORTREE_ROS2__ACTION__DETAIL__SLEEP__BUILDER_HPP_
