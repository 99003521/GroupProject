#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer,Postpaid) {
    PostpaidCustomer P1("8275","mishra","iphone",645,67);
    P1.postpaidbill(600);
    P1.credit(250);
    P1.makeCall(20);
    EXPECT_EQ(200,P1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer P1("4565","Arya","samsung",377,22);
    P1.credit(500);
    P1.makeCall(50);
    EXPECT_EQ(840,P1.getBalance());
}

}