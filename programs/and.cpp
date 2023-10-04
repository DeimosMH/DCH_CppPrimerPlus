// and.cpp -- using the logical AND operator
#include <iostream>
const int ArSize = 6;
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) "
         << "of\nyour neighbors. Program terminates "
         << "when you make\n"
         << ArSize << " entries "
         << "or enter a negative value.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0) // 2 quitting criteria
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize) // room left in the array,
        {
            cout << "Next value: ";
            cin >> temp; // so get next value
        }
    }
    if (i == 0)
        cout << "No data--bye\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neighbors have greater awareness of\n"
             << "the New Age than you do.\n";
    }
    return 0;
}

/*
Sample runs:

One terminates after six entries:
    Enter the NAAQs (New Age Awareness Quotients) of
    your neighbors. Program terminates when you make
    6 entries or enter a negative value.
    First value: 28
    Next value: 72
    Next value: 15
    Next value: 6
    Next value: 130
    Next value: 145
    Enter your NAAQ: 50
    3 of your neighbors have greater awareness of
    the New Age than you do.

The second run terminates after a negative value is entered:
    Enter the NAAQs (New Age Awareness Quotients) of
    your neighbors. Program terminates when you make
    6 entries or enter a negative value.
    First value: 123
    Next value: 119
    Next value: 4
    Next value: 89
    Next value: -1
    Enter your NAAQ: 123.031
    0 of your neighbors have greater awareness of
    the New Age than you do.
*/