// stone1.cpp -- user-defined conversion functions
// compile with stonewt1.cpp
#include <iostream>
#include "ch11_6_stone.h"

int main()
{
    using std::cout;
    using std::endl;
    Stonewt poppins(9, 2.8); // 9 stone, 2.8 pounds
    double p_wt = poppins;   // implicit conversion

    Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
    Stonewt tafte(21, 8);
    Stonewt glock(21, 8);

    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n\n";

    cout << "Wolfe weight: " << wolfe << endl;
    cout << "Tafte weight: " << tafte << endl;
    cout << "glock weight: " << glock << endl;
    cout << endl;

    std::cout << std::boolalpha;
    cout << "Is Wolfe > Tafte?:  " << (wolfe > tafte) << endl;    
    cout << "Is Wolfe < Tafte?:  " << (wolfe < tafte) << endl;    
    cout << "Is Wolfe >= Tafte?: " << (wolfe >= tafte) << endl;    
    cout << "Is Wolfe <= Tafte?: " << (wolfe <= tafte) << endl;    
    cout << "Is Wolfe == Tafte?: " << (wolfe == tafte) << endl;    
    cout << "Is Wolfe != Tafte?: " << (wolfe != tafte) << endl;
    cout << endl;

    cout << "Is glock > Tafte?:  " << (glock > tafte) << endl;    
    cout << "Is glock < Tafte?:  " << (glock < tafte) << endl;    
    cout << "Is glock >= Tafte?: " << (glock >= tafte) << endl;    
    cout << "Is glock <= Tafte?: " << (glock <= tafte) << endl;    
    cout << "Is glock == Tafte?: " << (glock == tafte) << endl;    
    cout << "Is glock != Tafte?: " << (glock != tafte) << endl;
    cout << endl;
    std::cout << std::noboolalpha;

    return 0;
}