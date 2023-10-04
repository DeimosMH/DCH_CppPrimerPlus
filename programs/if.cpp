// if.cpp -- using the if statement
#include <iostream>
    int
    main()
{
    using std::cin; // using declarations
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.') // quit at end of sentence
    {
        if (ch == ' ') // check if ch is a space
            ++spaces;
        ++total; // done every time
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}

/*
Here’s some sample output from the program in Listing 6.1:
    The balloonist was an airhead
    with lofty goals.
    6 spaces, 46 characters total in sentence
*/