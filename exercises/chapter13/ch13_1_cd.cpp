#include "ch13_1_cd.h"

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

void Cd::Report() const
{
    std::cout << "\n Performance by: " << performers
              << "\n Album: " << label
              << "\n Number of selections: " << selections
              << "\n Playtime: " << playtime << "\n";
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}