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
        throw std::logic_error("hmean() invalid arguments: a == -b\n");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw std::logic_error("gmean() arguments should be >= 0\n");
    return std::sqrt(a * b);
}