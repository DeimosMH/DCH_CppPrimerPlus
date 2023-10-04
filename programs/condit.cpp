// condit.cpp -- using the conditional operator
#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b; // c = a if a > b, else c = b
    cout << " is " << c << endl;
    return 0;
}

/*
    Enter two integers: 123 213
    The larger of 123 and 213 is 213
*/