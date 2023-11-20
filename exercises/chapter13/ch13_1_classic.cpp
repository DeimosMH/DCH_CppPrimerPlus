#include "ch13_1_classic.h"

Classic::Classic(const char *pw,const char *pf,const  char *lb, int n, double x)
    : Cd(pf, lb, n, x)
{
    strcpy(primaryWork, pw);
}

Classic::Classic(const Classic &d)
    : Cd(d)
{
    strcpy(primaryWork, d.primaryWork);
}

Classic::Classic()
    : Cd()
{
    primaryWork[0] = '\0';
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
    strcpy(primaryWork, d.primaryWork);
    return *this;
}