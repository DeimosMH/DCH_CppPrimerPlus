#include <iostream>
#include <cstring>

struct CandyBar{
    char name[50];
    float weight;
    int calories;
};

void fnFunA(CandyBar &cb, const char *cstr, int num){
    --num; // 9 letters  
    cb.name[0] = cstr[num-1]; 
    cb.weight = float(cstr[num-2]) * 0.1;
    cb.calories = int(cstr[num-3]);
}

void fnFunB(CandyBar const &cb){
    std::cout << cb.name << ", ";
    std::cout << cb.weight << ", ";
    std::cout << cb.calories << std::endl;
}

int main(){
    int iNum {10};
    char cData[iNum] {"qwertyuiO"};
    CandyBar myCandy {"Millennium Munch", 2.85, 350};

    std::cout << "\nCurrent data: \n";
    fnFunB(myCandy);

    std::cout << "\n-PROCESS DATA-\n";
    fnFunA(myCandy, cData, iNum);

    std::cout << "\nNew data: \n";
    fnFunB(myCandy);
    std::cout << std::endl;

    return 0;
}