#include <gtest/gtest.h>
using namespace testing;

extern "C" {
#include "b.h"
}

#include "b_mocks.h"

// Demonstrate some basic assertions.
TEST(b_test, TestSignalChain_1) {
    a_y1 = 13;
    b_step();
    EXPECT_EQ(c_u1, 13) << "b_step shall convey value via chain 1.";
}

TEST(b_test, TestSignalChain_2) {
  EXPECT_CALL(b_mocks, a_get_y2()).WillRepeatedly(Return(13));
  EXPECT_CALL(b_mocks, c_set_u2(13));
  b_step();
}

TEST(b_test, TestSignalChain_3) {
  EXPECT_CALL(b_mocks, a_get_y3_and_set_u5(_)).WillRepeatedly(Return(13));
  EXPECT_CALL(b_mocks, c_set_u3_and_u4(13, _));
  b_step();
}

TEST(b_test, TestSignalChain_4) {
  a_y4 = 13;
  EXPECT_CALL(b_mocks, c_set_u3_and_u4(_, 13));
  //b_step();
  
}

TEST(b_test, TestSignalChain_x) {
}
