# Reviews

## Chapter 2

<details><summary>
1. What are the modules of C++ programs called?
</summary>
They are called functions
</details>

<details><summary>
2. What does the following preprocessor directive do?

<pre>
```cpp
cpp #include <iostream>
```
</pre>

</summary>
It causes the contents of the iostream file to be substituted for this
directive before final compilation.
</details>

<details><summary>
3. What does the following statement do?

<pre>
```cpp
using namespace std;
```
</pre>

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
6. What statement would you use to assign the value 32 to the variable cheeses?
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
could be used as follows: <code> int gval = froop(3.14159); </code><br>

The function rattle() has no return value and expects an int argument.
For instance, it could be used as follows: <code> rattle(37); </code><br>

The function prune() returns an int and expects to be used without an argument.
For instance, it could be used as follows: <code> int residue = prune(); </code><br>
</details>

<details><summary>
10.  When do you not have to use the keyword return when you define a function?
</summary>

You don’t have to use return in a function when the function has the return type
<code>void</code>. However, you can use it if you don’t give a return value: <code> return; </code>

</details>

<details><summary>
11. Suppose your main() function has the following line:

<pre>
```cpp
cout << “Please enter your PIN: “;
```
</pre>

And suppose the compiler complains that cout is an unknown identifier.
What is the likely cause of this complaint, and what are three ways to fix the problem?
    </summary>

<b>Lack of caller for std library.<b>

Use directive:

```cpp
using namespace std;
```

or

```cpp
using std::cout
```

for only <code>cout</code> or call library with <code>std::cout</code> instead of <code>cout</code>

</details>

---

## Chapter 3

<details><summary>
1. Why does C++ have more than one integer type?
</summary>

Having more than one integer type lets you choose the type that is best suited to
a particular need. For example, you could use <code>short</code> to conserve space or <code>long</code>
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

## Chapter 4


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

## Chapter 5

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

## Chapter 6

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


## Chapter 7

<!-- -------------------------------------------- -->
<details><summary>
1. What are the three steps in using a function?
</summary>
// Definition
// Prototype
// Caller

The three steps are defining the function, providing a prototype, and calling the function.

</details>

<!-- -------------------------------------------- -->
<details><summary>
2. Construct function prototypes that match the following descriptions:

- `igor()` takes no arguments and has no return value.
- `tofu()` takes an int argument and returns a float.
- `mpg()` takes two type double arguments and returns a double.
- `summation()` takes the name of a long array and an array size as values and returns a long value.
- `doctor()` takes a string argument (the string is not to be modified) and returns a double value.
- `ofcourse()` takes a boss structure as an argument and returns nothing.
- `plot()` takes a pointer to a map structure as an argument and returns a string.

</summary>

