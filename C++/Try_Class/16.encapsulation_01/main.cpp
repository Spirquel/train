#include <iostream>
#include "BankAccount/BankAccount.hpp"

int main()
{
    BankAccount bank{10};
    std::cout << bank.getBalance() << std::endl;
    bank.deposit(15);
    std::cout << bank.getBalance() << std::endl;
    bank.withdrawal(15);
    std::cout << bank.getBalance() << std::endl;

    return 0;
}