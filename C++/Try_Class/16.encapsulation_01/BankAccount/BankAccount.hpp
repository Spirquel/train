#ifndef _BANKACCOUNT_
    #define _BANKACCOUNT_

class BankAccount
{
    public:
        BankAccount(int _balance);
        ~BankAccount();
        int getBalance();
        void deposit(int _amount);
        void withdrawal(int _amount);

    private:
        int balance_;
};

#endif