// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable // structure definition
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;

    inflatable *ps = new inflatable; // allot memory for structure
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20); // method 1 for member access
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume; // method 2 for member access
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;              // method 2
    cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1
    cout << "Price: $" << ps->price << endl;             // method 1
    delete ps;                                           // free memory used by structure
    return 0;
}

/*
Here is a sample run of the program in Listing 4.21:
    Enter name of inflatable item: Fabulous Frodo
    Enter volume in cubic feet: 1.4
    Enter price: $27.99
    Name: Fabulous Frodo
    Volume: 1.4 cubic feet
    Price: $27.99
*/