#include <iostream>
void countdown(int n);

int main()
{
    countdown(4); // call the recursive function
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if (n > 0)
        countdown(n - 1); // function calls itself
    cout << n << ": Kaboom!\n";
}

/*
Counting down ... 4 ‹level 1; adding levels of recursion
Counting down ... 3 ‹level 2
Counting down ... 2 ‹level 3
Counting down ... 1 ‹level 4
Counting down ... 0 ‹level 5; final recursive call
0: Kaboom! ‹level 5; beginning to back out
1: Kaboom! ‹level 4
2: Kaboom! ‹level 3
3: Kaboom! ‹level 2
4: Kaboom! ‹level 1


cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;
...
cout << n << ": Kaboom!"; << " (n at " << &n << ")" << endl;

Doing so produces output like the following:
Counting down ... 4 (n at 0012FE0C)
Counting down ... 3 (n at 0012FD34)
Counting down ... 2 (n at 0012FC5C)
Counting down ... 1 (n at 0012FB84)
Counting down ... 0 (n at 0012FAAC)
0: Kaboom! (n at 0012FAAC)
1: Kaboom! (n at 0012FB84)
2: Kaboom! (n at 0012FC5C)
3: Kaboom! (n at 0012FD34)
4: Kaboom! (n at 0012FE0C)
*/