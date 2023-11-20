#include "ch13_2_classic.h"

Classic::Classic(const char *pw,const char *pf,const  char *lb, int n, double x)
    : Cd(pf, lb, n, x)
{
    primaryWork = new char[strlen(pw) + 1];
    strcpy(primaryWork, pw);
}

Classic::Classic(const Classic &d)
    : Cd(d)
{
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
}

Classic::Classic()
    : Cd()
{
    primaryWork = new char[1];
    primaryWork[0] = '\0';
}

Classic::~Classic()
{
    std::cout << "\nprw delete: " << primaryWork;
    delete [] primaryWork;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout <<
        "\n Primary work: " << primaryWork <<
        "\n";
}

Classic &Classic::operator=(const Classic &d)
{
    if(this == &d)
        return *this;
    Cd::operator=(d);
    delete [] primaryWork;
    primaryWork = new char[strlen(d.primaryWork) + 1];
    strcpy(primaryWork, d.primaryWork);
    return *this;
}