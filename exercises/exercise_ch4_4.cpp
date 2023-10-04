#include <iostream>
#include <string>

int main() 
{
    using namespace std;
    string szFirstName;
    string szLastName;
    string szConNames;

    cout << "Enter your first name: "; 
    getline(cin, szFirstName);

    cout << "Enter your last name: ";
    getline(cin, szLastName);
    
    cout << "Here is the information in a single string: ";
    szConNames = szLastName + ", " + szFirstName;
    cout << szConNames << endl;
    
    return 0;
}