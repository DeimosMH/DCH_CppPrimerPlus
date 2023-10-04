#include <iostream>
#include <string>
#include <cctype>

void fnFunA(std::string &data){
    int iLet {sizeof(data)/sizeof(data[0])};
    char temp[iLet];
    
    for (int i {}; i < iLet; ++i)
        data[i] = toupper((int)data[i]);
}

int main(){
    std::string sData;

    std::cout << "\nEnter a string (q to quit): ";
    while (std::getline(std::cin, sData))
    {
        if (sData == "q")
            break;

        fnFunA(sData);
        
        std::cout << sData << "\n";
        std::cout << "Next string (q to quit): ";
    }
    
    return 0;
}