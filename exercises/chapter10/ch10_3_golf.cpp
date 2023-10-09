#include <iostream>
#include "ch10_3_golf.h"

Golf::Golf()
{
    data.fullname[0] = '\0';
    data.handicap = 0;
}

Golf::~Golf()
{
}

void Golf::setgolf(const char *name, int hc)
{
    strcpy(data.fullname, name);
    data.handicap = hc;
}

int Golf::setgolf()
{
    std::cin.clear(); // reset input
    while (std::cin.get() != '\n')
        continue; // get rid of bad input

    std::cout << "\nEnter the name: ";
    // std::cin >> data.fullname;
    std::cin.getline(data.fullname, Len);

    std::cout << "Enter the handicap: ";
    // std::cin >> data.handicap;
    while (!(std::cin >> data.handicap))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a number: ";
    }
    // std::cin.get(); // clear the input buffer

    if (data.fullname == "")
    {
        return 0;
    }
    return 1;
}

void Golf::handicap(int hc)
{
    data.handicap = hc;
}

void Golf::showgolf()
{
    std::cout << "\t" << data.fullname << "\t\t";
    std::cout << data.handicap << std::endl;
}
