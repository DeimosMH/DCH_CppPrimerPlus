#include <iostream>
#include <string>
#include "ch13_4_vport.h"

const int BASES = 2;
int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    
    Port *civBases[BASES];
    VintagePort *civHist[BASES];

    char *tmp_brand, *tmp_style;
    char *tmp_nickname;
    
    int bottles;
    int years; 

    for (int i = 0; i < BASES; ++i)
    {
        cout << "\nEnter brand of " << i + 1 << " bottled port: ";
        tmp_brand = new char[30];
        cin.getline(tmp_brand, 30);

        cout << "Enter type of the bottled port: ";
        tmp_style = new char[30];
        cin.getline(tmp_style, 30);

        cout << "Enter number of bottles in " << tmp_brand << " port: ";
        while (!(cin >> bottles))
        {
            cin.clear();    // reset input
            while (cin.get() != '\n')
                continue;   // get rid of bad input
            cout << "Please enter a number: ";
        }

        civBases[i] = new Port(tmp_brand, tmp_style, bottles);

        delete tmp_brand, tmp_style;

        while (cin.get() != '\n')
            continue;
    }
    
    for (int i = 0; i < BASES; ++i)
    {
        cout << "\nEnter brand of " << i + 1 << " historical bottled port: ";
        tmp_brand = new char[30];
        cin.getline(tmp_brand, 30);

        cout << "Enter nickname of the historical bottled port: ";
        tmp_nickname = new char[30];
        cin.getline(tmp_nickname, 30);

        cout << "Enter number of bottles in " << tmp_brand << " historical port: ";
        while (!(cin >> bottles))
        {
            cin.clear();    // reset input
            while (cin.get() != '\n')
                continue;   // get rid of bad input
            cout << "Please enter a number: ";
        }

        cout << "Enter founding year of " << tmp_brand << " historical port: ";
        while (!(cin >> years))
        {
            cin.clear();    // reset input
            while (cin.get() != '\n')
                continue;   // get rid of bad input
            cout << "Please enter a number: ";
        }

        civHist[i] = new VintagePort(tmp_brand, bottles, tmp_nickname, years);

        delete tmp_brand, tmp_nickname;

        while (cin.get() != '\n')
            continue;
    }
    
    cout << endl;
    cout << "Result : \n";
    for (int i = 0; i < BASES; i++)
    {
        civBases[i]->Show();
        cout << endl;
    }

    for (int i = 0; i < BASES; i++)
    {
        civHist[i]->Show();
        cout << endl;
    }

    cout << "\nAssigning first two Ports as the same and display via << :\n";

    *civBases[0] = *civBases[1];
    *civHist[0] = *civHist[1];

    for (int i = 0; i < BASES; i++)
    {
        cout << "Port " << i << ": " <<  *civBases[i];
        cout << endl;
    }

    for (int i = 0; i < BASES; i++)
    {
        cout << "Historical port " << i << ": " <<  *civHist[i];
        cout << endl;
    }

    cout << "\nDefault constructor:\n";
    Port emptyPort;
    VintagePort EmptyHPort;

    cout << "Empty, default ports: \n";
    cout << emptyPort << EmptyHPort;

    for (int i = 0; i < BASES; i++)
    {
        delete civBases[i];
        delete civHist[i];
    }
    cout << "Done.\n";

    return 0;
}