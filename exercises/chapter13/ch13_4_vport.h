#ifndef _VPORT_H_
#define _VPORT_H_

#include "ch13_4_port.h"

// derived class
class VintagePort : public Port // style necessarily = "vintage"
{
private:
    char *nickname; // i.e., "The Noble" or "Old Velvet", etc.
    int year;       // vintage year
public:
    VintagePort();
    VintagePort(const char *br, int b, const char *nn, int y);
    VintagePort(const VintagePort &vp);
    ~VintagePort() { delete[] nickname; }

    // >>>>> B <<<<<
    // The rest of the methiods don't need to be redefined
    // because there the same operations are used in both cases
    VintagePort &operator=(const VintagePort &vp);
    
    // virtual in the base class remains virtual in the derived class,
    // even if the virtual keyword is omitted in the derived class
    // The result is the same as if it would be vitrtual void Show() const below 
    void Show() const;
    
    // >>>>> C <<<<<
    // It is not virtual, because friend keyword
    // cannot be combined with keyword virtual 
    friend ostream &operator<<(ostream &os, const VintagePort &vp);
};

#endif