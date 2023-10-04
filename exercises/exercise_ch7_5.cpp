#include <iostream>
using namespace std;

double fnFactorial(int iFactor);

int main(){
    int iFactor{};
    double dFactorial{};

    cout << "\nEnter a number to get factorial: ";
    while (!(cin >> iFactor))
    {
        cin.clear(); // reset input
        while (cin.get() != '\n')
            continue; // get rid of bad input
        cout << "Please enter a number: ";
    }
    
    dFactorial = fnFactorial(iFactor);
    cout << "\nFactorial: " << dFactorial << endl;

    return 0;
}

double fnFactorial(int iFactor){
    if(iFactor - 1 > 0)
        return iFactor * fnFactorial(--iFactor);
    return 1;
}