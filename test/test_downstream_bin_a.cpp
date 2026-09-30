#include <gtest/gtest.h>

#include "downstream_bin_a/downstream_bin_a.hpp"

TEST(DownstreamBinA, ZeroInitializedContextIsNotValid)
{
  EXPECT_FALSE(downstream_bin_a::zero_initialized_context_is_valid());
}
