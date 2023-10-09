#include <iostream>

const unsigned int _CONV_FACTOR {12};

int main() 
{
    using namespace std;

    unsigned int uiHeightInput {0};
    unsigned int uiHeightFeet {0};
    unsigned int uiHeightInches {0};

    cout << "Enter your height in inches:__\b\b";
    cin >> uiHeightInput;

    uiHeightFeet = uiHeightInput / _CONV_FACTOR;
    uiHeightInches = uiHeightInput % _CONV_FACTOR;

    cout << "Your height is: " << uiHeightFeet << " feet and " << uiHeightInches << " inches." << endl;
}