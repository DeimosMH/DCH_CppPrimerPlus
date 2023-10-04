// pointer.cpp -- our first pointer variable
#include <iostream>
int main()
{
    using namespace std;
    int updates = 6;      // declare a variable
    int *p_updates;       // declare pointer to an int
    p_updates = &updates; // assign address of int to pointer
 
    // express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
 
    // express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;
 
    // use pointer to change value
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    return 0;
}

/*
Here is the output from the program in Listing 4.15:
    Values: updates = 6, *p_updates = 6
    Addresses: &updates = 0x0065fd48, p_updates = 0x0065fd48
    Now updates = 7
*/