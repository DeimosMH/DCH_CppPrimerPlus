#include <iostream>
#include <string>
#include "ch10_7_plorg.h"

Plorg::Plorg(std::string newName, int newCI)
{
    if (newName.length() > MAX)
    {
        std::cout << "Too long name - assigning default";
        name = "Plorga";
    }
    else
    {
        name = newName;
    }

    CI = newCI;
}

void Plorg::ChangeCI(int newCI)
{
    CI = newCI;
}

void Plorg::Report()
{
    std::cout << "\nThis Plorg is named: " << name;
    std::cout << "\nAnd his contentment index is: " << CI;
}