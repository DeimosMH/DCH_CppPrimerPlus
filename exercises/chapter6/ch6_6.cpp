#include <iostream>
#include <string>

struct stSocietyPRI
{
    std::string name;
    double contribution;
};

int main()
{
    using namespace std;
    int iContrbutors{}, iCounter{};

    cout << "Enter the number of contributors: ";

    while (!(cin >> iContrbutors))
    {
        cin.clear(); // reset input
        while (cin.get() != '\n')
            continue; // get rid of bad input
        cout << "Please enter a number: ";
    }
    cin.get(); // clear the input buffer

    stSocietyPRI *pSociety = new stSocietyPRI[iContrbutors];

    for (size_t i = 0; i < iContrbutors; i++)
    {
        cout << "Enter the name of the " << i + 1 << " contributor: ";
        getline(cin, pSociety[i].name);

        cout << "Enter the contribution of the " << i + 1 << " contributor: ";
        while (!(cin >> pSociety[i].contribution))
        {
            cin.clear(); // reset input
            while (cin.get() != '\n')
                continue; // get rid of bad input
            cout << "Please enter a number: ";
        }
        cin.get(); // clear the input buffer
    }

    // Print Grand Patrons
    iCounter = 0;
    cout << "Grand Patrons: \n";
    for (size_t i = 0; i < iContrbutors; i++)
    {
        if (pSociety[i].contribution >= 10000)
        {
            cout << "\t" << pSociety[i].name << "; \n";
            ++iCounter;
        }
    }
    if (iCounter == 0)
        cout << "\tnone\n";

    // Print the rest Patrons
    iCounter = 0;
    cout << "Patrons: \n";
    for (size_t i = 0; i < iContrbutors; i++)
    {
        if (pSociety[i].contribution < 10000)
        {
            cout << "\t" << pSociety[i].name << "; \n";
            ++iCounter;
        }
    }
    if (iCounter == 0)
        cout << "\tnone\n";

    return 0;
}