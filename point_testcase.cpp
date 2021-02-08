#include"gpoint.h"
#include "gtest/gtest.h"
using namespace 
{
    TEST(Point,Parameterised_constructor)
{
    Point <int> p1(3,5);
    EXPECT_EQ(1,p1.quadrant())
    Point <int> p2(-2,9);
    EXPECT_EQ(2,P2.quadrant());
    Point <int> P3(-7,-1);
    EXPECT_EQ(3,p3.quadrant());
    Point <int> p4(6,-9);
    EXPECT_EQ(4,p4.quadrant());
}
}
