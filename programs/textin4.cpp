// textin4.cpp -- reading chars with cin.get()
#include <iostream>
int main(void)
{
    using namespace std;
    int ch; // should be int, not char
    int count = 0;
    while ((ch = cin.get()) != EOF) // test for end-of-file
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl
         << count << " characters read\n";
    return 0;
}

/*
Here’s a sample run of the program in Listing 5.19:
    The sullen mackerel sulks in the shadowy shallows.<ENTER>
    The sullen mackerel sulks in the shadowy shallows.
    Yes, but the blue bird of happiness harbors secrets.<ENTER>
    Yes, but the blue bird of happiness harbors secrets.
    <CTRL>+<Z><ENTER>
    104 characters read

Let’s analyze the loop condition:

    while ((ch = cin.get()) != EOF)
The parentheses that enclose the subexpression ch = cin.get() cause the program to
evaluate that expression first.To do the evaluation, the program first has to call the
cin.get() function. Next, it assigns the function return value to ch. Because the value of
an assignment statement is the value of the left operand, the whole subexpression reduces
to the value of ch. If this value is EOF, the loop terminates; otherwise, it continues.The
test condition needs all the parentheses. Suppose you leave some parentheses out:

    while (ch = cin.get() != EOF)
The != operator has higher precedence than =, so first the program compares
cin.get()’s return value to EOF.A comparison produces a false or true result; that
bool value is converted to 0 or 1, and that’s the value that gets assigned to ch.
Using cin.get(ch) (with an argument) for input, on the other hand, doesn’t create
any type problems. Remember that the cin.get(char) function doesn’t assign a special
value to ch at the EOF. In fact, it doesn’t assign anything to ch in that case. ch is never
called on to hold a non-char value.Table 5.3 summarizes the differences between
cin.get(char) and cin.get().

*/