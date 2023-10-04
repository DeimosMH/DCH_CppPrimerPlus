#include <iostream>

int main() 
{
    using namespace std;

    unsigned long long llWorldPopulation {};
    unsigned long long llCountryPopulation {};

    cout << "Enter the world's population: ";
    cin >> llWorldPopulation;

    cout << "Enter the population of the US: ";
    cin >> llCountryPopulation;

    cout << "The population of the US is ";
    cout << (double)llCountryPopulation / llWorldPopulation * 100;
    cout << "% of the world population.";
}
