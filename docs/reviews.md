# Reviews

## Chapter 2 Review

<details><summary>
1. What are the modules of C++ programs called?
</summary>
They are called functions
</details>

<details><summary>
2. What does the following preprocessor directive do?

```#include <iostream>```
</summary>
It causes the contents of the iostream file to be substituted for this
directive before final compilation.
</details>

<details><summary>
3. What does the following statement do?

``using namespace std;``
</summary>
It makes definitions made in the std namespace available to a program.
</details>

<details><summary>
4. What statement would you use to print the phrase “Hello, world” and then
start a new line?
</summary>

```cpp
cout << "Hello, world\n";
```

or

```cpp
cout << "Hello, world" << endl;
```

</details>

<details><summary>
5. What statement would you use to create an integer variable with the name
cheeses ?
</summary>

```cpp
int cheeses;
```

</details>

<details><summary>
6. What statement would you use to assign the value 32 to the variable cheeses ?
</summary>

```cpp
cheeses = 32;
```

</details>

<details><summary>
7. What statement would you use to read a value from keyboard input into the<br>
&emsp;variable cheeses ?
</summary>

```cpp
cin >> cheeses;
```

</details>

<details><summary>
8. What statement would you use to print “We have X varieties of cheese,”<br>
&emsp;where the current value of the cheeses variable replaces X ?
    </summary>

```cpp
cout << "We have " << cheeses << " varieties of cheese\n";
```

</details>

<details><summary>
9. What do the following function prototypes tell you about the functions?

```cpp
int prune(void);
int froop(double t);
void rattle(int n);
```

</summary>

The function froop() expects to be called with one argument, which will be type
double, and that the function will return a type int value. For instance, it
could be used as follows: ``int gval = froop(3.14159);``

The function rattle() has no return value and expects an int argument.
For instance, it could be used as follows: ``rattle(37);``

The function prune() returns an int and expects to be used without an argument.
For instance, it could be used as follows: ``int residue = prune();``
</details>

<details><summary>
10.  When do you not have to use the keyword return when you define a function?
</summary>

You don’t have to use return in a function when the function has the return type
`void`. However, you can use it if you don’t give a return value: ``return;``
</details>

<details><summary>
11. Suppose your main() function has the following line:

``cout << “Please enter your PIN: “;``
And suppose the compiler complains that cout is an unknown identifier.
What is the likely cause of this complaint, and what are three ways to fix the problem?
    </summary>
***Lack of caller for std library.***
Use directive: ``using namespace std;`` or ``using std::cout`` for only
`cout` or call library with `std::cout` instead of `cout`
</details>

---

## Chapter 3 Review

<details><summary>
1. Why does C++ have more than one integer type?
</summary>

Having more than one integer type lets you choose the type that is best suited to
a particular need. For example, you could use `short` to conserve space or `long
to guarantee storage capacity or to find that a particular type speeds up a
particular calculation.

</details>

<details><summary>
2. Declare variables matching the following descriptions:<br>
&nbsp&nbsp&nbsp&nbsp&nbsp a. A short integer with the value 80<br>
&nbsp&nbsp&nbsp&nbsp&nbsp b. An unsigned int integer with the value 42,110<br>
&nbsp&nbsp&nbsp&nbsp&nbsp c. An integer with the value 3,000,000,000
    </summary>

```cpp
short rbis = 80; // or short int rbis = 80;
unsigned int q = 42110; // or unsigned q = 42110;
unsigned long ants = 3000000000;
// or long long ants = 3000000000;

