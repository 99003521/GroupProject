#include "stack.h"
#include <gtest/gtest.h>
namespace{

    TEST(Stack, push_op){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(333,c1.peek());
        // EXPECT_EQ(0,c1.peek());
    }

    TEST(Stack, pop){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(222,c1.pop());
        // EXPECT_EQ(0,c1.peek());
    }

    TEST(Stack, peek){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(333,c1.peek());
        // EXPECT_EQ(0,c1.peek());
    }

    TEST(Stack, isEmpty){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(false,c1.isEmpty());
        // EXPECT_EQ(0,c1.peek());
    }

    TEST(Stack, full){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(false,c1.isFull());
        // EXPECT_EQ(0,c1.peek());
    }



}