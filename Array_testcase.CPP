#include"garray.h"
#include <gtest/gtest.h>
namespace {
TEST(MyArray,Parameterised_Constructor)
{
    MyArray <int> p(2);
    p.append(3);
    p.append(4);
    EXPECT_EQ(7,p.sum());
}

