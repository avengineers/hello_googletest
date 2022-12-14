#include <gtest/gtest.h>
using namespace testing;

extern "C" {
#include "c.h"
}

#include "c_mocks.h"

// Demonstrate some basic assertions.
TEST(c_test, TestOne) {
   c_u1 = 7;
   c_init();
   EXPECT_EQ(c_u1, 0) << "Init shall initialize this variable to zero.";
}


TEST(c_test, TestTwo) {
  c_set_u2(13);
  c_step();
  EXPECT_EQ(c_get_y2(), 13) << "Function c_step shall convey input u2 unchanged to output y2.";

  c_set_u2(17);
  EXPECT_EQ(c_get_y2(), 13) << "Function c_set_u2 shall NOT be the one which convey input u2 unchanged to output y2.";

  c_step();
  EXPECT_EQ(c_get_y2(), 17) << "Function c_step shall convey input u2 unchanged to output y2.";
}

