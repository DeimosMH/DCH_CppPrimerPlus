#include <iostream>
#include <array>

int main()
{
    using namespace std;
    array<long double, 2> dVal {};
    long double dSum {};

    cout << "Enter two integers: " << endl;
    cout << "  First integer: ";
    cin >> dVal[0];

    cout << "  Second integer: ";
    cin >> dVal[1];

    if (dVal[0] > dVal[1]){
        int temp {};

        temp = dVal[0]; 
        dVal[0] = dVal[1];
        dVal[1] = temp;
    }

    for (size_t i = dVal[0]; i <= dVal[1]; i++)
        dSum += i;

    cout << "Sum of integers from " << dVal[0] << " to " << dVal[1] << " is " << dSum << endl;

    return 0;    
}
