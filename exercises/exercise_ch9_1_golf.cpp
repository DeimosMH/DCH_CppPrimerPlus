#include <iostream>
#include "exercise_ch9_1_golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    std::cin.clear(); // reset input
    while (std::cin.get() != '\n')
        continue; // get rid of bad input

    std::cout << "\nEnter the name: ";
    // std::cin >> g.fullname;
    std::cin.getline(g.fullname, Len) ;
    
    std::cout << "Enter the handicap: ";
    // std::cin >> g.handicap;
    while (!(std::cin >> g.handicap))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a number: ";
    }
    // std::cin.get(); // clear the input buffer

    if (g.fullname == "")
    {
        return 0;
    }
    return 1;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    std::cout << "\t" << g.fullname << "\t\t";
    std::cout << g.handicap << std::endl;
}
