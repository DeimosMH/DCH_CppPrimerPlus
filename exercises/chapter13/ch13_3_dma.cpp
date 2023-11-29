// dma.cpp --dma class methods
#include "ch13_3_dma.h"

// absDMA methods
void absDMA::View()
{
    std::cout << "Label:  "  << label  << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

absDMA::absDMA(const std::string &l, int r)
{
    label = new char[l.length() + 1];
    l.copy(label, l.length());
    label[l.length()] = '\0';
    rating = r;
}

absDMA::absDMA(const char *l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    label[std::strlen(l)] = '\0';
    rating = r;
}

absDMA::absDMA(const absDMA &ab)
{
    label = new char[std::strlen(ab.label) + 1];
    std::strcpy(label, ab.label);
    label[std::strlen(ab.label)] = '\0'; // without it, there will be printed trash at the end 
    rating = ab.rating;
}

absDMA::~absDMA()
{
    delete[] label;
}

// baseDMA methods
baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const baseDMA &rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// lacksDMA methods
void lacksDMA::View()
{
    std::cout << "Label:  " << label  << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Color:  " << color  << std::endl;
}

lacksDMA::lacksDMA(const std::string &c, const std::string &l, int r)
    : baseDMA(l, r)
{
    c.copy(color, c.length());
    color[c.length()] = '\0';
}

lacksDMA::lacksDMA(const char *c, const char *l, int r)
    : baseDMA(l, r)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char *c, const baseDMA &rs)
    : baseDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

std::ostream &operator<<(std::ostream &os, const lacksDMA &ls)
{
    os << (const baseDMA &)ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
void hasDMA::View()
{
    std::cout << "Label:  " << label  << std::endl;
    std::cout << "Rating: " << rating << std::endl;
    std::cout << "Style:  " << style  << std::endl;
}

hasDMA::hasDMA(const std::string &s, const std::string &l, int r)
    : baseDMA(l, r)
{
    style = new char[s.length() + 1];
    s.copy(style, s.length());
    style[s.length()] = '\0';
}

hasDMA::hasDMA(const char *s, const char *l, int r)
    : baseDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
    style[std::strlen(s)] = '\0';
}

hasDMA::hasDMA(const char *s, const baseDMA &rs)
    : baseDMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs)
    : baseDMA(hs) // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs)
{
    if (this == &hs)
        return *this;
    baseDMA::operator=(hs); // copy base portion
    delete[] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    style[std::strlen(hs.style)] = '\0';

    return *this;
}

std::ostream &operator<<(std::ostream &os, const hasDMA &hs)
{
    os << (const baseDMA &)hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}