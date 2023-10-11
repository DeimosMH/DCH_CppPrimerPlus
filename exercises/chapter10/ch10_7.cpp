#include <iostream>
#include "ch10_7_plorg.h"

int main(){

    Plorg leDef;
    Plorg Fluff("Corgi", 100);
    Plorg Hulk("Destroyemovertion", 10);
    Plorg Nerd("Book", 30);

    std::cout << "\n\n\tReport: ";
    std::cout << "\n leDef: ";
    leDef.Report();
    std::cout << "\n\n Fluff: ";
    Fluff.Report();
    std::cout << "\n\n Hulk: ";
    Hulk.Report();
    std::cout << "\n\n Nerd: ";
    Nerd.Report();

    std::cout << "\n\n Nerd - changed CI thanks to the unknown device: ";
    Nerd.ChangeCI(70);
    Nerd.Report();

    std::cout << "\n\nBye Bye!\n";

    return 0;
}