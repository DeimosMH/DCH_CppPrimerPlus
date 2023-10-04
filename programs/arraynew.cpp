// arraynew.cpp -- using the new operator for arrays
#include <iostream>
int main()
{
    using namespace std;
    double *p3 = new double[3]; // space for 3 doubles
    p3[0] = 0.2;                // treat p3 like an array name
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1; // increment the pointer
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1; // point back to beginning
    delete[] p3; // free the memory
    return 0;
}

/*
Here is the output from the program in Listing 4.18:
    p3[1] is 0.5.
    Now p3[0] is 0.5 and p3[1] is 0.8.


As you can see, arraynew.cpp uses the pointer p3 as if it were the name of an array,
with p3[0] as the first element, and so on.The fundamental difference between an array
name and a pointer appears in the following line:
    p3 = p3 + 1; // okay for pointers, wrong for array names
*/