#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include <stdexcept>

// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    double x, y, z;
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        { // start of try block
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }                     // end of try block
        catch (const std::invalid_argument &ia) // start of catch block
        {
            std::cout << "Caught: " << ia.what() << std::endl;
            std::cout << "Type: " << typeid(ia).name() << std::endl;

            continue;
        }
        catch (const std::exception &e) // other errors
        {
            std::cout << "Caught: " << e.what();
            std::cout << "Type: " << typeid(e).name();

            break;
        }

    }
    cout << "\nBye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw std::invalid_argument("hmean() invalid arguments: a == -b\n");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw std::runtime_error("gmean() arguments should be >= 0\n");
    return std::sqrt(a * b);
}

/*
// Listing 15.10
// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>

class bad_hmean
{
private:
    double v1;
    double v2;

public:
    bad_hmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 << "): "
              << "invalid arguments: a = -b\n";
}


class bad_gmean
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0, double b = 0) : v1(a), v2(b) {}
    const char *mesg();
};

inline const char *bad_gmean::mesg()
{
    return "gmean() arguments should be >= 0\n";
}

// (Listing 15.11) error4.cpp – using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"

// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    double x, y, z;
    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        { // start of try block
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                 << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                 << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }                     // end of try block
        catch (bad_hmean &bg) // start of catch block
        {
            bg.mesg();
            cout << "Try again.\n";

            continue;
        }
        catch (bad_gmean &hg)
        {
            cout << hg.mesg();
            cout << "Values used: " << hg.v1 << ", "
                 << hg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b);
}
*/

/*
Here’s a sample run of the program, one that gets terminated by bad input for the
gmean() function:
Enter two numbers: 4 12
Harmonic mean of 4 and 12 is 6
Geometric mean of 4 and 12 is 6.9282
Enter next set of numbers <q to quit>: 5 -5
hmean(5, -5): invalid arguments: a = -b
Try again.
5 -2
Harmonic mean of 5 and -2 is -6.66667
gmean() arguments should be >= 0
Values used: 5, -2
Sorry, you don't get to play any more.
Bye!
One
*/