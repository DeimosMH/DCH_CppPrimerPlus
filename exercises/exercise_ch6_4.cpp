#include <iostream>
#include <cstring>

const int sizeBOP = 5;
const int strsize = 50;
// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    using namespace std;
    char cMenu;

    cout << "Please enter one of the following choices:" << endl
         << "a. display by name\t b. display by title" << endl
         << "c. display by bopname\t d. display by preference" << endl
         << "q. quit" << endl;

    cout << "Enter your choice: ";
    cin >> cMenu;

    bop *stBOP = new bop[sizeBOP];
    strcpy(stBOP[0].fullname, "Wimp Macho");
    strcpy(stBOP[0].title, "Chef");
    strcpy(stBOP[0].bopname, "BOPA");
    stBOP[0].preference = 0;

    strcpy(stBOP[1].fullname, "Raki Rhodes");
    strcpy(stBOP[1].title, "Junior Programmer");
    strcpy(stBOP[1].bopname, "RAKI");
    stBOP[1].preference = 1;

    strcpy(stBOP[2].fullname, "Celia Laiter");
    strcpy(stBOP[2].title, "Senior Programmer");
    strcpy(stBOP[2].bopname, "MIPS");
    stBOP[2].preference = 2;

    strcpy(stBOP[3].fullname, "Hoppy Hipman");
    strcpy(stBOP[3].title, "Analyst trainee");
    strcpy(stBOP[3].bopname, "MEHA");
    stBOP[3].preference = 1;

    strcpy(stBOP[4].fullname, "Pat Hand");
    strcpy(stBOP[4].title, "Boss");
    strcpy(stBOP[4].bopname, "LOOPY");
    stBOP[4].preference = 2;

    while (cMenu != 'q')
    {
        switch (cMenu)
        {
        case 'a':
            for (int i{}; i < sizeBOP; ++i)
                cout << stBOP[i].fullname << endl;
            break;
        case 'b':
            for (int i{}; i < sizeBOP; ++i)
                cout << stBOP[i].title << endl;
            break;
        case 'c':
            for (int i{}; i < sizeBOP; ++i)
                cout << stBOP[i].bopname << endl;
            break;
        case 'd':
            for (int i{}; i < sizeBOP; ++i)
            {
                switch (stBOP[i].preference)
                {
                case 0: cout << stBOP[i].fullname << endl;  break;
                case 1: cout << stBOP[i].title << endl;     break;
                case 2: cout << stBOP[i].bopname << endl;   break;
                default: cout << "No preference" << endl;   break;
                }
            }
            break;
        default:
            cout << "Please enter: a, b, c, d, or q. : ";
            break;
        }
        cout << "Next choice: ";
        cin >> cMenu;
    }
    delete[] stBOP;
    cout << "Bye!" << endl;

    return 0;
}