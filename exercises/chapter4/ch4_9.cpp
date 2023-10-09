#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};

int main()
{
    using namespace std;

    CandyBar *snack = new CandyBar[3];

    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Nom Nom Nom", 4.5, 440};
    snack[2] = {"Diet Munch", 5.3, 600};

    cout << "Snack name: " << snack[0].name << endl
         << "Snack weight: " << snack[0].weight << endl
         << "Snack calories: " << snack[0].calories << endl
         << endl;

    cout << "Snack name: " << snack[1].name << endl
         << "Snack weight: " << snack[1].weight << endl
         << "Snack calories: " << snack[1].calories << endl
         << endl;

    cout << "Snack name: " << snack[2].name << endl
         << "Snack weight: " << snack[2].weight << endl
         << "Snack calories: " << snack[2].calories << endl
         << endl;

    delete[] snack;

    return 0;
}