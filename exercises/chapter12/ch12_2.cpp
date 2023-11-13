// #include <iostream>
// #include "ch12_2_str.h"

// int main(){
//     using namespace std;

//     String forg {"Homo sum et nil humanum a me alienum esse puto "};
//     String rgot {"Per aspera ad astra"};
//     String addedAll = forg + rgot;

//     cout << "\nAdd : " << forg + rgot;

//     forg.StringLow();
//     rgot.StringUp();

//     cout << "\nAdd : " << forg + rgot;

//     cout << "\nThere is " << addedAll.NumOf('m') << " 'm' letters in sentense: " << addedAll;

//     return 0;
// }

// pe12_2.cpp
#include <iostream>
using namespace std;
#include "ch12_2_str.h"

int main()
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