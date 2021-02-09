#include"AccountBase.h"
#include"SavingsAccount.h"
#include"CreditAccount.h"
#include<gtest/gtest.h>
namespace {
TEST(AccountBase,CreditAccount){
AccountBase *A2=new SavingsAccount("789","abhi",16000);
A2->debit(2000);
A2->credit(3000);
EXPECT_EQ(16000,A2->getBalance());
}
TEST(AccountBase,SavingsAccount){
AccountBase *A1=new SavingsAccount("456","abhi",13000);
A1->debit(2000);
A1->credit(3000);
EXPECT_EQ(13000,A1->getBalance());
}