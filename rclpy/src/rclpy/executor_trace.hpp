#ifndef RCLPY__EXECUTOR_TRACE_HPP_
#define RCLPY__EXECUTOR_TRACE_HPP_


#include <pybind11/pybind11.h>


namespace py = pybind11;

namespace rclpy
{
  void trace_callback_start(uint64_t callback_id);

  void trace_callback_end(uint64_t callback_id);
}

#endif