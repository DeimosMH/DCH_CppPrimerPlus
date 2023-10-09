#include "ch10_1.h"

BankAccount::BankAccount(const std::string &client, const std::string &num, double bal)
{
    name = client;
    acctnum = num;
    balance = bal;
}

void BankAccount::show(void) const
{
    std::cout << "Name:           \t" << name << std::endl;
    std::cout << "Account number: \t" << acctnum << std::endl;
    std::cout << "Balance:        \t" << balance << std::endl << std::endl;
}

void BankAccount::deposit(double cash)
{
    balance += cash;
}

void BankAccount::withdraw(double cash)
{
    balance -= cash;
}