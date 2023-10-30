// stone.cpp -- user-defined conversions
#include <iostream>
using std::cout;
using std::endl;
#include "ch11_5_stone.h"
void display(const Stonewt &st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    Stonewt informalStone(30, Stonewt::Mode::STONE);
    Stonewt formalStone(60.5, Stonewt::Mode::STONE);
    Stonewt stupidPound(90.5, Stonewt::Mode::POUND);
    Stonewt formalPound(120.5, Stonewt::Mode::POUND_FP);

    cout << "informal Stone weight: "
        << informalStone << endl;
    cout << "formal Stone weight: "
        << formalStone << endl;
    cout << "stupid Pound weight: "
        << stupidPound << endl;
    stupidPound.changeMode(Stonewt::Mode::STONE);
    cout << "stupid Pound weight: "
        << stupidPound << endl;
    cout << "formal Pound weight: "
        << formalPound << endl;

    Stonewt addedStone(0, Stonewt::Mode::STONE);
    addedStone = formalPound + stupidPound;
    cout << "Formal pound + stupid pound = "
        << addedStone << endl;

    addedStone = formalPound - stupidPound;
    cout << "Formal pound - stupid pound = "
        << addedStone << endl;

    addedStone = formalPound * stupidPound;
    cout << "Formal pound * stupid pound = "
        << addedStone << endl;

    // cout << "The celebrity weighed ";
    // incognito.show_stn();
    // cout << "The detective weighed ";
    // wolfe.show_stn();
    // cout << "The President weighed ";
    // taft.show_lbs();
    // incognito = 276.8; // uses constructor for conversion
    // taft = 325;        // same as taft = Stonewt(325);
    // cout << "After dinner, the celebrity weighed ";
    // incognito.show_stn();
    // cout << "After dinner, the President weighed ";
    // taft.show_lbs();
    // display(taft, 2);
    // cout << "The wrestler weighed even more.\n";
    // display(422, 2);
    // cout << "No stone left unearned\n";
    return 0;
}
// void display(const Stonewt &st, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Wow! ";
        // st.show_stn();
//     }
// }

/*
The celebrity weighed 19 stone, 9 pounds
The detective weighed 20 stone, 5.7 pounds
The President weighed 302 pounds
After dinner, the celebrity weighed 19 stone, 10.8 pounds
After dinner, the President weighed 325 pounds
Wow! 23 stone, 3 pounds
Wow! 23 stone, 3 pounds
The wrestler weighed even more.
Wow! 30 stone, 2 pounds
Wow! 30 stone, 2 pounds
No stone left unearned
*/