#include <iostream>

struct Pizza{
    char name[50];
    float diameter;
    float weight;
};

int main() 
{
    using namespace std;
    Pizza myPizza;

     cout << "Enter the name of your pizza: ";
     cin.getline(myPizza.name, 50);
     cout << "Enter the diameter of your pizza: ";
     cin >> myPizza.diameter;
     cout << "Enter the weight of your pizza: ";
     cin >> myPizza.weight;

    cout << endl << "My Pizza name: " << myPizza.name << endl 
         << "My Pizza diameter: " << myPizza.diameter << endl 
         << "My Pizza weight: " << myPizza.weight << endl << endl;

    return 0;
}