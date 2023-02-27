#include "executor_trace.hpp"

#include <tracetools/tracetools.h>

namespace rclpy
{
  void trace_callback_start(const uint64_t callback_id) {
    TRACEPOINT(callback_start,
      reinterpret_cast<const void *>(callback_id),
      false
    );
  }

  void trace_callback_end(const uint64_t callback_id) {
    TRACEPOINT(callback_end,
      reinterpret_cast<const void *>(callback_id)
    );
  }
}