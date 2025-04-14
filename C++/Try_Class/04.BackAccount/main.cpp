#include <iostream>
#include "BackAccount.hpp"

int main()
{
    BackAccount b{100};
    b.deposit(50);
    b.withdrawal(-5);
    b.getBalance();
    b.print();

    return 0;
}