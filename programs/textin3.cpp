// textin3.cpp -- reading chars to end of file
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);                // attempt to read a char
    while (cin.fail() == false) // test for EOF
    {
        cout << ch; // echo character
        ++count;
        cin.get(ch); // attempt to read another char
    }
    cout << endl
         << count << " characters read\n";
    return 0;
}

/*
Here is sample output from the program in Listing 5.18:

// Windows
    The green bird sings in the winter.<ENTER>
    The green bird sings in the winter.
    Yes, but the crow flies in the dawn.<ENTER>
    Yes, but the crow flies in the dawn.
    <CTRL>+<C> 
    73 characters read

// Unix
    $ textin3 < stuff
    I am a Unix file. I am proud
    to be a Unix file.
    48 characters read
    $
*/