//Note: Don’t count on int being large enough to hold 3,000,000,000.Also if your
//system supports universal list-initialization, you could use it:
short rbis = {80}; // = is optional
unsigned int q {42110}; // could use = {42110}
long long ants {3000000000};
```

</details>

<details><summary>
3. What safeguards does C++ provide to keep you from exceeding the limits of an
integer type?
    </summary>

C++ provides no automatic safeguards to keep you from exceeding integer limits;
you can use the climits header file to determine what the limits are.
</details>

<details><summary>
4. What is the distinction between 33L and 33?
    </summary>

The constant 33L is type long, whereas the constant 33 is type int.
</details>

<details><summary>
5. Consider the two C++ statements that follow:

```cpp
char grade = 65;
char grade = 'A';
```

Are they equivalent?
    </summary>

The two statements are not really equivalent, although they have the same effect
on some systems. Most importantly, the first statement assigns the letter `A`
to grade only on a system using the `ASCII` code, while the second statement
also works for other codes. Second, `65` is a type int constant, whereas `'A'`
is a type char constant.
</details>

<details><summary>
6. How could you use C++ to find out which character the code 88 represents?
Come up with at least two ways.
    </summary>

Here are four ways:

```cpp
char c = 88;
cout << c << endl; // char type prints as character
cout.put(char(88)); // put() prints char as character
cout << char(88) << endl; // new-style type cast value to char
cout << (char)88 << endl; // old-style type cast value to char
```

</details>

<details><summary>
7. Assigning a `long` value to a `float` can result in a rounding error.
What about assigning `long` to `double`? `long long` to `double`?
    </summary>

The answer depends on how large the two types are. If `long` is 4 bytes,
there is no loss. That’s because the largest `long` value would be about
2 billion, which is 10 digits. Because `double` provides at least 13 significant
figures, no rounding would be needed. The `long long` type, on the other hand,
can reach 19 digits, which exceeds the 13 significant figures guaranteed for `double`.
</details>

<details><summary>
8. Evaluate the following expressions as C++ would:

```cpp
a. 8 * 9 + 2 
b. 6 * 3 / 4 
c. 3 / 4 * 6 
d. 6.0 * 3 / 4 
e. 15 % 4 
```

</summary>

```cpp
a. 8 * 9 + 2 is 72 + 2 is 74
b. 6 * 3 / 4 is 18 / 4 is 4
c. 3 / 4 * 6 is 0 * 6 is 0
d. 6.0 * 3 / 4 is 18.0 / 4 is 4.5
e. 15 % 4 is 3
```

</details>

<details><summary>
9.  Suppose `x1` and `x2` are two type `double` variables that you want to
add as `integers` and assign to an `integer` variable. Construct a C++ statement
for doing so. What if you want to add them as type `double` and then convert to `int`?

</summary>

Either of the following would work for the first task:

```cpp
int pos = (int) x1 + (int) x2;
int pos = int(x1) + int(x2);
```

To add them as type double and then convert, you could do either of the following:

```cpp
int pos = (int) (x1 + x2);
int pos = int(x1 + x2);
```

</details>

<details><summary>
10.  What is the variable type for each of the following declarations?

```cpp
a. `auto cars = 15;` 
b. `auto iou = 150.37f;`
c. `auto level = 'B';` 
d. `auto crat = U'/U00002155';` 
e. `auto fract = 8.25f/2.5;` 
```

</summary>

```cpp
a. int
b. float
c. char
d. char32_t
e. double
```

</details>

## Chapter 4 Review


<details><summary>
1. How would you declare each of the following?

```cpp
a. actors is an array of 30 char.
b. betsie is an array of 100 short.
c. chuck is an array of 13 float.
d. dipsea is an array of 64 long double.
```

</summary>

```cpp
char actors[30];
short betsie[100];
float chuck[13];
long double dipsea[64];
```

</details>

<details><summary>
2. Do Chapter Review Question 1 and use the array template class instead of
built-in arrays.
    </summary>

```cpp
array<char, 30> actors;
array<short, 100> betsie;
array<float, 13> chuck;
array<long double, 64> dipsea;
```

</details>

<details><summary>
3. Declare an array of five ints and initialize it to the first five odd
positive integers
    </summary>

```cpp
int oddly[5] = {1, 3, 5, 7, 9};
array<int, 5> at {1, 3, 5, 7, 9}; // also correct
```

</details>

<details><summary>
4. Write a statement that assigns the sum of the first and last elements of the
array in Question 3 to the variable even.
    </summary>

```cpp
int even = array[0] + array[4]; 
```

</details>

<details><summary>
5. Write a statement that displays the value of the second element in the float
array ideas.
    </summary>

```cpp
std::cout << ideas[1];
```

</details>

<details><summary>
6. Declare an array of char and initialize it to the string "cheeseburger".
    </summary>

```cpp
char food[] {"cheeseburger"};
// or
char lunch[13] = "cheeseburger"; // number of characters + 1
```

</details>

<details><summary>
7. Declare a string object and initialize it to the string "Waldorf Salad".
    </summary>

```cpp
std::string obj = "Waldorf Salad";
```

</details>

<details><summary>
8. Devise a structure declaration that describes a fish.The structure should
include the kind, the weight in whole ounces, and the length in fractional inches.
    </summary>

```cpp
struct fish {
    char kind[20];
    int weight;
    float length;
};
```

</details>

<details><summary>
9. Declare a variable of the type defined in Question 8 and initialize it.
    </summary>

```cpp
fish petes =
{
    "trout",
    12,
    26.25
};

