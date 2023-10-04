// structur.cpp -- a simple structure
#include <iostream>
struct inflatable // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest =
        {
            "Glorious Gloria", // name value
            1.88,              // volume value
            29.99              // price value
        };                     // guest is a structure variable of type inflatable

    // It's initialized to the indicated values
    inflatable pal =
        {
            "Audacious Arthur",
            3.12,
            32.99
        }; // pal is a second variable of type inflatable

    // NOTE: some implementations require using
    // static inflatable guest =
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    // pal.name is the name member of the pal variable
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    return 0;
}
/*
One important matter related to the program in Listing 4.11 is where to place the structure
declaration.There are two choices for structur.cpp.You could place the declaration
inside the main() function, just after the opening brace.The second choice, and the one
made here, is to place it outside and preceding main().When a declaration occurs outside
any function, it’s called an external declaration. For this program, there is no practical difference
between the two choices. But for programs consisting of two or more functions, the
difference can be crucial.The external declaration can be used by all the functions following
it, whereas the internal declaration can be used only by the function in which the
declaration is found.
*/