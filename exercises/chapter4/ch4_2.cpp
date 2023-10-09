#include <iostream>
#include <string>

struct stStudent {
    std::string firstName;
    std::string lastName;
    char Grade;
    unsigned int age;
};

int main() 
{
    using namespace std;
    stStudent *pStudent = new stStudent;

    cout << "What is your first name? "; 
    getline(cin, pStudent->firstName);
    
    cout << "What is your last name? ";
    getline(cin, pStudent->lastName);
    
    cout << "What letter grade do you deserve? ";
    cin >> pStudent->Grade;

    cout << "What is your age? ";
    cin >> pStudent->age;

    cout << "Name: " << pStudent->lastName << ", " << pStudent->firstName << endl;
    cout << "Grade: " << (char) ++(pStudent->Grade) << endl;     
    cout << "Age: " << pStudent->age << endl;

    return 0;
}