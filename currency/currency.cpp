#include "currency.h"
// #include "Currency.h"
Currency::Currency():m_rupees(0), m_paise(0)
{

}
Currency::Currency(int r):m_rupees(0), m_paise(0)
{
    m_rupees=r;
}
Currency::Currency(int r,int p):m_rupees(0), m_paise(0)
{
    
    if(p>99){
        r+=p/100;
        p=p%100;
    }
    m_rupees=r;
    m_paise=p;
}

Currency Currency::operator+(const Currency& ref)
{
    int m1 = (100*this->m_rupees) + this->m_paise;
    int m2 = (100*ref.m_rupees) + ref.m_paise;
    int sum= m1+m2;
    Currency a(sum/100,sum%100);
    return a;
}

Currency Currency::operator-(const Currency& ref)
{
    int m1 = (100*this->m_rupees) + this->m_paise;
    int m2 = (100*ref.m_rupees) + ref.m_paise;
    int sub= m1-m2;
    Currency a(sub/100,sub%100);
    return a;
}

Currency Currency::operator+(int add)
{
    Currency a((this->m_rupees)+add);
    return a;
}

Currency Currency::operator-(int sub)
{
    Currency a((this->m_rupees)-sub);
    return a;
}

bool Currency::operator>(const Currency& ref)
{
    int m1 = (100*this->m_rupees) + this->m_paise;
    int m2 = (100*ref.m_rupees) + ref.m_paise;
    if(m1>m2){
        return true;
    }
    else{return false;}
}
bool Currency::operator<(const Currency& ref)
{
    int m1 = (100*this->m_rupees) + this->m_paise;
    int m2 = (100*ref.m_rupees) + ref.m_paise;
    if(m1<m2){
        return true;
    }
    else{return false;}
}
bool Currency::operator==(const Currency& ref)
{
    int m1 = (100*this->m_rupees) + this->m_paise;
    int m2 = (100*ref.m_rupees) + ref.m_paise;
    if(m1==m2){
        return true;
    }
    else{return false;}
}

Currency& Currency::operator++()
{
    Currency a((this->m_rupees)+1);
    return a;
}
Currency Currency::operator++(int)
{
    Currency a((this->m_rupees)+1);
    return a;
}

void Currency::dispay()const{
    std::cout<<"Amount\t"<<m_rupees<<"."<<m_paise<<"\n";
}

int Currency::getRupee()const{
    return m_rupees;
}
int Currency::getPaise()const{
    return m_paise;
}