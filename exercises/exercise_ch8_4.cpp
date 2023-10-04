#include <iostream>
#include <cstring> // for strlen(), strcpy()

using namespace std;

struct stringy
{
    char *str; // points to a string
    int ct;    // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void show(stringy const &sStringy, int iNum = 1);
void show(const char *cWord, int iNum = 1);
void set(stringy &sStringy, const char *cString);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing); // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany

    show(beany);    // prints member string once
    show(beany, 2); // prints member string twice

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");

    return 0;
}

void set(stringy &sStringy, const char *cString){
    const int iLength = strlen(cString);
    static char * cTemp = new char[iLength + 1];

    strcpy(cTemp, cString);

    sStringy.str = cTemp;
    sStringy.ct = iLength;

    // cout << endl << "sStringy str :" << sStringy.str << ", in memory: " << &sStringy.str;
    // cout << endl << "cString :" << cString << ", in memory: " << &cString;
    // cout << endl << "cTemp :" << cTemp << ", in memory: " << &cTemp;
}

void show(stringy const &sStringy, int iNum){
    for (int i {}; i < iNum; ++i)
        cout << endl << sStringy.str;
}

void show(const char *cWord, int iNum){
    for (int i {}; i < iNum; ++i)
        cout << endl << cWord;
} 
