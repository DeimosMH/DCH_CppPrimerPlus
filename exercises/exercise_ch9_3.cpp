#include <iostream>

struct chaff
{
    char dross[20];
    int slag;
};

int main(){

    // [1] Static array

    // [2] New keyword
    chaff *myStr = new chaff[2];

    for (int i = 0; i < 2; ++i)
    {

        std::cout << "\nEnter new name   for [" << i << "] dross : \t";
        std::cin.getline(myStr[i].dross, 20);

        std::cout << "Enter new number for [" << i << "] slag  : \t";
        while (!(std::cin >> myStr[i].slag))
        {
            std::cin.clear(); // reset input
            while (std::cin.get() != '\n')
                continue; // get rid of bad input
            std::cout << "Please enter a number: ";
        }

        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
    }

    std::cout << "\n";

    for (int i = 0; i < 2; ++i)
    {
        std::cout << "\nName of [" << i << "] dross :    " << myStr[i].dross;
        std::cout << "; \t\t["       << i << "] slag  :    "  << myStr[i].slag;
    }

    std::cout << "\n";

    delete[] myStr;

    return 0;
}

/*
Write a program that uses placement new to place an array of two such structures in
a buffer. Then assign values to the structure members (remembering to use
strcpy() for the char array) and use a loop to display the contents. Option 1 is to
use a static array, like that in Listing 9.10, for the buffer. Option 2 is to use regular
new to allocate the buffer.
*/