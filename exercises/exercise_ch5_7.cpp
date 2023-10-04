#include <iostream>
#include <string>

struct car{
    std::string make;
    int year;
};

int main()
{
    using namespace std;
    int iNumCars{};
    
    cout << "How many cars do you wish to catalog? : ";
    (cin >> iNumCars).get();

    car *pCar = new car[iNumCars];

    for (size_t i = 0; i < iNumCars; i++)
    {
        cout << "Car #" << i + 1 << ":" << endl;

        cout << "Please enter the make: ";
        getline(cin, pCar[i].make);

        cout << "Please enter the year made: ";
        (cin >> pCar[i].year).get();
    }
    
    cout << "\nHere is your collection:\n";
    for (size_t i = 0; i < iNumCars; i++)
        cout << pCar[i].year << " " << pCar[i].make << endl;

    return 0;
}