#include <iostream>
#include "ch10_1.h"

int main(){

    BankAccount poorFella("Jack Empty", "9392012012032416082213", 200);
    poorFella.show();
    poorFella.deposit(10);
    poorFella.show();
    poorFella.withdraw(99.99);
    poorFella.show();
    poorFella.deposit(50);
    poorFella.show();

    return 0;
}