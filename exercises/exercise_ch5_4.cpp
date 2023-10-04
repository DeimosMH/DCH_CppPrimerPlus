#include <iostream>

int main()
{
    using namespace std;
    double dSimple {100}, dCompound {100};
    double dSimpleSum {dSimple}, dCompoundSum {dCompound};
    size_t i {0};

    cout << "\nInitial investment in 10% Simple interest: " << dSimple << endl;
    cout << "Initial investment in 5% Compound interest: " << dCompound << endl << endl;

    do
    {
        i++;
        dSimpleSum += dSimple * 0.1;
        dCompoundSum += dCompoundSum * 0.05;
    } while (dSimpleSum > dCompoundSum);

    cout << "Simple Interest after " << i << " years: " << dSimpleSum << endl;
    cout << "Compound Interest after " << i << " years: " << dCompoundSum << endl;

    cout << endl << "  It takes " << i << " years for compound investment to exceed simple investment." << endl << endl;

    return 0;
}