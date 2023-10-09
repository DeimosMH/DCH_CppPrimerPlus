#include <iostream>

const int _CONV_SECONDS_TO_MINUTES {60};
const int _CONV_MINUTES_TO_HOURS {60};
const int _CONV_HOURS_TO_DAYS {24};

int main() 
{
    using namespace std;

    unsigned long long llInputSeconds {}, llSeconds {};
    unsigned long iMinutes {}, iHours {}, iDays {};

    cout << "Enter the number of seconds: ";
    cin >> llInputSeconds;

    iMinutes = llInputSeconds / _CONV_SECONDS_TO_MINUTES;
    llSeconds = llInputSeconds % iMinutes;

    iHours = iMinutes / _CONV_MINUTES_TO_HOURS;
    iMinutes = iMinutes % iHours;

    iDays = iHours / _CONV_HOURS_TO_DAYS;
    iHours = iHours % iDays;

    cout << llInputSeconds << " seconds = " << iDays << " days, " << iHours << " hours, " << iMinutes << " minutes, " << llSeconds << " seconds\n";
}
