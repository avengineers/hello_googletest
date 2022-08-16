#include <gtest/gtest.h>
extern "C" {
   #include "hello.h"
}

#include "mockup.cc"

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
   MockWrapC wrapc;
  EXPECT_CALL(wrapc, some_number(1)).Times(testing::AtLeast(0));
}