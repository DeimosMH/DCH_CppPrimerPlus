#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include <iostream>
class complex
{
private:
    double rNum; // real number
    double iNum; // imaginary number

public:
    complex();
    complex(double r, double i);
    ~complex();

    friend std::ostream& operator<<(std::ostream& os, const complex& c);
    friend std::istream& operator>>(std::istream& is, complex& c);
    complex operator+(const complex& c) const;
    complex operator-(const complex& c) const;
    complex operator~() const;
    complex operator*(const complex& c) const;
    complex operator*(const double c) const;
    friend complex operator*(const int num, const complex& c) {
        return c * double(num);
    }
    
};

#endif