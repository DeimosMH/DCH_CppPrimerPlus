#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    int iRows{};

    cout << "Enter number of rows: ";
    cin >> iRows;

    for (size_t i = 0; i < iRows; i++)                  // lines to print
    {
        // dots to print: 
        // dot = 1, -> because per 3 chars there is one `star`
        // dot < iRows - i, -> because the next line will have one more `star` 
        //                     and one less `dot` EVERY LOOP
        for (size_t dot = 1; dot < iRows - i; ++dot)    // DOTS ARE PRINTED FIRST
            cout << ".";
        for (size_t star = 0; star <= i; ++star)        // STARS ARE PRINTED SECOND
            cout << "*";

        // // Different solution
        // for (size_t dot = i; dot < iRows - 1; dot++)
        //     cout << '.';
        // for (size_t star = i + 1; star != 0; star--)
        //     cout << '*';

        cout << endl;
    }
    
    return 0;
}