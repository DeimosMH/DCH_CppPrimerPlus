#include <iostream>                          // a PREPROCESSOR directive

using namespace std;

void fun1()
{
    cout << "Three blind mice\n";
}

void fun2()
{
    cout << "See how they run\n";
}

int main()                                   // function header
{                                            // start of function body
    fun1();                                  // function call
    fun1();                                  // function call
    fun2();                                  // function call
    fun2();                                  // function call
    
    return 0;                                // terminate main()
} 