#include <iostream>
using namespace std;

int fnInput(double *pdScores, int iLength);
// int fnInput(double pdScores[], int iLength); // The same

double fnCalculation(double *pdScores, int iNumEl);
void fnDisplay(double *dFnScores, double dFnAverage, int iNumEl);

int main(){
    const int iArrayLength{10}; 
    double dScores[iArrayLength]{};
    double dAverage{};
    int iNumEl{};

    iNumEl = fnInput(dScores, iArrayLength);
    dAverage = fnCalculation(dScores, iNumEl);
    fnDisplay(dScores, dAverage, iNumEl);

    return 0;
}

int fnInput(double *dFnScores, int iLength){
    cout << "\nEnter 10 golf scores (`q` to quit):\n#1 Score: ";

    int i{};
    while(cin >> dFnScores[i] && i < iLength-1)
        cout << "#" << (++i + 1) << " Score: ";

    return i;
}

double fnCalculation(double *dFnScores, int iNumEl){
    double dFnAverage{};

    for (int i{}; i <= iNumEl; ++i){
        cout << "\t" << dFnAverage << " " << dFnScores[i];
        dFnAverage += dFnScores[i];
    }
    
    dFnAverage = dFnAverage / (iNumEl + 1); 

    return dFnAverage;
}

void fnDisplay(double *dFnScores, double dFnAverage, int iNumEl){
    cout << "\nScores: ";
    for (int j{}; j <= iNumEl; ++j)
        cout << dFnScores[j] << ", ";

    cout << "\nAverage: " << dFnAverage << endl;
}
