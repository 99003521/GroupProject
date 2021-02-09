#ifndef __TRAINEE_H
#define __TRAINEE_H
#include<string>
#include "employee.h"
#include<iostream>
class Trainee : public Employee {
  std::string m_track;
  double score;
  public:
 Trainee(std::string id, std::string name, double salary,int exp,int code,int reprtees);
  void payroll();
  void appraisal();
  void display();
  int getScore();
};

#endif
  
