#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include "ch11_1_vect.h"

#include <fstream>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;

    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target;
    double dstep;

    // File handling
    ofstream outFile;
    outFile.open("./ch11_1_randwalk.txt");

    if (!outFile.is_open())
    {
        cout << "Could not open file" << endl;
        cout << "Terminate program" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        // Write initial conditions to file
        if (outFile.good())
        {
            outFile << "Target Distance: " << target;
            outFile << ", Step Size: " << dstep << endl;
        }

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;

            if (outFile.good())
                outFile << steps << ": (x,y) = (" << result.xval() << ", " << result.yval() << ")" << endl;

            steps++;
        }
        cout << "After " << steps << 
                " steps, the subject has the following location:\n";
        cout << result << endl;

        if (outFile.good())
        {
            outFile << "After " << steps << 
            " steps, the subject has the following location:\n" <<
            result << endl;
        }

        result.polar_mode();
        cout << " or\n"
             << result << endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;

        if (outFile.good())
        {
            outFile << " or\n" << result << endl;
            outFile << "Average outward distance per step = " <<
            result.magval() / steps << endl;
        }

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}

/*
Modify Listing 11.15 so that it writes the successive locations of the random walker
into a file. Label each position with the step number. Also have the program write
the initial conditions (target distance and step size) and the summarized results to
the file. The file contents might look like this:

Target Distance: 100, Step Size: 20
0: (x,y) = (0, 0)
1: (x,y) = (-11.4715, 16.383)
2: (x,y) = (-8.68807, -3.42232)
...
26: (x,y) = (42.2919, -78.2594)
27: (x,y) = (58.6749, -89.7309)
After 27 steps, the subject has the following location:
(x,y) = (58.6749, -89.7309)
or
(m,a) = (107.212, -56.8194)
Average outward distance per step = 3.97081


Listing 11.15 randwalk.cpp
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include "vect.h"
    int
    main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
                                     "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n"
             << result << endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
*/

/*
Here is a sample run of the program in Listings 11.13, 11.14, and 11.15:
Enter target distance (q to quit): 50
Enter step length: 2
After 253 steps, the subject has the following location:
(x,y) = (46.1512, 20.4902)
or
(m,a) = (50.495, 23.9402)
Average outward distance per step = 0.199587
Enter target distance (q to quit): 50
Enter step length: 2
After 951 steps, the subject has the following location:
(x,y) = (-21.9577, 45.3019)
or
(m,a) = (50.3429, 115.8593)
Average outward distance per step = 0.0529362
Enter target distance (q to quit): 50
Enter step length: 1
After 1716 steps, the subject has the following location:
(x,y) = (40.0164, 31.1244)
or
(m,a) = (50.6956, 37.8755)
Average outward distance per step = 0.0295429
Enter target distance (q to quit): q
Bye!
*/