#include <iostream>
#include "ch10_4_sales.h"

SALES::Deals::Deals(/* args */)
{
}

SALES::Deals::~Deals()
{
}

// copies the lesser of 4 or n items from the array ar
// to the sales member of s and computes and stores the
// average, maximum, and minimum values of the entered items;
// remaining elements of sales, if any, set to 0
void SALES::Deals::setSales(const double ar[], int n)
{
    if (n > QUARTERS)
        return;

    data.average = 0;
    data.min = ar[0];
    data.max = ar[0];
    for (int i = 0; i < n; ++i)
    {
        if (i < (n - 1))
        {
            if (data.min > ar[i + 1])
                data.min = ar[i + 1];

            if (data.max < ar[i + 1])
                data.max = ar[i + 1];
        }

        data.sales[i] = ar[i];
        data.average += ar[i];
    }

    data.average /= n;
}
// gathers sales for 4 quarters interactively, stores them
// in the sales member of s and computes and stores the
// average, maximum, and minimum values
void SALES::Deals::setSales()
{
    data.average = 0;
    data.min = 0;
    data.max = 0;

    std::cout << "\nSet sales for quarters: ";
    for (int i = 0; i < QUARTERS; ++i)
    {
        std::cout << "\n-> sale " << i << " : ";
        while (!(std::cin >> data.sales[i]))
        {
            std::cin.clear(); // reset input
            while (std::cin.get() != '\n')
                continue; // get rid of bad input
            std::cout << "Please enter a number: ";
        }
    }

    data.min = data.sales[0];
    for (int i = 0; i < QUARTERS; ++i)
    {
        if (i < (QUARTERS - 1))
        {
            if (data.min > data.sales[i + 1])
                data.min = data.sales[i + 1];

            if (data.max < data.sales[i + 1])
                data.max = data.sales[i + 1];
        }
        data.average += data.sales[i];
    }

    data.average /= QUARTERS;
}

// display all information in structure s
void SALES::Deals::showSales() const
{
    std::cout << "\n\n";
    std::cout << "\t Average: \t" << data.average;
    std::cout << "\t Max:     \t" << data.max;
    std::cout << "\t Min:     \t" << data.min << "\n";

    for (int i = 0; i < QUARTERS; i++)
        std::cout << "\t Sale [" << i << "] : \t" << data.sales[i];
}