#include <iostream>                          // a PREPROCESSOR directive

int main()                                   // function header
{                      
    using namespace std;

    double dLightYears = 0;

    cout << "\nEnter the number of light years: ";
    cin >> dLightYears;
    cout << dLightYears << " light years = " << (dLightYears * 63240) << " astronomical units\n";

    return 0;                                // terminate main()
} 