#include <iostream>                          // a PREPROCESSOR directive

int main()                                   // function header
{                                            // start of function body
    using namespace std;                     // make definitions visible

    float iFurlongs = 0;                     // declare variables
    float iYards = 0;

    cout << "Program converting distance from furlong to yards\n";
    cout << "1 furlong = 220 yards\n\n";
    cout << "Enter the distance in furlongs: ";

    cin >> iFurlongs;                        // read input

    cout << iFurlongs << " furlongs = " << iFurlongs * 220 << " yards";

    cout << endl;                            // start a new line
    return 0;                                // terminate main()
} // end of function body