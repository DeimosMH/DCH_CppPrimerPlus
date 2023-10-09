#include <iostream>
#include <cstring>

int main() 
{
    using namespace std;
    char szFirstName[50];
    char szLastName[50];
    char szConNames[100];

    cout << "Enter your first name: "; 
    cin.getline(szFirstName, 50);

    cout << "Enter your last name: ";
    cin.getline(szLastName, 50);
    
    cout << "Here is the information in a single string: ";
    strcpy(szConNames, szLastName);
    strcat(szConNames, ", ");
    strcat(szConNames, szFirstName);
    cout << szConNames << endl;
    
    return 0;
}