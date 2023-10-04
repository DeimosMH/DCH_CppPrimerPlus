#include <iostream>

double add(double, double);
double calculate(double, double, double (*add)(double, double));

int main()
{
    double a{};
    double b{};

    /// A version /// -----------
    /*
    std::cout << "\nAdd pairs of numbers.\nEnter 2 numbers after space, q to quit:\n";

    while (std::cin >> a >> b)
    {
        if (!std::cin)
            break;

        std::cout << "\nAdded: " << a << " + " << b
                  << " = " << calculate(a, b, add);

        std::cout << "\n\nEnter 2 new numbers: ";

        // Clear buffer if more numbers than 2
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "\n\tBye Bye!";
    */

    /// B version /// -----------:
    // // try creating an array of pointers to add()-style
    // // functions and use a loop to successively apply calculate() to a series of functions
    // // by using these pointers.
    double (*pf[3])(double, double){add, add, add};
    std::cout << "\nAdd pairs of numbers.\nEnter 2 numbers after space, q to quit:\n";

    while (std::cin >> a >> b)
    {
        if (!std::cin)
            break;

        double temp1 = calculate(a, b, pf[0]);
        double temp2 = calculate(temp1, a, pf[1]);
        double temp3 = calculate(temp2, temp1, pf[2]);

        std::cout << "\nAdded: " << a << " + " << b
                  << " = " << temp1;

        std::cout << "\nAdded: " << temp1 << " + " << a
                  << " = " << temp2;

        std::cout << "\nAdded: " << temp2 << " + " << temp1
                  << " = " << temp3;

        std::cout << "\n\nEnter 2 new numbers: ";

        // Clear buffer if more numbers than 2
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "\n\tBye Bye!";
}

double add(double x, double y)
{
    return x + y;
}

double calculate(double a, double b, double (*add)(double, double))
{
    return add(a, b);
}
