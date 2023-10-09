#include <iostream>

struct CandyBar{
    char name[20];
    float weight;
    int calories;
};

int main() 
{
    using namespace std;

    CandyBar snack {"Mocha Munch", 2.3, 350};

    cout << "Snack name: " << snack.name << endl 
         << "Snack weight: " << snack.weight << endl 
         << "Snack calories: " << snack.calories << endl;
    
    return 0;
}