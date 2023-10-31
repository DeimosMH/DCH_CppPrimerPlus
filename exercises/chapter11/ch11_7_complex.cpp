#include "ch11_7_complex.h"

complex::complex()
{
    rNum = 0;
    iNum = 0;
}

complex::complex(double r, double i)
{
    rNum = r;
    iNum = i;
}

complex::~complex()
{
}

std::ostream& operator<<(std::ostream& os, const complex& c){
    os << "(" << c.rNum << "," << c.iNum << "i)";
    return os;
}

std::istream& operator>>(std::istream& is, complex& c){
    std::cout << "real: ";
    is >> c.rNum;
    std::cout << "imaginary: ";
    is >> c.iNum;
    return is;
}

complex complex::operator+(const complex& c) const{
    complex temp;
    temp.rNum = rNum + c.rNum;
    temp.iNum = iNum + c.iNum;
    return temp;  
}

complex complex::operator-(const complex& c) const{
    complex temp;
    temp.rNum = rNum - c.rNum;
    temp.iNum = iNum - c.iNum;
    return temp;  
}

// (a+bi)(c+di) = (ac−bd) + (ad+bc)i
complex complex::operator*(const complex& c) const{
    complex temp;
    temp.rNum = rNum * c.rNum - iNum * c.iNum;
    temp.iNum = rNum * c.iNum + iNum * c.rNum;
    return temp;  
}

complex complex::operator*(const double c) const{
    complex temp;
    temp.rNum = rNum * c;
    temp.iNum = iNum * c;
    return temp;  
}

complex complex::operator~() const{
    complex temp;
    temp.rNum = rNum;
    temp.iNum = iNum * -1;
    return temp;  
}
