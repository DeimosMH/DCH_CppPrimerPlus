// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring> // or string.h
using namespace std;
char *getname(void); // function prototype
int main()
{
    char *name;       // create pointer but no storage

    name = getname(); // assign address of string to name
    cout << name << " at " << (int *)name << "\n";
    delete[] name;    // memory freed

    name = getname(); // reuse freed memory
    cout << name << " at " << (int *)name << "\n";
    delete[] name; // memory freed again
    return 0;
}
char *getname() // return pointer to new string
{
    char temp[80]; // temporary storage
    cout << "Enter last name: ";
    cin >> temp;
    char *pn = new char[strlen(temp) + 1];
    strcpy(pn, temp); // copy string into smaller space
    
    return pn;        // temp lost when function ends
}

/*
Here is a sample run of the program in Listing 4.22:
    Enter last name: Fredeldumpkin
    Fredeldumpkin at 0x004326b8
    Enter last name: Pook
    Pook at 0x004301c8
*/