#include <iostream>

int Fill_array(double *arr, int arrSize);
void Show_array(double *arr, int arrSize);
void Reverse_array(double *arr, int arrSize);

int main(){
    int iArrSize {10};
    double *dArray = new double[iArrSize];

    iArrSize = Fill_array(dArray, iArrSize);

    std::cout << "\n" << iArrSize << "\n";
    Show_array(dArray, iArrSize);

    Reverse_array(dArray, iArrSize);
    Show_array(dArray, iArrSize);

    Reverse_array(dArray + 1, iArrSize - 2);
    Show_array(dArray, iArrSize);
}

int Fill_array(double *arr, int arrSize){
    int i {};

    std::cout << "\nEnter value of: \n";
    while(i < arrSize)
    {
        std::cout << "#" << i + 1 << " element: ";
        // arr[i] = i; // Autofill : ) 
        while (!(std::cin >> arr[i]))
        {
            std::cout << "Not a number. Breaking function!";
            std::cin.clear();
            while(std::cin.get() != '\n')
                continue;
            return i;
        }
        ++i;
    }

    return i;
}

void Show_array(double *arr, int arrSize){
    std::cout << std::endl;
    for (int i {0}; i < arrSize; ++i)
        std::cout << arr[i] << ", ";
}

void Reverse_array(double *arr, int arrSize){
    for (int i {}, j {arrSize - 1}; i < arrSize / 2; ++i, --j)
    {
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }    
}