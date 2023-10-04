#include <iostream>
#include <cstring>

template <typename T>
T maxn(T tVal[], int iNumEl);

template <> const char *maxn(const char *cArr[], int iNumPtr);

int main()
{
    int iVals[6] {123, 234, 564, 34, 535, 543};
    double dVals[4] {1.23, 2.34, 5.64, 3.4};
    const char *cVals[6] {"fdsffds", "lubie placki", "was is das", "i like pancakes", "ni hao", "arigato"};

    std::cout << "\n int test: \n";
    std::cout << maxn(iVals, 6);

    std::cout << "\n double test: \n";
    std::cout << maxn(dVals, 4);

    std::cout << "\n c-string test: \n";
    std::cout << maxn(cVals, 6);
    std::cout << std::endl << "str2 :" << *cVals << ", in memory: " << cVals;

    return 0;
}

template <typename T>
T maxn(T tVal[], int iNumEl)
{
    T tMax{tVal[0]};

    for (int i{}; i < iNumEl; ++i)
        if (tMax < tVal[i])
            tMax = tVal[i];

    return tMax;
}

template <> const char *maxn(const char *cArr[], int iNumPtr){
    int iMax = strlen(cArr[0]);
    int tmp{};

    for (int i{}; i < iNumPtr; ++i){
        if (iMax < strlen(cArr[i])){
            iMax = strlen(cArr[i]);
            tmp = i;
        }
    }

    std::cout << std::endl << "str1 :" << *cArr << ", in memory: " << cArr << std::endl;
    return cArr[tmp];   
}
