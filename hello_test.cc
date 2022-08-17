#include <gtest/gtest.h>
using namespace testing;

extern "C" {
   #include "hello.h"
}

#include "mockup.h"

// Demonstrate some basic assertions.
TEST(TestSuiteOne, TestOneInTestSuiteOne) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}


TEST(TestSuiteOne, TestTwoInTestSuiteOne) {
  EXPECT_EQ(1, get_one()) << "Hello";
}


TEST(TestSuiteOne, TestThreeInTestSuiteOne) {
  EXPECT_CALL(wrapc, some_number(1))
      .Times(AtLeast(1))
      .WillRepeatedly(Return(1));
  EXPECT_EQ(1, get_two());
}
