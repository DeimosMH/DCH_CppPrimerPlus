#include <iostream>

const double _RATIO_KM_TO_M {0.6214};
const double _RATIO_GAL_TO_L {3.785412};

int main() 
{
    using namespace std;

    float fGasolineConsumptionEU {};

    cout << "Enter automobile gasoline consumption figure (liters per 100 kilometers): ";
    cin >> fGasolineConsumptionEU;

    cout << fGasolineConsumptionEU << " liters per 100 kilometers = ";
    cout << fGasolineConsumptionEU / _RATIO_GAL_TO_L << " galons per ";
    cout << _RATIO_KM_TO_M * 100 << " miles\n";

    cout << "MPG = " << (_RATIO_KM_TO_M * 100) / (fGasolineConsumptionEU / _RATIO_GAL_TO_L) << endl;
}
