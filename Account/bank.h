#ifndef __BANK_H
#define __BANK_H

#include<string>
#include "account.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Bank {
  string bank_name;
  string bank_number;
  double m_balance;
  vector <Account> Acc;

  public:
  Bank();
  Bank(string);
  Bank(string,string);
  
  string add(Account&);
  double add(double);
  double getBalance() const;
  void dispay() const;

};
#endif
