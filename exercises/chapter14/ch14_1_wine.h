#include <iostream>
#include <string>
#include <valarray>
#include "ch14_1_pair.h"

#ifndef _WINE_H_
#define _WINE_H_

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
private:
    std::string _name;
    Pair<std::valarray<int>, std::valarray<int>> _data; // Pair <vintage years, bootles>
public:
    // default constructor
    Wine();
    // initialize label to l, number of years to y,
    // vintage years to yr[], bottles to bot[]
    Wine(const char *l, int y, const int yr[], const int bot[]);
    // initialize label to l, number of years to y,
    // create array objects of length y
    Wine(const char *l, int y);

    void GetBottles(Wine &);
    Wine &Label();
    
    int sum(Wine &); 
};

#endif