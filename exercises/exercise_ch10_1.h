#ifndef BANK_H_
#define BANK_H_

#include <iostream>
#include <cstring>

class BankAccount
{
private:
    std::string name;    // or std::string name;
    std::string acctnum; // or std::string acctnum;
    double balance;

public:
    BankAccount(const std::string &client, const std::string &num, double bal = 0.0);
    void show(void) const;
    void deposit(double cash);
    void withdraw(double cash);
};
#endif
