#include <iostream>
#include <cctype>

int main(){
    using namespace std;

    char cInput;

    while (cin.get(cInput) && cInput != '@')
    {
        if(isdigit(cInput))
            cInput = ' ';
        else if(isupper(cInput))
            cInput = tolower(cInput);
        else
            cInput = toupper(cInput);
        cout << cInput;
    }
    
    return 0;
}