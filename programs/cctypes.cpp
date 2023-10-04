// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype> // prototypes for character functions
int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @"
            " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    cin.get(ch);      // get first character
    while (ch != '@') // test for sentinel
    {
        if (isalpha(ch)) // is it an alphabetic character?
            chars++;
        else if (isspace(ch)) // is it a whitespace character?
            whitespace++;
        else if (isdigit(ch)) // is it a digit?
            digits++;
        else if (ispunct(ch)) // is it punctuation?
            punct++;
        else
            others++;
        cin.get(ch); // get next character
    }
    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    return 0;
}

/*
    Enter text for analysis, and type @ to terminate input.
    AdrenalVision International producer Adrienne Vismonger
    announced production of their new 3-D film, a remake of
    "My Dinner with Andre," scheduled for 2013. "Wait until
    you see the the new scene with an enraged Collossipede!"@
    177 letters, 33 whitespace, 5 digits, 9 punctuations, 0 others.
*/