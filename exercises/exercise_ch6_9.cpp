#include <iostream>
#include <string>
#include <fstream>

struct stSocietyPRI
{
    std::string name;
    double contribution;
};

int main()
{
    using namespace std;
    int iContrbutors{}, iCounter{};

    ifstream inFile;
    inFile.open("./Notes/C++PrimerPlus/exercises/exercise_ch6_9.txt");

    if (!inFile.is_open()) // failed to open file
    {
        cout << "Could not open the file" << endl;
        cout << "Terminate program.\n";
        exit(EXIT_FAILURE);
    }

    if(inFile.good()){
        inFile >> iContrbutors; // First line
    }

    stSocietyPRI *pSociety = new stSocietyPRI[iContrbutors];

    // Read contributors from file 
    for (size_t i = 0; i < iContrbutors; i++)
    {
        inFile.get(); // clear buffer
        getline(inFile, pSociety[i].name);
        inFile >> pSociety[i].contribution;
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
    {        if (pSociety[i].contribution < 10000)
        {
            cout << "\t" << pSociety[i].name << "; \n";
            ++iCounter;
        }
    }
    if (iCounter == 0)
        cout << "\tnone\n";

    return 0;
}