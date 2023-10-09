#include <iostream>

// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, totalMega;
    cout << "Enter the total number of choices on the game card, total number of choices on mega number\n"
            "and the number of picks allowed :\n";
    while ((cin >> total >> totalMega >> choices) && choices <= total)
    {
        double temp = probability(total, choices);
        cout << "You have one chance in ";
        cout << temp; 

        temp = temp * (probability(totalMega, 1));
        cout << " of winning in game card.\n";
        cout << "and one chance in: " << temp << " of winning mega number" << endl;
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

// R = (51 × 50 × 49 × 48 × 47 × 46) / (6 × 5 × 4 × 3 × 2 × 1)