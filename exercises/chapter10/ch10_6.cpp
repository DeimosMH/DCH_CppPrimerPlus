#include <iostream>
#include "ch10_6_move.h"

int main(){
    Move moveA;
    Move moveB(10.33, 32.2);

    double dVals[4] {21.22, 32.3, 3.33, 9.52};

    std::cout << "\nmoveA - vals";
    moveA.showmove();
    std::cout << "\nmoveB - vals";
    moveB.showmove();

    std::cout << "\nmoveA - reset to " << dVals[0] << ", " << dVals[1];
    moveA.reset(dVals[0], dVals[1]);
    moveA.showmove();

    std::cout << "\nAdding classes: moveB = moveA + moveB";
    moveB = moveA.add(moveB);

    std::cout << "\nmoveB - vals";
    moveB.showmove();

    return 0;
}