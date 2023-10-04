#include <iostream>                          // a PREPROCESSOR directive

int main()                                   // function header
{                      
    using namespace std;

    int iHours = 0;
    int iMinutes = 0;

    cout << "\nEnter the number of hours: ";
    cin >> iHours;
    cout << "Enter the number of minutes: ";
    cin >> iMinutes;

    cout << "Time: " << iHours << ":" << iMinutes << endl;

    return 0;                                // terminate main()
} 