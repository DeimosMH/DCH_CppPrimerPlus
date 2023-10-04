#include <iostream>
#include <cstdlib>
#include <cctype>

const int MAX_SIZE = 10;

int main()
{
    using namespace std;

    double dArray[MAX_SIZE]{};
    double dAboveAverage{}, dSum{};
    int i{};

    cout << "Write " << MAX_SIZE << " donations: \n";
    cout << "\n #" << i + 1 << " donation: ";

    while (i < MAX_SIZE && cin >> dArray[i])
    {
        dSum += dArray[i];
        if(++i < MAX_SIZE)
            cout << " #" << i + 1 << " donation: ";
    }

    for (size_t j = 0; j < i; j++)
        if (dArray[j] > (dSum / i))
            ++dAboveAverage;

    cout << "\n\n   Average from donations: " << dSum / i << endl;
    cout << "   Amount of donations above average: " << dAboveAverage << endl;

    return 0;
}