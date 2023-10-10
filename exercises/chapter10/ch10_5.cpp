// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "ch10_5_buisness.h"

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    Customer po;

    long double dRunningTotal{};

    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
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
            cout << "Enter a name of a Customer to add: ";
            cin.getline(po.fullname, 35);
            if (!isalpha(ch))
            {
                cout << '\a';
                continue;
            }

            cout << "Enter a PO price: ";
            while (!(cin >> po.payment))
            {
                cin.clear(); // reset input
                while (cin.get() != '\n')
                    continue; // get rid of bad input
                cout << "Please enter a number: ";
            }
            cin.get(); // clear the input buffer

            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                dRunningTotal += po.payment;
                cout << "PO of a " << po.fullname << " popped\n";
                cout << "PO " << po.payment << "$ added\n";
                cout << "Running total = " << dRunningTotal << "$\n";
            }
            break;
        }
        cout << "\nPlease enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}