```cpp
void igor(void); // or void igor()
float tofu(int n); // or float tofu(int);
double mpg(double miles, double gallons);
long summation(long harray[], int size);
double doctor(const char * str);
void ofcourse(boss dude);
char * plot(map *pmap);
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
3. Write a function that takes three arguments: the name of an int array, the array
size, and an int value. Have the function set each element of the array to the int
value.
</summary>

```cpp
void set_array(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    arr[i] = value;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
4. Write a function that takes three arguments: a pointer to the first element of a
range in an array, a pointer to the element following the end of a range in an array,
and an int value. Have the function set each element of the array to the int value.
</summary>

```cpp
// // My solution -> tested 
// fnTemp(int *begin, int *end, int val){
//     int i{};
//     while(*(begin + i) != *end){
//         *(begin + i) = val;
//         ++i;
//     }
// }

void set_array(int * begin, int * end, int value)
{
    for (int * pt = begin; pt != end; pt++)
    pt* = value;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
5. Write a function that takes a double array name and an array size as arguments and
returns the largest value in that array. Note that this function shouldn’t alter the
contents of the array.
</summary>

```cpp
// // My solution -> tested 
// double fnTemp(const double name[], int size){
//     double max = name[0];
//     for(int i {}; i < size; ++i)
//         if(name[i] > max)
//             max = name[i];
//     return max;
// }

double biggest (const double foot[], int size)
{
    double max;
    if (size < 1)
    {
        cout << "Invalid array size of " << size << endl;
        cout << "Returning a value of 0\n";
        return 0;
    }
    else // not necessary because return terminates program
    {
        max = foot[0];
        for (int i = 1; i < size; i++)
        if (foot[i] > max)
        max = foot[i];
        return max;
    }
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. Why don’t you use the const qualifier for function arguments that are one of the fundamental types?
</summary>
You use the const qualifier with pointers to protect the original pointed-to data from being altered.
When a program passes a fundamental type such as an int or a double, it passes it by value so that the function
works with a copy. Thus, the original data is already protected.
</details>

<!-- -------------------------------------------- -->
<details><summary>
7. What are the three forms a C-style string can take in a C++ program?
</summary>

```cpp
char str[]; 
"asdf";
char *ptr = &str;
```

A string can be stored in a `char array`, it can be represented by a string constant in double quotation marks, and it can
be represented by a pointer pointing to the first character of a string.
</details>

<!-- -------------------------------------------- -->
<details><summary>
8. Write a function that has this prototype:

```cpp
int replace(char * str, char c1, char c2);
```

Have the function replace every occurrence of c1 in the string str with c2, and have the function return the number
of replacements it makes.
</summary>

```cpp
int replace(char * str, char c1, char c2)
{
    int count = 0;
    while (*str) // while not at end of string
    {
        if (*str == c1)
        {
            *str = c2;
            count++;
        }
        str++; // advance to next character
    }
return count;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
9. What does the expression *"pizza" mean? What about "taco"[2]?
</summary>

Because C++ interprets `"pizza"` as the address of its first element, applying the `*` operator yields the value of that
first element, which is the character `p`. Because C++ interprets `"taco"` as the address of its first element, it interprets
`"taco"[2]` as the value of the element two positions down the line that is, as the character `c`. In other words, the string
constant acts the same as an array name
</details>

<!-- -------------------------------------------- -->
<details><summary>
10. C++ enables you to pass a structure by value, and it lets you
pass the address of a structure. If glitz is a structure variable, how would you pass it by value?
How would you pass its address? What are the trade-offs of the two approaches?
</summary>

```sh
// my answer
By value: fun(glitz)
- it copies everything from glitz to local structure - less efficient

By address: fun(*glitz)
- operates on original data - more prone to data corruption 
- less understandable, use indirect membership operator (->)
```

To pass it by value, you just pass the structure name `glitz`. To pass its address, you use the address operator `&glitz`.
Passing by the value automatically protects the original data, but it takes time and memory.
Passing by address saves time and memory but doesn’t protect the original data unless you use the const modifier for the
function parameter. Also passing by value means you can use ordinary structure member notation, but passing a pointer
means you have to remember to use the indirect membership operator.
</details>

<!-- -------------------------------------------- -->
<details><summary>
11. The function `judge()` has a type `int` return value. As an argument, it takes the
address of a function. The function whose address is passed, in turn, takes a pointer
to a const char as an argument and returns an int. Write the function prototype.

</summary>

```cpp
int judge (int (*pf)(const char *));
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
12. Suppose we have the following structure declaration:

```cpp
struct applicant {
    char name[30];
    int credit_ratings[3];
};
```

- Write a function that takes an applicant structure as an argument and displays its contents.
- Write a function that takes the address of an applicant structure as an argument and displays the contents of the
pointed-to structure

</summary>

```cpp
// my answer
fnTemp(applicant)(
    std::cout << applicant.name << "  " << applicant.credit_ratings;
)

fnTemp(*applicant)(
    std::cout << applicant->name << "  " << applicant->credit_ratings;
)
```

a. Note that if ap is an applicant structure, then ap.credit_ratings is an array name and ap.credit_ratings[i]
is an array element.

```cpp
void display(applicant ap)
{
    cout << ap.name << endl;
    for (int i = 0; i < 3; i++)
        cout << ap.credit_ratings[i] << endl;
}
```

b. Note that if pa is a pointer to an applicant structure, then `pa->credit_ratings` is an array name and
`pa->credit_ratings[i]` is an array element.

```cpp
void show(const applicant * pa)
{
    cout << pa->name << endl;
    for (int i = 0; i < 3; i++)
        cout << pa->credit_ratings[i] << endl;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
13. Suppose the functions `f1()` and `f2()` have the following prototypes:

```cpp
void f1(applicant * a);
const char * f2(const applicant * a1, const applicant * a2);
```

Declare `p1` as a pointer that points to `f1` and `p2` as a pointer to `f2`.
Declare `ap` as an array of five pointers of the same type as `p1`,
and declare `pa` as a pointer to an array of ten pointers of the same type as `p2`.
Use `typedef` as an aid.

</summary>

```cpp
typedef void (*p_f1)(applicant *);
p_f1 p1 = f1;
typedef const char * (*p_f2)(const applicant *, const applicant *);
p_f2 p2 = f2;
p_f1 ap[5];
p_f2 (*pa)[10];
```

</details>


## Chapter 8

<!-- -------------------------------------------- -->
<details><summary>
1. What kinds of functions are good candidates for inline status?
</summary>
// Short ones.
// The ones, that are not repeatable

Short, nonrecursive functions that can fit in one line of code are good candidates for `inline status`.
</details>

<!-- -------------------------------------------- -->
<details><summary>
2. Suppose the song() function has this prototype:

```cpp
void song(const char * name, int times);
```

- How would you modify the prototype so that the default value for `times` is `1`?
- What changes would you make in the function definition?
- Can you provide a default value of `"O, My Papa"` for name?

</summary>

a.

```cpp
void song(const char * name, int times = 1);
```

b. None. Only prototypes contain the default value information.

c. Yes, provided that you retain the default value for times:

```cpp
void song(char * name = "O, My Papa", int times = 1);
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
3. Write overloaded versions of iquote(), a function that displays its argument
enclosed in double quotation marks. Write three versions: one for an `int` argument,
one for a `double` argument, and one for a `string` argument.
</summary>

You can use either the string "\"" or the character '"' to print a quotation mark.
The following functions show both methods:

```cpp
#include <iostream.h>
void iquote(int arg){
    cout << "\"" << arg << "\"" << endl;
}

void iquote(double arg){
    cout << "\"" << arg << "\"" << endl;
}

void iquote(const char * str){
    cout << "\"" << arg << "\"" << endl;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
4. The following is a structure template:

```cpp
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
```

- Write a function that has a reference to a `box` structure as its formal argument
and displays the value of each member.
- Write a function that has a reference to a `box` structure as its formal argument
and sets the `volume` member to the product of the other three dimensions.

</summary>

a. This function shouldn’t alter the structure members, so use the const qualifier:

```cpp
void show_box(const box & container)
{
    cout << "Made by " << container. maker << endl;
    cout << "Height = " << container.height << endl;
    cout << "Width = " << container.width << endl;
    cout << "Length = " << container.length << endl;
    cout << "Volume = " << container.volume << endl;
}
```

b.

```cpp
void set_volume(box & crate)
{
    crate.volume = crate.height * crate.width * crate.length;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
5. What changes would need be made to Listing 7.15 (arrobj) so that the functions `fill()`
and `show()` use reference parameters?
</summary>

Note that `show()` should use const to protect the object from being modified.
Next, within `main()`, change the `fill()` call to this:

Note that `(*pa)[i]` gets changed to the simpler `pa[i]`.
Finally, the only change to `show()` is to the function header.

```cpp
// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <array>
#include <string>

// constant data
const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(std::array<double, Seasons> &pa);
// function that uses array object without modifying it
void show(const std::array<double, Seasons> &da);

int main()
{
    std::array<double, Seasons> expenses;
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, Seasons> &pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const std::array<double, Seasons> &da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. The following are some desired effects. Indicate whether each can be accomplished
with default arguments, function overloading, both, or neither. Provide
appropriate prototypes.

- `mass(density, volume)` returns the mass of an object having a density of
`density` and a volume of `volume`, whereas `mass(density)` returns the mass
having a density of `density` and a volume of 1.0 cubic meters. All quantities
are type `double`.
- repeat(10, "I'm OK") displays the indicated string 10 times, and
repeat("But you're kind of stupid") displays the indicated string 5
times.
- average(3,6) returns the int average of two int arguments, and
average(3.0, 6.0) returns the double average of two double values.
- mangle("I'm glad to meet you") returns the character I or a pointer to
the string "I'm mad to gleet you", depending on whether you assign the
return value to a char variable or to a char* variable.

</summary>

```cpp
// My answer
double mass(double density, double volume = 1);

void repeat(int num, const char * words[]);
void repeat(const char * words[], int num = 5);

int average(int numA, int numB);
double average(double numA, double numB);

???
```

```cpp
// a. This can be done by using a default value for the second argument:
double mass(double d, double v = 1.0);
It can also be done by using function overloading:
double mass(double d, double v);
double mass(double d);

// b. You can’t use a default for the repeat value because you have to provide
// default values from right to left. You can use overloading:
void repeat(int times, const char * str);
void repeat(const char * str);

// c. You can use function overloading:
int average(int a, int b);
double average(double x, double y);

// d. You can’t do this because both versions would have the same signature.
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
7. Write a function template that returns the larger of its two arguments.
</summary>

```cpp
// My answer
template <typename t1, typpename t2>
auto(t1 myTypeA, t2 myTypeB){
    return myTypeA > myTypeB ? myTypeA : myTypeB;
}
```

```cpp
template<class T>
T max(T t1, T t2) // or T max(const T & t1, const T & t2)
{
    return t1 > t2? t1 : t2;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
8. Given the template of Chapter Review Question 7 and the box structure of Chapter
Review Question 4, provide a template specialization that takes two box arguments
and returns the one with the larger volume.
</summary>

```cpp
template<> box max(box b1, box b2)
{
    return b1.volume > b2.volume? b1 : b2;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
9. What types are assigned to v1, v2, v3, v4, and v5 in the following code (assuming
the code is part of a complete program)?

```cpp
int g(int x);
...
float m = 5.5f;
float & rm = m;
decltype(m) v1 = m;
decltype(rm) v2 = m;
decltype((m)) v3 = m;
decltype (g(100)) v4;
decltype (2.0 * m) v5;
```

</summary>
v1 = float
v2 = float &
v3 = float
v4 = int
v5 = double (The literal 2.0 is type double)
</details>

## Chapter 9

<!-- -------------------------------------------- -->
<details><summary>
1. What storage scheme would you use for the following situations?</br></br>

a. `homer` is a formal argument (parameter) to a function.
b. The `secret` variable is to be shared by two files.
c. The `topsecret` variable is to be shared by the functions in one file but hidden
from other files.
d. `beencalled` keeps track of how many times the function containing it has
been called.

</summary>

a. `homer` is automatically an automatic variable.
b. `secret` should be defined as an external variable in one file and declared using extern in the second file.
c. `topsecret` could be defined as a static variable with internal linkage by prefacing the external definition with the
keyword static. Or it could be defined in an unnamed namespace.
d. `beencalled` should be defined as a local static variable by prefacing a declaration in the function with the
keyword static.

</details>

<!-- -------------------------------------------- -->
<details><summary>
2. Describe the differences between a `using` declaration and a `using` directive
</summary>

//Declaration will only allow to use one declared thing from namespace.
//Directive will allow to use all things declared namespace.

A using declaration makes available a single name from a namespace, and it has the
scope corresponding to the declarative region in which the using declaration
occurs.A using directive makes available all the names in a namespace.When you
use a using directive, it is as if you have declared the names in the smallest declarative
region containing both the using declaration and the namespace itself.

</details>

<!-- -------------------------------------------- -->
<details><summary>
3. Rewrite the following so that it doesn’t use using declarations or using directives:

```cpp
#include <iostream>
using namespace std;
int main()
{
    double x;
    cout << "Enter value: ";
    while (!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
```

</summary>

```cpp
#include <iostream>

int main()
{
    double x;
    std::cout << "Enter value: ";
    while (!(std::cin >> x))
    {
        std::cout << "Bad input. Please enter a number: ";
        std::cin.clear();
        while (std::cin.get() != '\n')
            continue;
    }
    std::cout << "Value = " << x << std::endl;
    return 0;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
4. Rewrite the following so that it uses using declarations instead of the using directive:

```cpp
#include <iostream>

int main()
{
    double x;
    cout << "Enter value: ";
    while (!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
```

</summary>

```cpp
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double x;
    cout << "Enter value: ";
    while (!(cin >> x))
    {
        cout << "Bad input. Please enter a number: ";
        cin.clear();
        while (cin.get() != '\n')
            continue;
    }
    cout << "Value = " << x << endl;
    return 0;
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
5. Suppose you want the average(3,6) function to return an int average of the two
int arguments when it is called in one file, and you want it to return a double
average of the two int arguments when it is called in a second file in the same program.
How could you set this up?
</summary>

You could have separate static function definitions in each file. Or each file could
define the appropriate `average()` function in an unnamed namespace.

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What will the following two-file program display?

```cpp
// file1.cpp
#include <iostream>
using namespace std;
void other();
void another();
int x = 10;
int y;
int main()
{
    cout << x << endl;
    {
        int x = 4;
        cout << x << endl;
        cout << y << endl;
    }
    other();
    another();
    return 0;
}
void other()
{
    int y = 1;
    cout << "Other: " << x << ", " << y << endl;
}

// file 2.cpp
#include <iostream>
using namespace std;
extern int x;
namespace
{
    int y = -4;
}
void another()
{
    cout << "another(): " << x << ", " << y << endl;
}
```

</summary>

```sh
10
4
0 //?? - why, y is not initialized... - undefined
Other: 10, 1
another(): 10, -4

```

</details>

<!-- -------------------------------------------- -->
<details><summary>
7. What will the following program display?

```cpp
#include <iostream>
using namespace std;
void other();
namespace n1
{
    int x = 1;
}
namespace n2
{
    int x = 2;
}
int main()
{
    using namespace n1;
    cout << x << endl;
    {
        int x = 4;
        cout << x << ", " << n1::x << ", " << n2::x << endl;
    }
    using n2::x;
    cout << x << endl;
    other();
    return 0;
}
void other()
{
    using namespace n2;
    cout << x << endl;
    {
        int x = 4;
        cout << x << ", " << n1::x << ", " << n2::x << endl;
    }
    using n2::x;
    cout << x << endl;
}
```

</summary>

```cpp
1
4, 1, 2
2
2
4, 1, 2
2
```

</details>

## Chapter 10

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

Schema for creating object.

A class is a definition of a user-defined type. A class declaration specifies how data is
to be stored, and it specifies the methods (class member functions) that can be used
to access and manipulate that data.

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. How does a class accomplish abstraction, encapsulation, and data hiding?</br></br>

</summary>

by division of methods and variables by `public` and `private`

A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code, are hidden; this is encapsulation.

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is the relationship between an object and a class?</br></br>

</summary>

Class is used for creating object and defining its behaviour.
We can use object on operate on it in accordance to the methods defined in class.  

A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. In what way, aside from being functions, are class function members different from class data members?</br></br>

</summary>

Class functions are used with objects and part of the processed data can be encapsulated.

If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.)

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. Define a class to represent a bank account.
Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:

- Creating an object and initializing it.
- Displaying the depositor’s name, account number, and balance
- Depositing an amount of money given by an argument
- Withdrawing an amount of money given by an argument

Just show the class declaration, not the method implementations. (Programming Exercise 1 provides you with an opportunity to write the implementation.)
</br></br>

</summary>

```cpp
// #include <cstring>
// class definition
class BankAccount
{
private:
    char name[40]; // or std::string name;
    char acctnum[25]; // or std::string acctnum;
    double balance;
    public:
BankAccount(const char * client, const char * num, double bal = 0.0);
    //or BankAccount(const std::string & client,
    // const std::string & num, double bal = 0.0);
    void show(void) const;
    void deposit(double cash);
    void withdraw(double cash);
};
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. When are class constructors called? When are class destructors called?</br></br>

</summary>

constructors are called when object is created and during initialization.
destructors are called when object is deleted or on the end of the program.

A class constructor is called when you create an object of that class or when you
explicitly call the constructor. A class destructor is called when the object expires.

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. Provide code for a constructor for the bank account class from Chapter Review Question 5.</br></br>

</summary>

These are two possible solutions (note that you must include cstring or string.h
in order to use <code>strncpy()</code> or else you must include <code>string</code> to use the string
class):

```cpp
BankAccount::BankAccount(const char * client, const char * num, double bal)
{
    strncpy(name, client, 39);
    name[39] = '\0';
    strncpy(acctnum, num, 24);
    acctnum[24] = '\0';
    balance = bal;
}
```

or

```cpp
BankAccount::BankAccount(const std::string & client,
const std::string & num, double bal)
{
    name = client;
    acctnum = num;
    balance = bal;
}
```

Keep in mind that default arguments go in the prototype, not in the function definition.

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a default constructor? What is the advantage of having one?</br></br>

</summary>

It initializes class without any arguments.

A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.

</details>

<!-- -------------------------------------------- -->

<details><summary>
9. Modify the Stock class definition (the version in stock20.h) so that it has member
    functions that return the values of the individual data members. Note: A member
    that returns the company name should not provide a weapon for altering the array.
    That is, it can’t simply return a string reference. It could return a const reference.</br></br>

</summary>

```cpp
// stock30.h
#ifndef STOCK30_H_
#define STOCK30_H_

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock(); // default constructor
    Stock(const std::string & co, long n, double pr);
    ~Stock() {} // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
    int numshares() const { return shares; }
    double shareval() const { return share_val; }
    double totalval() const { return total_val; }
const string & co_name() const { return company; }
};


```

</details>

<!-- -------------------------------------------- -->
<details><summary>
10. What are this and *this?</br></br>

</summary>

this  - pointer to current object
*this - dereferention of object (object itself)

The this pointer is available to class methods. It points to the object used to
invoke the method. Thus, this is the address of the object, and *this represents the
object itself.

</details>

<!-- -------------------------------------------- -->

## Chapter 11


<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 12

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 13

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 14

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 15

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 16

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 17

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->


## Chapter 18

<!-- -------------------------------------------- -->
<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
2. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
3. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
4. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
5. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
6. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
7. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
8. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
1. What is a class?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
