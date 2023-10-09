#include <iostream>                          // a PREPROCESSOR directive

int main()                                   // function header
{                                            // start of function body
    using namespace std;

    int iAge = 0;
    
    cout << "\nEnter your age: ";
    cin >> iAge;
    cout << "Your age in months is " << iAge * 12 << "\n";

    return 0;                                // terminate main()
} 