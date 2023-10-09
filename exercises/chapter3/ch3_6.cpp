#include <iostream>

int main() 
{
    using namespace std;

    unsigned long long llMilesDriven {};
    unsigned long long llUsedGasoline {};

    cout << "Enter how many miles you have driven: ";
    cin >> llMilesDriven;

    cout << "Enter how many gallons of gasoline you have used: ";
    cin >> llUsedGasoline;

    cout << (double)llMilesDriven / llUsedGasoline;
    cout << " miles per gallon your car have gotten";
}
