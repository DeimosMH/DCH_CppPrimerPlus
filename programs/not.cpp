// not.cpp -- using the not operator
#include <iostream>
#include <climits>
bool is_int(double);
int main()
{
    using namespace std;
    double num;
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) // continue while num is not int-able
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int(num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}
bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN) // use climits values
        return true;
    else
        return false;
}

/*
    Yo, dude! Enter an integer value: 6234128679
    Out of range -- please try again: -8000222333
    Out of range -- please try again: 99999
    You've entered the integer 99999
    Bye
*/