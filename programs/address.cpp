// address.cpp -- using the & operator to find addresses
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    // NOTE: you may need to use unsigned (&donuts)
    // and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}

/*
Here is the output from the program in Listing 4.14 on one system:
    donuts value = 6 and donuts address = 0x0065fd40
    cups value = 4.5 and cups address = 0x0065fd44

*/