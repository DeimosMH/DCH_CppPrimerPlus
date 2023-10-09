#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string sMonths[]{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    int iSales[3][12] {};
    long lYearlyTotal[3] {};
    long lTotal{};

    for (size_t i = 0; i < 3; i++)
    {
        cout << "For " << (i + 1) << " year, enter the sale for: \n";
        for (size_t j = 0; j < 12; j++)
        {
            cout << sMonths[j] << ": ";
            cin >> iSales[i][j];
            lYearlyTotal[i] += iSales[i][j];
        }
        lTotal += lYearlyTotal[i];
        cout << "\nTotal sales for " << (i + 1) << " year: " << lYearlyTotal[i] << "\n";
    }

    cout << "\nTotal sales for all years: " << lTotal << endl;
    return 0;
}