// Write a function with an old-style interface that has this prototype:

// ```cpp
// int reduce(long ar[], int n);
// ```

// The actual arguments should be the name of an array and the number of elements
// in the array.

// The function should sort an array, remove duplicate values, and return a
// value equal to the number of elements in the reduced array.

// Write the function using STL functions.

// (If you decide to use the general <code>unique()</code> function, note that
// it returns the end of the resulting range.)

// Test the function in a short program.

#include <iostream>
#include <algorithm>
#include <random> // for random_device, mt19937, uniform_int_distribution

int reduce(long ar[], int n); // Prototype
void printArr(long ar[], int n);

int main()
{
    const int ARR_LEN = 50;
    long lArr[ARR_LEN]{};

    for (int i = 0; i < ARR_LEN; i++)
    {
        // Simple RNG - repeatable
        // lArr[i] = (long)(std::rand() % 20);

        // Advanced RNG
        std::random_device rd;
        std::mt19937 gen(rd());
        lArr[i] = (long) std::uniform_int_distribution<>(0, 50)(gen);
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
int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    auto itEnd = std::unique(ar, ar + n);

    //distance between two pointers itEnd and ar
    return itEnd - ar;
}

/// @brief Sort and remove duplicates in array of longs
/// @return Size of new array
int reduceRot(long ar[], int n) // Definition
{
    // Sort
    std::sort(ar, ar + n);
    // printArr(ar, n);

    // Remove duplicate vals
    for (int i = 0, j = 0; i < n - 1; i++)
    {
        if (ar[i] == ar[i + 1])
        {
            // rotates [ar + i, ar + n) left by distance(ar + i, ar + i + 1) positions, returns the iterator pointing at *(ar + i) new home
            std::rotate(ar + i, ar + i + 1, ar + n); // shift data from i, by one, set to the end
            i--;                                     // prevent going to next idx, when next val can also be the same
            // Examplanary result: 0 1 2 4 5 7 9 11 12 13 14 15 16 18 1 2 4 5 7 11 15 16 18 1 2 4 7 18 1 2

            // Anti-infinite-loop in case of inf repeats (can't rotate?),
            // Rotate the cause to not repeat
            j = (j < (n * 2)) ? j++ : 0;
            !j ? i++ : 0; // if(!j){ i++; };
            !j ? std::rotate(ar + i + 1, ar + i + 2, ar + n) : 0;
            // if(!j){std::cout << i << ",";} // print causes
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

void printArr(long ar[], int n)
{
    std::cout << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << ar[i] << " ";
    }
}