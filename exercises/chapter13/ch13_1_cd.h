#ifndef _CD_H_
#define _CD_H_

#include <iostream>
#include <cstring>

// base class
class Cd
{ // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections;  // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char *s1,const  char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();       // needed - Classic() 
    // ~Cd();   // not needed - lack of dynamic memory allocation in both (thus default is ok)
    virtual void Report() const; // reports all CD data
    Cd &operator=(const Cd &d);
};

#endif