#include "downstream_bin_a/downstream_bin_a.hpp"

#include <rcl/context.h>

namespace downstream_bin_a
{

bool zero_initialized_context_is_valid()
{
  rcl_context_t context = rcl_get_zero_initialized_context();
  return rcl_context_is_valid(&context);
}

}  // namespace downstream_bin_a
