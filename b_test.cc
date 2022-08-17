#include <gtest/gtest.h>
using namespace testing;

extern "C" {
#include "b.h"
}

#include "b_mocks.h"

// Demonstrate some basic assertions.
TEST(TestSuiteOne, TestSignalChain_1) {
    a_y1 = 13;
    b_step();
    EXPECT_EQ(c_u1, 13) << "b_step shall convey value via chain 1.";

    a_y1 = 47;
    b_step();
    EXPECT_EQ(c_u1, 47) << "b_step shall convey value via chain 1.";
}

TEST(TestSuiteOne, TestSignalChain_2) {
  EXPECT_CALL(b_mocks, a_get_y2()).WillRepeatedly(Return(13));
  EXPECT_CALL(b_mocks, c_set_u2(13));
  b_step();

  EXPECT_CALL(b_mocks, a_get_y2()).WillRepeatedly(Return(47));
  EXPECT_CALL(b_mocks, c_set_u2(47));
  b_step();
}

TEST(TestSuiteOne, TestSignalChain_x) {
}
