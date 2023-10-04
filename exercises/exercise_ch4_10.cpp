#include <iostream>
#include <array>

int main()
{
     using namespace std;
     array<int, 3> aDash{}; // or int aDash[3] {};

     cout << "enter three times the 40-meter dash: \n";
     cin >> aDash[0] >> aDash[1] >> aDash[2];
     cout << "Average: " << (aDash[0] + aDash[1] + aDash[2]) / 3.0 << " \n";

     return 0;
}