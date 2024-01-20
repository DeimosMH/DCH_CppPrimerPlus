#include <iostream>
#include <string>
#include <valarray>

#ifndef _WINE_H_
#define _WINE_H_

typedef  std::valarray<int> ArrayInt;
typedef  std::pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
public:
    // default constructor
    Wine();
    // initialize label to l, number of years to y,
    // vintage years to yr[], bottles to bot[]
    Wine(const char *l, int y, const int yr[], const int bot[]);
    // initialize label to l, number of years to y,
    // create array objects of length y
    Wine(const char *l, int y);

    ~Wine();

    void GetBottles();
    void Show();

    const std::string &Label() const;
    int sum(); 
};

#endif