#include <iostream>
#include "BackAccount.hpp"

BackAccount::BackAccount(int balance) : _balance(balance)
{

}

int BackAccount::getBalance()
{
    return this->_balance;
}

void BackAccount::deposit(int amount)
{
    if(amount > 0)
    {
        this->_balance += amount;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

void BackAccount::withdrawal(int amount)
{
    if(amount > 0 && this->_balance > amount)
    {
        this->_balance -= amount;
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}

void BackAccount::print()
{
    std::cout << getBalance() << std::endl;
}