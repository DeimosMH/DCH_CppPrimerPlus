#include <iostream>

const int _RATIO_FEET_TO_INCH {12};
const float _RATIO_INCH_TO_METER {0.0254};
const float _CONV_POUNDS_TO_KG {2.2};

double fnBMI(double dHeight, double dWeight);   // function prototype

int main() 
{
    using namespace std;

    unsigned int uiHeightFeet {};
    double ulHeightInches {};
    double ulWeight {};

    cout << "Enter your height in feet and (the rest) in inches. Round to whole units.\n";
    
    cout << "Enter your height in feet:__\b\b";
    cin >> uiHeightFeet;
    cout << "Enter your height in inches:__\b\b";
    cin >> ulHeightInches;
    cout << "Enter your  weight in pounds:__\b\b";
    cin >> ulWeight;

    ulHeightInches = (uiHeightFeet * _RATIO_FEET_TO_INCH) + ulHeightInches;   // height in inches
    cout << "\nYour height in inches is " << ulHeightInches << endl;

    cout << "Your BMI is " << fnBMI(ulHeightInches, ulWeight) << endl;
}

/// @brief BMI calculator
/// @param dHeight in inches
/// @param dWeight in pounds
/// @return BMI value in double
double fnBMI(double dHeight, double dWeight)
{
    dHeight = dHeight * _RATIO_INCH_TO_METER;                   // height in meters
    std::cout << "Your height in meters is " << dHeight << std::endl;

    dWeight = dWeight / _CONV_POUNDS_TO_KG;                    // weight in kilograms 
    std::cout << "Your weight in kilograms is " << dWeight << std::endl << std::endl;

    return dWeight / (dHeight * dHeight);
}