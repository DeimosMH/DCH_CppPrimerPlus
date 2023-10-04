// textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch); // use the cin.get(ch) function
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch); // use it again
    }
    cout << endl
         << count << " characters read\n";
    return 0;
}

/*
Enter characters; enter # to quit:
    Did you use a #2 pencil?
    Did you use a
    14 characters read

 - program echoes and counts every character, including the spaces. Input is still
buffered, so it is still possible to type more input than what eventually reaches the program.
- cin.get() passes ch, not &ch. In C, code like this won’t work. In C++ it can work, provided
that the function declares the argument as a reference.
- argument passing in C++ works just as it does in C. For cin.get(ch), however, it doesn’t.
*/