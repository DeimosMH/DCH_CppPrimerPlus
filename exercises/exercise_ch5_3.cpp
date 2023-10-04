#include <iostream>

int main() 
{
    using namespace std;
    long double dVal {}, dSum {};

    cout << "Enter a number, the program will sum it all.\n";
    cout << "Enter 0 to exit.\n\n";

    do{
        cout << "Enter a number : ";
        cin >> dVal;
        dSum += dVal;
        cout << "Sum : " << dSum << endl;
    }while (dVal != 0);
    
    cout << "Bye!\n";
    return 0;
}