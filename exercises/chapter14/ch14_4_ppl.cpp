#include "ch14_4_ppl.h"

/// Person /// ---------------------------------

//// Inefficient constructor - leverage copy constructor
Person::Person(std::string fn, std::string ln)
{
    sFirstName = fn;
    sLastName = ln;
}

//// Efficient constructor -
//  |lvalue - left operand modifiable value eg.: int asd, char asd |
//  |rvalue - Pulls or fetches the value stored in a variable or constant to the right side |
//  |int num = 39 | // to lvalue num, rvalue 39 is assigned
//  | std::string&& - is known as an rvalue reference, which allows a function to accept arguments that are temporary objects or literal values.
//  | std::string&  - is a regular reference. It can only bind to existing objects, not literals or temporary objects.

//// bind to temporary objects and rvalues. The std::move function is used to convert the lvalues to rvalues,
//// enabling the move constructor of std::string to be invoked, which can be more efficient than the copy constructor

// Person::Person(std::string&& fn, std::string&& ln) : firstName(std::move(fn)), lastName(std::move(ln))
// {
// }

Person::~Person()
{
}

void Person::Show() const
{
    std::cout << std::endl;
    std::cout << "First name: " << sFirstName;
    std::cout << std::endl;
    std::cout << "Last name: " << sLastName;
}

void Person::Set()
{
    std::cin.clear(); // reset input
    while (std::cin.get() != '\n')
        continue; // get rid of bad input

    std::cout << "Enter first name: ";
    std::getline(std::cin, sFirstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, sLastName);
}

/// Gunslinger /// ---------------------------------
Gunslinger::Gunslinger(int notc, std::string fn, std::string ln)
    : Person(fn, ln)
{
    iNotches = notc;
}
// Gunslinger::Gunslinger(int notc, std::string fn, std::string ln) : Person(std::move(fn), std::move(ln)){}

// return time of draw from 0 to 1 second
double Gunslinger::Draw()
{
    // // Simpler my solution
    return (double)(rand() % 1000) / 1000;

    // // Simple solution
    // double dMax = 1;
    // double dMin = 0;
    // double f = (double)rand() / RAND_MAX;
    // return dMin + f * (dMax - dMin);

    // //
    // std::random_device rd;  // Will be used to obtain a seed for the random number engine
    // std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    // std::uniform_real_distribution<> dis(0.0, 1.0);
    // return dis(gen);
}

void Gunslinger::Show() const
{
    Person::Show(); // can be used if Person::Show is also const cast

    std::cout << std::endl;
    std::cout << "Notches: " << iNotches;
    std::cout << "Type: Gunslinger";
}

void Gunslinger::Set()
{
    std::cout << "Enter number of notches on a gun: ";

    while (!(std::cin >> iNotches || iNotches <= 0))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a positive number: ";
    }

    Person::Set();
}

/// PokerPlayer /// ---------------------------------

// return card value from 1 to 52
int PokerPlayer::Draw()
{
    // simple solution
    return rand() % 52 + 1;

    // // Advanced solution
    // std::random_device rd;
    // std::mt19937 gen(rd());
    // return std::uniform_int_distribution<>(1, 52)(gen);
}

/// BadDude /// ---------------------------------

void BadDude::Set()
{
    std::cout << "Enter draw time to shoot: ";

    while (!(std::cin >> dDrawTime || dDrawTime <= 0))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a positive number: ";
    }

    Person::Set();
}