// fish flounder; //??
// flounder.kind = "fishy";
// flounder.weight = 21;
// flounder.length = 21;
```

</details>

<details><summary>
10.  Use enum to define a type called Response with the possible values Yes,
No, and Maybe.<br> Yes should be 1, No should be 0, and Maybe should be 2.
    </summary>

```cpp
enum response {No, Yes, Maybe};
```

</details>

<details><summary>
11.  Suppose ted is a double variable.
Declare a pointer that points to ted and use the pointer to display ted’s value.
    </summary>

```cpp
double *ptrTed = &ted;
std::cout << *ptrTed;
```

</details>

<details><summary>
12.  Suppose treacle is an array of 10 floats. Declare a pointer that points
to the first element of treacle and use the pointer to display the first and
last elements of the array.
    </summary>

</details>

```cpp
float *ptrTreacle = treacle; // or = &treacle[0]
cout << pf[0] << " " << pf[9] << "\n";
std::cout << ptrTreacle[0] << "last" << ptrTreacle[9];
// or use:
// std::cout << *(ptrTreacle + 1) << "last" << *(ptrTreacle + 9);
```

<details><summary>
13. Write a code fragment that asks the user to enter a positive integer and
then creates a dynamic array of that many ints.
Do this by using new, then again using a vector object.
    </summary>

```cpp
unsigned int iUsr {};
cout << "Enter a positive integer: ";
std::cin >> iUsr;

int *sth = new int[iUsr];
vector<int> sth(iUsr);
```

</details>

<details><summary>
14. Is the following valid code? If so, what does it print?

```cpp
cout << (int *) “Home of the jolly bytes”;
```

</summary>

//Yes
//Start of memory of this Literal
Yes, it is valid.The expression "Home of the jolly bytes" is a string constant;
hence it evaluates as the address of the beginning of the string.The cout object
interprets the address of a char as an invitation to print a string, but the type cast
(int *) converts the address to type pointer-to-int, which is then printed as an
address. In short, the statement prints the address of the string, assuming the int
type is wide enough to hold an address.
</details>

<details><summary>
15. Write a code fragment that dynamically allocates a structure of the type
described in Question 8 and then reads a value for the `kind` member of the structure.
    </summary>

```cpp
struct fish
{
    char kind[20];
    int weight;
    float length;
};

int main(){
    fish * pole = new fish;    

    std::cout << "Enter kind of fish: ";
    std::cin >> pole->kind;
}
```

</details>

<details><summary>
16. Listing 4.6 illustrates a problem created by following numeric input with
line-oriented string input. How would replacing:

```cpp
// this:
cin.getline(address,80);
// with this:
cin >> address;
// affect the working of this program?
```

</summary>

//cin >> address will read from user only to the space. Data after space will be in the queue;
Using cin >> address causes a program to skip over whitespace until it finds nonwhitespace.
It then reads characters until it encounters whitespace again.Thus, it
will skip over the newline following the numeric input, avoiding that problem. On
the other hand, it will read just a single word, not an entire line.
</details>

<details><summary>
17. Declare a vector object of 10 string objects and an array object of 10 string objects.
Show the necessary header files and don’t use using. Do use a const for the number of strings.
</summary>

```cpp
#include <string>
#include <vector>
#include <array>

// vector<string> vSth(10);
// array<string, 10> aSth;

const int Str_num {10}; // or = 10
...
std::vector<std::string> vstr(Str_num);
std::array<std::string, Str_num> astr;
```

</details>

## Chapter 5 Review

<details><summary>
1. What’s the difference between an entry-condition loop and an exit-condition loop?
Which kind is each of the C++ loops?
    </summary>
// entry-condition loop - check condition before entering the loop <br>
// exit-condition loop -  check condition at the end of loop, making at least 1 loop<br><br>

An entry-condition loop evaluates a test expression before entering the body of the
loop. If the condition is initially false, the loop never executes its body.An exitcondition
loop evaluates a test expression after processing the body of the loop.
Thus, the loop body is executed once, even if the test expression is initially false.
The for and while loops are entry-condition loops, and the do while loop is an
exit-condition loop
</details>

<details><summary>
2. What would the following code fragment print if it were part of a valid program?

```cpp
int i;
for (i = 0; i < 5; i++)
    cout << i;
    cout << endl;
```

</summary>
01234

Note that cout << endl; is not part of the loop body (because there are no
braces).
</details>

<details><summary>
3. What would the following code fragment print if it were part of a valid program?

```cpp
int j;
for (j = 0; j < 11; j += 3)
    cout << j;
