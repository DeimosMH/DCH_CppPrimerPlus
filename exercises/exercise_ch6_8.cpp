#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;
    int iDataCounter;

    ifstream inFile;
    inFile.open("./Notes/C++PrimerPlus/exercises/exercise_ch6_8.txt"); //OR ./exercise_ch6_8.txt
    
    if (!inFile.is_open())
    {
        cout << "Could not open the file" << endl;
        cout << "Program terminating.\n";
    }

    while(inFile.good()){
        ++iDataCounter;
        
        char temp;
        inFile >> temp;
    }

    cout << "\nnumber of characters in the file " << iDataCounter << endl;
    inFile.close();

    return 0;
}