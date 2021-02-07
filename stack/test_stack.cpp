#include "stack.h"
#include <gtest/gtest.h>
namespace{
    /**
     * @brief Construct a new TEST object for push
     * Pushing value into a stack
     * 
     */
    TEST(Stack, push_op){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(333,c1.peek());
        // EXPECT_EQ(0,c1.peek());
    }
    /**
     * @brief Construct a new TEST object for pop
     * Poping up the pushed value
     * 
     */
    TEST(Stack, pop){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(222,c1.pop());
        // EXPECT_EQ(0,c1.peek());
    }
    /**
     * @brief Construct a new TEST object for peek
     * 
     */
    TEST(Stack, peek){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(333,c1.peek());
        // EXPECT_EQ(0,c1.peek());
    }
    /**
     * @brief Construct a new TEST object empty function
     * 
     */
    TEST(Stack, isEmpty){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(false,c1.isEmpty());
        // EXPECT_EQ(0,c1.peek());
    }
    /**
     * @brief Construct a new TEST object for checking  if stack is full
     * 
     */
    TEST(Stack, full){
        MyStack<int> c1;
        c1.push(111);
        c1.push(222);
        c1.push(333);
        EXPECT_EQ(false,c1.isFull());
        // EXPECT_EQ(0,c1.peek());
    }



}
