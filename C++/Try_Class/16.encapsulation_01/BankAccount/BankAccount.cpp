#include <iostream>
#include "BankAccount.hpp"

BankAccount::BankAccount(int _balance) : balance_(_balance)
{}

BankAccount::~BankAccount()
{
    std::cout << "destruction de l'objet: " << this << std::endl; 
}

int BankAccount::getBalance()
{
    return balance_;
}

void BankAccount::deposit(int _amount)
{
    if(_amount > 0)
    {
        balance_ += _amount;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

void BankAccount::withdrawal(int _amount)
{
    if(_amount > balance_)
    {
        std::cout << "Error" << std::endl;
    }
    else if(_amount > 0)
    {
        balance_ -= _amount;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}