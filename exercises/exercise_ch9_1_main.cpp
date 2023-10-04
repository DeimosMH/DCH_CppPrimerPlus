#include <iostream>
#include "exercise_ch9_1_golf.h"

void fnPrintMenu()
{
    std::cout
        << "\nPlease select:\n"
        << "\ta) non-interactive version\tb) interactive version\n"
        << "\tc) print all players\t\td) change number of players\n"
        << "\te) quit" << std::endl;
}

int main()
{

    char strFullname[40];
    int iHandicap{}, iPlayers{1};
    char cMenu;

    do
    {
        std::cout << "\nEnter the number of players (default is 1, max is 40): ";
        std::cin >> iPlayers;

        if (iPlayers > 40 || iPlayers < 1)
        {
            std::cout << "Invalid number of players, try again\n";
        }
    } while (iPlayers > 40 || iPlayers < 1);

    fnPrintMenu();
    std::cin >> cMenu;

    // golf *andy = new golf[iPlayers];     // dynamic memory allocation [1/2]
    golf andy[iPlayers]; // static memory allocation  [1/1]

    while (true)
    {

        switch (cMenu)
        {
        case 'a':
            for (int i = 0; i < iPlayers; ++i)
            {
                // std::cin >> strFullname >> iHandicap;
                std::cin.clear(); // reset input
                while (std::cin.get() != '\n')
                    continue; // get rid of bad input

                std::cin.getline(strFullname, Len);
                while (!(std::cin >> iHandicap))
                {
                    std::cin.clear(); // reset input
                    while (std::cin.get() != '\n')
                        continue; // get rid of bad input
                    std::cout << "Please enter a number: ";
                }

                setgolf(andy[i], strFullname, iHandicap);
            }
            break;
        case 'b':
            for (size_t i = 0; i < iPlayers; ++i)
            {
                setgolf(andy[i]);
            }
            break;
        case 'c':
            std::cout << "\tName \t\t\tHandicap \n";
            std::cout << "\t---------------------------------\n";
            for (int i = 0; i < iPlayers; ++i)
            {
                showgolf(andy[i]);
            }
            break;
        case 'd':
            do
            {
                std::cout << "\nEnter the number of players (default is 1, max is 40): ";
                std::cin >> iPlayers;

                if (iPlayers > 40 || iPlayers < 1)
                {
                    std::cout << "Invalid number of players, try again\n";
                }
            } while (iPlayers > 40 || iPlayers < 1);
            break;
        case 'e':
            std::cout << "Bye-bye!\n";
            return 0;
        default:
            std::cout << "Please enter: a, b, c or d: ";
            break;
        }
        fnPrintMenu();
        std::cin >> cMenu;
    }

    // delete [] andy;                      // dynamic memory allocation [2/2]
    return 0;
}
