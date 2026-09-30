#ifndef DOWNSTREAM_BIN_A__DOWNSTREAM_BIN_A_HPP_
#define DOWNSTREAM_BIN_A__DOWNSTREAM_BIN_A_HPP_

namespace downstream_bin_a
{

/// rcl_context_is_valid() on a zero-initialized rcl context. Calls into
/// librcl without starting any middleware.
bool zero_initialized_context_is_valid();

}  // namespace downstream_bin_a

#endif  // DOWNSTREAM_BIN_A__DOWNSTREAM_BIN_A_HPP_
