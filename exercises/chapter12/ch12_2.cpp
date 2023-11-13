// pe12_2.cpp
#include <iostream>
using namespace std;
#include "ch12_2_str.h"

int main()
{
    {
        String s1(" and I am a C++ student.");
        String s2 = "Please enter your name: ";
        String s3;
        cout << s2;              // overloaded << operator
        cin >> s3;               // overloaded >> operator
        s2 = "My name is " + s3; // overloaded =, + operators
        cout << s2 << ".\n";
        s2 = s2 + s1;
        s2.stringup(); // converts string to uppercase
        cout << "The string\n"
             << s2 << "\ncontains " << s2.has('A')
             << " 'A' characters in it.\n";
        s1 = "red"; // String(const char *),
        // then String & operator=(const String&)
        String rgb[3] = {String(s1), String("green"), String("blue")};
        cout << "Enter the name of a primary color for mixing light: ";
        String ans;
        bool success = false;
        while (cin >> ans)
        {
            ans.stringlow(); // converts string to lowercase
            for (int i = 0; i < 3; i++)
            {
                if (ans == rgb[i]) // overloaded == operator
                {
                    cout << "That's right!\n";
                    success = true;
                    break;
                }
            }
            if (success)
                break;
            else
                cout << "Try again!\n";
        }
        cout << "Bye\n";
        return 0;
    }
}

/*
Please enter your name: Maciej
deleted : My name is
deleted : My name is Maciej
My name is Maciej.
deleted : My name is Maciej and I am a C++ student.
The string
MY NAME IS MACIEJ AND I AM A C++ STUDENT.
contains 5 'A' characters in it.
Enter the name of a primary color for mixing light: red
That's right!
Bye
deleted : red
deleted : blue
deleted : green
deleted : red
deleted : Maciej
deleted : MY NAME IS MACIEJ AND I AM A C++ STUDENT.
deleted : red
*/