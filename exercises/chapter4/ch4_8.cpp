#include <iostream>
#include <cstring>

struct Pizza
{
    char name[50];
    float diameter;
    float weight;
};

int main()
{
    using namespace std;
    Pizza *myPizza = new Pizza;

    cout << "Enter the diameter of your pizza: ";
    // cin leaves a newline character in the input stream .get removes it (chapter 3: C-style strings)
    (cin >> myPizza->diameter).get();
    cout << "Enter the name of your pizza: ";
    cin.getline(myPizza->name, 50);
    cout << "Enter the weight of your pizza: ";
    cin >> myPizza->weight;

    cout << endl
         << "My Pizza name: " << myPizza->name << endl
         << "My Pizza diameter: " << myPizza->diameter << endl
         << "My Pizza weight: " << myPizza->weight << endl
         << endl;

    delete myPizza;

    return 0;
}