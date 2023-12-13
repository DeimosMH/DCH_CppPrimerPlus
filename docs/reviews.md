# Reviews

<button id="toggle-admonitions" class="md-button">Collapse All/Expand All Code</button>

<script>
  document.getElementById('toggle-admonitions').addEventListener('click', function (event) {

    event.preventDefault();
    var admonitions = document.querySelectorAll('details');
    var anyOpen = false;

    var button = document.getElementById('toggle-admonitions');
    admonitions.forEach(function (admonition) {
      var admonitions = document.querySelectorAll('details');
      admonitions.forEach(function (admonition) {
        if (button.textContent == 'Collapse All') {
          if (admonition.hasAttribute('open')) {
            admonition.removeAttribute('open');
          }
        }
        else {
          admonition.setAttribute('open', '');
          anyOpen = true;
        }
      });
    });

    if (anyOpen) {
      button.textContent = 'Collapse All';
    } else {
      button.textContent = 'Expand All';
    }

  });

</script>

## Chapter 2

<details><summary>
01. What are the modules of C++ programs called?
</summary>
They are called functions
</details>

<details><summary>
02. What does the following preprocessor directive do?

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
03. What does the following statement do?

<pre>

```cpp
using namespace std;
```

</pre>

</summary>
It makes definitions made in the std namespace available to a program.
</details>

<details><summary>
04. What statement would you use to print the phrase “Hello, world” and then
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
05. What statement would you use to create an integer variable with the name
cheeses ?
</summary>

```cpp
int cheeses;
```

</details>

<details><summary>
06. What statement would you use to assign the value 32 to the variable cheeses?
</summary>

```cpp
cheeses = 32;
```

</details>

<details><summary>
07. What statement would you use to read a value from keyboard input into the<br>
&emsp; variable cheeses ?
</summary>

```cpp
cin >> cheeses;
```

</details>

<details><summary>
08. What statement would you use to print “We have X varieties of cheese,”<br>
&emsp; where the current value of the cheeses variable replaces X ?

</summary>

```cpp
cout << "We have " << cheeses << " varieties of cheese\n";
```

</details>

<details><summary>
09. What do the following function prototypes tell you about the functions?

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
01. Why does C++ have more than one integer type?
</summary>

Having more than one integer type lets you choose the type that is best suited to
a particular need. For example, you could use <code>short</code> to conserve space or <code>long</code>
to guarantee storage capacity or to find that a particular type speeds up a
particular calculation.

</details>

<details><summary>
02. Declare variables matching the following descriptions:<br>
&nbsp&nbsp&nbsp&nbsp&nbsp a. A short integer with the value 80<br>
&nbsp&nbsp&nbsp&nbsp&nbsp b. An unsigned int integer with the value 42, 110<br>
&nbsp&nbsp&nbsp&nbsp&nbsp c. An integer with the value 3, 000, 000, 000

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
03. What safeguards does C++ provide to keep you from exceeding the limits of an
integer type?

</summary>

C++ provides no automatic safeguards to keep you from exceeding integer limits;
you can use the <code>climits</code> header file to determine what the limits are.
</details>

<details><summary>
04. What is the distinction between <code>33L</code> and <code>33</code>?

</summary>

The constant <code>33L</code> is type long, whereas the constant <code>33</code> is type <code>int</code>.
</details>

<details><summary>
05. Consider the two C++ statements that follow:

```cpp
char grade = 65;
char grade = 'A';
```

Are they equivalent?

</summary>

The two statements are not really equivalent, although they have the same effect
on some systems. Most importantly, the first statement assigns the letter <code>A</code>
to grade only on a system using the <code>ASCII</code> code, while the second statement
also works for other codes. Second, <code>65</code> is a type int constant, whereas <code>'A'</code>
is a type char constant.
</details>

<details><summary>
06. How could you use C++ to find out which character the code 88 represents?
Come up with at least two ways.

</summary>

Here are four ways:

```cpp
char c = 88;
cout << c << endl;              // char type prints as character
cout.put(char(88));             // put() prints char as character
cout << char(88) << endl;       // new-style type cast value to char
cout << (char)88 << endl;       // old-style type cast value to char
```

</details>

<details><summary>
07. Assigning a <code>long</code> value to a <code>float</code> can result in a rounding error.
What about assigning <code>long</code> to <code>double</code> ? <code>long long</code> to <code>double</code> ?

</summary>

The answer depends on how large the two types are. If <code>long</code> is 4 bytes,
there is no loss. That’s because the largest <code>long</code> value would be about
2 billion, which is 10 digits. Because <code>double</code> provides at least 13 significant
figures, no rounding would be needed. The <code>long long</code> type, on the other hand,
can reach 19 digits, which exceeds the 13 significant figures guaranteed for <code>double</code> .
</details>

<details><summary>
08. Evaluate the following expressions as C++ would:

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
09.  Suppose <code>x1</code> and <code>x2</code> are two type <code>double</code> variables that you want to
add as <code>integers</code> and assign to an <code>integer</code> variable. Construct a C++ statement
for doing so. What if you want to add them as type <code>double</code> and then convert to <code>int</code> ?

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
01. How would you declare each of the following?

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
02. Do Chapter Review Question 1 and use the array template class instead of
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
03. Declare an array of five ints and initialize it to the first five odd
positive integers

</summary>

```cpp
int oddly[5] = {1, 3, 5, 7, 9};
array<int, 5> at {1, 3, 5, 7, 9}; // also correct
```

</details>

<details><summary>
04. Write a statement that assigns the sum of the first and last elements of the
array in Question 3 to the variable even.

</summary>

```cpp
int even = array[0] + array[4]; 
```

</details>

<details><summary>
05. Write a statement that displays the value of the second element in the float
array ideas.

</summary>

```cpp
std::cout << ideas[1];
```

</details>

<details><summary>
06. Declare an array of char and initialize it to the string "cheeseburger".

</summary>

```cpp
char food[] {"cheeseburger"};
// or
char lunch[13] = "cheeseburger"; // number of characters + 1
```

</details>

<details><summary>
07. Declare a string object and initialize it to the string "Waldorf Salad".

</summary>

```cpp
std::string obj = "Waldorf Salad";
```

</details>

<details><summary>
08. Devise a structure declaration that describes a fish. The structure should
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
09. Declare a variable of the type defined in Question 8 and initialize it.

</summary>

```cpp
fish petes =
{
    "trout",
    12,
    26.25
};

// OR

fish flounder;
flounder.kind = "fishy";
flounder.weight = 21;
flounder.length = 21;
```

</details>

<details><summary>
10.  Use enum to define a type called Response with the possible values <code>Yes</code>,
<code>No</code>, and <code>Maybe</code>.<br> <code>Yes</code> should be <code>1</code>, <code>No</code>
should be <code>0</code>, and <code>Maybe</code> should be <code>2</code>.

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

```cpp
float *ptrTreacle = treacle; // or = &treacle[0]
cout << pf[0] << " " << pf[9] << "\n";

std::cout << ptrTreacle[0] << "last" << ptrTreacle[9];
// or use:
std::cout << *(ptrTreacle + 1) << "last" << *(ptrTreacle + 9);
```

</details>

<details><summary>
13. Write a code fragment that asks the user to enter a positive integer and
then creates a dynamic array of that many ints.
Do this by using <code>new</code>, then again using a <code>vector</code> object.

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

//Yes</br>
//Start of memory of this Literal</br></br>

Yes, it is valid. The expression "Home of the jolly bytes" is a string constant;
hence it evaluates as the address of the beginning of the string. The cout object
interprets the address of a char as an invitation to print a string, but the type cast
(int *) converts the address to type pointer-to-int, which is then printed as an
address. In short, the statement prints the address of the string, assuming the int
type is wide enough to hold an address.
</details>

<details><summary>
15. Write a code fragment that dynamically allocates a structure of the type
described in Question 8 and then reads a value for the <code>kind</code> member of the structure.

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
16. Listing 4.6 (numstr.cpp) illustrates a problem created by following numeric input with
line-oriented string input. How would replacing:

