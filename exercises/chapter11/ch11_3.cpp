#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include "ch11_3_vect.h"

#include <fstream>

// struct for highest, lowest, and average number of steps for trials
struct trialsData{
    int iNumTrials;
    double dMax;
    double dMin;
    double dAvg;
};

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;

    Vector step;
    Vector prevStep;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;
    double target;
    double dstep;

    double dTmpMin;
    double dTmpMax;

    trialsData tData;
    tData.dMax = 0;
    tData.dMin = 0;
    tData.dAvg = 0;

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        cout << "Enter number of trials: ";
        if (!(cin >> tData.iNumTrials))
            break;

        for (int i = 0; i < tData.iNumTrials; i++)
        {
            while (result.magval() < target)
            {
                prevStep = step;
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);

                result = result + step;
                steps++;
            }
            cout << "After " << steps << " steps, the subject has the following location:\n";
            cout << result << endl;

            result.polar_mode();
            cout << " or\n"
                 << result << endl;
            cout << "Average outward distance per step = "
                 << result.magval() / steps << endl;

            tData.dAvg = tData.dAvg + steps;
            tData.dMax = tData.dMax > steps ? tData.dMax : steps;

            if(tData.dMin > 0)
                tData.dMin = tData.dMin < steps ? tData.dMin : steps;
            else
                tData.dMin = steps;

            steps = 0;
            result.reset(0.0, 0.0);
        }

        tData.dAvg = tData.dAvg / tData.iNumTrials;

        cout << "\n\nNumber of steps for " << tData.iNumTrials << " trials:\n";
        cout << "\t Highest:\t " << tData.dMax << endl;
        cout << "\t Lowest:\t " << tData.dMin << endl;
        cout << "\t Average:\t " << tData.dAvg << endl << endl;

        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
