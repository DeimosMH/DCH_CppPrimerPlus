// string1.h -- fixed and augmented string class definition
#ifndef STR_H_
#define STR_H_

#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    char *str;                    // pointer to string
    int len;                      // length of string
    static int num_strings;       // number of objects
    static const int CINLIM = 80; // cin input limit
public:
    // constructors and other methods
    String(const char *s);  // constructor
    String();               // default constructor
    String(const String &); // copy constructor
    ~String();              // destructor
    int length() const { return len; }
    void stringlow();      // b)
    void stringup();       // c)
    int has(const char s); // d)

    // overloaded operator methods
    String &operator=(const String &);
    String &operator=(const char *);
    String operator+(const String &);  // a)
    String operator+(const char &cstr); // a) const char [12] + String

    char &operator[](int i);
    const char &operator[](int i) const;

    // overloaded operator friends
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);
    friend ostream &operator+(String &st, ostream os) { return os + st; }
    friend ostream &operator+(ostream &os, String &st)
    {
        os << st.str;
        return os;
    };
    friend String operator+(const char cstr[], const String &st)
    {
        String tmp(cstr);
        return tmp + st;
    };

    // static function
    static int HowMany();
};
#endif