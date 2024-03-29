#include <iostream>
#include <cstring>
#include "ch14_4_ppl.h"

// Listing 14.12 - changed only name of classes for obj creation and questions
const int SIZE = 5;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    Person *lolas[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the player category:\n"
             << "g: gunslinger p: poker player "
             << "b: bad dude  q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'g':
            lolas[ct] = new Gunslinger;
            break;
        case 'p':
            lolas[ct] = new PokerPlayer;
            break;
        case 'b':
            lolas[ct] = new BadDude;
            break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your players:\n";

    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for (i = 0; i < ct; i++)
        delete lolas[i];

    cout << "Bye.\n";
    return 0;
}