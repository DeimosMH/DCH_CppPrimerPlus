#include "ch13_2_cd.h"

Cd::Cd(const char *s1,const char *s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);

    label = new char[strlen(s2) + 1];
    strcpy(label, s2);

    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d){
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);

    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';

    label = new char[1];
    label[0] = '\0';
    
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    std::cout << "\nper delete: " << performers;
    std::cout << "\nlbl delete: " << label;
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout <<
        "\n Performance by: " << performers <<
        "\n Album: " << label <<
        "\n Number of selections: " << selections << 
        "\n Playtime: " << playtime <<
        "\n";
}

Cd &Cd::operator=(const Cd &d)
{
    if(this == &d)
        return *this;

    delete [] performers;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);

    delete [] label;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);    
    
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}