```cpp
// this:
cin.getline(address,80);

// with this:
cin >> address;

// affect the working of this program?
```

</summary>

<code>cin >> address</code> will read from user only to the space. Data after space will be in the queue;
Using <code>cin >> address</code> causes a program to skip over whitespace until it finds non-whitespace.
It then reads characters until it encounters whitespace again. Thus, it
will skip over the newline following the numeric input, avoiding that problem. On
the other hand, it will read just a single word, not an entire line.
</details>

<details><summary>
17. Declare a vector object of 10 string objects and an array object of 10 string objects.</br>
Show the necessary header files and don’t use using. Do use a const for the number of strings.
</summary>

```cpp
#include <string>
#include <vector>
#include <array>

// Like this
vector<string> vSth(10);
array<string, 10> aSth;


// Solution in a book
const int Str_num {10}; // or = 10

... 

std::vector<std::string> vstr(Str_num);
std::array<std::string, Str_num> astr;
```

</details>

## Chapter 5

<details><summary>
01. What’s the difference between an entry-condition loop and an exit-condition loop?
Which kind is each of the C++ loops?

</summary>

// entry-condition loop - check condition before entering the loop <br>
// exit-condition loop -  check condition at the end of loop, making at least 1 loop<br><br>

An entry-condition loop evaluates a test expression before entering the body of the
loop. If the condition is initially false, the loop never executes its body. An exitcondition
loop evaluates a test expression after processing the body of the loop.
Thus, the loop body is executed once, even if the test expression is initially false.
The for and while loops are entry-condition loops, and the do while loop is an
exit-condition loop
</details>

<details><summary>
02. What would the following code fragment print if it were part of a valid program?

```cpp
int i;
for (i = 0; i < 5; i++)
    cout << i;
    cout << endl;
```

</summary>
It would print the following:</br></br>

```sh
01234
```

Note that <code>cout << endl;</code> is not part of the loop body (because there are no
braces).
</details>

<details><summary>
03. What would the following code fragment print if it were part of a valid program?

```cpp
int j;
for (j = 0; j < 11; j += 3)
    cout << j;
cout << endl << j << endl;
```

</summary>
It would print the following:

```sh
0369
12
```

</details>

<details><summary>
04. What would the following code fragment print if it were part of a valid program?

```cpp
int j = 5;
while ( ++j < 9)
    cout << j++ << endl;
```

</summary>
It would print the following:

```sh
6
8
```

</details>

<details><summary>
05. What would the following code fragment print if it were part of a valid program?

```cpp
int k = 8;
do
    cout <<" k = " << k << endl;
while (k++ < 5);
```

</summary>
It would print the following:

```sh
k = 8
```

</details>

<details><summary>
06. Write a <code>for</code> loop that prints the values <code>1 2 4 8 16 32 64</code> by increasing the value of
a counting variable by a factor of two in each cycle.

</summary>

It’s simplest to use the <code>*=</code> operator:<br>

```cpp
for(int i {}; i < 65; i *= 2)
    cout << i << " ";
```

</details>

<details><summary>
07. How do you make a loop body include more than one statement?

</summary>

//add curly braces <code>{}</code> <br>

You enclose the statements within paired braces to form a single compound statement,
or block.
</details>

<details><summary>
08. Is the following statement valid? If not, why not? If so, what does it do?

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

Yes, the first statement is valid. The expression 1, 024 consists of two expressions — 1
and 024 — joined by a comma operator. The value is the value of the right-hand
expression. This is 024, which is octal for 20, so the declaration assigns the value 20
to x. The second statement is also valid. However, operator precedence causes it to
be evaluated as follows:

```cpp
(y = 1), 024;
```

That is, the left expression sets y to 1, and the value of the entire expression, which
isn’t used, is <code>024</code> , or <code>20</code> .

</details>

<details><summary>
09. How does <code>cin >> ch</code> differ from <code>cin.get(ch)</code> and <code>ch=cin.get()</code> in how it views
input?

</summary>
// My answer</br>
<code>cin>>ch</code> will omit spaces, <code>cin.get(ch)</code> will return <code>bool</code> true, false if EOF,
<code>ch=cin.get()</code> will assign <code>int</code> value and EOF if EOF <br><br>

// Answer in the book</br>
The <code>cin >> ch</code> form skips over spaces, newlines, and tabs when it encounters them.
The other two forms read those characters
</details>

## Chapter 6

<details><summary>
01. Consider the following two code fragments for counting spaces and newlines

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
// My answer</br>
Because version 1 checks every times both conditions, thus it's less efficient.<br>
Version 2 checks 2 condition only if first is not true.<br><br>

// Answer in the book</br>
Both versions give the same answers, but the if else version is more efficient.
Consider what happens, for example, when ch is a space. Version 1, after incrementing
spaces, tests whether the character is a newline. This wastes time because the
program has already established that ch is a space and hence could not be a newline.
Version 2, in the same situation, skips the newline test.
</details>

<details><summary>
02. In Listing 6.2, what is the effect of replacing <code>++ch</code> with <code>ch+1</code>?

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

// My answer</br>
The <code>char</code> is promoted to <code>int</code> , and display numbers</br></br>

// Answer in the book</br>
Both <code>++ch</code> and <code>ch + 1</code> have the same numerical value. But <code>++ch</code> is type char and
prints as a character, while <code>ch + 1</code> , because it adds a <code>char</code> to an <code>int</code> ,
is type <code>int</code> and prints as a number.

</details>

<details><summary>
03. Carefully consider the following program:

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

// My answer</br>

```sh
// Program print after every read character `$` and if in input is `$` , the while loop will end.
// `Hi!`

// `H$i$!$`

// `$Send $10 or $20 now!`

// `S$e$n$d$ $ct1 = 8, ct2 = 8` // `$` is added even newline, and `ct` is added with it, I didn't include that
```

// Answer in the book</br>
Because the program uses <code>ch = `$` </code> instead of <code>ch == `$`</code> , the combined input and
output looks like this:

```sh
Hi!
H$i$!$
$Send $10 or $20 now!
S$e$n$d$ $ct1 = 9, ct2 = 9
```

Each character is converted to the <code>$</code> character before being printed the second
time. Also the value of the expression <code>ch = $</code> is the code for the <code>$</code> character, hence
nonzero, hence <code>true</code> ; so <code>ct2</code> is incremented each time.
</details>

<details><summary>
04. Construct logical expressions to represent the following conditions:

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
05. In English, the statement “I will not not speak” means the same as
“I will speak.” In C++, is <code>!!x</code> the same as <code>x</code>?

</summary>
//My answer</br>
No. Return from `!!x` is boolean/int, while `x` have defined type by programmer</br></br>

// Answer in the book</br>
Not necessarily. For example, if `x` is 10, then `!x` is 0 and `!!x` is 1.
However, if `x` is a `bool` variable, then `!!x` is `x` .
</details>

