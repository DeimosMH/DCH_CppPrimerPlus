// Do the same problem as described in Programming Exercise 4, except make it a
// template function:

// ```cpp
// template <class T>
// int reduce(T ar[], int n);
// ```

#include <iostream>
#include <algorithm>
#include <random> // for random_device, mt19937, uniform_int_distribution

template <class T>
int reduce(T ar, int n); // Prototype

template <class T>
void printArr(T ar, int n);

int main()
{
    const int ARR_LEN = 100;
    long lArr[ARR_LEN]{};

    for (int i = 0; i < ARR_LEN; i++)
    {
        // Simple RNG - repeatable
        // lArr[i] = (long)(std::rand() % 20);

        // Advanced RNG
        std::random_device rd;
        std::mt19937 gen(rd());
        lArr[i] = (long)std::uniform_int_distribution<>(0, 50)(gen);
    }

    std::cout << "\nOriginal: ";
    printArr(lArr, ARR_LEN);

    int iNewLen = reduce(lArr, ARR_LEN);

    std::cout << "\nReduced, old length: ";
    printArr(lArr, ARR_LEN);
    std::cout << "\nReduced, new length: ";
    printArr(lArr, iNewLen);

    std::cout << "\n\nBye!";
    return 0;
}

/// @brief Sort and remove duplicates in array of longs
/// @return Size of new array
template <class T>
int reduce(T ar, int n)
{
    std::sort(ar, ar + n);
    auto itEnd = std::unique(ar, ar + n);

    //distance between two pointers itEnd and ar
    return itEnd - ar;
}

/// @brief Sort and remove duplicates in array of longs
/// @return Size of new array
template <class T>
int reduceRot(T ar, int n) // Definition
{
    // Sort
    std::sort(ar, ar + n);
    // printArr(ar, n);

    // Remove duplicate vals via rotate
    for (int i = 0, j = 0; i < n - 1; i++)
    {
        if (ar[i] == ar[i + 1])
        {
            std::rotate(ar + i, ar + i + 1, ar + n); // shift data from i, by one, set to the end
            i--;                                     // prevent going to next idx, when next val can also be the same

            // Anti-infinite-loop in case of inf repeats (can't rotate?),
            // Rotate the cause to not repeat
            j = (j < (n * 2)) ? j++ : 0;
            !j ? i++ : 0; // if(!j){ i++; };
            !j ? std::rotate(ar + i + 1, ar + i + 2, ar + n) : 0;
            // if(!j){std::cout << i << ",";} // print causes

            // Examplanary result: 0 1 2 4 5 7 9 11 12 13 14 15 16 18 1 2 4 5 7 11 15 16 18 1 2 4 7 18 1 2
        }
    }

    // Calculate length of new arr
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            return (i + 1); // return length of new arr
            // i + 1, because idx start from 0
        }
    }

    return n;
}

template <class T>
void printArr(T ar, int n)
{
    std::cout << "\n";

    for (auto i = 0; i < n; i++)
    {
        std::cout << ar[i] << " ";
    }
}