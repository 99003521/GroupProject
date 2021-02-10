#include"employee.h"
#include"engineer.h"
#include"manager.h"
#include"trainee.h"
#include<iostream>
#include<string>
using namespace std;
Employee::Employee(std::string id, std::string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp)
{
}
Manager::Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp),m_projCode(code),m_reportees(reprtees)
   { }
Trainee::Trainee(std::string id, std::string name, double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp)
{    }

Engineer::Engineer(std::string id, std::string name, double salary,int exp,int code):Employee(id,name,salary,exp),m_projCode(code){

}
void Employee::display(){
    std::cout<<m_empid<<" "<<m_name<<" "<<m_salary<<" "<<m_exp<<"\n";
}
int Employee::salary()
{
    return m_salary;
}

int Manager::payroll(){
    int paym = salary();//currency
    cout<<paym<<endl;
    return paym;
}

int Manager::appraisal(){
    int paym = salary();
    int appr = 0.15*paym;
    cout<<appr<<endl;
    return appr;
    
}

// void Trainee::payroll(){
//     int paym = salary();
//     cout<<paym<<endl;
    
// }
int Trainee::getScore(){
    return score;
}

int Trainee::appraisal(){
    int paym = salary();
    int appr=0;
    if (getScore()>50)
        appr = 0.05*paym;
    else
        appr = 0;
    cout<<appr<<endl;
    return appr;
    
}

void Engineer::payroll(){
    int paym= salary();
     cout<<paym<<endl;
     
}

void Engineer::appraisal(){
    int paym = salary();
    int appm = 0.10*paym;
    cout<<appm<<endl;
    
}


