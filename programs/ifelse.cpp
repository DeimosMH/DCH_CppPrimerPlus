// ifelse.cpp -- using the if else statement
#include <iostream>
int main()
{
    char ch;
    
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch; // done if newline
        else
            std::cout << ++ch; // done otherwise (try also with (ch+1) )
        std::cin.get(ch);
    }
    // try ch + 1 instead of ++ch for interesting effect
    std::cout << "\nPlease excuse the slight confusion.\n";
    // std::cin.get();
    // std::cin.get();
    return 0;
}

/*
Here’s some sample output from the program in Listing 6.2:
    Type, and I shall repeat.
    An ineffable joy suffused me as I beheld
    Bo!jofggbcmf!kpz!tvggvtfe!nf!bt!J!cfifme
    the wonders of modern computing.
    uif!xpoefst!pg!npefso!dpnqvujoh
    Please excuse the slight confusion.
*/