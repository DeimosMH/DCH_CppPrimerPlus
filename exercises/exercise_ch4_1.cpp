#include <iostream>

struct stStudent {
    char firstName[50];
    char lastName[50];
    char Grade;
    unsigned int age;
};

int main() 
{
    using namespace std;
    stStudent *pStudent = new stStudent;

    cout << "What is your first name? "; 
    cin.getline(pStudent->firstName, 50);

    cout << "What is your last name? ";
    cin.getline(pStudent->lastName, 50);
    
    cout << "What letter grade do you deserve? ";
    cin >> pStudent->Grade;

    cout << "What is your age? ";
    cin >> pStudent->age;

    cout << "Name: " << pStudent->lastName << ", " << pStudent->firstName << endl;
    cout << "Grade: " << (char) ++(pStudent->Grade) << endl;    
    cout << "Age: " << pStudent->age << endl;

    return 0;
}