// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>

// #include "ch14_3_listing.h"
#include "ch14_3_wk.h"

const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    
    Worker *lolas;                      // Worker *lolas[SIZE];
    QueueTp<Worker *> lolasQueue;       //

    int ct;

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter s: singer "
             << "t: singing waiter q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'w':
            lolas = new Waiter;         // lolas[ct] = new Waiter;
            break;
        case 's':
            lolas = new Singer;         // lolas[ct] = new Singer;
            break;
        case 't':
            lolas = new SingingWaiter;  // lolas[ct] = new SingingWaiter; 
            break;
        }
        cin.get();
        lolas->Set();                   // lolas[ct]->Set();

        lolasQueue.enqueue(lolas);
    }

    cout << "\nHere is your staff:\n";
    int i;

    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolasQueue.show();              // lolas->Show();
        lolasQueue.dequeue(lolas);      // it will automatically handle delete
        // delete lolas;
    }

    delete lolas; //  

    // for (i = 0; i < ct; i++)
    //     delete lolas[i];

    cout << "Bye.\n";
    return 0;
}

/*
Here is a sample run of the program in Listings 14.10, 14.11, and 14.12:
Enter the employee category:
w: waiter s: singer t: singing waiter q: quit
w
Enter waiter's name: Wally Slipshod
Enter worker's ID: 1040
Enter waiter's panache rating: 4
Enter the employee category:
w: waiter s: singer t: singing waiter q: quit
s
Enter singer's name: Sinclair Parma
Enter worker's ID: 1044
Enter number for singer's vocal range:
0: other 1: alto 2: contralto 3: soprano
4: bass 5: baritone 6: tenor
5
Enter the employee category:
w: waiter s: singer t: singing waiter q: quit
t
Enter singing waiter's name: Natasha Gargalova
Enter worker's ID: 1021
Enter waiter's panache rating: 6
Enter number for singer's vocal range:
0: other 1: alto 2: contralto 3: soprano
4: bass 5: baritone 6: tenor
3
Enter the employee category:
w: waiter s: singer t: singing waiter q: quit
q
Here is your staff:
Category: waiter
Name: Wally Slipshod

Employee ID: 1040
Panache rating: 4
Category: singer
Name: Sinclair Parma
Employee ID: 1044
Vocal range: baritone
Category: singing waiter
Name: Natasha Gargalova
Employee ID: 1021
Vocal range: soprano
Panache rating: 6
Bye.
*/