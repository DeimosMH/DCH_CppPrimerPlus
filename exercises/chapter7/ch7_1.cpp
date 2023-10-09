#include <iostream>

double fnHarmonicMean(double dNumX, double dNumY)
{
    return (2 * dNumX * dNumY) / (dNumX + dNumY);
}

int main()
{
    using namespace std;
    double dHarmonicMean{1};
    double dNum[2]{};

    cout << "\nCalculate harmonic mean of pair of numbers.";
    cout << "\nFor one of input equal '0', program terminate.";

    do
    {
        cout << "\nEnter two noumbers after space: ";
        if (!(cin >> dNum[0] >> dNum[1]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "\nTry again.\n";
            continue;
        }

        dHarmonicMean = fnHarmonicMean(dNum[0], dNum[1]);

        if (!dHarmonicMean)
            break;

        cout << "\nHarmonic mean: " << dHarmonicMean;
        cin.clear();
    } while (dHarmonicMean != 0);

    cout << "\n\n\tBye! Bye! :)\n";

    return 0;
}