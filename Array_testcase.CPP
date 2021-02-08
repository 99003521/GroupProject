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

TEST(MyArray, Empty_Cosnstructor) {
     MyArray <int> p(5);
     p.append(6)
     p.append(2)
     EX
  E
