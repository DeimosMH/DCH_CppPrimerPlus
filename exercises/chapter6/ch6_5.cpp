#include <iostream>
#include <cstdlib>

int main(){
    using namespace std;
    long double dIncome{}, dTax{}; 

    cout << "Enter income in tvarps: ";
    while(cin >> dIncome){
        if(dIncome < 0)
            break;

        if (dIncome <= 5000)
            dTax = 0;
        else if(dIncome <= 15000)
            dTax = (dIncome - 5000) * 0.1;
        else if(dIncome < 35000)
            dTax = (dIncome - 15000) * 0.15 + 10000 * 0.1;
        else
            dTax = (dIncome - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;

        cout << "Your tax is: " << dTax << " tvarps" << endl;
        cout << "Enter income in tvarps: ";
    }
    return 0;
}