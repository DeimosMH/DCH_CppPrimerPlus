#include <iostream>

int main()
{
    using namespace std;
    int iVal[2] {}, iSum {};

    cout << "Enter two integers: " << endl;
    cout << "  First integer: ";
    cin >> iVal[0];

    cout << "  Second integer: ";
    cin >> iVal[1];

    if (iVal[0] > iVal[1]){
        int temp {};

        temp = iVal[0]; 
        iVal[0] = iVal[1];
        iVal[1] = temp;
    }

    for (size_t i = iVal[0]; i <= iVal[1]; i++)
        iSum += i;

    cout << "Sum of integers from " << iVal[0] << " to " << iVal[1] << " is " << iSum << endl;

    return 0;    
}
