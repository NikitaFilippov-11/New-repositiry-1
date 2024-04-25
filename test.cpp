#include "pch.h"
#include "../StaticLib1/framework.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(checkPrimeNumber(11), true);
  EXPECT_EQ(checkPrimeNumber(27), false);
  EXPECT_TRUE(true);
}