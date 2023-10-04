#include <iostream>
#include "exercise_ch9_4_sales.h"

using namespace SALES;


void fnPrintMenu()
{
    std::cout
        << "\nPlease select:\n"
        << "\ta) non-interactive version\tb) interactive version\n"
        << "\tc) print all sales"
        << "\t\td) quit" << std::endl;
}


int main(){
    char cMenu;
    Sales *mySales = new Sales[2];

    fnPrintMenu();
    std::cin >> cMenu;

    while (true)
    {
        switch (cMenu)
        {
        case 'a':
            double temp[QUARTERS];
            for (int i = 0; i < QUARTERS; ++i)
            {
                while (!(std::cin >> temp[i]))
                {
                    std::cin.clear(); // reset input
                    while (std::cin.get() != '\n')
                        continue; // get rid of bad input
                    std::cout << "Please enter a number: ";
                }
            }
            setSales(mySales[0], temp, QUARTERS);
            break;
        case 'b':
            setSales(mySales[1]);
            break;
        case 'c':
            for (int i = 0; i < 2; ++i)
                showSales(mySales[i]);
            break;
        case 'd':
        //     break;
        // case 'e':
            std::cout << "Bye-bye!\n";
            return 0;
        default:
            std::cout << "Please enter: a, b, c or e: ";
            break;
        }

        fnPrintMenu();
        std::cin >> cMenu;
    }

    delete[] mySales;

    return 0;
}

/*
The first file should be a header file that contains the namespace.The second file
should be a source code file that extends the namespace to provide definitions for
the three prototyped functions. The third file should declare two Sales objects. It
should use the interactive version of setSales() to provide values for one structure
and the non-interactive version of setSales() to provide values for the second
structure. It should display the contents of both structures by using
showSales().
*/