// textin1.cpp -- reading chars with a while loop
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0; // use basic input
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;        // get a character
    while (ch != '#') // test the character
    {
        cout << ch; // echo the character
        ++count;    // count the character
        cin >> ch;  // get the next character
    }
    cout << endl
         << count << " characters read\n";
    return 0;
}

/*
Here’s a sample run of the program in Listing 5.16:
    Enter characters; enter # to quit:
    see ken run#really fast
    seekenrun
    9 characters read

 - textin1.cpp uses an entry-condition loop, the program correctly skips the entire
loop in that case.And because the variable count was previously set to 0, count has the
correct value.
 - When reading type char values, just as when reading other basic types, 
 cin skips over spaces and newline characters.The spaces in the input are not echoed, 
 so they are not counted.
 - The input to cin is buffered.That means the characters you type don’t get sent to 
 the program until you press Enter
*/