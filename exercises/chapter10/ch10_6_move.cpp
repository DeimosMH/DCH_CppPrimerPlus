#include <iostream>
#include "ch10_6_move.h"

// sets x, y to a, b
Move::Move(double a, double b)
{
    x = a;
    y = b;
}

// shows current x, y values
void Move::showmove() const
{
    std::cout << "\n x : " << x;
    std::cout << "\n y : " << y;
    std::cout << std::endl;
}

// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
Move Move::add(const Move &m) const
{
    Move out;
    out.x += m.x;
    out.y += m.y;

    out.x += this->x;
    out.y += this->y;
    
    return out;
}

// resets x,y to a, b
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}