<details><summary>
06. Construct a conditional expression that is equal to the absolute value of a variable.
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
07. Rewrite the following fragment using switch:

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
08. In Listing 6.10, what advantage would there be in using character labels,
such as a and c, instead of numbers for the menu choices and switch cases?
(Hint: Think about what happens if the user types q in either case and what
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
// Character labels would be more resistant to invalid input (characters promoted to int instead numbers); <br>
// It would also not go into infinite loop due to buffered characters from user input <br> <br>

If you use integer labels and the user types a noninteger such as q, the program
hangs because integer input can’t process a character. But if you use character labels
and the user types an integer such as 5, character input will process 5 as a character.
Then the default part of the switch can suggest entering another character.
</details>

<details><summary>
09. Consider the following code fragment:

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
01. What are the three steps in using a function?
</summary>

```sh
// Definition
// Prototype
// Caller
```

The three steps are defining the function, providing a prototype, and calling the function.

</details>

<!-- -------------------------------------------- -->
<details><summary>
02. Construct function prototypes that match the following descriptions:</br></br>

- <code>igor()</code> takes no arguments and has no return value.</br>
- <code>tofu()</code> takes an int argument and returns a float.</br>
- <code>mpg()</code> takes two type double arguments and returns a double.</br>
- <code>summation()</code> takes the name of a long array and an array size as values and returns a long value.</br>
- <code>doctor()</code> takes a string argument (the string is not to be modified) and returns a double value.</br>
- <code>ofcourse()</code> takes a boss structure as an argument and returns nothing.</br>
- <code>plot()</code> takes a pointer to a map structure as an argument and returns a string.</br>

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
03. Write a function that takes three arguments: the name of an int array, the array
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
04. Write a function that takes three arguments: a pointer to the first element of a
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
05. Write a function that takes a double array name and an array size as arguments and
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
06. Why don’t you use the const qualifier for function arguments that are one of the fundamental types?
</summary>
You use the const qualifier with pointers to protect the original pointed-to data from being altered.
When a program passes a fundamental type such as an int or a double, it passes it by value so that the function
works with a copy. Thus, the original data is already protected.
</details>

<!-- -------------------------------------------- -->
<details><summary>
07. What are the three forms a C-style string can take in a C++ program?
</summary>

```cpp
char str[]; 
"asdf";
char *ptr = &str;
```

A string can be stored in a <code>char array</code> , it can be represented by a string constant in double quotation marks, and it can
be represented by a pointer pointing to the first character of a string.
</details>

<!-- -------------------------------------------- -->
<details><summary>
08. Write a function that has this prototype:

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
09. What does the expression <code>*"pizza"</code> mean? What about <code>"taco"[2]</code>?
</summary>

Because C++ interprets <code>"pizza"</code> as the address of its first element, applying the <code>*</code> operator yields the value of that
first element, which is the character <code>p</code>. Because C++ interprets <code>"taco"</code> as the address of its first element, it interprets
<code>"taco"[2]</code> as the value of the element two positions down the line that is, as the character <code>c</code> . In other words, the string
constant acts the same as an array name
</details>

<!-- -------------------------------------------- -->
<details><summary>
10. C++ enables you to pass a structure by value, and it lets you
pass the address of a structure. If glitz is a structure variable, how would you pass it by value?
How would you pass its address? What are the trade-offs of the two approaches?
</summary>

```sh
// My answer
By value: fun(glitz)
- it copies everything from glitz to local structure - less efficient

By address: fun(*glitz)
- operates on original data - more prone to data corruption 
- less understandable, use indirect membership operator (->)
```

// Answer in the book</br>
To pass it by value, you just pass the structure name <code>glitz</code> . To pass its address, you use the address operator <code>&glitz</code>.
Passing by the value automatically protects the original data, but it takes time and memory.
Passing by address saves time and memory but doesn’t protect the original data unless you use the const modifier for the
function parameter. Also passing by value means you can use ordinary structure member notation, but passing a pointer
means you have to remember to use the indirect membership operator.
</details>

<!-- -------------------------------------------- -->
<details><summary>
11. The function <code>judge()</code> has a type <code>int</code> return value. As an argument, it takes the
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

- Write a function that takes an applicant structure as an argument and displays its contents.</br>
- Write a function that takes the address of an applicant structure as an argument and displays the contents of the
pointed-to structure

</summary>

// My answer</br>

```cpp
fnTemp(applicant)(
    std::cout << applicant.name << "  " << applicant.credit_ratings;
)

fnTemp(*applicant)(
    std::cout << applicant->name << "  " << applicant->credit_ratings;
)
```

// Answer in the book</br>

a. Note that if <code>ap</code> is an applicant structure, then <code>ap.credit_ratings</code> is an array name and <code>ap.credit_ratings[i]</code>
is an array element.

```cpp
void display(applicant ap)
{
    cout << ap.name << endl;
    for (int i = 0; i < 3; i++)
        cout << ap.credit_ratings[i] << endl;
}
```

b. Note that if pa is a pointer to an applicant structure, then <code>pa->credit_ratings</code> is an array name and
<code>pa->credit_ratings[i]</code> is an array element.

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
13. Suppose the functions <code>f1()</code> and <code>f2()</code> have the following prototypes:

```cpp
void f1(applicant * a);
const char * f2(const applicant * a1, const applicant * a2);
```

Declare <code>p1</code> as a pointer that points to <code>f1</code> and <code>p2</code> as a pointer to <code>f2</code> .
Declare <code>ap</code> as an array of five pointers of the same type as <code>p1</code> ,
and declare <code>pa</code> as a pointer to an array of ten pointers of the same type as <code>p2</code> .
Use <code>typedef</code> as an aid.

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
01. What kinds of functions are good candidates for inline status?
</summary>
// Short ones.</br>
// The ones, that are not repeatable</br></br>

Short, nonrecursive functions that can fit in one line of code are good candidates for <code>inline status</code> .
</details>

<!-- -------------------------------------------- -->
<details><summary>
02. Suppose the <code>song()</code> function has this prototype:

```cpp
void song(const char * name, int times);
```

a. How would you modify the prototype so that the default value for <code>times</code> is <code>1</code>?</br>
b. What changes would you make in the function definition?</br>
c. Can you provide a default value of <code>"O, My Papa"</code> for name?

</summary>

a.

```cpp
void song(const char * name, int times = 1);
```

b. None. Only prototypes contain the default value information.</br>

c. Yes, provided that you retain the default value for times:

```cpp
void song(char * name = "O, My Papa", int times = 1);
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
03. Write overloaded versions of <code>iquote()</code>, a function that displays its argument
enclosed in double quotation marks. Write three versions: one for an <code>int</code> argument,
one for a <code>double</code> argument, and one for a <code>string</code> argument.
</summary>

You can use either the string <code>"\""</code> or the character <code>"</code> to print a quotation mark.
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
04. The following is a structure template:

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

a. Write a function that has a reference to a <code>box</code> structure as its formal argument
and displays the value of each member.</br>
b. Write a function that has a reference to a <code>box</code> structure as its formal argument
and sets the <code>volume</code> member to the product of the other three dimensions.

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
05. What changes would need be made to Listing 7.15 (arrobj) so that the functions <code>fill()</code>
and <code>show()</code> use reference parameters?
</summary>

Note that <code>show()</code> should use const to protect the object from being modified.
Next, within <code>main()</code> , change the <code>fill()</code> call to this:

Note that <code>(*pa)[i]</code> gets changed to the simpler <code>pa[i]</code> .
Finally, the only change to <code>show()</code> is to the function header.

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
06. The following are some desired effects. Indicate whether each can be accomplished
with default arguments, function overloading, both, or neither. Provide
appropriate prototypes.</br>

a. <code>mass(density, volume)</code> returns the mass of an object having a density of
<code>density</code> and a volume of <code>volume</code> , whereas<code>mass(density)</code> returns the mass
having a density of<code>density</code> and a <code>volume</code> of 1.0 cubic meters. All quantities
are type<code>double</code>.</br>
b. <code>repeat(10, "I'm OK")</code> displays the indicated string 10 times, and
<code>repeat("But you're kind of stupid")</code> displays the indicated string 5
times.</br>
c. <code>average(3, 6)</code> returns the int average of two int arguments, and
<code>average(3.0, 6.0)</code> returns the double average of two double values.</br>
d. <code>mangle("I'm glad to meet you")</code> returns the character I or a pointer to
the string "I'm mad to gleet you", depending on whether you assign the
return value to a char variable or to a char* variable.</br>

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
// Answer in the book
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
07. Write a function template that returns the larger of its two arguments.
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
08. Given the template of Chapter Review Question 7 and the box structure of Chapter
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
09. What types are assigned to v1, v2, v3, v4, and v5 in the following code (assuming
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

```sh
v1 = float
v2 = float &
v3 = float
v4 = int
v5 = double (The literal 2.0 is type double)
```

</details>

## Chapter 9

<!-- -------------------------------------------- -->
<details><summary>
01. What storage scheme would you use for the following situations?</br></br>

a. <code>homer</code> is a formal argument (parameter) to a function.</br>
b. The <code>secret</code> variable is to be shared by two files.</br>
c. The <code>topsecret</code> variable is to be shared by the functions in one file but hidden
from other files.</br>
d. <code>beencalled</code> keeps track of how many times the function containing it has
been called.</br>

</summary>

a. <code>homer</code> is automatically an automatic variable.</br>
b. <code>secret</code> should be defined as an external variable in one file and declared using extern in the second file.</br>
c. <code>topsecret</code> could be defined as a static variable with internal linkage by prefacing the external definition with the
keyword static. Or it could be defined in an unnamed namespace.</br>
d. <code>beencalled</code> should be defined as a local static variable by prefacing a declaration in the function with the
keyword static.</br>

</details>

<!-- -------------------------------------------- -->
<details><summary>
02. Describe the differences between a <code>using</code> declaration and a <code>using</code> directive
</summary>

//Declaration will only allow to use one declared thing from namespace.</br>
//Directive will allow to use all things declared namespace.</br></br>

A using declaration makes available a single name from a namespace, and it has the
scope corresponding to the declarative region in which the using declaration
occurs. A using directive makes available all the names in a namespace. When you
use a using directive, it is as if you have declared the names in the smallest declarative
region containing both the using declaration and the namespace itself.

</details>

<!-- -------------------------------------------- -->
<details><summary>
03. Rewrite the following so that it doesn’t use using declarations or using directives:

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
04. Rewrite the following so that it uses using declarations instead of the using directive:

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
05. Suppose you want the <code>average(3,6)</code> function to return an int average of the two
int arguments when it is called in one file, and you want it to return a double
average of the two int arguments when it is called in a second file in the same program.
How could you set this up?
</summary>

You could have separate static function definitions in each file. Or each file could
define the appropriate <code>average()</code> function in an unnamed namespace.

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. What will the following two-file program display?

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
07. What will the following program display?

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
01. What is a class?</br></br>

</summary>

Schema for creating object.</br></br>

A class is a definition of a user-defined type. A class declaration specifies how data is
to be stored, and it specifies the methods (class member functions) that can be used
to access and manipulate that data.

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. How does a class accomplish abstraction, encapsulation, and data hiding?</br></br>

</summary>

by division of methods and variables by <code>public</code> and <code>private</code></br></br>

A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.</br> The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding.</br> Details of the implementation, such as data
representation and method code, are hidden; this is encapsulation.

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. What is the relationship between an object and a class?</br></br>

</summary>

Class is used for creating object and defining its behaviour.
We can use object on operate on it in accordance to the methods defined in class.</br></br>

A class defines a type, including how it can be used. An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition. The relationship between a class and an object is
the same as that between a standard type and a variable of that type

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. In what way, aside from being functions, are class function members different from class data members?</br></br>

</summary>

Class functions are used with objects and part of the processed data can be encapsulated.</br></br>

If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.)

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. Define a class to represent a bank account.
Data members should include the depositor’s name, the account number (use a string), and the balance. Member functions should allow the following:

- Creating an object and initializing it.</br>
- Displaying the depositor’s name, account number, and balance</br>
- Depositing an amount of money given by an argument</br>
- Withdrawing an amount of money given by an argument</br>

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
06. When are class constructors called? When are class destructors called?</br></br>

</summary>

constructors are called when object is created and during initialization.
destructors are called when object is deleted or on the end of the program.</br></br>

A class constructor is called when you create an object of that class or when you
explicitly call the constructor. A class destructor is called when the object expires.

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. Provide code for a constructor for the bank account class from Chapter Review Question 5.</br></br>

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
08. What is a default constructor? What is the advantage of having one?</br></br>

</summary>

It initializes class without any arguments.</br></br>

A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.

</details>

<!-- -------------------------------------------- -->

<details><summary>
09. Modify the Stock class definition (the version in stock20.h) so that it has member
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
10. What are <code>this</code> and <code>*this</code>?</br></br>

</summary>

<code>this</code>  - pointer to current object</br>
<code>*this</code> - dereferention of object (object itself)</br></br>

The <code>this</code> pointer is available to class methods. It points to the object used to
invoke the method. Thus, this is the address of the object, and <code>*this</code> represents the
object itself.

</details>

<!-- -------------------------------------------- -->

## Chapter 11

<details><summary>
01. Use a member function to overload the multiplication operator for the <code>Stonewt</code>
class;</br> have the operator multiply the data members by a type double value.</br> Note
that this will require carry over for the stone–pound representation. That is, twice 10
stone 8 pounds is 21 stone 2 pounds.</br></br>

</summary>

// My answer

```cpp
class Stonewt{
    private:
        enum{Pds_to_stn = 14};
        int stone;
        double fracPound;
        double pound;
    public:
        // code ...
        Stonewt operator*(double mt){
                        
            stone     *= (int)mt;
            fracPound += (int)mt % Pds_to_stn + mt - int(mt);

            pound     *= mt;
            stone     += (int)pound % Pds_to_stn;
            pound     -= int(pound);

            return dm;
        }
}
```

// Answer in the book</br>

Here’s a prototype for the class definition file and a function definition for the
methods file:

```cpp
// prototype
Stonewt operator*(double mult);

// definition — let constructor do the work
Stonewt Stonewt::operator*(double mult)
{
    return Stonewt(mult * pounds);
}
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. What are the differences between a friend function and a member function?</br></br>

</summary>

// My answer</br>
Friend functions have access to private data of a class (ivoked object).</br></br>

// Answer in the book</br>
A member function is part of a class definition and is invoked by a particular
object.The member function can access members of the invoking object implicitly,
without using the membership operator. A friend function is not part of a class, so
it’s called as a straight function call. It can’t access class members implicitly, so it
must use the membership operator applied to an object passed as an argument.
Compare, for instance, the answer to Review Question 1 with the answer to
Review Question 4.

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. Does a nonmember function have to be a friend to access a class’s members?</br></br>

</summary>

// My answer</br>
For the direct access to the private members - Yes</br>
For the direct access to the public members - No</br>
For indirect access - via public methods - No</br></br>

// Answer in the book</br>
It must be a friend to access private members, but it doesn’t have to be a friend to
access public members.

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Use a friend function to overload the multiplication operator for the Stonewt class;
have the operator multiply the double value by the Stone value.</br></br>

</summary>

// My answer

```cpp
class Stonewt{
    private:
        enum{Pds_to_stn = 14};
        int stone;
        double fracPound;
        double pound;
    public:
        // code ...
        friend Stonewt operator*(double mt, Stonewt &dm){
            Stone tmp;
            
            tmp.stone = dm.stone;
            tmp.fracPound = dm.fracPound;
            tmp.pound = dm.pound;
            
            tmp.stone     *= (int)mt;
            tmp.fracPound += (int)mt % Pds_to_stn + mt - int(mt);

            tmp.pound     *= mt;
            tmp.stone     += (int)dm.pound % Pds_to_stn;
            tmp.pound     -= int(dm.pound);

            return tmp;
        }
}
```

// Answer in the book </br>

Here’s a prototype for the class definition file and a function definition for the
methods file:

```cpp
// prototype
friend Stonewt operator*(double mult, const Stonewt & s);

// definition — let constructor do the work
Stonewt operator*(double mult, const Stonewt & s)
{
    return Stonewt(mult * s.pounds);
}
```

</details>

<!-- -------------------------------------------- -->
<details><summary>
05. Which operators cannot be overloaded?</br></br>

</summary>

The following five operators cannot be overloaded:

```cpp
sizeof
.
.*
::
? :
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
06. What restriction applies to overloading the following operators? <code>=</code>, <code>()</code>, <code>[]</code>, and <code>-></code></br></br>

</summary>

These operations cannot overload basic functions they currently perform,
thus they need to be defined by using a member function.

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. Define a conversion function for the Vector class that converts a Vector object to
a type double value that represents the vector’s magnitude.</br></br>

</summary>

// My answer - it should be by simple context.. again

```cpp
class Vector{
    private:
        double x;
        double y;
    public:
        // code ...
        // option 1
        double conv(Vector vc) const{
            return sqrt(vc.x * vc.x + vc.y * vc.y);
        }
        // option 2
        operator double(){
            return sqrt(vc.x * vc.x + vc.y * vc.y);
        }
}
```

// Answer in the book</br>

Here are a possible prototype and definition:

```cpp
// prototype and inline definition
operator double () {return mag;}
```

Note, however, that it makes better sense to use the <code>magval()</code> method than to
define this conversion function.

</details>

<!-- -------------------------------------------- -->

## Chapter 12

<!-- -------------------------------------------- -->
<details><summary>
01. Suppose a String class has the following private members:

```cpp
class String
{
    private:
    char * str; // points to string allocated by new
    int len; // holds length of string
    //...
};
```

a. What’s wrong with this default constructor?

```cpp
String::String() {}
```

b. What’s wrong with this constructor?

```cpp
String::String(const char * s)
{
    str = s;
    len = strlen(s);
}
```

c. What’s wrong with this constructor?

```cpp
String::String(const char * s)
{
    strcpy(str, s);
    len = strlen(s);
}
```

</summary>

a. Constructor won't initialize data for proper use of object</br>
b. It is so called `shallow copy` for str. It will copy only pointer `s` to string, thus two objects will point into the same string</br>
c. `s` is `const` and is put into function

// Answer in the book</br>

a. The syntax is fine, but this constructor leaves the `str` pointer uninitialized.
The constructor should either set the pointer to NULL or use `new []` to initialize
the pointer.
b. This constructor does not create a new string; it merely copies the address of
the old string. It should use `new []` and `strcpy()`.
c. It copies the string without allocating the space to store it. It should use new
`char[len + 1]` to allocate the proper amount of memory.

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. Name three problems that may arise if you define a class in which a pointer member
is initialized by using <code>new</code>. Indicate how they can be remedied.</br></br>

</summary>

// Answer in the book</br>

First, when an object of that type expires, the data pointed to by the object’s member
pointer remains in memory, using space and remaining inaccessible because the
pointer has been lost. That can be fixed by having the class destructor delete memory
allocated by `new` in the constructor functions.</br>

Second, after the destructor deletes such memory, it might end up trying to delete it twice if a program initializes
one such object to another.That’s because the default initialization of one
object to another copies pointer values but does not copy the pointed-to data, and
this produces two pointers to the same data.The solution is to define a class copy
constructor that causes initialization to copy the pointed-to data.</br>

Third, assigning one object to another can produce the same situation of two pointers pointing to
the same data. The solution is to overload the assignment operator so that it copies
the data, not the pointers.</br>

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. What class methods does the compiler generate automatically if you don’t provide
them explicitly? Describe how these implicitly generated functions behave.</br></br>

</summary>

// Answer in the book</br>

- A default constructor if you define no constructors
- A copy constructor if you don’t define one
- An assignment operator if you don’t define one
- A default destructor if you don’t define one
- An address operator if you don’t define one

The default constructor does nothing, but it allows you to declare arrays and uninitialized
objects. The default copy constructor and the default assignment operator
use memberwise assignment.The default destructor does nothing.The implicit
address operator returns the address of the invoking object (that is, the value of the
`this` pointer).

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Identify and correct the errors in the following class declaration:

```cpp
class nifty
{
    // data
    char personality[];
    int talents;
    // methods
    nifty();
    nifty(char *s);
    ostream &operator<<(ostream &os, nifty &n);
} 

nifty : nifty()
{
    personality = NULL;
    talents = 0;
}

nifty : nifty(char *s)
{
    personality = new char[strlen(s)];
    personality = s;
    talents = 0;
}

ostream &nifty : operator<<(ostream & os, nifty & n)
{
    os << n;
}
```

</summary>


```cpp
class nifty
{
    // data
    char personality[];
    int talents;
    // methods
    nifty();
    nifty(char *s);
    ostream &operator<<(ostream &os, nifty &n);

    // Lack of destructor, when new is used
    ~nifty();

    // Lack of assignment operator - shallow copy error
    nifty &operator=(nifty n);
} 

nifty : nifty()
{
    personality = NULL;
    talents = 0;
}

nifty : nifty(char *s)
{
    personality = new char[strlen(s)];
    // personality = s; // pointer assigned - shallow copy
    strcpy(personality, s);
    talents = 0;
}

ostream &nifty : operator<<(ostream & os, nifty & n)
{
    os << n;
}

~nifty : nifty(){
    delete personality;
}

nifty &operator=(nifty n){
    if(personality != NULL)
        delete personality;
    personality = new char[strlen(n.personality)];
    strcpy(personality, n.personality);
    talents = n.talents;
}

```

// Answer in the book</br>

The personality member should be declared either as a character array or as a
pointer-to-char. Or you could make it a String object or a string object. The
declaration fails to make the methods public. Then there are several small errors.
Here is a possible solution, with changes (other than deletions) in boldface:

```cpp
#include <iostream>
#include <cstring>
using namespace std;
class nifty
{
private:                  // optional
    char personality[40]; // provide array size
    int talents;

public: // needed
    // methods
    nifty();
    nifty(const char *s);
    friend ostream &operator<<(ostream &os, const nifty &n);
}; // note closing semicolon
nifty::nifty()
{
    personality[0] = '\0';
    talents = 0;
}
nifty::nifty(const char *s)
{
    strcpy(personality, s);
    talents = 0;
}
ostream &operator<<(ostream &os, const nifty &n)
{
    os << n.personality << '\n';
    os << n.talent << '\n';
    return os;
}
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. Consider the following class declaration:</br></br>

```cpp
class Golfer
{
private:
    char *fullname; // points to string containing golfer's name
    int games;      // holds number of golf games played
    int *scores;    // points to first element of array of golf scores
public:
    Golfer();
    Golfer(const char *name, int g = 0);
    // creates empty dynamic array of g elements if g > 0
    Golfer(const Golfer &g);
    ~Golfer();
};
```

a. What class methods would be invoked by each of the following statements ?

```cpp
Golfer nancy;                    // #1
Golfer lulu(“Little Lulu”);      // #2
Golfer roy(“Roy Hobbs”, 12);     // #3
Golfer *par = new Golfer;        // #4
Golfer next = lulu;              // #5
Golfer hazzard = “Weed Thwacker”;// #6
*par = nancy;                    // #7 
nancy = “Nancy Putter”;          // #8
```

b. Clearly, the class requires several more methods to make it useful. What additional
    method does it require to protect against data corruption?

</summary>

a.

```cpp
Golfer nancy;                    // #1 Golfer()
Golfer lulu(“Little Lulu”);      // #2 Golfer(const char *name, int g = 0);
Golfer roy(“Roy Hobbs”, 12);     // #3 Golfer(const char *name, int g = 0);
Golfer *par = new Golfer;        // #4 Golfer operator=(Golfer *n);
Golfer next = lulu;              // #5 Golfer operator=(Golfer n); // wrong
Golfer hazzard = “Weed Thwacker”;// #6 Golfer operator=(String n); // wrong
*par = nancy;                    // #7 Golfer *operator=(Golfer n); 
nancy = “Nancy Putter”;          // #8 Golfer operator=(String n); // wrong
```

b.

```cpp
Golfer &operator=(const Golfer &);
```

// Answer in the book</br>

a.

```cpp
Golfer nancy; // default constructor
Golfer lulu("Little Lulu"); // Golfer(const char * name, int g)
Golfer roy("Roy Hobbs", 12); // Golfer(const char * name, int g)
Golfer * par = new Golfer; // default constructor
Golfer next = lulu; // Golfer(const Golfer &g)
Golfer hazard = "Weed Thwacker"; // Golfer(const char * name, int g)
*par = nancy; // default assignment operator
nancy = "Nancy Putter";// Golfer(const char * name, int g), then
// the default assignment operator
```

Note that some compilers additionally call the default assignment operator
for Statements 5 and 6.

b. The class should define an assignment operator that copies data rather than
addresses.

</details>

<!-- -------------------------------------------- -->

## Chapter 13

<!-- -------------------------------------------- -->
<details><summary>
01. What does a derived class inherit from a base class?</br></br>

</summary>

All public and protected methods and variables.

// Answer in the book</br>

The public members of the base class become public members of the derived class.
The protected members of the base class become protected members of the derived
class.The private members of the base class are inherited but cannot be accessed
directly. The answer to Review Question 2 provides the exceptions to these general
rules.

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. What doesn’t a derived class inherit from a base class?</br></br>

</summary>

The constructor methods are not inherited, the destructor is not inherited, the
assignment operator is not inherited, and friends are not inherited.

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. Suppose the return type for the <code>baseDMA::operator=()</code> function were defined as
<code>void</code> instead of <code>baseDMA &</code>.
</br>What effect, if any, would that have? What if the return
type were <code>baseDMA</code> instead of <code>baseDMA &</code>?</br></br>

</summary>

`void` - returns nothing instead of reference to `baseDMA`, that is you would not be able to return `baseDMA` object and its data via `=` so the chain assignment wont work, only single assignment</br>
Returning object, not reference to it, makes execution slower due to necessity of copying everything to return it, instead of pointing to memory with already created object.

// Answer in the book</br>

If the return type were void, you would still be able to use single assignment but
not chain assignment:

```cpp
baseDMA magazine("Pandering to Glitz", 1);
baseDMA gift1, gift2, gift3;
gift1 = magazine; // ok
gift 2 = gift3 = gift1; // no longer valid
```

If the method returned an object instead of a reference, the method execution
would be slowed a bit because the return statement would involve copying the
object.

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. In what order are class constructors and class destructors called when a derived class
object is created and deleted?</br></br>

</summary>

In reverse order to invoking constructors.
In case of constructor with inheritance - it would be base class invoked via member initializator list `:`, constructed in order from left to right (in case of many classes).

// Answer in the book</br>

Constructors are called in the order of derivation, with the most ancestral constructor
called first. Destructors are called in the opposite order.

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. If a derived class doesn’t add any data members to the base class, does the derived
class require constructors?</br></br>

</summary>

Yes, and it need to invoke base class constructor.

// Answer in the book</br>

Yes, every class requires its own constructors. If the derived class adds no new members,
the constructor can have an empty body, but it must exist.

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Suppose a base class and a derived class both define a method with the same name
and a derived-class object invokes the method. What method is called?</br></br>

</summary>

Method in derived class.

// Answer in the book</br>

Only the derived-class method is called. It supersedes the base-class definition.A
base-class method is called only if the derived class does not redefine the method or
if you use the scope-resolution operator. However, you really should declare as virtual
any functions that will be redefined

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. When should a derived class define an assignment operator?</br></br>

</summary>

When it need to perform deep copy - that is, if it have dynamically allocated data.

// Answer in the book</br>

The derived class should define an assignment operator if the derived-class constructors
use the `new` or `new []` operator to initialize pointers that are members of
that class. More generally, the derived class should define an assignment operator if
the default assignment is incorrect for derived-class members.

</details>

<!-- -------------------------------------------- -->

<details><summary>
08. Can you assign the address of an object of a derived class to a pointer to the base
class?</br> Can you assign the address of an object of a base class to a pointer to the
derived class?</br></br>

</summary>

Yes to both.
Pointer of derived class to base class is called upcasting.
Pointer of base class to derived class is called downcasting.

// Answer in the book</br>

Yes, you can assign the address of an object of a derived class to a pointer to the
base class. You can assign the address of a base-class object to a pointer to a derived
class (downcasting) only by making an explicit type cast, and it is not necessarily
safe to use such a pointer.

</details>

<!-- -------------------------------------------- -->

<details><summary>
09. Can you assign an object of a derived class to an object of the base class? Can you
assign an object of a base class to an object of the derived class?</br></br>

</summary>

If you will make methods that will handle this - yes.

// Answer in the book</br>

Yes, you can assign an object of a derived class to an object of the base class. Any
data members that are new to the derived type are not passed to the base type,
however. The program uses the base-class assignment operator. Assignment in the
opposite direction (base to derived) is possible only if the derived class defines a
`conversion operator`, which is a constructor that has a reference to the base type
as its sole argument, or else defines an assignment operator with a base-class
parameter.

</details>

<!-- -------------------------------------------- -->

<details><summary>
10. Suppose you define a function that takes a reference to a base-class object as an
argument. Why can this function also use a derived-class object as an argument?</br></br>

</summary>

Because it is inherited.
Derived class object holds base class object.  

// Answer in the book</br>

It can do so because C++ allows a reference to a base type to refer to any type
derived from that base.

</details>

<!-- -------------------------------------------- -->

<details><summary>
11. Suppose you define a function that takes a base-class object as an argument (that is,
the function passes a base-class object by value). Why can this function also use a
derived-class object as an argument?</br></br>

</summary>

Because it is inherited.
Derived class object holds base class object.  

// Answer in the book</br>

Passing an object by value invokes the copy constructor. Because the formal argument
is a base-class object, the base-class copy constructor is invoked.The copy
constructor has as its argument a reference to the base class, and this reference can
refer to the derived object passed as an argument.The net result is that a new baseclass
object whose members correspond to the base class portion of the derived
object is produced

</details>

<!-- -------------------------------------------- -->

<details><summary>
12. Why is it usually better to pass objects by reference than by value?</br></br>

</summary>

Because passing by value makes copy of an object, when reference is the address of the original object. 

// Answer in the book</br>

Passing an object by reference instead of by value enables the function to avail itself
of virtual functions. Also passing an object by reference instead of by value may use
less memory and time, particularly for large objects. The main advantage of passing
by value is that it protects the original data, but you can accomplish the same end
by passing the reference as a `const` type.

</details>

<!-- -------------------------------------------- -->

<details><summary>
13. Suppose <code>Corporation</code> is a base class and <code>PublicCorporation</code> is a derived class. Also
suppose that each class defines a <code>head()</code> member function, that <code>ph</code> is a pointer to
the <code>Corporation</code> type, and that <code>ph</code> is assigned the address of a <code>PublicCorporation</code>
object. How is <code>ph->head()</code> interpreted if the base class defines <code>head()</code> as a</br>
&emsp;a. Regular nonvirtual method</br>
&emsp;b. Virtual method</br></br>

</summary>

- via regular method - the `PublicCorporation->head()` will be invoked
- via virtual method - the `Corporation->head()` will be invoked

// Answer in the book</br>

If `head()` is a regular method, then `ph->head()` invokes `Corporation::head()`. If
`head()` is a virtual function, then `ph->head()` invokes
`PublicCorporation::head()`.

</details>

<!-- -------------------------------------------- -->

<details><summary>
14. What’s wrong, if anything, with the following code?

```cpp
class Kitchen
{
private:
    double kit_sq_ft;

public:
    Kitchen() { kit_sq_ft = 0.0; }
    virtual double area() const { return kit_sq_ft * kit_sq_ft; }
};

class House : public Kitchen
{
private:
    double all_sq_ft;

public:
    House() { all_sq_ft += kit_sq_ft; }
    double area(const char *s) const
    {
        cout << s;
        return all_sq_ft;
    }
};
```

</summary>

Why `House` inherits `Kitchen`, instead containing it (it is has-a model) or via private deriviation(chapter 14)?  
The keyword `virtual` in derived class `area` constructor don't need to be used, because base class function is overridden in a derived class via declared function as virtual in the base class.
`Kitchen` and `House` constructors don't allow any input that assigns value to private values, which mean the `kit_sq_ft` and `all_sq_ft` will always be `0.0`.

// Answer in the book</br>

First, the situation does not fit the is-a model, so public inheritance is not appropriate.
Second, the definition of `area()` in `House` hides the `Kitchen` version of `area()`
because the two methods have different signatures.

</details>

<!-- -------------------------------------------- -->

## Chapter 14

<!-- -------------------------------------------- -->
<details><summary>
01. For each of the following sets of classes, indicate whether public or private derivation
is more appropriate for Column B:

|Lp|A|B|
|---|---|---|
|1|class Bear|class PolarBear|
|2|class Kitchen|class Home|
|3|class Person|class Programmer|
|4|class Person|class HorseAndJockey|
|5|class Person, class Automobile|class Driver|

</summary>

// Answer in the book</br>

1. Public; a polar bear is a kind of bear
2. Private; a home has a kitchen
3. Public; a programmer is a kind of
person
4. Private; a horse and jockey team
contains a person
5. Person public because a driver is a person;
Automobile private because a
driver has an automobile

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. Suppose you have the following definitions:

```cpp
class Frabjous
{
private:
    char fab[20];

public:
    Frabjous(const char *s = "C++") : fab(s) {}
    virtual void tell() { cout << fab; }
};

class Gloam
{
private:
    int glip;
    Frabjous fb;

public:
    Gloam(int g = 0, const char *s = "C++");
    Gloam(int g, const Frabjous &f);
    void tell();
};
```

Given that the <code>Gloam</code> version of <code>tell()</code> should display the values of <code>glip</code> and <code>fb</code>, provide definitions for the three <code>Gloam</code> methods.

</summary>

```cpp
Gloam::Gloam(int g, const char *s)
{
    glip = g;
    strcpy(fb.fab, s); 
}

Gloam::Gloam(int g, const Frabjous &f)
{
    glip = g;
    strcpy(fb.fab, f.fab);     
}

void Gloam::tell()
{
    cout << glip;
    cout << fb.fab;
}
```

// Answer in the book</br>

```cpp
Gloam::Gloam(int g, const char * s) : glip(g), fb(s) { }
Gloam::Gloam(int g, const Frabjous & fr) : glip(g), fb(fr) { }
// note: the above uses the default Frabjous copy constructor
void Gloam::tell()
{
    fb.tell();
    cout << glip << endl;
}
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. Suppose you have the following definitions:

```cpp
class Frabjous
{
private:
    char fab[20];

public:
    Frabjous(const char *s = "C++") : fab(s) {}
    virtual void tell() { cout << fab; }
};

class Gloam : private Frabjous
{
private:
    int glip;

public:
    Gloam(int g = 0, const char *s = "C++");
    Gloam(int g, const Frabjous &f);
    void tell();
};
```

Given that the <code>Gloam</code> version of <code>tell()</code> should display the values of <code>glip</code> and <code>fab</code>,
provide definitions for the three <code>Gloam</code> methods.

</summary>


```cpp
// Gloam::Gloam(int g, const char *s) // wrong 
// {
//     glip = g;
//     this(s); // Error: this is a pointer, not a function - this keyword is a pointer to the current object, and it cannot be used to call constructor
// }

// Gloam::Gloam(int g, const Frabjous &f) // wrong
// {
//     glip = g;
//     this(f); // Error: this is a pointer, not a function
// }

Gloam::Gloam(int g, const char * s)
           : glip(g), Frabjous(s) { }
Gloam::Gloam(int g, const Frabjous & fr)
           : glip(g), Frabjous(fr) { }

void Gloam::tell()
{
    cout << glip;
    Frabjous::tell();
}
```

// Answer in the book</br>

```cpp
Gloam::Gloam(int g, const char * s)
            : glip(g), Frabjous(s) { }
Gloam::Gloam(int g, const Frabjous & fr)
            : glip(g), Frabjous(fr) { }
// note: the above uses the default Frabjous copy constructor
void Gloam::tell()
{
    Frabjous::tell();
    cout << glip << endl;
}
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Suppose you have the following definition, based on the <code>Stack</code> template of Listing
14.13 (stacktp.h) and the <code>Worker</code> class of Listing 14.10 (workermi.h):

```cpp
Stack<Worker *> sw;
```

Write out the class declaration that will be generated. Just do the class declaration,
not the non-inline class methods.

</summary>

```cpp
template <class Worker *>
class Stack
{
private:
    enum
    {
        MAX = 10
    };               // constant specific to class
    Worker * items[MAX]; // holds stack items
    int top;         // index for top stack item
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Worker &item); // add item to stack
    bool pop(Worker &item);        // pop top into item
};
```

// Answer in the book</br>

```cpp
class Stack<Worker *>
{
private:
    enum {MAX = 10}; // constant specific to class
    Worker * items[MAX]; // holds stack items
    int top; // index for top stack item
public:
    Stack();
    Boolean isempty();
    Boolean isfull();
    Boolean push(const Worker * & item); // add item to stack
    Boolean pop(Worker * & item); // pop top into item
};
```

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. Use the template definitions in this chapter to define the following:

- An array of <code>string</code> objects
- A stack of arrays of <code>double</code>
- An array of stacks of pointers to <code>Worker</code> objects

How many template class definitions are produced in Listing 14.18 (twod.cpp)?

</summary>

```cpp
vector<std::string> one;
Stack<vector<double>> two;
vector<Stack<* Worker>> three;
```

In `twop.cpp` 4 template class definitions are produced  

// Answer in the book</br>

```cpp
ArrayTP<string> sa;
StackTP< ArrayTP<double> > stck_arr_db;
ArrayTP< StackTP<Worker *> > arr_stk_wpr;
```

Listing 14.18 generates four templates: `ArrayTP<int, 10>`, `ArrayTP<double, 10>`,
`ArrayTP<int,5>`, and `Array< ArrayTP<int,5>, 10>`.

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Describe the differences between virtual and nonvirtual base classes.</br></br>

</summary>

In case of upcasting, the base class methods for nonvirtual base class will not be invoked, which can result in errors

// Answer in the book</br>

If two lines of inheritance for a class share a common ancestor, the class winds up
having two copies of the ancestor’s members. Making the ancestor class a virtual
base class to its immediate descendants solves that problem.

</details>
<!-- -------------------------------------------- -->

## Chapter 15

<!-- -------------------------------------------- -->
<details><summary>
01. What’s wrong with the following attempts at establishing friends?

a.

```cpp
class snap
{
    friend clasp;
    ...
};
class clasp
{
    ...
};
```

b.

```cpp
class cuff
{
public:
    void snip(muff &){...}...
};
class muff
{
    friend void cuff::snip(muff &);
    ...
};
```

c.

```cpp
class muff
{
    friend void cuff::snip(muff &);
    ...
};
class cuff
{
public:
    void snip(muff &){...}...
};
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. You’ve seen how to create mutual class friends. Can you create a more restricted
form of friendship in which only some members of Class B are friends to Class A
and some members of A are friends to B? Explain.</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. What problems might the following nested class declaration have?

```cpp
class Ribs
{
private:
    class Sauce
    {
        int soy;
        int sugar;

    public:
        Sauce(int s1, int s2) : soy(s1), sugar(s2) {}
    };
    ...
};
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. How does <code>throw</code> differ from <code>return</code>?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. Suppose you have a hierarchy of exception classes that are derived from a base
exception class. In what order should you place <code>catch</code> blocks?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Consider the <code>Grand</code>, <code>Superb</code>, and <code>Magnificent</code> classes defined in this chapter. Suppose
<code>pg</code> is a type <code>Grand * pointer</code> that is assigned the address of an object of one of
these three classes and that <code>ps</code> is a type <code>Superb *</code> pointer.What is the difference in
how the following two code samples behave?

```cpp
if (ps = dynamic_cast<Superb *>(pg))
    ps->say(); // sample #1

if (typeid(*pg) == typeid(Superb))
    (Superb *) pg)->say(); // sample #2

```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. How is the <code>static_cast</code> operator different from the <code>dynamic_cast</code> operator?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

## Chapter 16

<!-- -------------------------------------------- -->
<details><summary>
01. Consider the following class declaration:

```cpp
class RQ1
{
private:
    char *st; // points to C-style string
public:
    RQ1()
    {
        st = new char[1];
        strcpy(st, "");
    }
    RQ1(const char *s)
    {
        st = new char[strlen(s) + 1];
        strcpy(st, s);
    }
    RQ1(const RQ1 &rq)
    {
        st = new char[strlen(rq.st) + 1];
        strcpy(st, rq.st);
    }
    ~RQ1(){delete[] st};
    RQ &operator=(const RQ &rq);
    // more stuff
};
```

Convert this to a declaration that uses a <code>string</code> object instead.What methods no
longer need explicit definitions?

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. Name at least two advantages <code>string</code> objects have over C-style strings in terms
of ease-of-use.</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. Write a function that takes a reference to a <code>string</code> object as an argument and that
converts the <code>string</code> object to all uppercase.</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Which of the following are not examples of correct usage (conceptually or syntactically)
of <code>auto_ptr</code>? (Assume that the needed header files have been included.)

```cpp
auto_ptr<int> pia(new int[20]);
auto_ptr<string>(new string);
int rigue = 7;
auto_ptr<int> pr(&rigue);
auto_ptr dbl(new double);
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. If you could make the mechanical equivalent of a stack that held golf clubs instead
of numbers, why would it (conceptually) be a bad golf bag?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Why would a <code>set</code> container be a poor choice for storing a hole-by-hole record of
your golf scores?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. Because a pointer is an iterator, why didn’t the STL designers simply use pointers
instead of iterators?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
08. Why didn’t the STL designers simply define a base iterator class, use inheritance to
derive classes for the other iterator types, and express the algorithms in terms of
those iterator classes?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
09. Give at least three examples of convenience advantages that a <code>vector</code> object has
over an ordinary array.</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
10. If Listing 16.9 were implemented with <code>list</code> instead of vector, what parts of the
program would become invalid? Could the invalid part be fixed easily? If so, how?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
11. Consider the <code>TooBig</code> functor in Listing 16.15.What does the following code do,
and what values get assigned to bo?

```cpp
bool bo = TooBig<int>(10)(15);
```

</summary>

</details>

<!-- -------------------------------------------- -->

## Chapter 17

<!-- -------------------------------------------- -->
<details><summary>
01. What role does the <code>iostream</code> file play in C++ I/O?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. Why does typing a number such as 121 as input require a program to make a conversion?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
03. What’s the difference between the standard output and the standard error?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Why is cout able to display various C++ types without being provided explicit
instructions for each type?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. What feature of the output method definitions allows you to concatenate output?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Write a program that requests an integer and then displays it in decimal, octal, and
hexadecimal forms. Display each form on the same line, in fields that are 15 characters
wide, and use the C++ number base prefixes.</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. Write a program that requests the following information and that formats it as
shown:

```sh
Enter your name: Billy Gruff
Enter your hourly wages: 12
Enter number of hours worked: 7.5
First format:
Billy Gruff: $ 12.00: 7.5
Second format:
Billy Gruff : $12.00 :7.5
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
08. Consider the following program:

```cpp
// rq17-8.cpp
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int ct1 = 0;
    cin >> ch;
    while (ch != 'q')
    {
        ct1++;
        cin >> ch;
    }
    int ct2 = 0;
    cin.get(ch);
    while (ch != 'q')
    {
        ct2++;
        cin.get(ch);
    }
    cout << "ct1 = " << ct1 << "; ct2 = " << ct2 << "\n";
    return 0;
}
```

What does it print, given the following input:

```sh
I see a q<Enter>
I see a q<Enter>
```

Here <code><Enter></code> signifies pressing the Enter key.

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
09. Both of the following statements read and discard characters up to and including the
end of a line. In what way does the behavior of one differ from that of the other?

```cpp
while (cin.get() != '\n')
    continue;
cin.ignore(80, '\n');
```

</summary>

</details>

<!-- -------------------------------------------- -->

## Chapter 18

<!-- -------------------------------------------- -->
<details><summary>
01. Rewrite the following code using braced initialization list syntax; the rewrite
should dispense with using the array ar:

```cpp
class Z200
{
private:
    int j;
    char ch;
    double z;

public:
    Z200(int jv, char chv, zv) : j(jv), ch(chv), z(zv){}...
};

double x = 8.8;
std::string s = "What a bracing effect!";
int k(99);
Z200 zip(200, 'Z', 0.675);
std::vector<int> ai(5);
int ar[5] = {3, 9, 4, 7, 1};
for (auto pt = ai.begin(), int i = 0; pt != ai.end(); ++pt, ++i)
    *pt = ai[i];
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
02. For the following short program, which function calls are errors and why? For the
valid calls, what does the reference argument refer to?

```cpp
#include <iostream>
using namespace std;
double up(double x) { return 2.0 * x; }
void r1(const double &rx) { cout << rx << endl; }
void r2(double &rx) { cout << rx << endl; }
void r3(double &&rx) { cout << rx << endl; }
int main()
{
    double w = 10.0;
    r1(w);
    r1(w + 1);
    r1(up(w));
    r2(w);
    r2(w + 1);
    r2(up(w));
    r3(w);
    r3(w + 1);
    r3(up(w));
    return 0;
}
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
03.

a. What does the following short program display and why?

```cpp
#include <iostream>
using namespace std;

double up(double x) { return 2.0 * x; }
void r1(const double &rx) { cout << “const double & rx\n”; }
void r1(double &rx) { cout << “double & rx\n”; }

int main()
{
    double w = 10.0;
    r1(w);
    r1(w + 1);
    r1(up(w));
    return 0;
}
```

b. What does the following short program display and why?

```cpp
#include <iostream>
using namespace std;

double up(double x) { return 2.0 * x; }
void r1(double &rx) { cout << "double & rx\n"; }
void r1(double &&rx) { cout << "double && rx\n"; }

int main()
{
    double w = 10.0;
    r1(w);
    r1(w + 1);
    r1(up(w));
    return 0;
}
```

c. What does the following short program display and why?

```cpp
#include <iostream>
using namespace std;

double up(double x) { return 2.0 * x; }
void r1(const double &rx) { cout << "const double & rx\n"; }
void r1(double &&rx) { cout << "double && rx\n"; }

int main()
{
    double w = 10.0;
    r1(w);
    r1(w + 1);
    r1(up(w));
    return 0;
}
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
04. Which member functions are special member functions, and what makes them
special?</br></br>

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
05. Suppose the Fizzle class has only the data members shown:

```cpp
class Fizzle
{
private:
    double bubbles[4000];
    ...
};
```

Why would this class not be a good candidate for a user-defined move constructor?
What change in approach to storing the 4000 double values would make the class a
good candidate for a move function?

</summary>

</details>

<!-- -------------------------------------------- -->
<details><summary>
06. Revise the following short program so that it uses a lambda expression instead of
<code>f1()</code>. Don’t change <code>show2()</code>.

```cpp
#include <iostream>

template <typename T>
    void show2(double x, T &fp) { std::cout << x << " -> " << fp(x) << '\n'; }
double f1(double x) { return 1.8 * x + 32; }

int main()
{
    show2(18.0, f1);
    return 0;
}
```

</summary>

</details>

<!-- -------------------------------------------- -->

<details><summary>
07. Revise the following short and ugly program so that it uses a lambda expression
instead of the <code>Adder</code> functor. Don’t change <code>sum()</code>.

```cpp
#include <iostream>
#include <array>

const int Size = 5;
template <typename T>
void sum(std::array<double, Size> a, T &fp);

class Adder
{
    double tot;

public:
    Adder(double q = 0) : tot(q) {}
    void operator()(double w) { tot += w; }
    double tot_v() const { return tot; };
};
int main()
{
    double total = 0.0;
    Adder ad(total);
    std::array<double, Size> temp_c = {32.1, 34.3, 37.8, 35.2, 34.7};
    sum(temp_c, ad);
    total = ad.tot_v();
    std::cout << "total: " << ad.tot_v() << '\n';
    return 0;
}
template <typename T>
void sum(std::array<double, Size> a, T &fp)
{
    for (auto pt = a.begin(); pt != a.end(); ++pt)
    {
        fp(*pt);
    }
}
```

</summary>

</details>

<!-- -------------------------------------------- -->
