#include <iostream>

class Bank{
    int account;
    float balance;


public:
    void setAccount(int AccountIn);
    void setBalance(float BalanceIn);

    int getAccount();
    float getBalance();


    void print();

};

void Bank::setAccount(int accountIn)
{
    account = accountIn;
}

void Bank::setBalance(float balanceIn)
{
    balance = balanceIn;
}

void Bank::print()
{
    cout<<account<<" "<<balance;
}

int Bank::getAccount()
{
    return account;
}

float Bank::getBalance()
{
    return balance;
}