#include <iostream>
#include "exercise_ch9_4_sales.h"

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void SALES::setSales(Sales &s, const double ar[], int n)
{
    if (n > QUARTERS)
        return;

    s.average = 0;
    s.min = ar[0];
    s.max = ar[0];
    for (int i = 0; i < n; ++i)
    {
        if (i < (n - 1))
        {
            if (s.min > ar[i + 1])
                s.min = ar[i + 1];

            if (s.max < ar[i + 1])
                s.max = ar[i + 1];
        }

        s.sales[i] += ar[i];
        s.average += ar[i];
    }

    s.average /= n;
}
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void SALES::setSales(Sales &s)
{
    s.average = 0;
    s.min = 0;
    s.max = 0;

    std::cout << "\nSet sales for quarters: ";
    for (int i = 0; i < QUARTERS; ++i)
    {
        std::cout << "\n-> sale " << i << " : ";
        while (!(std::cin >> s.sales[i]))
        {
            std::cin.clear(); // reset input
            while (std::cin.get() != '\n')
                continue; // get rid of bad input
            std::cout << "Please enter a number: ";
        }
    }

    s.min = s.sales[0];
    for (int i = 0; i < QUARTERS; ++i)
    {
        if (i < (QUARTERS - 1))
        {
            if (s.min > s.sales[i + 1])
                s.min = s.sales[i + 1];

            if (s.max < s.sales[i + 1])
                s.max = s.sales[i + 1];
        }
        s.average += s.sales[i];
    }

    s.average /= QUARTERS;
}
// display all information in structure s
void SALES::showSales(const Sales &s)
{
    std::cout << "\n\n";
    std::cout << "\t Average: \t" << s.average;
    std::cout << "\t Max:     \t" << s.max;
    std::cout << "\t Min:     \t" << s.min << "\n";

    for (int i = 0; i < QUARTERS; i++)
        std::cout << "\t Sale [" << i << "] : \t" << s.sales[i];
}