#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string sMonths[] {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    // const char *sMonths[12] {                                                // also correct
    //     "January", "February", "March", "April", "May", "June", 
    //     "July", "August", "September", "October", "November", "December"};

    int iSales[12];
    long lTotal {};

    cout << "Enter monthly sale for a: \n";

    for (size_t i = 0; i < 12; i++)
    {
        cout << sMonths[i] << ": "; 
        cin >> iSales[i];
        lTotal += iSales[i];
    }

    cout << "\nTotal sales for the year: " << lTotal << endl;   

    return 0;
}