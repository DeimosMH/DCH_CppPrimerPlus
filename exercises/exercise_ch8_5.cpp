#include <iostream>

template <typename T>
T max5(T tVal[5]);

int main()
{
    int iTestVal[5] {9,3,6,8,4};
    double dTestVal[5] {9.35, 9.424, 9.383, 9.123, 9.13};
    double dOutput {};

    std::cout << "\n int test: \n";
    dOutput = max5(iTestVal);
    std::cout << dOutput << ", and fun : " << max5(iTestVal) << std::endl;


    std::cout << "\n double test: \n";
    dOutput = max5(dTestVal);
    std::cout << dOutput << ", and fun : " << max5(dTestVal) << std::endl ;

    std::cout << std::endl;

    return 0;
}

template<typename T>
T max5(T tVal[5]) 
{
    T tMax {tVal[0]};

    for (int i {1}; i < 5; i++)
        if (tMax < tVal[i])
            tMax = tVal[i];
    
    return tMax;
}
