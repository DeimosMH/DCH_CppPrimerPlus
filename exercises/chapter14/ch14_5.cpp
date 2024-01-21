// pe14-5.cpp
#include <iostream>
#include "ch14_5_emp.h"

using namespace std;

int main(void)
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();

    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    // cout << "Using an abstr_emp * pointer:\n";
    // abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    // for (int i = 0; i < 4; i++)
    //     tri[i]->ShowAll();

   
    // Question tests
    /* array of abstract class "abstr_emp" is not allowed:C/C++(604)
    ch14_5.cpp(35, 15): function "abstr_emp::~abstr_emp" is a pure virtual function */

    // abstr_emp tri[4] = {em, fi, hf, hf2};
    // for (int i = 0; i < 4; i++)
    //     tri[i].ShowAll();

    return 0;
}