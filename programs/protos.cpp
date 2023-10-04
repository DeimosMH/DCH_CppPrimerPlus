// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);      // prototype: no return value
double cube(double x); // prototype: returns a double
int main()
{
    using namespace std;
    cheers(5); // function call
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side); // function call
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n";
    cheers(cube(2)); // prototype protection at work
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}

double cube(double x)
{
    return x * x * x;
}

/*
Cheers! Cheers! Cheers! Cheers! Cheers!
Give me a number: 5
A 5-foot cube has a volume of 125 cubic feet.
Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers! Cheers!

Note that main() calls the type void function cheers() by using the function name
and arguments followed by a semicolon: cheers(5);.This is an example of a function call
statement. 
*/