cout << endl << j << endl;
```

</summary>
It would print the following:<br>
0369<br>
12<br>
</details>

<details><summary>
4. What would the following code fragment print if it were part of a valid program?

```cpp
int j = 5;
while ( ++j < 9)
    cout << j++ << endl;
```

</summary>
It would print the following:<br>
6<br>
8
</details>

<details><summary>
5. What would the following code fragment print if it were part of a valid program?

```cpp
int k = 8;
do
    cout <<" k = " << k << endl;
while (k++ < 5);
```

</summary>
It would print the following:<br>
k = 8
</details>

<details><summary>
6. Write a `for` loop that prints the values 1 2 4 8 16 32 64 by increasing the value of
a counting variable by a factor of two in each cycle.
    </summary>
It’s simplest to use the *= operator:<br>

```cpp
for(int i {}; i < 65; i *= 2)
    cout << i << " ";
```

</details>

<details><summary>
7. How do you make a loop body include more than one statement?
    </summary>
//add curly braces {} <br>

You enclose the statements within paired braces to form a single compound statement,
or block.
</details>

<details><summary>
8. Is the following statement valid? If not, why not? If so, what does it do?

```cpp
int x = (1,024);
```

What about the following?

```cpp
int y;
y = 1,024;
```

</summary>
//1st is valid, but 1 will be assigned to x due to precedence and first value will do nothing <br>
//in 2nd 1 will be assigned to y, and 024 will do nothing, but confuse. <br><br>

Yes, the first statement is valid.The expression 1,024 consists of two expressions—1
and 024—joined by a comma operator.The value is the value of the right-hand
expression.This is 024, which is octal for 20, so the declaration assigns the value 20
to x.The second statement is also valid. However, operator precedence causes it to
be evaluated as follows:

```cpp
(y = 1), 024;
```

That is, the left expression sets y to 1, and the value of the entire expression, which
isn’t used, is `024`, or `20`.

</details>

<details><summary>
9. How does cin >> ch differ from cin.get(ch) and ch=cin.get() in how it views
input?
    </summary>
//cin>>ch will omit spaces, cin.get(ch) will return bool true, false if EOF,
ch=cin.get() will assign int value and EOF if EOF <br><br>

The `cin >> ch` form skips over spaces, newlines, and tabs when it encounters them.
The other two forms read those characters
</details>

## Chapter 6 Review

<details><summary>
1. Consider the following two code fragments for counting spaces and newlines

```cpp
// Version 1
while (cin.get(ch)) // quit on eof
{
    if (ch == ' ')
        spaces++;
    if (ch == '\n')
        newlines++;
}
// Version 2
while (cin.get(ch)) // quit on eof
{
    if (ch == ' ')
        spaces++;
    else if (ch == '\n')
        newlines++;
}
```

What advantages, if any, does the second form have over the first?
</summary>
// Because version 1 checks every times both conditions, thus it's less efficient.<br>
// Version 2 checks 2 condition only if first is not true.<br><br>

Both versions give the same answers, but the if else version is more efficient.
Consider what happens, for example, when ch is a space.Version 1, after incrementing
spaces, tests whether the character is a newline.This wastes time because the
program has already established that ch is a space and hence could not be a newline.
Version 2, in the same situation, skips the newline test.
</details>

<details><summary>
2. In Listing 6.2, what is the effect of replacing ++ch with ch+1?

```cpp
Listing 6.2 ifelse.cpp
// ifelse.cpp -- using the if else statement
#include <iostream>
    int
    main()
{
    char ch;
    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch; // done if newline
        else
            std::cout << ++ch; // done otherwise
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}
```

</summary>

// The `char` is promoted to `int`, and display numbers

Both `++ch` and `ch + 1` have the same numerical value. But `++ch` is type char and
prints as a character, while `ch + 1`, because it adds a `char` to an `int`,
is type `int` and prints as a number.

</details>

<details><summary>
3. Carefully consider the following program:

```cpp
#include <iostream>
using namespace std;
int main()
{
    char ch;
    int ct1, ct2;
    ct1 = ct2 = 0;
    while ((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1++;
        if (ch = '$')
            ct2++;
        cout << ch;
    }
    cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
    return 0;
}
```

Suppose you provide the following input, pressing the Enter key at the end of each line:

```sh
Hi!
Send $10 or $20 now!
```

What is the output? (Recall that input is buffered.)
    </summary>

// Program print after every read character `$` and if in input is `$`, the while loop will end.
// `Hi!`
// `H$i$!$`
// `$Send $10 or $20 now!`
// `S$e$n$d$ $ct1 = 8, ct2 = 8` // `$` is added even newline, and `ct` is added with it, I didn't include that

Because the program uses `ch = '$'` instead of `ch == '$'`, the combined input and
output looks like this:

```sh
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```

Each character is converted to the `$` character before being printed the second
time.Also the value of the expression `ch = $` is the code for the `$` character, hence
nonzero, hence `true`; so `ct2` is incremented each time.
</details>

<details><summary>
4. Construct logical expressions to represent the following conditions:

```cpp
    a. weight is greater than or equal to 115 but less than 125.
    b. ch is q or Q.
    c. x is even but is not 26.
    d. x is even but is not a multiple of 26.
    e. donation is in the range 1,000–2,000 or guest is 1.
    f. ch is a lowercase letter or an uppercase letter. (Assume, as is true for ASCII, 
    that lowercase letters are coded sequentially and that uppercase letters are coded 
    sequentially but that there is a gap in the code between uppercase and lowercase.)
```

</summary>

```cpp
weight >= 115 && weight < 125                           //a
ch == `q` || ch == `Q`                                  //b
x % 2 == 0 && x != 26                                   //c

x % 2 == 0 && x % 26 != 0                               //d
x % 2 == 0 && !(x % 26 == 0)                            //d
donation >= 1000 && donation <= 2000 || guest == 1      //e

(ch => `a` && ch <= z) || (ch >= `A` && ch <= `Z`)      //f
isalpha(ch)                                             //f
```

</details>

<details><summary>
5. In English, the statement “I will not not speak” means the same as
“I will speak.” In C++, is !!x the same as x?
    </summary>

// No. Return from `!!x` is boolean/int, while `x` have defined type by programmer

Not necessarily. For example, if `x` is 10, then `!x` is 0 and `!!x` is 1.
However, if `x` is a `bool` variable, then `!!x` is `x`.
</details>

<details><summary>
6. Construct a conditional expression that is equal to the absolute value of a variable.
That is, if a variable x is positive, the value of the expression is just x,
but if x is negative, the value of the expression is -x, which is positive.
    </summary>

```cpp
// x > 0 ? x : -x

(x < 0)? -x : x
// or
(x >= 0)? x : -x;
```

</details>

<details><summary>
7. Rewrite the following fragment using switch:

```cpp
if (ch == 'A')
    a_grade++;
else if (ch == 'B')
    b_grade++;
else if (ch == 'C')
    c_grade++;
else if (ch == 'D')
    d_grade++;
else
    f_grade++;
```

</summary>

```cpp
switch (ch)
{
    case `A`:   a_grade++;
                break;
    case `B`:   b_grade++;
                break;
    case `C`:   c_grade++;
                break;
    case `D`:   d_grade++;
                break;
    default:    f_grade++;
                break;
}
```

</details>

<details><summary>
8. In Listing 6.10, what advantage would there be in using character labels,
such as a and c, instead of numbers for the menu choices and switch cases?
(Hint:Think about what happens if the user types q in either case and what
happens if the user types 5 in either case.)

```cpp
Listing 6.10 switch.cpp
// switch.cpp -- using the switch statement
#include <iostream>
    using namespace std;
void showmenu(); // function prototypes
void report();
void comfort();
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss was in all day.\n";
            break;
        case 4:
            comfort();
            break;
        default:
            cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
            "1) alarm 2) report\n"
            "3) alibi 4) comfort\n"
            "5) quit\n";
}
void report()
{
    cout << "It's been an excellent week for business.\n"
            "Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
            "in the industry. The board of directors think\n"
            "you are the finest CEO in the industry.\n";
}
```

</summary>
// Character labels would be more resistant to invalid input (characters promoted to int instead numbers);<br>
// It would also not go into infinite loop due to buffered characters from user input <br> <br>

If you use integer labels and the user types a noninteger such as q, the program
hangs because integer input can’t process a character. But if you use character labels
and the user types an integer such as 5, character input will process 5 as a character.
Then the default part of the switch can suggest entering another character.
</details>

<details><summary>
9. Consider the following code fragment:

```cpp
int line = 0;
char ch;
while (cin.get(ch))
{
    if (ch == 'Q')
        break;
    if (ch != '\n')
        continue;
    line++;
}
```

Rewrite this code without using break or continue.
    </summary>

```cpp
int line = 0;
char ch;
while (cin.get(ch) && ch != 'Q')
{
    if (ch == '\n')
        line++;
}
```

</details>
