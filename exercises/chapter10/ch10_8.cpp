#include <iostream>
#include <cctype> // or ctype.h
#include "ch10_8_list.h"

int main()
{
    using namespace std;
    List st; // create an empty stack
    char ch;

    cout << "Please enter A to add element to the list,\n"
         << "D to display values of all elements.\n"
         << "M to modify value of selected element.\n"
         << "R to remove element from the list.\n"
         << "Q to exit the program.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch (ch)
        {
        case 'A':
        case 'a':
            if (st.isFull())
                cout << "list already full\n";
            else
            {
                cout << "Enter value of element to the list: ";
                int tmpVal{};
                while (!(cin >> tmpVal))
                {
                    cin.clear(); // reset input
                    while (cin.get() != '\n')
                        continue; // get rid of bad input
                    cout << "Please enter a number: ";
                }
                cin.get(); // clear the input buffer

                st.add(tmpVal);
            }
            break;
        case 'D':
        case 'd':
            st.display();
            break;
        case 'M':
        case 'm':
        {
            int tmpIdx{};
            int tmpVal{};

            cout << "Enter the index of list element to change: ";
            while (!(cin >> tmpIdx))
            {
                cin.clear(); // reset input
                while (cin.get() != '\n')
                    continue; // get rid of bad input
                cout << "Please enter a number: ";
            }
            cin.get(); // clear the input buffer

            cout << "Enter value of element to the list: ";

            while (!(cin >> tmpVal))
            {
                cin.clear(); // reset input
                while (cin.get() != '\n')
                    continue; // get rid of bad input
                cout << "Please enter a number: ";
            }
            cin.get(); // clear the input buffer

            st.modify(tmpIdx, tmpVal);
            break;
        }
        case 'R':
        case 'r':
            if (st.isEmpty())
                cout << "list already empty\n";
            else
                st.pop();
            break;
        }

        cout << "\nPlease enter A to add element to the list,\n"
             << "D to display values of all elements.\n"
             << "M to modify value of selected element.\n"
             << "R to remove element from the list.\n"
             << "Q to exit the program.\n";
    }
    cout << "Bye\n";
    return 0;
}
