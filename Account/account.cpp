#include "account.h"
/**
 * @brief Construct a new Account:: Account object
 * default constructor
 * constructor is invoked when a object of call is created
 * 
 */
Account::Account():
    m_accNumber(""),m_accName(""), m_balance(0.0)
{
}

/**
 * @brief Construct a new Account:: Account object
 * parametrized constructor
 * 
 * @param number inatilize account number
 * @param name inatilize account name
 * @param balance inatilize account balance
 */
Account::Account(std::string number ,std::string name,double balance):
    m_accNumber(number),m_accName(name), m_balance(balance)
{
}

/**
 * @brief Construct a new Account:: Account object
 * parametrized constructor
 * @param number inatilize account number
 * @param name inatilize account name
 * 
 * set balance to 0
 */
Account::Account(std::string number,std::string name):
    m_accNumber(number),m_accName(name), m_balance(0)
{
}

/**
 * @brief Construct a new Account:: Account object
 * 
 * copy constructor
 * 
 * @param reference reference of one class object is passed as argument
 */
Account::Account(const Account& reference):
    m_accNumber(reference.m_accNumber),m_accName(reference.m_accNumber), m_balance(reference.m_balance)
{
}
double Account::debit(double amount)
{
    m_balance -= amount;
    return m_balance;
    /**
     * @brief debit function which gives amount deducted when a transaction is done
     * 
     */
}
double Account::credit(double amount)
{
    m_balance += amount;
    return m_balance;
    /**
     * @brief credit function which gives amount added when a transaction is done
     * 
     * 
     */
}
double Account::getBalance() const
{
    return m_balance;
    /**
     * @brief get balance function to get the balance from the class
     * 
     */
}
void Account::dispay() const
{
    std::cout << "Account Number: " << m_accNumber
            << "Account Name: "  << m_accName
            << "Account Balance:" << m_balance;
            /**
             * @brief display the details of the account
             * 
             */
}