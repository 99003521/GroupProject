#include "currency.h"
#include <gtest/gtest.h>

namespace {
TEST(Currency, Addition) {

  Currency t1(100,56);
  Currency t2(300,8);
  Currency t3=t1+t2;

  EXPECT_EQ(400,t3.getRupee());
  EXPECT_EQ(64,t3.getPaise());
}
}