// fltadd.cpp -- precision problems with float
#include <iostream>

int main()
{
    using namespace std;

    float a = 2.34E+22f;
    float b = a + 1.0f; // you try to 1 to 23 digit - value is lost (float can represent up to 7 digits)

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl; // thus the result is 0

    return 0;
}