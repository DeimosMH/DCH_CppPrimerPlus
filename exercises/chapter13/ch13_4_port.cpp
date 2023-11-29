// >>>>> A <<<<<
#include "ch13_4_port.h"

Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    brand[strlen(br)] = '\0';

    strcpy(style, st);
    style[strlen(st)] = '\0';
    bottles = b;
}

Port::Port(const Port &p) // copy constructor
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    brand[strlen(p.brand)] = '\0';

    strcpy(style, p.style);
    style[strlen(p.style)] = '\0';

    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{
    if(this == &p)
        return *this;
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    brand[strlen(p.brand)] = '\0';

    strcpy(style, p.style);
    style[strlen(p.style)] = '\0';

    bottles = p.bottles;

    return *this;
}

Port &Port::operator+=(int b) // adds b to bottles
{
    this->bottles += b;
    return *this;
}

Port &Port::operator-=(int b) // subtracts b from bottles, if available
{
    this->bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "Brand: "   << brand << endl;
    cout << "Kind: "    << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream &operator<<(ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}