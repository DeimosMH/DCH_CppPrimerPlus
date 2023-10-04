/// A version /// -----------
/*
#include <iostream>
#include <string>

// constant data
const int Seasons = 4;
const char Snames[Seasons][10] =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double t.expenses[],const int Seasons);
// function that uses array object without modifying it
void show(double t.expenses[],const int Seasons);

int main()
{
    double expenses[Seasons]{};
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}

void fill(double t.expenses[],const int Seasons)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> t.expenses[i];
    }
}

void show(double t.expenses[],const int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << t.expenses[i] << endl;
        total += t.expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
*/

/// B version /// -----------
#include <iostream>
#include <string>

// constant data
const int Seasons = 4;
const char Snames[Seasons][10] =
    {"Spring", "Summer", "Fall", "Winter"};

struct sAll{
    double expenses[Seasons]{};
};

// function to modify array object
void fill(sAll *t,const int Seasons);
// function that uses array object without modifying it
void show(sAll *t,const int Seasons);

int main()
{
    sAll exp;
    fill(&exp, Seasons);
    show(&exp, Seasons);
    return 0;
}

void fill(sAll *t,const int Seasons)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> t->expenses[i];
    }
}

void show(sAll *t,const int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << t->expenses[i] << endl;
        total += t->expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}


/*
Enter Spring expenses: 212
Enter Summer expenses: 256
Enter Fall expenses: 208
Enter Winter expenses: 244

EXPENSES
Spring: $212
Summer: $256
Fall: $208
Winter: $244
Total: $920
*/