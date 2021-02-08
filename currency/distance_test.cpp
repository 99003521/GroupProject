#include"distance.h"
#include <gtest/gtest.h>
namespace {
TEST(Distance, Addition) {
	Distance d1(8,7);
        Distance d2(1,2);
	Distance d3 = d1 + d2;
	EXPECT_EQ(5, d3.getfeets());
	EXPECT_EQ(6, d3.getinches());
}

TEST(Distance, Difference) {
	Distance d1(15, 7);
	Distance d2(10, 6);
	Distance d3 = d1 - d2;
	EXPECT_EQ(1, d3.getfeets());
	EXPECT_EQ(1, d3.getinches());
}

