#include "ch10_2.h"
#include <string.h>

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    // strcpy(fname, fn);
    strcpy_s(fname, sizeof(fname), fn);
}

void Person::Show() const
{
    std::cout << "\n" << fname;
    std::cout << " " << lname;
}

void Person::FormalShow() const
{
    std::cout << "\n" << lname;
    std::cout << ", " << fname;
}
