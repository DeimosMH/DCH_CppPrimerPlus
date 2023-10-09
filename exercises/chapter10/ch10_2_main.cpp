#include <iostream>
#include "ch10_2.h"

int main()
{
    using namespace std;

    Person *myMan = new Person;
    Person *yourMan = new Person("Jeff");
    Person *ourMan = new Person("Jeff", "Coke");
    
    Person staticMan("Live", "Longman");

    cout << "\n\nDefault init myMan: ";
    myMan->Show();
    
    cout << "\n\nInit yourMan: ";
    yourMan->Show();
    
    cout << "\n\nInit ourMan: ";
    yourMan->Show();

    cout << "\n\nInit ourMan formalshow: ";
    yourMan->FormalShow();

    cout << "\n\nInit staticMan: ";
    yourMan->Show();

    delete myMan, yourMan, ourMan;

    return 0;
}