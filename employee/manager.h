#ifndef __MANAGER_H
#define __MANAGER_H

#include "employee.h"
#include<iostream>
#include<string>

class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees);
  void payroll();
  void appraisal();
  void display();
};

#endif
  
