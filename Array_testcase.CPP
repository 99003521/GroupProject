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
    TEST(MyArray,Search)
{
    MyArray <int> p(8);
    p.append(10);
    p.append(5);
    p.append(3);
    EXPECT_TRUE(p.search(6));
    EXPECT_FALSE(p.search(13));

}


    
