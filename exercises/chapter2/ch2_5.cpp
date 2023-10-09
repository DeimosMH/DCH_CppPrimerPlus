#include <iostream>                          // a PREPROCESSOR directive

float fnCelsiusToFahrenheit(float fCelsius)
{
    return (1.8 * fCelsius + 32);
}

int main()                                   // function header
{                      
    using namespace std;

    float fCelsius = 0;

    cout << "\nPlease enter a Celsius value: ";
    cin >> fCelsius;
    cout << fCelsius << " degrees Celsius is " << fnCelsiusToFahrenheit(fCelsius) << " degrees Farhenheit\n";

    return 0;                                // terminate main()
} 