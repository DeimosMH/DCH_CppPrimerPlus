#include <iostream>

const int _CONV_ARCSECONDS_TO_ARCMINUTES {60};
const int _CONV_ARCMINUTES_TO_DEGREES {60};

double fnDecimalLattitude(int iDegrees, int iArcMinutes, int iArcSeconds);

int main() 
{
    using namespace std;

    int iDegrees {};
    int iArcMinutes {};
    int iArcSeconds {};

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    
    cout << "First, enter the degrees: ";
    cin >> iDegrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> iArcMinutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> iArcSeconds;

    cout << iDegrees << " degrees, " << iArcMinutes << " minutes, " << iArcSeconds << " seconds = ";
    cout << fnDecimalLattitude(iDegrees, iArcMinutes, iArcSeconds) << " degrees\n";
}

/// @brief Returns the latitude with decimal format
double fnDecimalLattitude(int iDegrees, int iArcMinutes, int iArcSeconds)
{
    double dDegrees = double(iArcSeconds) / _CONV_ARCSECONDS_TO_ARCMINUTES;
    dDegrees = (iArcMinutes + dDegrees) / _CONV_ARCMINUTES_TO_DEGREES;
    return iDegrees + dDegrees;
}