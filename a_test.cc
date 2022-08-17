#include <gtest/gtest.h>
using namespace testing;

extern "C" {
#include "a.h"
}

#include "a_mocks.h"

// Demonstrate some basic assertions.
TEST(TestSuiteOne, TestOneInTestSuiteOne) {
   a_u1 = 7;
   a_init();
   EXPECT_EQ(a_u1, 0) << "Init shall initialize this variable to zero.";
}


TEST(TestSuiteOne, TestTwoInTestSuiteOne) {
  a_set_u2(13);
  a_step();
  EXPECT_EQ(a_get_y2(), 13) << "Function a_step shall convey input u2 unchanged to output y2.";

  a_set_u2(17);
  EXPECT_EQ(a_get_y2(), 13) << "Function a_set_u2 shall NOT be the one which convey input u2 unchanged to output y2.";

  a_step();
  EXPECT_EQ(a_get_y2(), 17) << "Function a_step shall convey input u2 unchanged to output y2.";
}

