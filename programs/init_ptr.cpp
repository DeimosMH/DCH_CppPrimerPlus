// init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens
         << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;
    return 0;
}

/*
Here is some sample output from the program in Listing 4.16:
    Value of higgens = 5; Address of higgens = 0012FED4
    Value of *pt = 5; Value of pt = 0012FED4
*/