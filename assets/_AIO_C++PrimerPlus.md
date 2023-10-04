# C++ :: [C++ Primer Plus](.Books\C++_Primer_Plus,_Sixth_Edition,_2012,_Stephan_Prata.pdf)

- C++ Primer Plus - AIO
- [Exercises - Exercises with questions](./Exercises.md)
- [Reviews - Reviews (for html)](./Reviews.md)
- [Readme - only links to exercise code](./Readme.md)

[TOC]

## Chapter 1: Getting Started

Computer language deal with 2 concepts: DATA (information) & ALGORITHMS (methods)

C++ joins three programming categories:

- *C*   - Procedural language
- *C++* - Object-oriented language, represented by: class enhancements
- *C++* - Generic programming (eg. write function for a generic (unspecified) type
once and use it for variety of actual types)

**Object-Oriented Programming (OOP):**

- *Class* - Defines what data is used to represent object and what operations
can be performed on it; data form; [name, date, ...]
- *Object* - data structure; [David, 19.01.2000, ...]

Bottom-up programming - going from lower level (eg. classes) to higher
(eg. program design) OOP facilitates creating reusable code with:

- *Information hiding* - safeguard from improper access
- *Polymorphism* - allows creating multiple definitions for operators and functions
- *Inheritance* - allows deriving new classes from old ones

**Mechanics of creating a Program:**

1. Write and save program: source code ``code.cpp``
2. Compile the source code: translation to machine language ``gcc ./code.cpp``
3. Link with additional code: libraries, functions; The output is executable code

**Common phrases:**

- *Compile* - Compile code in the file you are currently in
- *Build/Make* - Compile code for all source code files in the project
- *Build All* - Compile all source code files from scratch
- *Link* - Combine compiled source code with necessary library code
- *Run/Execute* - Run the program ./prog or exe
- *Debug* - Run program with option of going  through step-by-step

## Chapter 2: Setting Out to C++

<details><summary>
List of what you will learn
</summary>

```cpp
    1. Creation and format of C++ program </br>
    2. The #include directive </br>
    3. The main() function </br>
    4. Using cout object for output </br>
    5. Using cin object for input</br>
    6. How/when use endl</br>
    7. Placing comments in C++ program </br>
    8. Declaring and using variables and functions</br>
```

</details> <br>

***C++ is:***

- `case sensitive` - it distinguish uppercase from lowercase characters
- `spelling sensitive` - kout or coot instead of `cout` will give you error

***Construction of C++ program:***
C++ program is constructed from functions "C++ building blocks".
Typical program is organized to major tasks with separated functions to handle
those tasks. Below is simple function named `main()`:

 > [myfirst.cpp](./programs/myfirst.cpp)

<details style="margin-left: 135px; text-align: left; position: relative; top: -41px;">
<summary></summary><figure><object
    data="./programs/myfirst.cpp"
    type="text/plain" width="100%" height="250px">
</object></figure></details>

```cpp
// myfirst.cpp -- displays a message
#include <iostream>                          // a PREPROCESSOR directive
int main()                                   // function header
{                                            // start of function body
    using namespace std;                     // make definitions visible
    cout << "Come up and C++ me some time."; // message
    cout << endl;                            // start a new line
    cout << "You won’t regret it!" << endl;  // more output
    return 0;                                // terminate main()
} // end of function body
```

The fundamental structure of program (listing) above is:

```cpp
int main()
{
    statements
    return 0;
}
```

It have two parts: function header `int main()` and function body enclosed in brackets.

C++ uses `preprocerssor` - Program, that process a source file before the main
compilation takes place; directives whose names begins with `#`. Program above
uses `#include` directive (thus they are named include files - they are included
in other files/included at the beggining) of `iostream` file that is responsible
with communication with external world (input/output).

- `using namespace std` - use all namespace directives from std library `std::`
- `using std::cout` - use only one `std::` qualifier
- `cout` - predefined object that knows how to display variety of things
- ***Operator Overloading*** - the same operator with different meanings,
eg.: "`<<`" is insertion operator and bitwise left-shift operator.
The meaning is defined by context.
- `endl` - Moves screen coursor to the new line; equvalent to newline
character "`\n`" from C, but `endl` guarantees that output will be `flushed`.
Special notations (to `cout`) like this are called `manipulators`
- ***tokens*** - indivisible elements in a line of code, eg.: `int`

---

***Statements***

To store information on a computer you need:

- identify storage location
- identify how much storage information requires
- ***C++ program*** - collection of functions.
- ***Function*** - collection of statements.
- `=` - assignment operator from right to left (assign value to a storage location).
- `<<` - insertion operator - defined in *ostream* class
- ``>>`` - extraction operator - defined in *istream* class

```cpp
/* 
- declaration statement 
- definition - variable is declared and it causes compiler to allocate memory space
 for variable. Declaration don't need to be the definition (something is declared
 but it don't need to have allocated space)
 */
int x;  

x = 10; // - assignement statement - provide/assign value to variable/storage location
x = x - 1 // - arithmetic expression 
```

---

*class* - data type that user defines
*to define class* - describe what **information** it can represent and what **action**
 you can perform on data or in other words

```cpp
x = sqrt(6.25)        -->    function call                 -->    |code for sqrt|
                                                                        ▼
|assign return to x|  <--    return to calling function    <--    | sqrt return |
```

Argument `6.25` is ***passed*** to a function sqrt

***[function prototype](.\programs\function_prototype.cpp)*** - is for function as variable declaration for variables
decribe the function interface and needs to be before function definition;
 if you use it you will need to provide prototype in source code or with #include

***function definition*** - code for function workings

***keyword*** - vocabulary of a computer language: *int, void, return, double,
etc..* - the list of them is in appendix "C++ Reserved Words"; functions and
object names are not keywords

```cpp
//function prototype; initial double is type of returned value from sqrt; 
//double in sqrt(double) is passed argument for sqrt 
double sqrt(double);  
```

***exit values*** - (tested) return values of executed program. default convention:
0 - program ran successfully; >0 - error/problem

- Declaration statement — A declaration statement announces the name and the
  type of a variable used in a function.
- Assignment statement — An assignment statement uses the assignment operator (=)
  to assign a value to a variable.
- Message statement — A message statement sends a message to an object, initiating
  some sort of action.
- Function call — A function call activates a function.When the called function ter-
  minates, the program returns to the statement in the calling function immediately
  following the function call.
- Function prototype — A function prototype declares the return type for a function,
  along with the number and type of arguments the function expects.
- Return statement — A return statement sends a value from a called function back
  to the calling function.

---

### Chapter 2 Review

<details><summary>      <!-- -------------------------------------------- -->
1. What are the modules of C++ programs called?
</summary>

```They are called functions.```
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
2. What does the following preprocessor directive do?

```#include <iostream>```
</summary>
It causes the contents of the iostream file to be substituted for this
directive before final compilation.
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
3. What does the following statement do?

``using namespace std;``
</summary>
It makes definitions made in the std namespace available to a program.
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
4. What statement would you use to print the phrase “Hello, world” and then
start a new line?
</summary>

``cout << "Hello, world\n";``
or
``cout << "Hello, world" << endl;``
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
5. What statement would you use to create an integer variable with the name
cheeses ?
</summary>

```cpp
int cheeses;
```

</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
6. What statement would you use to assign the value 32 to the variable cheeses ?
</summary>

```cpp
cheeses = 32;
```

</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
7. What statement would you use to read a value from keyboard input into the<br>
&emsp;variable cheeses ?
</summary>

```cpp
cin >> cheeses;
```

</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
8. What statement would you use to print “We have X varieties of cheese,”<br>
&emsp;where the current value of the cheeses variable replaces X ?
    </summary>

```cpp
cout << "We have " << cheeses << " varieties of cheese\n";
```

</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
9. What do the following function prototypes tell you about the functions?

``int prune(void);``<br>
``int froop(double t);``<br>
``void rattle(int n);``

</summary>

The function froop() expects to be called with one argument, which will be type
double, and that the function will return a type int value. For instance, it
could be used as follows: ``int gval = froop(3.14159);``

The function rattle() has no return value and expects an int argument.
For instance, it could be used as follows: ``rattle(37);``

The function prune() returns an int and expects to be used without an argument.
For instance, it could be used as follows: ``int residue = prune();``
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
10.  When do you not have to use the keyword return when you define a function?
</summary>

You don’t have to use return in a function when the function has the return type
`void`. However, you can use it if you don’t give a return value: ``return;``
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
11. Suppose your main() function has the following line:

``cout << “Please enter your PIN: “;``
And suppose the compiler complains that cout is an unknown identifier.
What is the likely cause of this complaint, and what are three ways to fix the problem?
    </summary>
***Lack of caller for std library.***
Use directive: ``using namespace std;`` or ``using std::cout`` for only
`cout` or call library with `std::cout` instead of `cout`
</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

---

### Chapter 2 Programming Exercises

[1.](./exercises/exercise_ch2_1.cpp)
Write a C++ program that displays your name and address (or if you value your
privacy,a fictitious name and address).

[2.](./exercises/exercise_ch2_2.cpp)
Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)

[3.](./exercises/exercise_ch2_3.cpp)
Write a C++ program that uses three user-defined functions
(counting `main()` as one) and produces the following output:

```sh
Three blind mice
Three blind mice
See how they run
See how they run
```

One function,called two times,should produce the first two lines, and the remain-
ing function, also called twice, should produce the remaining output.

[4.](./exercises/exercise_ch2_4.cpp)
Write a program that asks the user to enter his or her age.
The program then should display the age in months:

```sh
Enter your age: 29
Your age in months is 384.
```

[5.](./exercises/exercise_ch2_5.cpp)
Write a program that has `main()` call a user-defined function that takes a
Celsius temperature value as an argument and then returns the equivalent
Fahrenheit value.The program should request the Celsius value as input from
the user and displaythe result, as shown in the following code:

```sh
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
```

For reference,here is the formula for making the conversion:
`Fahrenheit = 1.8 × degrees Celsius + 32.0`

[6.](./exercises/exercise_ch2_6.cpp)
Write a program that has `main()` call a user-defined function that takes
a distance in light years as an argument and then returns the distance
in astronomical units.The program should request the light year value as
input from the user and display the result,as shown in the following code:

```sh
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
```

An astronomical unit is the average distance from the earth to the sun
(about 150,000,000 km or 93,000,000 miles), and a light year is the distance
light travels in a year (about 10 trillion kilometers or 6 trillion miles).
(The nearest star after thesun is about 4.2 light years away.) Use type double
(as in Listing 2.4 (page 51)) and this conversion factor:

```sh
1 light year = 63,240 astronomical units
```

[7.](./exercises/exercise_ch2_7.cpp)
Write a program that asks the user to enter an hour value and a minute value.
The `main()` function should then pass these two values to a type `void`
function that displays the two values in the format shown in the following
sample run:

```sh
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
```

## Chapter 3: Dealing with Data

<details><summary>
List of what you will learn
</summary>

```sh
- Rules for naming C++ variables
- C++’s built-in integer types: unsigned long, long, unsigned int, int, unsigned
short, short, char, unsigned char, signed char, bool
- C++11’s additions: unsigned long long and long long
- The climits file, which represents system limits for various integer types
- Numeric literals (constants) of various integer types
- Using the const qualifier to create symbolic constants
- C++’s built-in floating-point types: float, double, and long double
- The cfloat file, which represents system limits for various floating-point types
- Numeric literals of various floating-point types
- C++’s arithmetic operators
- Automatic type conversions
- Forced type conversions (type casts)
```

</details><br>

**Build-in C++ data types**:

- fundamental types - integers and floating point numbers
- compound types - arrays, strings, pointers and structures, explained in Chapter 4

**To store item of information on a computer you need to track**:

- Where the information is stored
- What value is kept there
- What kind of information is stored

**C++ naming rules**:

- Only characters you can use in names are: alphabetic characters,
numeric digits and underscore character
- The first character in a name cannot be a nu,eric digit
- Uppercase characters are considered distinct from lowercase characters
- You can't use C++ keyword for a name
- Names beginning with two underscore characters or with an underscore character
followed by an uppercase letter are reseved for use by implementatio
(the compiler and the resources it uses).
- Names beggining with single underscore character are reserved for use a
global identifiers bt the implementation
- C++ places no limits on the length of a name, and all characters in a name are
significant (but some platforms can have their own length limits).

Data

- *width* - term for the amount of memory used to hold variable
- *operator* - build in language element that operates on one or more items to
produce a value (addition operator `+` adds two values)
  - *sizeof* - return size in bytes of a tupe or variable
  - *climits* - header file - contain information about integer type limits,
  check [limits.cpp](.\programs\limits.cpp)

<details><summary>
     <a href=".\programs\limits.cpp"> limits.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\limits.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

### Initialization

Combines assignment with declaration, for example:

```cpp
int i_sth = INT_MAX; 
int owls = 101; // traditional C initialization, sets owls to 101
int wrens(432); // alternative C++ syntax, set wrens to 432
```

Not initialized variables are **indeterminate** - value is what was previously
in memory, assigned to the newly declared variable;

**C++11 initialization:**

- using a braced initializer `{}`
- braces can be left empty, in which case the variable is initialized to 0
- it can be used with or without the = sign
- it provides better protection against type conversion errors
(more on end of this chapter)
  
```cpp
int emus{7};        // set emus to 5
int rheas = {12};   // set rheas to 12
int rocs = {};      // set rocs to 0
int psychics{};     // set psychics to
```

---

Exceeding max value (range of data type) will make value assign the lowest value
possible (like odometer).  

Amount of allocated memory for `int` (and thus max range/value) can differ from
devices and compilers, but is *natural* (computer handles it most efficiently);
`long` type is more reliable (32bit), but worse in other aspects.

### Literals

Constant values that are assigned to the constant variables.

#### Integer literals

- *042* - octal value - base 8
- *42* - decimal value, base 10  
- *0x42* - hexadecimal value - base 16

Example in hexoctl.cpp
<details><summary>
     <a href=".\programs\hexoct1.cpp"> hexoct1.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\hexoct1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details> <br>

You can `cout` manipulators `dec`, `oct`, `hex` for changing numer base.
Example in hexoct2.cpp

<details><summary>
     <a href=".\programs\hexoct2.cpp"> hexoct2.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\hexoct2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details> <br>

#### Character literals

**Suffix** for constant:

`l`, `L` - 32bit long constant
`u`, `U` - unsigned int constant
`ul` (any combination of letters) - unsigned long constant
`ll`, `LL` - C++11 long long constant
`ULL` - C++11 unsigned long long constant

| data    | Stored as  |
|---------|------------|
| `1500`  | 16bit int  |
| `1500L` | 32bit long |

Characters set, like **ASCII** defines which number defines character.
Thus `char` is `int` data type value and operations on it like on ints can be performed.
Printed characters are processed through `cout`.

Using single quotation marks, eg. `'A'` for character display is better, because
it doesn't assume particular code.

Escape codes represent characters, that you cannot input from keyboard notrmally:

<details><summary>
     Table of escape codes
    </summary>

|Character Name| ASCII Symbol | C++ Code | ASCII Decimal Code | ASCII Hex Code |
|---|---|---|---|---|---|
| Newline | NL (LF) | \n | 10 | 0xA |
| Horizontal tab | HT |\t | 9 | 0x9 |
| Vertical tab | VT | \v | 11 | 0xB |
| Backspace | BS | \b | 8 | 0x8 |
| Carriage return | CR | \r | 13 | 0xD |
| Alert | BEL | \a | 7 | 0x7 |
| Backslash | \ | \\ | 92 | 0x5C |
| Question mark | ? | \\?  | 63 | 0x3F |
| Single quote | ’ | \\' | 39 | 0x27 |
| Double quote | ” | \\" | 34 | 0x22 |
</details>

<details><summary>
     <a href=".\programs\bondini.cpp"> Example of use: bondini.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\bondini.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details> <br>

**Universal Character Names** - used for international characters like French vowel.
It starts with `\u` ot `\U`, eg.: ``` cout << "g\u00E2teau. ``` - **ISO 10646**

`wchar_t` - wide character set - for characters that don't fit within 8-bit bute
(eg.: Japanese kanji system). It is 16-bit or larger. `wchar_t` can vary from
one implementation to another.

#### C++11 types

- `char16_t` - unsigned 16-bits, use `u` prefix for `char16_t`, eg.: `u"good"` or `u'R'`
- `char32_t` - unsigned 32-bits, use `U` prefix for `char32_t`

### Member function (OOP)

Eg. `cout.put()`, belongs to a class and describes a method for manipulating
class data. `put()` is a class member function. `.` is **membersip operator**.
You can use member function only with particular object in that class (in this
case `ostream`), such as `cout` class object in this case.

In short: class - `ostream`, class object - `cout`, function name (member function) - `put()`

`cout.put()` is alternative for using `<<` operator to display character.

### *bool* type

C++ interprets nonzero values as *true* and zeros values as *false*
You can use `bool` type to reprsent those values:

```cpp
bool read = true; 
```

The literals true and false can be converted to type int by promotion, with
*true* converting to 1 and *false* to 0 and vice-versa:

```cpp
int ans = true;         // ans assigned 1
int promise = false;    // promise assigned 0
bool is_tru = -500;     // any non-zero will be converted to true 
```

### *const* qualifier

- if attempted to change, compilator will give error
- if value is not provided during declaration, it will be unspecified, that you
cannot modify
- you can use *scoping rules* (chapter 9) to limit it to particular function or
files (advantage over *#define*, second advantage is you can use const with
elaborate types, such as *arrays* or *structures*)

Example of use:
`const int Months = 12;`

### Floating-Point Numbers

There is two ways of writing floating-point numbers:

- standard, decimal-point notation, eg.: `12.34`
- representing floating-point values is called E notation, eg.:
`-3.45E6` *= -3.4* 10^6* (where `6` - exponent, `3.45` - mantissa).

#### Floating-Point Types

All three can be the same size. Typically, float is 32 bits, double is 64 bits,
and long double is 80, 96, or 128 bits, and range in exponents for all three types
is at least *–37 to +37*. You can look in the `cfloat` or `float.h` header files to
find the limits for your system.

The program *floatnum.cpp* display limiitations of floating-point numbers precision
and previews an *ostream* method called `setf()` from Chapter 17. This call forces
output to stay in ***fixed-point notation*** so that you can better see the precision.

<details><summary>
     <a href=".\programs\floatnum.cpp"> floatnum.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\floatnum.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details> <br>

#### Floating-Point Constants

Use suffixes for declaration
`f` or `F` - float constant, eg.: `1.234f`
`l` or `L` - long double

```cpp
1.234f // a float constant
2.45E20F // a float constant
2.345324E28 // a double constant
2.2L // a long double constant
```

#### Plus and Cons of Floating-Point values

`-` operations usually are *slightly slower* than integer operations
`-` you can *lose precision* and values: example [fltadd.cpp](.\programs\fltadd.cpp)
`+` represent *values betwewen integers*
`+` can represent a much *greater range of values*, because of the scaling factor

### C++ Arithmetic Operators

- *operators*: `+`, `-`, `*`, `%`, `/`, `*`
- *operands* - two values used for calculation via *operators*
- *expression* - combined operator with operands
  
`%` - modulo works only with integers and produces remainder of dividing first
value by second. `19 % 6` is `1`, because 6 goes into 19 three times, with
remainder of 1. Practical example: [modulus.cpp](.\programs\modulus.cpp)

`precedence rules` - When more than one operator can be applied to the same
operand, C++ uses`precedence rules` to decide which operator is used first.

`int flyingpigs = 3 + 4 * 5; // 35 or 23?`
The arithmetic operators follow the usual algebraic precedence, with multiplication,
division, and the taking of the modulus done before addition and subtraction.

Appendix D,“Operator Precedence,” - The `/` and `*` operators have the same precedence.
`float logs = 120 / 4 * 5; // 150 or 6?`

When two operators have the same precedence, C++ looks at whether the operators
have a `left-to-right associativity` or a `right-to-left associativity`.

Appendix D shows that multiplication and division associate left-to-right.

### Conversion

- truncation - discarding fractional part in `int`, when converting from
floating-point to int value (eg.: `int g(1.123)`)

C++11 - doesn't permit *narrowing* - variable may not be able to represent the
assigned value:

```cpp
const int code = 66;
int x = 66;
char c1 {31325}; // narrowing, not allowed
char c2 = {66}; // allowed because char can hold 66
char c3 {code}; // ditto
char c4 = {x}; // not allowed, x is not constant
x = 31325;
char c5 = x; // allowed by this form of initialization
```

- integral promotion - automatic conversion evaluates expressions, C++
converts `bool`, `char`, `unsigned char`, `signed char`, and `short` values to `int`, eg.:

```cpp
short chickens = 20; // line 1
short ducks = 35; // line 2
short fowl = chickens + ducks; // line 3
```

For `fowl`, `chickens` and `ducks` got converted (promoted) to `int` for
calculation and then result got converted back to `short`. This is because `int`
is the computer most *natural type*

**Type cast conversion**
Is explicit form of conversion

```cpp
(long) thorn // returns a type long conversion of thorn
long (thorn) // returns a type long conversion of thorn
```

The type cast doesn’t alter the thorn variable itself; instead, it creates
new value of the indicated type, which you can then use in an expression, as
in the following:

```cpp
cout << int('Q'); // displays the integer code for 'Q'
```

### Static type cast conversion

In c++ of the four, the static_cast<> operator, can be used for converting values
from one numeric type to another. For example, using it to convert thorn to a
type long value looks like this:

```cpp
static_cast<long> (thorn)
```

<details><summary>
     <a href=".\programs\typecast.cpp"> typecast.cpp </a>
    </summary>
    <figure>
        <iframe
            src=".\programs\typecast.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details> <br>

**`auto` in C++11**

Just use `auto` instead of the type name in an initializing declaration, and the
compiler assigns the variable the same type as that of the initializer:

```cpp
auto n = 100; // n is int
auto x = 1.5; // x is double
auto y = 1.3e12L; // y is long double
```

Automatic type deduction becomes much more useful when dealing with complicated
types, such as those in the **STL (Standard Template Library)**. For example:

C++98 code:

```cpp
std::vector<double> scores;
std::vector<double>::iterator pv = scores.begin();
```

C++11 code:

```cpp
std::vector<double> scores;
auto pv = scores.begin();
```

### Chapter 3 Review

<details><summary>      <!-- -------------------------------------------- -->
1. Why does C++ have more than one integer type?
</summary>

Having more than one integer type lets you choose the type that is best suited to
a particular need. For example, you could use `short` to conserve space or `long
to guarantee storage capacity or to find that a particular type speeds up a
particular calculation.

</details>              <!-- >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -->

<details><summary>      <!-- -------------------------------------------- -->
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

### Chapter 3 Programming Exercises

[1.](./exercises/exercise_ch3_1.cpp) Write a short program that asks
for your height in integer inches and then converts your height to feet and inches.
Have the program use the underscore character to indicate where to type the response.
Also use a const symbolic constant to represent the conversion factor.

[2.](./exercises/exercise_ch3_2.cpp)  Write a short program that asks for your
height in feet and inches and your weight in pounds. (Use three variables to store
the information.) Have the program report your body mass index (BMI).To calculate
the BMI, first convert your height in feet and inches to your height in inches
(1 foot = 12 inches). Then convert your height in inches to your height in meters
by multiplying by 0.0254.Then convert your weight in pounds into your mass in kilograms
by dividing by 2.2. Finally, compute your BMI by dividing your mass in kilograms
by the square of your height in meters. Use symbolic constants to represent the
various conversion factors.

[3.](./exercises/exercise_ch3_3.cpp) Write a program that asks the user to enter
a latitude in degrees, minutes, and seconds and that then displays the latitude
in decimal format.There are 60 seconds of arc to a minute and 60 minutes of arc
to a degree; represent these values with symbolic constants.You should use a separate
variable for each input value. A sample run should look like this:

```cpp
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
```

[4.](./exercises/exercise_ch3_4.cpp) Write a program that asks the user to enter
the number of seconds as an integer value (use type long, or, if available, long long)
and that then displays the equivalent time in days, hours, minutes, and seconds.
Use symbolic constants to represent the number of hours in the day, the number of
minutes in an hour, and the number of seconds in a minute.The output should look
like this:

```cpp
Enter the number of seconds: 31600000 
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
```

[5.](./exercises/exercise_ch3_5.cpp) Write a program that requests the user to
enter the current world population and the current population of the U.S. (or of
some other nation of your choice). Store the information in variables of type long long.
Have the program display the percent that the U.S. (or other nation’s) population
is of the world’s population.The output should look something like this:

```cpp
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
```

You can use the Internet to get more recent figures.

[6.](./exercises/exercise_ch3_6.cpp) Write a program that asks how many miles you
have driven and how many gallons of gasoline you have used and then reports the miles
per gallon your car has gotten. Or, if you prefer, the program can request distance
in kilometers and petrol in liters and then report the result European style,
in liters per 100 kilometers.

[7.](./exercises/exercise_ch3_7.cpp) Write a program that asks you to enter an
automobile gasoline consumption figure in the European style (liters per 100 kilometers)
and converts to the U.S. style of miles per gallon. Note that in addition to using
different units of measurement, the U.S. approach (distance / fuel) is the
inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.
Thus, 19 mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.

## Chapter 4: Compound Types

<details><summary>
        List of what you will learn
</summary>

```cpp
Creating and using arrays
Creating and using C-style strings
Creating and using string-class strings
Using the getline() and get() methods for reading strings
Mixing string and numeric input
Creating and using structures
Creating and using unions
Creating and using enumerations
Creating and using pointers
Managing dynamic memory with new and delete
Creating dynamic arrays
Creating dynamic structures
Automatic, static, and dynamic storage
The vector and array classes (an introduction)
```

</details>

### Arrays

Data form that can hold many values of one type. Declaration should indicate three things:

- The type of value to be stored in each element
- The name of the array
- The number of elements in the array

`typeName arrayName[arraySize];` - *arraySize* cannot be a variable whose value
is set while the program is running. However, later in this chapter you’ll learn
how to use `the` new operator to get around that restriction

```cpp
short months[12]; // creates array of 12 short
```

An array is called a `compound` type because it is built from some other type.
(C uses the term `derived` type, but because C++ uses the term `derived` for
class relationships, it had to come up with a new term.)

You can access array elements individually.The way to do this is to use a
`subscript`, or an `index`, to number the elements. C++ array numbering starts
with zero. **The `index` of the last element is one less than the size of the `array`**

<img src="./assets/_ch4Array.png" alt="Image description"
style="display: block; margin: auto; width: 35%; height: auto; border-radius: 8px;">

*Declaring* an `array`, *assigning values* to `array` elements,
and *initializing* an `array`:

<details><summary>
     <a href="./programs/arrayone.cpp"> arrayone.cpp </a>
    </summary>
    <figure>
        <iframe
            src="./programs/arrayone.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="80%">
        </iframe>
    </figure>
</details>

#### Array Initialization

You can use the initialization form only when defining the array.
You cannot use it later, and you cannot assign one array wholesale to another:

```cpp
int cards[4] = {3, 6, 8, 10};   // okay
int hand[4];                    // okay
hand[4] = {5, 6, 7, 9};         // not allowed
hand = cards;                   // not allowed

// If you partially initialize an array, 
// the compiler sets the remaining elements to zero.
float hotelTips[5] = {5.0, 2.5};

// If you leave the square brackets ([]) empty 
// when you initialize an array, the C++ compiler
// counts the elements for you.
short things[] = {1, 5, 3, 8};
```

Often, letting the compiler count the number of elements is poor practice because
its count can be different from what you think it should be. You could, for instance,
accidently omit an initial value from the list. However, this approach can be a
safe one for initializing a character array to a string, as you’ll soon see.
And if your main concern is that the program, not you, knows how large an array
is, you can do something like this:

```cpp
short things[] = {1, 5, 3, 8};
int num_elements = sizeof things / sizeof (short);
```

##### C++11 Array Initialization

```cpp
// 1. You can drop the = sign when initializing an array:
double earnings[4] {1.2e4, 1.6e4, 1.1e4, 1.7e4}; // okay with C++11

// 2. You can use empty braces to set all the elements to 0:
unsigned int counts[10] = {}; // all elements set to 0
float balances[100] {}; // all elements set to 0

// 3. List-initialization protects against narrowing (As in Chapter 3):
long plifs[] = {25, 92, 3.0}; // not allowed
char slifs[4] {'h', 'i', 1122011, '\0'}; // not allowed
char tlifs[4] {'h', 'i', 112, '\0'}; // allowed
```

`vector` - STL alternative for arrays
`array` template class - C++11 alternative for arrays

### Strings

Series of characters stored in consecutive bytes of memory.

#### C-style strings

C-style strings have a special feature:The last character of every string is the null
character, written `\0`.

```cpp
char dog[8] = { 'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string!
char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'}; // a string!
char bird[11] = "Mr. Cheeps"; // the \0 is understood
char fish[] = "Bubbles"; // let the compiler count
```

<img src="./assets/_ch4CString.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

```cpp
char shirt_size = 'S'; // this is fine
char shirt_size = "S"; // illegal type mismatch
```

But `"S"` is not a character constant; it represents the string consisting of
two characters, the `S` and the `\0` characters. Even worse, `"S"` actually
represents the memory address at which the string is stored. So a statement
like the following attempts to assign a memory address to shirt_size.

##### Concatenating String Literals

C++ enables
you to concatenate string literals—that is, to combine two quoted  strings into one.
`\0` character from the first string is replaced by the first character of the
second string. The following output statements are equivalent to each other:

```cpp
cout << "I'd give my right arm to be" " a great violinist.\n";
cout << "I'd give my right arm to be a great violinist.\n";
cout << "I'd give my right ar"
"m to be a great violinist.\n";
```

<img src="./assets/_ch4CString2.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

<details><summary>
     <a href="./programs/strings.cpp">
      Strings in an Array strings.cpp </a>
    </summary>
    <figure>
        <iframe
            src="./programs/strings.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

<details><summary>
     <a href="./programs/instr1.cpp">
      Problem 1: instr1.cpp, reading string input via cin</a>
    </summary>
    <figure>
        <iframe
            src="./programs/instr1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

<details><summary>
     <a href="./programs/instr2.cpp">
      Solution 1: instr2.cpp, Line-Oriented Input with getline()</a>
    </summary>
    <figure>
        <iframe
            src="./programs/instr2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

<details><summary>
     <a href="./programs/instr3.cpp">
     Solution 2: instr3.cpp, Line-Oriented Input with get()</a>
    </summary>
    <figure>
        <iframe
            src="/instr3.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

<details><summary>
     <a href="./programs/numstr.cpp">
     numstr.cpp, Mixing String and Numeric Input</a>
    </summary>
    <figure>
        <iframe
            src="/numstr.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

<br>

In short:

```cpp
cin.getline(dessert, ArSize);

cin.getline(name1, ArSize).getline(name2, ArSize); // overloading 

cin.get(name, ArSize);
cin.get(dessert, Arsize); // a problem ()

cin.get(name, ArSize); // read first line
cin.get(); // read newline
cin.get(dessert, Arsize); // read second line

cin.get(name, ArSize).get(); // concatenate member functions

// get() (but not getline()) reads an empty
// line, it sets something called the failbit. The implications of 
// this act are that further input is blocked, but you can restore 
// input with the following command:
cin.clear();

// You can also use
cin.get(); // or cin.get(ch);
(cin >> year).get(); // or (cin >> year).get(ch);
```

### `string` Class

To use the string class, a program has to include the string header file.

You should learn from this example that, in many ways, you can use a string
object in the same manner as a character array:

- You can initialize a string object to a C-style string.
- You can use cin to store keyboard input in a string object.
- You can use cout to display a string object.
- You can use array notation to access individual characters stored in a string object.

<details><summary>
     <a href="./programs/strtype1.cpp">
     strtype1.cpp, differences between string objects and character arrays.</a>
    </summary>
    <figure>
        <iframe
            src="./programs/strtype1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

C++11 string initialization

```cpp
char first_date[] = {"Le Chapon Dodu"};
char second_date[] {"The Elegant Plate"};
string third_date = {"The Bread Bowl"};
string fourth_date {"Hank's Fine Eats"};
```

#### Assignment, Concatenation, and Appending

String class make *some* operations simpler. you can’t simply assign one array
to  nother. But you can assign one string object to another:

```cpp
char charr1[20];            // create an empty array
char charr2[20] = "jaguar"; // create an initialized array
string str1;                // create an empty string object
string str2 = "panther";    // create an initialized string
charr1 = charr2;            // INVALID, no array assignment
str1 = str2;                // VALID, object assignment ok

string str3;
str3 = str1 + str2;         // assign str3 the joined strings
str1 += str2;               // add str2 to the end of str1
```

<details><summary>
     <a href="./programs/strtype2.cpp">
     strtype2.cpp, assigning, adding, and appending strings.</a>
    </summary>
    <figure>
        <iframe
            src="./programs/strtype2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

#### More `string` Class operations

You can use the `strcpy()` function to copy a string to a character array,
and you can use the `strcat()` function to append a string to a character array:

```cpp
strcpy(charr1, charr2);     // copy charr2 to charr1
strcat(charr1, charr2);     // append contents of charr2 to char1
```

<details><summary>
     <a href="./programs/strtype3.cpp">
     strtype3.cpp, compares techniques used with string objects with
     techniques used with character arrays.</a>
    </summary>
    <figure>
        <iframe
            src="./programs/strtype3.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

#### More `string` Class I/O

<details><summary>
     <a href="./programs/strtype4.cpp">
     strtype4.cpp, reading a line at a time instead of a word at time uses
     a different syntax (class and not class).</a>
    </summary>
    <figure>
        <iframe
            src="./programs/strtype4.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details>

#### Other Forms of `string` Literals

C++ adds: `wchar_t` in addition to `char`
C++11 adds: `char16_t`, `char32_t` + raw string (`R` prefix) + support UTF-8 (`u8` prefix)

Use literals with L, u, and U prefixes:

```cpp
wchar_t title[] = L"Chief Astrogator";      // w_char string
char16_t name[] = u"Felonia Ripova";        // char_16 string
char32_t car[] = U"Humber Super Snipe";     // char_32 string
```

Raw string

`cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';`
   This would display the following: `Jim "King" Tutt uses \n instead of endl.`

The standard string literal equivalent would be this:
`cout << "Jim \"King\" Tutt uses \" \\n\" instead of endl." << '\n';`

Raw string syntax allows you to place additional characters between the
opening - the statement: `cout << R"+*("(Who wouldn't?)", she whispered.)+*" << endl;`
would display the following: `"(Who wouldn't?)", she whispered.`

### Structures

`array` can store only one type of data
`structure`  can store different types of data at the same time

```cpp
#include <string>
struct inflatable_string // structure definition
{
    std::string name;
    float volume;
    double price;
};

struct inflatable // structure declaration with 'inflatible' identifier/tag
{
    char name[20];
    float volume;
    double price;
};

inflatable hat;             // hat is a structure variable of type inflatable
inflatable woopie_cushion;  // type inflatable variable
inflatable mainframe;       // type inflatable variable

struct inflatable goose;    // keyword struct required in C
inflatable vincent;         // keyword struct not required in C++
```

Given that `hat` is type inflatable, you use the membership operator (.)
to access individual members. For example, `hat.volume` refers to the `volume`
member of the structure, and `hat.price` refers to the `price` member.

<img src="./assets/_ch4Structure.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

<details><summary>
     <a href="./programs/structur.cpp"> structur.cpp, example use of structure.</a>
    </summary>
<figure>
        <iframe
        src="./programs/structur.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

`structures` can be declared outside any function, which is called `external declaration`

#### C++11 Initialization

```cpp
inflatable duck {"Daphne", 0.12, 9.98}; // can omit the = in C++11
inflatable mayor {}; // individual members being set to 0
```

Narrowing is not allowed.

#### Other `structure` properties

`memberwise assignment` - you can use the assignment operator (=) to assign one
structure to another of the same type.

<details><summary>
     <a href="./programs/assgn_st.cpp">
     assgn_st.cpp, example use of memberwise assignment.</a>
    </summary>
<figure>
        <iframe
        src="./programs/assgn_st.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Arrays of Structures

```cpp
inflatable gifts[100]; // array of 100 inflatable structures
...
cin >> gifts[0].volume; // use volume member of first struct
cout << gifts[99].price << endl; // display price member of last struct

inflatable guests[2] = // initializing an array of structs
{
    {"Bambi", 0.5, 21.99}, // first structure in array
    {"Godzilla", 2000, 565.99} // next structure in array
};
```

<details><summary>
     <a href="./programs/arrstruct.cpp"> arrstruct.cpp, array of structures.</a>
    </summary>
<figure>
        <iframe
        src="./programs/arrstruct.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Bit Fields in Structures

C++, like C, enables you to specify structure members that occupy
a particular number of bits

```cpp
struct torgle_register
{
    u`nsigned int SN : 4; // 4 bits for SN value
    unsigned int : 4; // 4 bits unused
    bool goodIn : 1; // valid input (1 bit)
    b`ool goodTorgle : 1; // successful torgling
};

torgle_register tr = { 14, true, false };
...
if (tr.goodIn)
```

#### Unions

A union is a data format that can hold different data types but
only one type at a time

```cpp
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};

one4all pail;
pail.int_val = 15; // store an int
cout << pail.int_val;
pail.double_val = 1.38; // store a double, int value is lost
cout << pail.double_val;
```

`anonymous union` - has no name; in essence, its members become
variables that share the same address.

```cpp
struct widget
{
    char brand[20];
    int type;
    union // anonymous union
    {
        long id_num; // type 1 widgets
        char id_char[20]; // other widgets
    };
};
...
widget prize;
...
if (prize.type == 1)
cin >> prize.id_num;
else
cin >> prize.id_char;
```

#### Enumerations

`enum` facility provides an alternative to `const` for creating symbolic constants

```cpp
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
```

- It makes spectrum the name of a new type; spectrum is termed an enumeration,
much as a struct variable is called a structure.
- It establishes red, orange, yellow, and so on, as symbolic constants for the
integer values 0–7.These constants are called enumerators.

```cpp
spectrum band; // band a variable of type spectrum

band = blue; // valid, blue is an enumerator
band = 2000; // invalid, 2000 not an enumerator

band = orange; // valid
++band; // not valid, ++ discussed in Chapter 5
band = orange + red; // not valid, but a little tricky

int color = blue; // valid, spectrum type promoted to int
band = 3; // invalid, int not converted to spectrum
color = 3 + red; // valid, red converted to int

band = spectrum(3); // typecast 3 to type spectrum
band = spectrum(40003); // undefined
```

#### Setting Enumerator Values

```cpp
enum bits{one = 1, two = 2, four = 4, eight = 8};
enum bigstep{first, second = 100, third};
enum {zero, null = 0, one, numero_uno = 1};
```

##### Range of enumerations

```cpp
enum bits{one = 1, two = 2, four = 4, eight = 8};
bits myflag;
// In this case, the following is valid:
myflag = bits(6); // valid, because 6 is in bits range
```

Here `6` is not one of the enumerations, but it lies in the range the
enumerations define. The range is defined as follows. First, to find
the upper limit, you take the largest enumerator value.Then you find
the smallest power of two greater than this largest value and subtract one;
the result is the upper end of the range (For example, the largest `bigstep`
value, as previously defined, is 101. The smallest power of two greater
than this is 128, so the upper end of the range is 127.)

#### Pointers and the Free Store

**address operator**, represented by `&` to a variable to get its location;
if `home` is a variable, `&home` is its address

<details><summary>
     <a href="./programs/address.cpp"> address.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/address.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     Pointers and the C++ Philosophy
    </summary>
Object-oriented programming differs from traditional procedural programming in that OOP
emphasizes making decisions during runtime instead of during compile time. Runtime
means while a program is running, and compile time means when the compiler is putting a
program together. A runtime decision is like, when on vacation, choosing what sights to see
depending on the weather and your mood at the moment, whereas a compile-time decision
is more like adhering to a preset schedule, regardless of the conditions.
Runtime decisions provide the flexibility to adjust to current circumstances. For example,
consider allocating memory for an array. The traditional way is to declare an array. To
declare an array in C++, you have to commit yourself to a particular array size. Thus, the
array size is set when the program is compiled; it is a compile-time decision. Perhaps you
think an array of 20 elements is sufficient 80% of the time but that occasionally the program
will need to handle 200 elements. To be safe, you use an array with 200 elements.
This results in your program wasting memory most of the time it’s used. OOP tries to make
a program more flexible by delaying such decisions until runtime. That way, after the program
is running, you can tell it you need only 20 elements one time or that you need 205
elements another time.
In short, with OOP you would like to make the array size a runtime decision. To make this
approach possible, the language has to allow you to create an array—or the equivalent—
while the program runs. The C++ method, as you soon see, involves using the keyword new
to request the correct amount of memory and using pointers to keep track of where the
newly allocated memory is found.
Making runtime decisions is not unique to OOP. But C++ makes writing the code a bit more
straightforward than does C.
</details><br>

A special type of variable the `pointer` — holds the address of a value.
Thus, the name of the pointer represents the location

Applying the `*` operator, called the indirect value or the dereferencing operator,
yields the value at the location.

<details><summary>
     <a href="./programs/pointer.cpp"> pointer.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/pointer.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<img src="./assets/_ch4Pointer.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

<img src="./assets/_ch4Pointer2.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

In C++, the combination `int *` is a compound type, pointer-to-int.

``` cpp
int * p_updates;

// the following declaration creates one pointer (p1) and one ordinary int (p2):
int* p1, p2;

double * tax_ptr; // tax_ptr points to type double
char * str; // str points to type char
```

<details><summary>
     <a href="./programs/init_ptr.cpp">
     init_ptr.cpp, initialize a pointer to an address.</a>
    </summary>
<figure>
        <iframe
        src="./programs/init_ptr.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Pointer Danger

```cpp
long * fellow; // create a pointer-to-long
*fellow = 223323; // place a value in never-never land

// Pointer Golden Rule: Always initialize a pointer to a definite and
// appropriate address before you apply the dereferencing operator (*) to it.

int * pt;
pt = 0xB8000000; // type mismatch

int * pt;
pt = (int *) 0xB8000000; // types now match
```

#### Allocating Memory with `new`

In C, you can allocate memory with the library function `malloc()`

```cpp
// typeName * pointer_name = new typeName;
int * pn = new int;

// for comparison
int higgens;
int * pt = &higgens;
```

We say that `pn` points to a `data object`

<details><summary>
     <a href="./programs/use_new.cpp"> use_new.cpp, use new.</a>
    </summary>
<figure>
        <iframe
        src="./programs/use_new.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     Out of Memory?
    </summary>
It’s possible that a computer might not have sufficient memory available to satisfy a new
request. When that is the case, new normally responds by throwing an exception, an errorhandling
technique discussed in Chapter 15, “Friends, Exceptions, and More.” In older implementations
new returns the value 0. In C++, a pointer with the value 0 is called the null
pointer. C++ guarantees that the null pointer never points to valid data, so it is often used to
indicate failure for operators or functions that otherwise return usable pointers. The if
statement, discussed in Chapter 6, helps you deal with this possibility. For now, the important
point is that C++ provides the tools to detect and respond to allocation failures.
</details><br>

#### Freeing Memory with `delete`

This removes the memory to which ps points; it doesn’t remove the pointer ps itself.
Memory that you return, or `free`, can then be reused by other parts of the program

```cpp
int * ps = new int; // allocate memory with new
. . . // use the memory
delete ps; // free memory with delete when done

int * ps = new int; // ok
delete ps; // ok
delete ps; // not ok now
int jugs = 5; // ok
int * pi = &jugs; // ok
delete pi; // not allowed, memory not allocated by new

// Ordinarily, you won’t create two pointers to the same block of memory because that
// raises the possibility that you will mistakenly try to delete the same block twice.
int * ps = new int; // allocate memory
int * pq = ps; // set second pointer to same block
delete pq; // delete with second pointer
```

#### Using `new` to Create Dynamic Arrays

```cpp
//type_name * pointer_name = new type_name [num_elements];
int * psome = new int [10]; // get a block of 10 ints
delete [] psome; // free a dynamic array

int * pt = new int;
short * ps = new short [500];
delete [] pt; // effect is undefined, don't do it
delete ps; // effect is undefined, don't do it
```

- Don’t use delete to free memory that new didn’t allocate.
- Don’t use delete to free the same block of memory twice in succession.
- Use delete [] if you used new [] to allocate an array.
- Use delete (no brackets) if you used new to allocate a single entity.
- It’s safe to apply delete to the null pointer (nothing happens).

<details><summary>
     <a href="./programs/arraynew.cpp"> arraynew.cpp, use dynamic array</a>
    </summary>
<figure>
        <iframe
        src="./programs/arraynew.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Pointers, Arrays, and Pointer Arithmetic

<details><summary>
     <a href="./programs/addpntrs.cpp"> addpntrs.cpp, pointer addition</a>
    </summary>
<figure>
        <iframe
        src="./programs/addpntrs.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<img src="./assets/_ch4PointerAddition.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">

<details><summary>
     The Address of an Array
    </summary>

Taking the address of an array is another case in which the name of an array is not interpreted
as its address. But wait, isn’t the name of an array interpreted as the address of the
array? Not quite—the name of the array is interpreted as the address of the first element of
an array, whereas applying the address operator yields the address of the whole array:

`short tell[10]; // tell an array of 20 bytes`
`cout << tell << endl; // displays &tell[0]`
`cout << &tell << endl; // displays address of whole array`

Numerically, these two addresses are the same, but conceptually `&tell[0]`, and hence
tell, is the address of a 2-byte block of memory, whereas `&tell` is the address of a 20-
byte block of memory. So the expression tell + 1 adds 2 to the address value, whereas
`&tell + 1` adds 20 to the address value. Another way of expressing this is to say that
tell is type pointer-to-short, or `short *`, and `&tell` is type pointer-to-array-of-20-shorts,
or short [*](20).
Now you might be wondering about the genesis of that last type description. First, here is
how you could declare and initialize a pointer of that type:

`short (*pas)[20] = &tell; // pas points to array of 20 shorts`

If you omit the parentheses, precedence rules would first associate [20] with pas, making
pas an array of 20 pointers-to-short, so the parentheses are necessary. Next, if you wish to
describe the type of a variable, you can use the declaration of that variable as a guide and
remove the variable name. Thus, the type of pas is `short (*)[20]`. Also note that
because pas is set to `&tell`, *pas is equivalent to tell, so `(*pas)[0]` would be the first
element of the `tell` array.
</details><br>

#### `pointer` Summary

##### Declaring Pointers

To declare a pointer to a particular type, use this form:

```cpp
typeName * pointerName;
```

Here are some examples:

```cpp
double * pn; // pn can point to a double value
char * pc; // pc can point to a char value
```

Here pn and pc are pointers, and double *and char* are the C++ notations for
the types pointer-to-double and pointer-to-char.

##### Assigning Values to Pointers

You should assign a memory address to a pointer.You can apply the & operator
to a variable name to get an address of named memory, and the new operator returns
the address of unnamed memory.

Here are some examples:

```cpp
double * pn; // pn can point to a double value
double * pa; // so can pa
char * pc; // pc can point to a char value
double bubble = 3.2;
pn = &bubble; // assign address of bubble to pn
pc = new char; // assign address of newly allocated char memory to pc
pa = new double[30]; // assign address of 1st element of array of 30 double to pa
```

##### Dereferencing Pointers

Dereferencing a `pointer` means referring to the pointed-to value.
You apply the dereferencing, or indirect value, operator (`*`) to a
`pointer` to `dereference` it. Thus, if `pn` is a `pointer` to `bubble`,
as in the preceding example, then `*pn` is the pointed-to value, or 3.2,
in this case.

Here are some examples:

```cpp
cout << *pn; // print the value of bubble
*pc = 'S'; // place 'S' into the memory location whose address is pc
```

Array notation is a second way to dereference a pointer; for instance, `pn[0]`
is the same as `*pn`. You should never dereference a pointer that has not been
initialized to a proper address.

##### Distinguishing Between a Pointer and the Pointed-to Value

Remember, if pt is a pointer-to-int, `*pt` is not a pointer-to-int; instead, `*pt`
is the complete equivalent to a type int variable. It is `pt` that is the `pointer`.

Here are some examples:

```cpp
int * pt = new int; // assigns an address to the pointer pt
*pt = 5; // stores the value 5 at that address
```

##### Array Names

In most contexts, C++ treats the name of an array as equivalent to the address
of the first element of an array.

```cpp
Here is an example:
int tacos[10]; // now tacos is the same as &tacos[0]
```

One exception is when you use the name of an array with the sizeof operator. In that
case, sizeof returns the size of the entire array, in bytes.

##### Pointer Arithmetic

C++ allows you to add an integer to a pointer.The result of adding one equals
the original address value plus a value equal to the number of bytes in the
pointed-to object. You can also subtract an integer from a pointer to take
the difference between two pointers. The last operation, which yields an integer,
is meaningful only if the two pointers point into the same array (pointing to one
position past the end is allowed, too); it then yields the separation between
the two elements.

Here are some examples:

```cpp
int tacos[10] = {5,2,8,4,1,2,2,4,6,8};
int * pt = tacos; // suppose pf and tacos are the address 3000
pt = pt + 1; // now pt is 3004 if a int is 4 bytes
int *pe = &tacos[9]; // pe is 3036 if an int is 4 bytes
pe = pe - 1; // now pe is 3032, the address of tacos[8]
int diff = pe - pt; // diff is 7, the separation between
// tacos[8] and tacos[1]
```

##### Dynamic Binding and Static Binding for Arrays

You can use an array declaration to create an array with static binding—that is,
an array  whose size is set during the compilation process:

```cpp
int tacos[10]; // static binding, size fixed at compile time
```

You use the new [] operator to create an array with dynamic binding (a dynamic array)
that is, an array that is allocated and whose size can be set during runtime.
You free the memory with delete [] when you are done:

```cpp
int size;
cin >> size;
int * pz = new int [size]; // dynamic binding, size set at run time
...
delete [] pz; // free memory when finished
```

##### Structure pointers

If the data object is a `structure` initialized with `new`, you can use the
pointer dereferencing operator (`->`) to access structure members

```cpp
BOP *stBOP = new BOP[5];

strcpy(stBOP[0].fullname, "Wimp Macho");
strcpy(stBOP[1].fullname, "Wimp Macho");

bop *stBOP = new bop;
strcpy(stBOP->fullname, "Wimp Macho");
```

The `.` operator works instead of the `->` operator because you are accessing
the members of the `bop struct` using an `array` of `structs` (`stBOP`),
not a `pointer` to a `struct`.

When you use the array notation `stBOP[0]`, it refers to the first element of
the array, which is an object of the `bop` `struct`. Therefore, you can use
the `.` operator to access its members directly.

**Use the `.` operator to access members of a `struct` or `class` directly, and**
**use the `->` operator to access members through a pointer to a `struct` or `class`.**

#### Pointers and Strings

With cout and with most C++ expressions, the name of an array of char,
a pointer-tochar, and a quoted string constant are all interpreted as the
address of the first character of a string.

The `strcpy(var_dest, var_copyFrom)` function copies a string from one location to another.
The `strncpy(var_dest, var_copyFrom, int_sizeof_var_copyFrom)` function copies
a string from one location to another with the new size of it.
The `strlen()` function returns the length of a string, not counting the null character
When using these functions, you include the `cstring` or the `string.h` header file.

<details><summary>
     <a href="./programs/ptrstr.cpp"> ptrstr.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/ptrstr.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

```cpp
const char * bird = "wren"; // bird holds address of string

// you can use the pointer bird just as you would use the string "wren", as in this example:
cout << "A concerned " << bird << " speaks\n";

char food[20] = "carrots"; // initialization
strcpy(food, "flan"); // otherwise


ps = animal; // set ps to point to string
...
cout << animal << " at " << (int *) animal << endl;
cout << ps << " at " << (int *) ps << endl;

// It produces the following output:
// fox at 0x0065fd30
// fox at 0x0065fd30
```

#### Using new to Create Dynamic Structures

```cpp
inflatable * ps = new inflatable;
inflatable * ps = new inflatable[10];
```

<img src="./assets/_ch4NewStructure.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">

<details><summary>
     <a href="./programs/newstrct.cpp"> newstrct.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/newstrct.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

##### Using `new` and `delete`

<details><summary>
     <a href="./programs/delete.cpp"> delete.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/delete.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Automatic Storage, Static Storage, and Dynamic Storage

Ordinary variables defined inside a function use automatic storage and are
called automatic variables.
Automatic variables typically are stored on a `stack`.

Static storage is storage that exists throughout the execution of an entire program.
There are two ways to make a variable static.

The new and delete operators provide a more flexible approach than automatic
and static variables.They manage a pool of memory, which C++ refers to as
the `free` store or `heap`.

#### Combinations of Types

<details><summary>
     <a href="./programs/mixtypes.cpp"> mixtypes.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/mixtypes.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Array Alternatives - `vector`

`vector` class does use new and delete to manage memory, but it does so automatically.

```cpp
vector<typeName> vt(n_elem);
```

```cpp
#include <vector>
...
using namespace std;
vector<int> vi; // create a zero-size array of int
int n;
cin >> n;
vector<double> vd(n); // create an array of n doubles
```

We say that vi is an object of type vector<int> and that vd is an object of type vector<double>.

**C++11 `array` Template Class**

Comparing Arrays, Vector Objects, and Array Objects

<details><summary>
     <a href="./programs/choices.cpp"> choices.cpp</a>
    </summary>
<figure>
        <iframe
        src="./programs/choices.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

Pointers and arrays are closely connected. If ar is an array name, then the expression
`ar[i]`is interpreted as `*(ar + i)`, with the array name interpreted as the address
of the first element of the array. Thus, the array name plays the same role as a pointer.

##### Assign safety

```cpp
// a2[-2] = .5; // still allowed (out of range)
a2.at(1) = 2.3; // assign 2.3 to a2[1] 
```

The difference between using bracket notation and the `at()` member function is
that if you use `at()`, an invalid index is caught during runtime and the program,
by default, aborts.

### Chapter 4 Review

<!-- -------------------------------------------- -->

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

### Chapter 4 Programming Exercises

[1.](./exercises/exercise_ch4_1.cpp)
Write a C++ program that requests and displays
information as shown in the following.

Example of output:

```cpp
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
```

Note that the program should be able to accept first names that comprise more than one word.
Also note that the program adjusts the grade downward—that is, up one letter.
Assume that the user requests an A, a B, or a C so that you don’t have to worry
about the gap between a D and an F.

[2.](./exercises/exercise_ch4_2.cpp)
Rewrite Listing 4.4, using the C++ string class instead of char arrays.

[3.](./exercises/exercise_ch4_3.cpp)
Write a program that asks the user to enter his or her first name and then last name,
and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:

```cpp
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
```

[4.](./exercises/exercise_ch4_4.cpp)
Write a program that asks the user to enter his or her first name and then last name,
and that then constructs, stores, and displays a third string consisting of the user’s
last name followed by a comma, a space, and first name. Use string objects and methods
from the string header file. A sample run could look like this:

```cpp
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
```

[5.](./exercises/exercise_ch4_5.cpp)
The CandyBar structure contains three members. The first member holds the brand name of a candy bar.
The second member holds the weight (which may have a fractional part) of the candy bar,
and the third member holds the number of calories (an integer value) in the candy bar.
Write a program that declares such a structure and creates a CandyBar variable called snack,
initializing its members to "Mocha Munch", 2.3, and 350, respectively.The initialization should
be part of the declaration for snack.
Finally, the program should display the contents of the snack variable.

[6.](./exercises/exercise_ch4_6.cpp)
The CandyBar structure contains three members,
as described in Programming Exercise 5.Write a program that creates an array of
three CandyBar structures, initializes them to values of your choice, and then
displays the contents of each structure.

[7.](./exercises/exercise_ch4_7.cpp)
William Wingate runs a pizza-analysis service.
For each pizza, he needs to record the following information:

- The name of the pizza company, which can consist of more than one word
- The diameter of the pizza
- The weight of the pizza

Devise a structure that can hold this information and write a program that uses
a structure variable of that type.The program should ask the user to enter
each of the preceding items of information, and then the program should display
that information. Use cin (or its methods) and cout.

[8.](./exercises/exercise_ch4_8.cpp)
Do Programming Exercise 7 but use new to allocate a structure instead of
declaring a structure variable. Also have the program request the pizza
diameter before it requests the pizza company name.

[9.](./exercises/exercise_ch4_9.cpp)
Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.

[10.](./exercises/exercise_ch4_10.cpp)
Write a program that requests the user to enter three times for the 40-yd dash
(or 40-meter, if you prefer) and then displays the times and the average.
Use an array object to hold the data. (Use a built-in array if array is not available.)

## Chapter 5: Loops and Relational Expressions

<details><summary>
        List of what you will learn
    </summary>

```cpp
 - The for loop 
 - Expressions and statements 
 - The increment and decrement operators: ++ and -- 
 - Combination assignment operators 
 - Compound statements (blocks) 
 - The comma operator 
 - Relational operators: >, >=, ==, <=, <, and != 
 - The while loop 
 - The typedef facility 
 - The do while loop 
 - The get() character input method 
 - The end-of-file condition 
 - Nested loops and two-dimensional arrays 
```

</details> <br>

### Loops, Expressions and Statements

You can’t assign a for loop to a variable. In the following example,
the for loop is not an expression, so it has no value and you can’t assign it:

```cpp
int fx = for (i = 0; i< 4; i++)
cout >> i; // not possible

for (expression; expression; expression)
    statement
```

<details><summary>
     <a href="./programs/formore.cpp">
     formore.cpp - factorials in cpp </a>
    </summary>
<figure>
        <iframe
        src="./programs/formore.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/forstr1.cpp">
     forstr1.cpp - (string) letters in reverse order </a>
    </summary>
<figure>
        <iframe
        src="./programs/forstr1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

Consider this statement:

```cpp
y = (4 + x++) + (6 + x++);
```

The expression `4 + x++` is not a full expression, so C++ does not guarantee
that `x` will be incremented immediately after the subexpression `4 + x++` is evaluated.
Here the full expression is the entire assignment statement, and the semicolon marks
the sequence point, so all that C++ guarantees is that x will have been incremented
twice by the time the program moves to the following statement. C++ does not specify
whether x is incremented after each subexpression is evaluated or only after all
the expressions have been evaluated, which is why you should avoid statements
of this kind.

### Prefix & Postfix

postfix version works by first stashing a copy of the value, incrementing the
value, and then returning the stashed copy.Thus, for classes, the prefix version
is a bit more efficient than the postfix version.

In short, for built-in types, it most likely makes no difference which form you use.
For user-defined types having user-defined increment and decrement operators,
the prefix form is more efficient.

The right-to-left association rule for prefix operators implies that `*++pt`
means first apply `++` to `pt` (because the `++` is to the right of the `*`)
and then apply `*` to the new value of pt:

```cpp
double x = *++pt; // increment pointer, take the value; i.e., arr[2], or 23.4
++*pt; // increment the pointed to value; i.e., change 23.4 to 24.4
(*pt)++; // increment pointed-to value
x = *pt++; // dereference original location, then increment pointer
```

**Incrementing and decrementing pointers follow pointer arithmetic rules.**
**Thus, if pt points to the first member of an array, ++pt changes pt so**
**that it points to the second member.**

---

#### Assignment Operators

```cpp
+= Assigns L + R to L
-= Assigns L - R to L
*= Assigns L * R to L
/= Assigns L / R to L
%= Assigns L % R to L
```

#### Relational Operators

```cpp
<< Is less than
<= Is less than or equal to
== Is equal to
> Is greater than
>= Is greater than or equal to
!= Is not equal to
```

### Compound Statements, or Blocks, Syntax Tricks

<details><summary>
     <a href="./programs/block.cpp">
     block.cpp - Example of local code block </a>
    </summary>
<figure>
        <iframe
        src="./programs/block.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

```cpp
++j, --i // two expressions count as one for syntax purposes
int i, j; // comma is a separator here, not an operator
```

<details><summary>
     <a href="./programs/forstr2.cpp">
     forstr2.cpp - Example of comma separator trick </a>
    </summary>
<figure>
        <iframe
        src="./programs/forstr2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

The relational operators have a lower precedence than the arithmetic operators.That
means this expression:
`x + 3 > y - 2 // Expression 1`
corresponds to this:
`(x + 3) > (y - 2) // Expression 2`
and not to the following:
`x + (3 > y) - 2 // Expression 3`

```cpp
strcmp(word, "mate") != 0 // strings are not the same
```

<details><summary>
     <a href="./programs/compstr1.cpp">
     compstr1.cpp - Example comparison c-string in search for word </a>
    </summary>
<figure>
        <iframe
        src="./programs/compstr1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/compstr2.cpp">
     compstr2.cpp - Example comparison string class in search for word </a>
    </summary>
<figure>
        <iframe
        src="./programs/compstr2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### When use other loop forms

<details><summary>
     <a href="./programs/while.cpp">
     while.cpp - while for verticalized and ASCIIized string class input </a>
    </summary>
<figure>
        <iframe
        src="./programs/while.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

You can rewrite the while line this way:

```cpp
while (name[i])
```

because when `name[i]` is an ordinary character, its value is the character code,
which is nonzero, or true. But when name[i] is the null character,
its character-code value is 0, or false.This notation is more concise
(and more commonly used)

### Time-Delay Loop

ctime header file (time.h on less current implementations) provides solution:

- First, it defines a symbolic constant, CLOCKS_PER_SEC, that equals the number
of system time units per second. (So dividing the system time by this value yields seconds)
- Or you can multiply seconds by CLOCKS_PER_SEC to get time in the system units.
- ctime establishes clock_t as an alias for the clock() return type.
(See the sidebar “Type Aliases,” later in this chapter.) This means you can
declare a variable as type clock_t, and the compiler converts it to long or
unsigned int or whatever is the proper type for your system.

<details><summary>
     <a href="./programs/waiting.cpp">
     waiting.cpp - using clock() in a time-delay loop </a>
    </summary>
<figure>
        <iframe
        src="./programs/waiting.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     Type Aliases
    </summary>

C++ has two ways to establish a new name as an alias for a type.
One is to use the preprocessor:

```cpp
#define BYTE char // preprocessor replaces BYTE with char
```

The preprocessor then replaces all occurrences of BYTE with char when you
compile a program, thus making `BYTE` an alias for `char`.
The second method is to use the C++ (and C) keyword `typedef` to create an alias.
For example, to make byte an alias for `char`, you use this:

```cpp
typedef char byte; // makes byte an alias for char
typedef typeName aliasName; // general form
```

In other words, if you want `aliasName` to be an alias for a particular type,
you declare `aliasName` as if it were a variable of that type and then prefix
the declaration with the `typedef` keyword. For example, to make `byte_pointer`
an alias for pointer-to-char, you could declare `byte_pointer` as a pointer-to-char
and then stick `typedef` in front:

```cpp
typedef char * byte_pointer; // pointer to char type
```

You could try something similar with #define, but that wouldn’t work if you
declared a list of variables. For example, consider the following

```cpp
#define FLOAT_POINTER float *
FLOAT_POINTER pa, pb;

//Preprocessor substitution converts the declaration to this:
float * pa, pb; // pa a pointer to float, pb just a float
```

The `typedef` approach doesn’t have that problem. Its ability to handle more complex type
aliases makes using `typedef` a better choice than #define—and sometimes it is the
only choice.

Notice that `typedef` doesn’t create a new type. It just creates a new name for an old type.
If you make `word` an alias for `int`, `cout` treats a type `word` value as the `int` it really is.
</details><br>

<details><summary>
     <a href="./programs/dowhile.cpp">
     dowhile.cpp - for user input in loop (instead strange for loops) </a>
    </summary>
<figure>
        <iframe
        src="./programs/dowhile.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### The Range-Based `for` Loop (C++11)

```cpp
double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
for (double x : prices)
    cout << x << std::endl; // Here x initially represents the first member of the prices array
```

To modify array values, you need a different syntax for the loop variable:

```cpp
for (double &x : prices)
x = x * 0.80; //20% off sale
```

It can be used with initialization lists

```cpp
for (int x : {3, 5, 2, 8, 6})
cout << x << " ";
cout << ‘\n’;
```

### Loops and Text Input

<details><summary>
     <a href="./programs/textin1.cpp">
     textin1.cpp - reading chars with a while loop, enter # to quit
     - cin() PROBLEMS </a>
    </summary>
<figure>
        <iframe
        src="./programs/textin1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/textin2.cpp">
     textin2.cpp - reading chars with a while loop, enter # to quit
     - cin.get(char) SOLUTION </a>
    </summary>
<figure>
        <iframe
        src="./programs/textin2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### End-of-File Condition and Read data from keyboard

The program to take input from the `fishtale` file instead of from the
**keyboard**. The `<` symbol is the redirection operator for both Unix
and the Windows Command Prompt mode.

```sh
gofish <fishtale
```

When `cin` detects the `EOF`, it sets two bits (the `eofbit` and the `failbit`) to 1.
You can use a member function named `eof()` to see whether the `eofbit` has been set;
the call `cin.eof()` returns the bool value true if the `EOF` has been detected and false otherwise

Some systems do not support simulated EOF from the keyboard.
Other systems support it imperfectly. If you have been using cin.get() to
freeze the screen until you can read it, that won’t work here because detecting
the EOF turns off further attempts to read input.

<details><summary>
     <a href="./programs/textin3.cpp">
     textin3.cpp - reading chars till EOF (keyboard break) </a>
    </summary>
<figure>
        <iframe
        src="./programs/textin3.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

The following is the essential design of a loop intended to read text
a character at a time until EOF:

```cpp
cin.get(ch); // attempt to read a char
while (cin.fail() == false) // test for EOF
{
    ... // do stuff
    cin.get(ch); // attempt to read another char
}

// you can use instead:
while (!cin.fail()) // while input has not failed  (`!` - 'not true' operator)

// This is a bit more general than using !cin.fail() or !cin.eof() because it detects
// other possible causes of failure, such as disk failure
while (cin) // while input is successful
```

`cin.get(ch)` can condense loop above:
Here, `cin.get(char)` is called once in the test condition instead of twice—once
before the loop and once at the end of the loop.

```cpp
while (cin.get(ch)) // while input is successful
{
... // do stuff
}
```

The cin.get() member function with no arguments returns the next character from
the input.That is, you use it in this way: `ch = cin.get();`
(Recall that cin.get(ch) returns an object, not the character read.)
Similarly, you can use the `cout.put(ch)`

<details><summary>
     <a href="./programs/textin4.cpp">
     textin4.cpp - incorporates the cin.get() and codense code </a>
    </summary>
<figure>
        <iframe
        src="./programs/textin4.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

| Property                                  | `cin.get(ch)`                                            | `ch=cin.get()`                              |
|-------------------------------------------|----------------------------------------------------------|---------------------------------------------|
| Method for conveying input character      | Assign to argument ch                                    | Use function return value to assign to `ch` |
| Function return value for character input | A class `istream` object (true after `bool` conversion)  | Code for character as type `int` value      |
| Function return value at EOF              | A class `istream` object (false after `bool` conversion) | EOF                                         |

### Nested Loops and Two-Dimensional Arrays

 Initialize

```cpp
int maxtemps[4][5] = // 2-D array
{
{96, 100, 87, 101, 105}, // values for maxtemps[0]
{96, 98, 91, 107, 104}, // values for maxtemps[1]
{97, 101, 93, 108, 107}, // values for maxtemps[2]
{98, 103, 95, 109, 108} // values for maxtemps[3]
};
```

<details><summary>
     <a href="./programs/textin4.cpp"> nested.cpp - nested loops and 2-D array </a>
    </summary>
<figure>
        <iframe
        src="./programs/textin4.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Chapter 5 Review

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
<details><summary>
7. How do you make a loop body include more than one statement?
    </summary>
//add curly braces {} <br>

You enclose the statements within paired braces to form a single compound statement,
or block.
</details>

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
<details><summary>
9. How does cin >> ch differ from cin.get(ch) and ch=cin.get() in how it views
input?
    </summary>
//cin>>ch will omit spaces, cin.get(ch) will return bool true, false if EOF,
ch=cin.get() will assign int value and EOF if EOF <br><br>

The `cin >> ch` form skips over spaces, newlines, and tabs when it encounters them.
The other two forms read those characters
</details>

### Chapter 5 Programming Exercises

[1.](./exercises/exercise_ch5_1.cpp)
Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.

[2.](./exercises/exercise_ch5_2.cpp)
Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!

[3.](./exercises/exercise_ch5_3.cpp)
Write a program that asks the user to type in numbers. After each entry, the program
should report the cumulative sum of the entries to date. The program should
terminate when the user enters 0.

[4.](./exercises/exercise_ch5_4.cpp)
Daphne invests `$100 at 10%` simple interest.That is, every year, the investment earns
`10%` of the original investment, or `$10` each and every year:

```sh
interest = 0.10 × original balance
```

At the same time, Cleo invests `$100` at `5%` compound interest.That is, interest is `5%`
of the current balance, including previous additions of interest:

```sh
interest = 0.05 × current balance
```

Cleo earns `5% of $100` the first year, giving her `$105`.The next year she earns `5%` of
`$105`, or `$5.25`, and so on. Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.

[5.](./exercises/exercise_ch5_5.cpp)
You sell the book C++ for Fools. Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.

[6.](./exercises/exercise_ch5_6.cpp)
Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.

[7.](./exercises/exercise_ch5_7.cpp)
Design a structure called car that holds the following information about an automobile:
its make, as a string in a character array or in a string object, and the year
it was built, as an integer.Write a program that asks the user how many cars to catalog.
The program should then use new to create a dynamic array of that many car
structures. Next, it should prompt the user to input the make (which might consist
of more than one word) and year information for each structure. Note that this
requires some care because it alternates reading strings with numeric data (see
Chapter 4). Finally, it should display the contents of each structure.A sample run
should look something like the following:

```sh
How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser
```

[8.](./exercises/exercise_ch5_8.cpp)
Write a program that uses an array of char and a loop to read one word at a time
until the word done is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:

```sh
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
```

You should include the cstring header file and use the strcmp() function to
make the comparison test.

[9.](./exercises/exercise_ch5_9.cpp)
Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.

[10.](./exercises/exercise_ch5_10.cpp)
Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:

```sh
Enter number of rows: 5
....*
...**
..***
.****
*****
```

## Chapter 6: Branching Statements and Logical Operators

<details><summary>
        List of what you will learn
    </summary>

```cpp
 - The `if` statement
 - The `if else` statement
 - Logical operators: `&&`, `||`, and `!`
 - The `cctype` library of character functions
 - The conditional operator: `?:`
 - The switch statement
 - The continue and break statements
 - Number-reading loops
 - Basic file input/output
```

</details>

### Statements and logical operators

<details><summary>
     <a href="./programs/if.cpp">
     if.cpp - (count spaces in while) simple use of if statement</a>
    </summary>
<figure>
        <iframe
        src="./programs/if.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/ifelse.cpp">
     ifelse.cpp - (simplest cipher from keyboard)
     simple use of if else statement</a>
    </summary>
<figure>
        <iframe
        src="./programs/ifelse.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/ifelseif.cpp">
     ifelseif.cpp -  simple use of if elseif else statement for guess game</a>
    </summary>
<figure>
        <iframe
        src="./programs/ifelseif.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Conditional Operators and Bug Prevention

Many programmers reverse the more intuitive expression `variable == value` to
`value == variable` in order to catch errors where the equality is mistyped as
an assignment operator. For example, entering the conditional as follows is
valid and will work properly: `if (3 == myNumber)`
However, if you happen to mistype as follows, the compiler will generate an
error message because it believes you are attempting to assign a value to a
literal (3 always equals 3 and can’t be assigned another value):
`if (3 = myNumber)`
Suppose you made a similar mistake, using the former notation:
`if (myNumber = 3)`
The compiler would simply assign the value 3 to myNumber, and the block within
the if would run—a very common error, and a difficult error to find.
(However, many compilers will issue a warning, which you would be wise to heed.)
As a general rule, writing code that allows the compiler to find errors is much
easier than repairing the causes of mysterious faulty results.

### Logical expressions

`||` - Logical OR Operator is true, when one or both of two conditions satisfy a requirement.
`&&` - Logical AND Operator is true only if both of the original expressions are true.
`!` - Logical NOT Operator negates, or reverses the truth value of, the expression that follows it.

logical OR and logical AND operators have a lower precedence than relational operators.
This means that an expression such as this: `x > 5 && x < 10` is interpreted this way:
`(x > 5) && (x < 10)`

The logical AND operator has a higher precedence than the logical OR, Thus this
expression: `age > 30 && age < 45 || weight > 300`, means the following:
`(age > 30 && age < 45) || weight > 300`

C++ guarantees that when a program evaluates a logical expression, it evaluates
it from left to right and stops evaluation as soon as it knows what the answer is.

<details><summary>
     <a href="./programs/or.cpp"> or.cpp - simple use of the logical OR operator</a>
    </summary>
<figure>
        <iframe
        src="./programs/or.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/and.cpp"> and.cpp - simple use of the logical AND operator</a>
    </summary>
<figure>
        <iframe
        src="./programs/and.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/more_and.cpp"> more_and.cpp - range using AND operator</a>
    </summary>
<figure>
        <iframe
        src="./programs/more_and.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/not.cpp"> not.cpp - simple use of NOT operator</a>
    </summary>
<figure>
        <iframe
        src="./programs/not.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Range Tests

Note that each part of a range test should use the AND operator to join
two complete relational expressions:
`if (age > 17 && age < 35) // OK`
Don’t borrow from mathematics and use the following notation:
`if (17 < age < 35) // Don't do this!`
If you make this mistake, the compiler won’t catch it as an error because
it is still valid C++ syntax. The `<` operator associates from left to right,
so the previous expression means the following:
`if ( (17 < age) < 35)`
But `17 < age` is either `true`, or `1`, or else `false`, or `0`. In either case,
the expression `17 < age` is less than 35, so the entire test is always true!

### `cctype` library of Character Functions

simplify such tasks as determining whether a character is an uppercase letter
or a digit or punctuation

Using these functions is more convenient than using the AND and OR operators.
For example, here’s how you might use AND and OR to test whether a character
`ch` is an alphabetic character:

```cpp
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
```

Is equivalent to:

```cpp
if (isalpha(ch))
```

In program `cctypes.cpp` below
`isalpha()`,  tests for alphabetic characters;
`isdigits()`,  tests for digit characters, such as 3;
`isspace()`, tests for whitespace characters, such as newlines, spaces, and tabs;
`ispunct()`,  tests for punctuation characters

<details><summary>
     <a href="./programs/cctypes.cpp">
     cctypes.cpp - demonstrates some functions of the ctype.h library</a>
    </summary>
<figure>
        <iframe
        src="./programs/cctypes.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

Function Name

- `isalnum()` - returns true if the argument is alphanumeric (that is, a letter or a digit).
- `isalpha()` - returns true if the argument is alphabetic.
- `isblank()` - returns true if the argument is a space or a horizontal tab.
- `iscntrl()` - returns true if the argument is a control character.
- `isdigit()` - returns true if the argument is a decimal digit (0–9).
- `isgraph()` - returns true if the argument is any printing character other than a space.
- `islower()` - returns true if the argument is a lowercase letter.
- `isprint()` - returns true if the argument is any printing character, including a space.
- `ispunct()` - returns true if the argument is a punctuation character.
- `isspace()` - returns true if the argument is a standard whitespace character
(that is, a space, formfeed, newline, carriage return, horizontal tab, vertical tab).
- `isupper()` - returns true if the argument is an uppercase letter.
- `isxdigit()` - returns true if the argument is a hexadecimal digit character
(that is, 0–9, a–f, or A–F).
- `tolower()` - If the argument is an uppercase character, tolower() returns
the lowercase version of that character; otherwise, it returns the argument unaltered.
- `toupper()` - If the argument is a lowercase character, toupper() returns the
uppercase version of that character; otherwise, it returns the argument unaltered.

### The `?:` Operator

`expression1 ? expression2 : expression3`
If `expression1` is `true`, then the value of the whole conditional expression
is the value of `expression2`. Otherwise, the value of the whole expression
is the value of `expression3`.

```cpp
5 > 3 ? 10 : 12 // 5 > 3 is true, so expression value is 10
3 == 9 ? 25 : 18 // 3 == 9 is false, so expression value is 18
```

<details><summary>
     <a href="./programs/condit.cpp"> condit.cpp - example of ?: use </a>
    </summary>
<figure>
        <iframe
        src="./programs/condit.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### The `switch` Statement

<img src="./assets/_ch6SwitchCase.png" alt="Image description"
style="display: block; margin: auto; width: 50%; height: auto; border-radius: 8px;">
<br>

<details><summary>
     <a href="./programs/switch.cpp">
     switch.cpp - menu program, example of switch use </a>
    </summary>
<figure>
        <iframe
        src="./programs/switch.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/enum.cpp"> enum.cpp - menu program with enum labels </a>
    </summary>
<figure>
        <iframe
        src="./programs/enum.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### The break and continue Statements

`break` statement causes program execution to pass to the next statement
following the switch or the loop
`continue` statement is used in loops and causes a program to skip the
rest of the body of the loop

<details><summary>
     <a href="./programs/jump.cpp"> jump.cpp - using continue and break </a>
    </summary>
<figure>
        <iframe
        src="./programs/jump.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/cinfish.cpp">
     cinfish.cpp - to terminate input before filling the array example </a>
    </summary>
<figure>
        <iframe
        src="./programs/cinfish.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/cingolf.cpp">
     cingolf.cpp - to terminate input before filling the array example and reset
     cin to accept new input. </a>
    </summary>
<figure>
        <iframe
        src="./programs/cingolf.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### File Input/Output

#### Write to file

You have to declare your own `ofstream` object, choosing a name for it and
associating it with a file.

Declaration:

```cpp
ofstream outFile; // outFile an ofstream object
ofstream fout; // fout an ofstream object
```

Association with file (`open()` method requires a C-style string as its argument):

```cpp
outFile.open("fish.txt"); // outFile used to write to the fish.txt file
char filename[50];
cin >> filename; // user specifies a name
fout.open(filename); // fout used to read specified file
```

Use created object (after you’ve declared an ofstream object and associated
it with a file, you use it exactly as you would use cout):

```cpp
double wt = 125.8;
outFile << wt; // write a number to fish.txt
char line[81] = "Objects are closer than they appear.";
fout << line << endl; // write a line of text
```

Main steps for using file output:

1. Include the fstream header file.
2. Create an ofstream object.
3. Associate the ofstream object with a file.
4. Use the ofstream object in the same manner you would use cout.

<details><summary>
     <a href="./programs/outfile.cpp"> outfile.cpp - write data to file. </a>
    </summary>
<figure>
        <iframe
        src="./programs/outfile.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

#### Read from file

You have to declare your own `ifstream` object, choosing a name for it and
associating it with a file

Declaration:

```cpp
ifstream inFile; // inFile an ifstream object
ifstream fin; // fin an ifstream object
```

Association with file (open() method requires a C-style string as its argument):

```cpp
inFile.open("bowling.txt"); // inFile used to read bowling.txt file
char filename[50];
cin >> filename; // user specifies a name
fin.open(filename); // fin used to read specified file
```

Use created object:

```cpp
double wt;
inFile >> wt; // read a number from bowling.txt
char line[81];
fin.getline(line, 81); // read a line of text
```

Check for nonexisting file (`is_open()` method)

```cpp
inFile.open("bowling.txt");
if (!inFile.is_open()){
    exit(EXIT_FAILURE);
}
```

For program below - write `datsumafile.txt`, that should be local,
or `.\programs\datsumafile.txt` if compiled in `$PATH$`
<details><summary>
     <a href="./programs/sumafile.cpp">
     sumafile.cpp - reading double data from file. </a>
    </summary>
<figure>
        <iframe
        src="./programs/sumafile.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/datsumafile.txt"> datsumafile.txt - data for program. </a>
    </summary>
<figure>
        <iframe
        src="./programs/sumafile.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

```cpp
// standard file-reading loop design
inFile >> value; // get first value
while (inFile.good()) // while input good and not at EOF
{
    // loop body goes here
    inFile >> value; // get next value
}
```

`inFile`, when placed in a context in which a `bool` value is expected,
evaluates to `inFile.good()` — that is, to `true` or `false`, thus you
can make above code more concise:

```cpp
// abbreviated file-reading loop design
// omit pre-loop input
while (inFile >> value) // read and test for success
{
    // loop body goes here
    // omit end-of-loop input
}
```

### Chapter 6 Review

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
<details><summary>
5. In English, the statement “I will not not speak” means the same as
“I will speak.” In C++, is !!x the same as x?
    </summary>

// No. Return from `!!x` is boolean/int, while `x` have defined type by programmer

Not necessarily. For example, if `x` is 10, then `!x` is 0 and `!!x` is 1.
However, if `x` is a `bool` variable, then `!!x` is `x`.
</details>

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

<!-- -------------------------------------------- -->
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

### Chapter 6 Programming Exercises

[1.](./exercises/exercise_ch6_1.cpp)
Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits,
converting each uppercase character to lowercase, and vice versa. (Don’t forget the `cctype` family.)

[2.](./exercises/exercise_ch6_2.cpp)
Write a program that reads up to 10 donation values into an array of double.
(Or, if you prefer, use an array template object.) The program should terminate
input on non-numeric input. It should report the average of the numbers and also
report how many numbers in the array are larger than the average.

[3.](./exercises/exercise_ch6_3.cpp)
Write a precursor to a menu-driven program.The program should display a menu
offering four choices, each labeled with a letter. If the user responds with a
letter other than one of the four valid choices, the program should prompt the
user to enter a valid response until the user complies.Then the program should
use a switch to select a simple action based on the user’s selection.
A program run could look something like this:

```sh
Please enter one of the following choices:
c) carnivore    p) pianist
t) tree         g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
```

[4.](./exercises/exercise_ch6_4.cpp)
When you join the Benevolent Order of Programmers, you can be known at BOP
meetings by your real name, your job title, or your secret BOP name.
Write a program that can list members by real name, by job title, by secret name,
or by a member’s preference. Base the program on the following structure:

```cpp
// Benevolent Order of Programmers name structure
struct bop
{
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};
```

In the program, create a small array of such structures and initialize it to suitable values.
Have the program run a loop that lets the user select from different alternatives:

```sh
a. display by name      b. display by title
c. display by bopname   d. display by preference
q. quit
```

Note that “display by preference” does not mean display the preference member;
it means display the member corresponding to the preference number.
For instance, if preference is 1, choice d would display the programmer’s
job title.A sample run may look something like the following:

```sh
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
```

[5.](./exercises/exercise_ch6_5.cpp)
The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following income tax code:

```sh
    First 5,000 tvarps: 0% tax
    Next 10,000 tvarps: 10% tax
    Next 20,000 tvarps: 15% tax
    Tvarps after 35,000: 20% tax
```

For example, someone earning 38,000 tvarps would owe
5,000 × 0.00 + 10,000 × 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.
Write a program that uses a loop to solicit incomes and to report tax owed.
The loop should terminate when the user enters a negative number or non-numeric input.

[6.](./exercises/exercise_ch6_6.cpp)

Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter
the number of contributors and then solicit the user to enter the name and
contribution of each contributor.The information should be stored in a dynamically
allocated array of structures. Each structure should have two members:
a character array (or else a `string` object) to store the name and a `double`
member to hold the amount of the contribution.After reading all the data,
the program should display the names and amounts donated for all donors
who contributed $10,000 or more.This list should be headed by the label
Grand Patrons.After that, the program should list the remaining donors.
That list should be headed Patrons. If there are no donors in one of the categories,
the program should print the word “none.”Aside from displaying two categories,
the program need do no sorting.

[7.](./exercises/exercise_ch6_7.cpp)
Write a program that reads input a word at a time until a lone q is entered.
The program should then report the number of words that began with vowels,
the number that began with consonants, and the number that fit neither of
those categories. One approach is to use `isalpha()` to discriminate between
words beginning with letters and those that don’t and then use an `if` or `switch`
statement to further identify those passing the `isalpha()` test that begin with
vowels.A sample run might look like this:

```sh
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
```

[8.](./exercises/exercise_ch6_8.cpp)

Write a program that opens a text file, reads it character-by-character to the
end of the file, and reports the number of characters in the file.

[9.](./exercises/exercise_ch6_9.cpp)
Do Programming Exercise 6 but modify it to get information from a file.The first
item in the file should be the number of contributors, and the rest of the file
should consist of pairs of lines, with the first line of each pair being a
contributor’s name and the second line being a contribution.
That is, the file should look like this:

```sh
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
```

## Chapter 7: C++’s Programming Modules

<details><summary>
        List of what you will learn
</summary>

```cpp
- Function basics
- Function prototypes
- Passing function arguments by value
- Designing functions to process arrays
- Using const pointer parameters
- Designing functions to process text strings
- Designing functions to process structures
- Designing functions to process objects of the string class
- Functions that call themselves (recursion)
- Pointers to functions
```

</details> <br>

### Functions

You can group functions into two categories: those that don’t have return values and those that do.

```cpp
void functionName(parameterList)
{
    statement(s)
    return; // optional
}
```

<img src="./assets/_ch7FunctionReturn.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

### Prototyping

Prototype describes the function interface to the compiler.That is, it tells the compiler what type of return value,
if any, the function has, and it tells the compiler the number and type of function arguments.

A function prototype is a statement, so it must have a terminating semicolon. The simplest way to get a prototype
is to copy the function header from the function definition and add a semicolon.

<details><summary>
     <a href="./programs/protos.cpp">
     protos.cpp - Example of using prototypes and function calls. </a>
    </summary>
<figure>
        <iframe
        src="./programs/protos.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
C++ Versus ANSI C Prototyping, ellypsis (...)
</summary>

ANSI C borrowed prototyping from C++, but the two languages do have some differences. The most important is that ANSI C,
to preserve compatibility with classic C, made prototyping optional, whereas C++ makes prototyping mandatory.
For example, consider the following function declaration:

```cpp
void say_hi();
```

In C++, leaving the parentheses empty is the same as using the keyword void within the
parentheses. It means the function has no arguments. In ANSI C, leaving the parentheses
empty means that you are declining to state what the arguments are. That is, it means
you’re forgoing prototyping the argument list. The C++ equivalent for not identifying the argument
list is to use an ellipsis:

```cpp
void say_bye(...); // C++ abdication of responsibility
```

Normally this use of an ellipsis is needed only for interfacing with C functions having a variable
number of arguments, such as printf().

</details><br>

They greatly reduce the chances of program errors. In particular, prototypes ensure the following:

- The compiler correctly handles the function return value.
- The compiler checks that you use the correct number of function arguments.
- The compiler checks that you use the correct type of arguments.
If you don’t, it converts the arguments to the correct type, if possible.

Prototyping takes place during compile time and is termed `static type checking`. `Static type checking`, as you’ve
just seen, catches many errors that are much more difficult to catch during runtime.

### Passing function arguments

<img src="./assets/_ch7PassByValue.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

A variable that’s used to receive passed values is called a `formal argument` or `formal parameter`.
The value passed to the function is called the `actual argument` or `actual parameter`.

Variables, including parameters, declared within a function are private to the function.
When a function is called, the computer allocates the memory needed for these variables.
When the function terminates, the computer frees the memory that was used for those variables.

Prototype examples with many arguments:

```cpp
void fifi(float a, float b) // declare each variable separately
void fufu(float a, b) // NOT acceptable

void n_chars(char c, int n); // prototype, style 1
void n_chars(char, int); // prototype, style 2
```

<details><summary>
     <a href="./programs/twoarg.cpp">
     twoarg.cpp - a function with 2 arguments. </a>
    </summary>
<figure>
        <iframe
        src="./programs/twoarg.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/lotto.cpp">
     lotto.cpp - calculate probability of winning. </a>
    </summary>
<figure>
        <iframe
        src="./programs/lotto.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Functions and Arrays

```cpp
int sum_arr(int arr[], int n) // arr = array name, n = size
```

`arr` is not really an **array**; it’s a **pointer**!
The good news is that you can write the rest of `the` function just as if arr were an array.

The design decision to use array addresses as arguments saves the time and memory needed to copy an entire array.

<details><summary>
     <a href="./programs/arrfun1.cpp">
     arrfun1.cpp - functions with an array argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arrfun1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/arrfun2.cpp">
     arrfun2.cpp - functions with an array argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arrfun2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/arrfun3.cpp">
     arrfun3.cpp - functions with an array argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arrfun3.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/arrfun4.cpp">
     arrfun4.cpp - functions with an array range. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arrfun4.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

C++ interprets an array name as the address of its first element:

```cpp
cookies == &cookies[0] // array name is address of first element
```

This suggests that the correct function header should be this:

```cpp
int sum_arr(int * arr, int n) // arr = array name, n = size

arr[i] == *(ar + i) // values in two notations
&arr[i] == ar + i // addresses in two notations

// You can also lie about where the array starts when calling:
sum = sum_arr(cookies + 4, 4);
sum = sum_arr(cookies, cookies + 3); // first 3 elements - array ranges

// Protecting array with const to keep a function from accidentally altering the contents of
an array argument,
void show_array(const double ar[], int n);
```

Remember that adding one to a pointer, including an array name, actually adds a value equal to the size, in bytes, of the
type to which the pointer points

<img src="./assets/_ch7PassArray.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

### Pointers and `const`

Pointers of variables can't be addressed to const values.

```cpp
int age = 39;
const int * pt = &age;

*pt += 1; // INVALID because pt points to a const int
cin >> *pt; // INVALID for the same reason

*pt = 20; // INVALID because pt points to a const int
age = 20; // VALID because age is not declared to be const

const float g_earth = 9.80;
const float * pe = &g_earth; // VALID

const float g_moon = 1.63;
float * pm = &g_moon; // INVALID
```

<details><summary>
Using const When You Can
    </summary>

There are two strong reasons to declare pointer arguments as pointers to constant data:

- It protects you against programming errors that inadvertently alter data.
- Using `const` allows a function to process both `const` and non-`const` actual arguments,
whereas a function that omits `const` in the prototype can accept only non-`const` data.

</details><br>

<img src="./assets/_ch7PointersConst.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

### Functions and Two-Dimensional Arrays

```cpp
int data[3][4] = {{1,2,3,4}, {9,8,7,6}, {2,4,6,8}};
int total = sum(data, 3);

// data is pointer-to-array-of-four-int,
// so an appropriate prototype would be this:
int sum(int (*ar2)[4], int size);

// The simplest way is to use brackets twice, as in ar2[r][c].
total += ar2[r][c];
// But it is possible, if ungainly, to use the * operator twice
ar2[r][c] == *(*(ar2 + r) + c) // same thing

// To understand this, you can work out the
// meaning of the subexpressions from the inside out:
ar2 // pointer to first row of an array of 4 int
ar2 + r // pointer to row r (an array of 4 int)
*(ar2 + r) // row r (an array of 4 int, hence the name of an array,
// thus a pointer to the first int in the row, i.e., ar2[r]
*(ar2 +r) + c // pointer int number c in row r, i.e., ar2[r] + c
*(*(ar2 + r) + c // value of int number c in row r, i.e. ar2[r][c]
```

### Functions and C-Style Strings

You have three choices for representing a string:

- An array of char
- A quoted string constant (also called a string literal)
- A pointer-to-char set to the address of a string

```cpp
char ghost[15] = "galloping";
char * str = "galumphing";
int n1 = strlen(ghost); // ghost is &ghost[0]
int n2 = strlen(str); // pointer to char
int n3 = strlen("gamboling"); // address of string
```

<details><summary>
     <a href="./programs/strgfun.cpp">
     strgfun.cpp - functions with a string argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strgfun.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/strgback.cpp">
     strgback.cpp - a function that returns a pointer to char. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strgback.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Functions and Structures

Defining the structure is simple:

```cpp
struct travel_time
{
    int hours;
    int mins;
};

// Next, consider the prototype for a sum() function that
// returns the sum of two such structures
travel_time sum(travel_time t1, travel_time t2);
```

<details><summary>
     <a href="./programs/travel.cpp">
     travel.cpp - using structures with functions. </a>
    </summary>
<figure>
        <iframe
        src="./programs/travel.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/strctfun.cpp">
     strctfun.cpp - functions with a structure argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strctfun.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Passing Structure Addresses

Suppose you want to save time and space by passing the address of a structure instead of passing the entire structure.

You need to make three changes:

- When calling the function, pass it the address of the structure (`&pplace`) rather than the structure itself (`pplace`).
- Declare the formal parameter to be a pointer-to-polar—that is, type polar `*`. Because the function shouldn’t modify the
structure, use the `const` modifier.
- Because the formal parameter is a pointer instead of a structure, use the indirect membership operator (`->`) rather than
the membership operator (dot).

```cpp
void show_polar (const polar * pda)
{
    cout << "distance = " << pda->distance;
}
```

<details><summary>
     <a href="./programs/strctptr.cpp">
     strctptr.cpp - functions with a structure argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strctptr.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Functions and string Class Objects

`string` class object is more closely related to a structure than to an array.

- you can assign a structure to another structure and an object to another object
- You can pass a structure as a complete entity to a function, and you can pass an object as a complete entity.
- you can declare a one-dimensional array of `string`
objects instead of a two-dimensional array of `char`.

<details><summary>
     <a href="./programs/topfive.cpp">
     topfive.cpp - handling an array of string objects. </a>
    </summary>
<figure>
        <iframe
        src="./programs/topfive.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Functions and array Objects

Declared `array` object

```cpp
std::array<double, 4> expenses;

show(expenses); // function display the contents
show(&expenses); // if we want a function that modifies object

// Prototypes
void show(std::array<double, 4> da); // da an object
void fill(std::array<double, 4> * pa); // pa a pointer to an object
```

<details><summary>
     <a href="./programs/arrobj.cpp">
     arrobj.cpp - functions with a structure argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arrobj.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Recursion

C++ function can `call` itself. This ability is termed recursion

Recursive function example

```cpp
// Single Recursive Call  
void recurs(argumentlist)
{
    statements1
    if (test)
        recurs(arguments)
    statements2
}
```

<details><summary>
     <a href="./programs/recur.cpp">
     recur.cpp - using recursion (single). </a>
    </summary>
<figure>
        <iframe
        src="./programs/recur.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

This recursive approach below is sometimes called the `divide-and-conquer` strategy.

<details><summary>
     <a href="./programs/ruler.cpp">
     ruler.cpp - using recursion to subdivide a ruler. </a>
    </summary>
<figure>
        <iframe
        src="./programs/ruler.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Pointers to Functions

it’s possible to write a function that takes the address of another function as an argument.
That enables the first function to find the second function and run it.

You need to be able to do the following:

- Obtain the address of a function.
- Declare a pointer to a function.
- Use a pointer to a function to invoke the function.

#### Obtaining the address of a function

It is simple. You just use the function name without
trailing parentheses

```cpp
process(think); // passes address of think() to process()
thought(think()); // passes return value of think() to thought()
```

#### Declaring a Pointer to a Function

Pointer to a function has to specify to what type of function the pointer point

```cpp
double pam(int); // prototype of function to use
double (*pf)(int); // pf points to a function that takes
// one int argument and that
// returns type double
```

<details><summary>
Tip
</summary>

In general, to declare a pointer to a particular kind of function, you can first write a prototype for a regular function
of the desired kind and then replace the function name with an expression in the form `(*pf)`. In this case, `pf` is a
pointer to a function of that type.
</details><br>

```cpp
double (*pf)(int); // pf points to a function that returns double
double *pf(int); // pf() a function that returns a pointer-to-double

double pam(int);
double (*pf)(int);
pf = pam; // pf now points to the pam() function

double ned(double);
int ted(int);
double (*pf)(int);
pf = ned; // invalid -- mismatched signature
pf = ted; // invalid -- mismatched return types

// prototype:
void estimate(int lines, double (*pf)(int));

estimate(50, pam); // function call telling estimate() to use pam()

// Using a Pointer to Invoke a Function
double pam(int);
double (*pf)(int);
pf = pam; // pf now points to the pam() function
double x = pam(4); // call pam() using the function name
double y = (*pf)(5); // call pam() using the pointer pf

double y = pf(5); // also call pam() using the pointer pf
```

<details><summary>
     <a href="./programs/fun_ptr.cpp">
     fun_ptr.cpp - pointers to functions. </a>
    </summary>
<figure>
        <iframe
        src="./programs/fun_ptr.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

```cpp
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);
```

The signatures might look different, but they are the same.

```cpp
const double * (*p1)(const double *, int);
//This can be combined with initialization:
const double * (*p1)(const double *, int) = f1;
auto p2 = f2; // C++11 automatic type deduction

*pd[3] // an array of 3 pointers
(*pd)[3] // a pointer to an array of 3 elements

**&pa == *pa == pa[0]
```

<details><summary>
     <a href="./programs/arfupt.cpp">
     arfupt.cpp - an array of function pointers. </a>
    </summary>
<figure>
        <iframe
        src="./programs/arfupt.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Appreciating auto
    </summary>
One of the goals of C++11 is to make C++ easier to use, letting the programmer concentrate
more on design and less on details. Listing 7.19 surely illustrates this point:

```cpp
auto pc = &pa; // C++11 automatic type deduction
const double *(*(*pd)[3])(const double *, int) = &pa; // C++98, do it yourself
```

The automatic type deduction feature reflects a philosophical shift in the role of the compiler.
In C++98, the compiler uses its knowledge to tell you when you are wrong. In C++11,
at least with this feature, it uses its knowledge to help you get the right declaration.
There is a potential drawback. Automatic type deduction ensures that the type of the variable
matches the type of the initializer, but it still is possible that you might provide the
wrong type of initializer:

```cpp
auto pc = *pa; // oops! used *pa instead of &pa
```

This declaration would make pc match the type of *pa, and that would result in a compiletime
error when Listing 7.19 later uses pc, assuming that it is of the same type as &pa.

</details><br>

### Simplifying with `typedef`

```cpp
typedef double real; // makes real another name for double

// you can do this to make p_fun an alias for the function pointer type
typedef const double *(*p_fun)(const double *, int); // p_fun now a type name
p_fun p1 = f1; // p1 points to the f1() function

p_fun pa[3] = {f1,f2,f3}; // pa an array of 3 function pointers
p_fun (*pd)[3] = &pa; // pd points to an array of 3 function pointers
```

---

### Chapter 7 Review

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

### Chapter 7 Programming Exercises

[1.](./exercises/exercise_ch7_1.cpp)
Write a program that repeatedly asks the user to enter pairs of numbers until at least one of the pair is 0.
For each pair, the program should use a function to calculate the harmonic mean of the numbers.
The function should return the answer to `main()`, which should report the result. The harmonic mean of the
numbers is the inverse of the average of the inverses and can be calculated as follows:
$$HarmonicMean = 2.0 × x × y / (x + y)$$

[2.](./exercises/exercise_ch7_2.cpp)
Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions

[3.](./exercises/exercise_ch7_3.cpp)
Here is a structure declaration:

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

- Write a function that passes a `box` structure by value and that displays the
value of each member.
- Write a function that passes the address of a `box` structure and that sets the
`volume` member to the product of the other three dimensions.
- Write a simple program that uses these two functions.

[4.](./exercises/exercise_ch7_4.cpp)
Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4 (lotto). In
these variations you choose several numbers from one set and call them the field
numbers. For example, you might select five numbers from the field of 1–47).You
also pick a single number (called a mega number or a power ball, etc.) from a second
range, such as 1–27. To win the grand prize, you have to guess all the picks correctly.
The chance of winning is the product of the probability of picking all the
field numbers times the probability of picking the mega number. For instance, the
probability of winning the example described here is the product of the probability
of picking 5 out of 47 correctly times the probability of picking 1 out of 27 correctly.
Modify Listing 7.4 to calculate the probability of winning this kind of lottery.

[5.](./exercises/exercise_ch7_5.cpp)
Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial

[6.](./exercises/exercise_ch7_6.cpp)
Write a program that uses the following functions:

`Fill_array()` takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.

`Show_array()` takes as arguments the name of an array of double values and an
array size and displays the contents of the array.

`Reverse_array()` takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.

[7.](./exercises/exercise_ch7_7.cpp)
Redo Listing 7.7 (arrfun3), modifying the three array-handling functions to each use two
pointer parameters to represent a range. The `fill_array()` function, instead of
returning the actual number of items read, should return a pointer to the location
after the last location filled; the other functions can use this pointer as the second
argument to identify the end of the data.

[8.](./exercises/exercise_ch7_8.cpp)
Redo Listing 7.15 (arrobj) without using the array class. Do two versions:

a. Use an ordinary array of `const char *` for the strings representing the season
names, and use an ordinary array of double for the expenses.

b. Use an ordinary array of `const char *` for the strings representing the season
names, and use a structure whose sole member is an ordinary array of
double for the expenses. (This design is similar to the basic design of the
array class.)

[9.](./exercises/exercise_ch7_9.cpp)
This exercise provides practice in writing functions dealing with arrays and structures.
The following is a program skeleton. Complete it by providing the described
functions:

```cpp
#include <iostream>
using namespace std;
const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
int getinfo(student pa[], int n);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

// display2() takes the address of student structure as an
// argument and displays the structure’s contents
void display2(const student *ps);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size : ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}
```

[10.](./exercises/exercise_ch7_10.cpp)
Design a function `calculate()` that takes two type `double` values and a pointer to
a function that takes two `double` arguments and returns a double.The
`calculate()` function should also be type double, and it should return the value
that the pointed-to function calculates, using the double arguments to
`calculate()`. For example, suppose you have this definition for the `add()`
function:

```cpp
double add(double x, double y)
{
    return x + y;
}
```

Then, the function call in the following would cause `calculate()` to pass the values
2.5 and 10.4 to the `add()` function and then return the `add()` return value
(12.9):

```cpp
double q = calculate(2.5, 10.4, add);
```

Use these functions and at least one additional function in the `add()` mold in a
program.The program should use a loop that allows the user to enter pairs of numbers.
For each pair, use `calculate()` to invoke `add()` and at least one other function.
If you are feeling adventurous, try creating an array of pointers to add()-style
functions and use a loop to successively apply `calculate()` to a series of functions
by using these pointers. Hint: Here’s how to declare such an array of three pointers:

```cpp
double (*pf[3])(double, double);
```

You can initialize such an array by using the usual array initialization syntax and
function names as addresses.

## Chapter 8: Adventures in Functions

<details><summary>
        List of what you will learn
</summary>

```cpp
- Inline functions
- Reference variables
- How to pass function arguments by reference
- Default arguments
- Function overloading
- Function templates
- Function template specializations
```

</details> <br>

### Inline functions

<img src="./assets/_ch8Inline.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

<details><summary>
     <a href="./programs/inline.cpp">
     inline.cpp - using an inline function. </a>
    </summary>
<figure>
        <iframe
        src="./programs/inline.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Inline Versus Macros
    </summary>
<figure>

The `inline` facility is an addition to C++. C uses the preprocessor `#define` statement to
provide *macros*, which are crude implementations of inline code. For example, here’s a
macro for squaring a number:

```cpp
#define SQUARE(X) X*X
```

This works not by passing arguments but through text substitution, with the `X` acting as a
symbolic label for the “argument”:

```cpp
a = SQUARE(5.0); is replaced by a = 5.0*5.0;
b = SQUARE(4.5 + 7.5); is replaced by b = 4.5 + 7.5 * 4.5 + 7.5;
d = SQUARE(c++); is replaced by d = c++*c++;
```

Only the first example here works properly. You can improve matters with a liberal application
of parentheses:

Still, the problem remains that macros don’t pass by value. Even with this new definition,
SQUARE(c++) increments c twice, but the inline square() function in Listing 8.1 evaluates
c, passes that value to be squared, and then increments c once.

```cpp
#define SQUARE(X) ((X)*(X))
```

Still, the problem remains that macros don’t pass by value. Even with this new definition,
`SQUARE(c++)` increments `c` twice, but the inline `square()` function in Listing 8.1 evaluates
c, passes that value to be squared, and then increments `c` once.

The intent here is not to show you how to write C macros. Rather, it is to suggest that if you
have been using C macros to perform function-like services, you should consider converting
them to C++ inline functions

</figure>
</details><br>

### Reference Variables

reference is a name that acts as an alias, or an alternative name, for a previously defined variable. For
example, if you make `twain` a reference to the `clemens` variable, you can use `twain` and `clemens` interchangeably
to represent that variable.

Unlike po0inters you can’t declare the reference and then assign it a value later the way you can with a pointer:

```cpp
int rat;
int & rodent;
rodent = rat; // No, you can't do this.
```

<details><summary>
     <a href="./programs/firstref.cpp">
     firstref.cpp - defining and using a reference. </a>
    </summary>
<figure>
        <iframe
        src="./programs/firstref.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/secref.cpp">
     secref.cpp - defining and using a reference. </a>
    </summary>
<figure>
        <iframe
        src="./programs/secref.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<img src="./assets/_ch8PassingReference.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

<details><summary>
     <a href="./programs/swaps.cpp">
     swaps.cpp - swapping with references and with pointers. </a>
    </summary>
<figure>
        <iframe
        src="./programs/swaps.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/cubes.cpp">
     cubes.cpp - regular and reference arguments. </a>
    </summary>
<figure>
        <iframe
        src="./programs/cubes.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Temporary Variables, Reference Arguments, and `const`

First, when is a temporary variable created? Provided that the reference parameter is a
const, the compiler generates a temporary variable in two kinds of situations:

- When the actual argument is the correct type but isn’t an **lvalue**
- When the actual argument is of the wrong type, but it’s of a type that can be converted
to the correct type

An argument that’s an `lvalue` is a data object that can be referenced
by `address`. For example, a variable, an array element, a structure member, a reference, and
a dereferenced pointer are lvalues.
Non-lvalues include literal constants (aside from quoted strings,
which are represented by their addresses) and expressions with multiple terms.

Regular variable can be further characterized as being a
`modifiable lvalue` and the const variable as a `non-modifiable lvalue`.

```cpp
double refcube(const double &ra)
{
return ra * ra * ra;
}

double side = 3.0;
double * pd = &side;
double & rd = side;
long edge = 5L;
double lens[4] = { 2.0, 5.0, 10.0, 12.0};
double c1 = refcube(side); // ra is side
double c2 = refcube(lens[2]); // ra is lens[2]
double c3 = refcube(rd); // ra is rd is side
double c4 = refcube(*pd); // ra is *pd is side
double c5 = refcube(edge); // ra is temporary variable
double c6 = refcube(7.0); // ra is temporary variable
double c7 = refcube(side + 10.0); // ra is temporary variable
```

<details><summary>
Note
    </summary>
<figure>

If a function call argument isn’t an `lvalue` or does not match the type of the corresponding
`const` reference parameter, C++ creates an anonymous variable of the correct type, assigns
the value of the function call argument to the anonymous variable, and has the parameter
refer to that variable.

</figure>
</details><br>

<details><summary>
Use `const` When You Can
    </summary>
<figure>

There are three strong reasons to declare reference arguments as references to constant data:

- Using `const` protects you against programming errors that inadvertently alter data.
- Using `const` allows a function to process both `const` and `non-const` actual arguments,
whereas a function that omits `const` in the prototype only can accept nonconst
data.
- Using a `const` reference allows the function to generate and use a temporary variable
appropriately.

You should declare formal reference arguments as `const` whenever it’s appropriate to do so.

</figure>
</details><br>

C++11 introduces a second kind of reference, called an rvalue reference, that can refer to
an rvalue. It’s declared using &&:

```cpp
double && rref = std::sqrt(36.00); // not allowed for double &
double j = 15.0;
double && jref = 2.0* j + 18.5; // not allowed for double &
std::cout << rref << '\n'; // display 6.0
std::cout << jref << '\n'; // display 48.5;
```

The `rvalue` reference was introduced mainly to help library designers provide more
efficient implementations of certain operations. Chapter 18,“Visiting will the New C++
Standard,” discusses how rvalue references are used to implement an approach called move
semantics.The original reference type (the one declared using a single &) is now called an
`lvalue` reference.

### Using References with a Structure

References work wonderfully with `structures` and `classes`
References were introduced primarily for use with these types, not for use with the
basic built-in types.

Suppose we have the following definition of a structure:

```cpp
struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};
```

Then a function using a reference to this type could be prototyped as follows:

```cpp
void set_pc(free_throws & ft); // use a reference to a structure
```

If the intent is that the function doesn’t alter the structure, use const:

```cpp
void display(const free_throws & ft); // don't allow changes to structure
```

<details><summary>
     <a href="./programs/strc_ref.cpp">
     strc_ref.cpp - using structure references. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strc_ref.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

A function that returns a reference is actually an alias for the referred-to variable.

#### Being Careful About What a Return Reference Refers To

```cpp
const free_throws & clone2(free_throws & ft)
{
    free_throws newguy; // first step to big error
    newguy = ft; // copy info
    return newguy; // return reference to copy
}
```

This has the unfortunate effect of returning a reference to a temporary variable
(newguy) that passes from existence as soon as the function terminates.

Here’s how you could do something similar with a reference:

```cpp
const free_throws & clone(free_throws & ft)
{
    free_throws * pt;
    *pt = ft; // copy info
    return *pt; // return reference to copy
}
```

### Using References with a Class Object

The general idea is to create a function that adds a given string
to each end of another string. Listing 8.7 (strquote) provides three functions that are intended to do
this. However, one of the designs is so flawed that it may cause the program to crash or
even not compile.

<details><summary>
     <a href="./programs/strquote.cpp">
     strquote.cpp - different designs. </a>
    </summary>
<figure>
        <iframe
        src="./programs/strquote.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Passing a C-Style String Argument to a string Object Reference Parameter
    </summary>
<figure>

You may have noticed a rather interesting fact about the `version1()` function: Both formal
parameters (`s1` and `s2`) are type const string `&`, but the actual arguments (`input` and
`"***"`) are type string and `const char *`, respectively. Because `input` is type `string`,
there is no problem having `s1` refer to it. But how is it that the program accepts passing a
`pointer-to-char` argument to a string reference?

Two things are going on here. One is that the `string` class defines a `char *-to-string`
conversion, which makes it possible to initialize a string `object` to a C-style string. The second
is a property of `const` reference formal parameters that is discussed earlier in this
chapter. Suppose the actual argument type doesn’t match the reference parameter type but
can be converted to the reference type. Then the program creates a temporary variable of
the correct type, initializes it to the converted value, and passes a reference to the temporary
variable. Earlier this chapter you saw, for instance, that a `const double &` parameter
can handle an int argument in this fashion. Similarly, a `const string &` parameter can
handle a `char *` or `const char *` argument in this fashion.

The convenient outcome of this is that if the formal parameter is type `const string &`, the
actual argument used in the function call can be a `string` object or a C-style string, such as
a quoted string literal, a null-terminated array of `char`, or a pointer variable that points to a
`char`. Hence the following works fine:

```cpp
result = version1(input, "***");
```

</figure>
</details><br>

### Another Object Lesson: Objects, Inheritance, and References

The language feature that makes it possible to pass
features from one class to another is called **inheritance**.
Eg.: objects of the `ofstream` type can use `ostream` methods, allowing file input/output to use the
same forms as console input/output.

<details><summary>
     <a href="./programs/filefunc.cpp">
     filefunc.cpp - function with ostream & parameter. </a>
    </summary>
<figure>
        <iframe
        src="./programs/filefunc.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### When to Use Reference/Pointer/Value Arguments

There are two main reasons for using reference arguments:

- To allow you to alter a data object in the calling function
- To speed up a program by passing a reference instead of an entire data object

So when should you use a reference? Use a pointer? Pass by value?
The following are some guidelines.
A function uses passed data without modifying it:

- If the data object is small, such as a built-in data type or a small structure, pass it
by value.
- If the data object is an array, use a pointer because that’s your only choice. Make the
pointer a pointer to `const`.
- If the data object is a good-sized structure, use a `const` pointer or a `const` reference
to increase program efficiency.You save the time and space needed to copy a structure
or a class design. Make the pointer or reference `const`.
- If the data object is a class object, use a `const` reference.The semantics of class

design often require using a reference, which is the main reason C++ added this
feature.Thus, the standard way to pass class object arguments is by reference.
A function modifies data in the calling function:

- If the data object is a built-in data type, use a pointer. If you spot code like
`fixit(&x)`, where `x` is an `int`, it’s pretty clear that this function intends to modify `x`.
- If the data object is an array, use your only choice: a pointer.
- If the data object is a structure, use a reference or a pointer.
- If the data object is a class object, use a reference.

### Default Arguments

`default argument` is a value that’s used automatically if you omit the corresponding actual argument
from a function call.

You must use the function prototype. Because the compiler looks at the prototype to see how many
arguments a function uses, the function prototype also has to alert the program to the possibility
of default arguments. The method is to assign a value to the argument in the prototype.
For example, here’s the prototype fitting this description of `left()`:

```cpp
char * left(const char * str, int n = 1);

int harpo(int n, int m = 4, int j = 5); // VALID
int chico(int n, int m = 6, int j); // INVALID
int groucho(int k = 1, int m = 2, int n = 3); // VALID

beeps = harpo(2); // same as harpo(2,4,5)
beeps = harpo(1,8); // same as harpo(1,8,5)
beeps = harpo (8,7,6); // no default arguments used

beeps = harpo(3, ,8); // invalid, doesn't set m to 4
```

<details><summary>
     <a href="./programs/left.cpp">
     left.cpp - string function with a default argument. </a>
    </summary>
<figure>
        <iframe
        src="./programs/left.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Function Overloading

`Function polymorphism` is a neat C++ addition to C’s capabilities. Whereas default arguments
let you call the same function by using varying numbers of arguments, function polymorphism,
also called `function overloading`, lets you use multiple functions sharing the same name.

You can use function overloading to design a family
of functions that do essentially the same thing but using different argument lists.

```cpp
void print(const char * str, int width); // #1
void print(double d, int width); // #2
void print(long l, int width); // #3
void print(int i, int width); // #4
void print(const char *str); // #5

print("Pancakes", 15); // use #1
print("Syrup"); // use #5
print(1999.0, 10); // use #2
print(1999, 12); // use #4
print(1999L, 15); // use #3
```

<details><summary>
Overloading Reference Parameters
    </summary>
<figure>
Class designs and the STL often use reference parameters, and it’s useful to know how
overloading works with different reference types. Consider the following three prototypes:

```cpp
void sink(double & r1); // matches modifiable lvalue
void sank(const double & r2); // matches modifiable or const lvalue, rvalue
void sunk(double && r3); // matches rvalue
```

The lvalue reference parameter `r1` matches a modifiable lvalue argument, such as a
double variable. The `const` lvalue reference parameter `r2` matches a modifiable lvalue
argument, a `const` lvalue argument, and an rvalue argument, such as the sum of two
double values. Finally, the rvalue reference `r3` matches an rvalue. Note how `r2` can match
the same sort of arguments that `r1` and `r3` match. This raises the question of what happens
when you overload a function on these three types of parameters. The answer is that
the more exact match is made:

```cpp
void staff(double & rs); // matches modifiable lvalue
void staff(const double & rcs); // matches rvalue, const lvalue
void stove(double & r1); // matches modifiable lvalue
void stove(const double & r2); // matches const lvalue
void stove(double && r3); // matches rvalue
```

This allows you to customize the behavior of a function based on the `lvalue`, `const`, or
rvalue nature of the argument:

```cpp
double x = 55.5;
const double y = 32.0;
stove(x); // calls stove(double &)
stove(y); // calls stove(const double &)
stove(x+y); // calls stove(double &&)
```

If, say, you omit the `stove(double &&)` function, then `stove(x+y)` will call the
`stove(const double &)` function instead.

</figure>
</details><br>

<details><summary>
     <a href="./programs/leftover.cpp">
     leftover.cpp - overloading the left() function. </a>
    </summary>
<figure>
        <iframe
        src="./programs/leftover.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

You might find function overloading fascinating, but you shouldn’t overuse it. You should
reserve function overloading for functions that perform basically the same task but with
different forms of data.

```cpp
char * left(const char * str, unsigned n); // two arguments
char * left(const char * str); // one argument
```

<details><summary>
What Is Name Decoration?
    </summary>
<figure>

How does C++ keep track of which overloaded function is which? It assigns a secret identity
to each of these functions. When you use the editor of your C++ development tool to write
and compile programs, your C++ compiler performs a bit of magic on your behalf—known as
name decoration or name mangling—through which each function name is encrypted, based
on the formal parameter types specified in the function’s prototype. Consider the following
undecorated function prototype:

```cpp
long MyFunctionFoo(int, float);
```

This format is fine for us humans; we know that the function accepts two arguments of type
`int` and `float`, and it returns a value of type `long`. For its own use, the compiler documents
this interface by transforming the name into an internal representation with a more
unsightly appearance, perhaps something like this:

```cpp
?MyFunctionFoo@@YAXH
```

The apparent gibberish decorating the original name (or mangling it, depending on your attitude)
encodes the number and types of parameters. A different function signature would
result in a different set of symbols being added, and different compilers would use different
conventions for their efforts at decorating.

</figure>
</details><br>

### Function Templates

A function template is a generic function description; that is, it defines a function
in terms of a generic type for which a specific type, such as int or double, can be substituted.
By passing a type as a parameter to a template, you cause the compiler to generate a
function for that particular type.

Because templates let you program in terms of a generic
type instead of a specific type, the process is sometimes termed **generic programming**.

Because types are represented by parameters, the template feature is sometimes referred to
as parameterized types.

Function templates enable you to define a function in terms of some arbitrary type. For
example, you can set up a swapping template like this:

```cpp
template <typename AnyType>
void Swap(AnyType &a, AnyType &b)
{
    AnyType temp;
    temp = a;
    a = b;
    b = temp;
}
```

The first line specifies that you are setting up a template and that you’re naming the
arbitrary type AnyType.The keywords `template` and `typename` are obligatory, except that
you can use the keyword `class` instead of `typename`. Also you must use the angle brackets.

<details><summary>
Tip
    </summary>
<figure>

You should use templates if you need functions that apply the same algorithm to a variety of
types. If you aren’t concerned with backward compatibility and can put up with the effort of
typing a longer word, you can use the keyword `typename` rather than `class` when you
declare type parameters.
</figure>
</details><br>

To let the compiler know that you need a particular form of swap function, you just
use a function called Swap() in your program.

<details><summary>
     <a href="./programs/funtemp.cpp">
     funtemp.cpp - using a function template. </a>
    </summary>
<figure>
        <iframe
        src="./programs/funtemp.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Overloaded Templates

You use templates when you need functions that apply the same algorithm to a variety of types.
To handle this possibility, you can overload template definitions, just as you overload
regular function definitions.

<details><summary>
     <a href="./programs/twotemps.cpp">
     twotemps.cpp - using overloaded template functions. </a>
    </summary>
<figure>
        <iframe
        src="./programs/twotemps.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Template Limitations

Suppose you have a template function:

```cpp
template <class T> // or template <typename T>
void f(T a, T b)
{...}
```

Often the code makes assumptions about what operations are possible for the type. For
instance, the following statement assumes that assignment is defined, and this would not be
true if type T is a built-in array type:

```cpp
a = b;
```

Similarly, the following assumes > is defined, which is not true if T is an ordinary
structure:

```cpp
if (a > b)
```

Also the > operator is defined for array names, but because array names are addresses, it
compares the addresses of the arrays, which may not be what you have in mind.And the
following assumes the multiplication operator is defined for type T, which is not the case
if T is an array, a pointer, or a structure:

```cpp
T c = a*b;
```

In short, it’s easy to write a template function that cannot handle certain types

### Explicit Specializations

You can supply a specialized function definition, called an explicit
specialization, with the required code. If the compiler finds a specialized definition that
exactly matches a function call, it uses that definition without looking for templates.
The specialization mechanism has changed with the evolution of C++.We’ll look

#### Third-Generation Specialization (ISO/ANSI C++ Standard)

After some youthful experimentation with other approaches, the C++98 Standard settled
on this approach:

- For a given function name, you can have a non template function, a template function,
and an explicit specialization template function, along with overloaded versions
of all of these.
- The prototype and definition for an explicit specialization should be preceded by
`template <>` and should mention the specialized type by name.
- A specialization overrides the regular template, and a non template function overrides
both

Here’s how prototypes for swapping type job structures would look for these three forms:

```cpp
// non template function prototype
void Swap(job &, job &);

// template prototype
template <typename T>
void Swap(T &, T &);

// explicit specialization for the job type
template <> void Swap<job>(job &, job &);
```

<details><summary>
     <a href="./programs/twoswap.cpp">
     twoswap.cpp - specialization overrides a template. </a>
    </summary>
<figure>
        <iframe
        src="./programs/twoswap.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Instantiations and Specializations

To extend your understanding of templates, let’s investigate the terms `instantiation` and `specialization`.
Keep in mind that including a function template in your code does not in itself
generate a function definition. It’s merely a plan for generating a function definition.

```cpp
template void Swap<int>(int, int); // explicit instantiation
template <> void Swap<int>(int &, int &); // explicit specialization
template <> void Swap(int &, int &); // explicit specialization
```

Caution
It is an error to try to use both an explicit instantiation and an explicit specialization for the
same type(s) in the same file, or, more generally, the same translation unit.

```cpp
template <class T>
void Swap (T &, T &); // template prototype
template <> void Swap<job>(job &, job &); // explicit specialization for job
int main(void)
{
    template void Swap<char>(char &, char &); // explicit instantiation for char
    short a, b;
    ...
    Swap(a,b); // implicit template instantiation for short
    job n, m;
    ...
    Swap(n, m); // use explicit specialization for job
    char g, h;
    ...
    Swap(g, h); // use explicit template instantiation for char
    ...
}
```

### Which Function Version Does the Compiler Pick?

What with function overloading, function templates, and function template overloading,
C++ needs, and has, a well-defined strategy for deciding which function definition to use
for a function call, particularly when there are multiple arguments.The process is called
overload resolution. Detailing the complete strategy would take a small chapter, so let’s take
just a broad look at how the process works:

- Phase 1—Assemble a list of candidate functions.These are functions and template
functions that have the same names as the called functions.
- Phase 2—From the candidate functions, assemble a list of viable functions.These
are functions with the correct number of arguments and for which there is an
implicit conversion sequence, which includes the case of an exact match for each
type of actual argument to the type of the corresponding formal argument. For
example, a function call with a type `float` argument could have that value converted
to a `double` to match a type `double` formal parameter, and a template could
generate an instantiation for float.
- Phase 3—Determine whether there is a best viable function. If so, you use that
function. Otherwise, the function call is an error.

#### A Partial Ordering Rules Example

Let’s examine a complete program that uses the partial ordering rules for identifying
which template definition to use.

If you remove Template B from the program, the compiler then uses Template A for
listing the contents of `pd`, so it lists the addresses instead of the values.

<details><summary>
     <a href="./programs/tempover.cpp">
     tempover.cpp - template overloading. </a>
    </summary>
<figure>
        <iframe
        src="./programs/tempover.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

In some circumstances, you can lead the compiler to make the choice you want by suitably
writing the function call. Consider Listing 8.15, which, by the way, eliminates the
template prototype and places the template function definition at the top of the file

<details><summary>
     <a href="./programs/choicesTemplate.cpp">
     choicesTemplate.cpp - choosing a template. </a>
    </summary>
<figure>
        <iframe
        src="./programs/choicesTemplate.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### The `decltype` Keyword (C++11)

It can be used in this way:

```cpp
int x;
decltype(x) y; // make y the same type as x

// The argument to decltype can be an expression, so in the ft() example, we could use
this code:
decltype(x + y) xpy; // make xpy the same type as x + y
xpy = x + y;

// Alternatively, we could combine these two statements into an initialization:
decltype(x + y) xpy = x + y;

//--------
// We can fix the ft() template this way:
template<class T1, class T2>
void ft(T1 x, T2 y)
{
    ...
    decltype(x + y) xpy = x + y;
    ...
}


// Stage 1: If expression is an unparenthesized identifier (that is, no additional parentheses),
// then var is of the same type as the identifier, including qualifiers such as const:
double x = 5.5;
double y = 7.9;
double &rx = x;
const double * pd;
decltype(x) w; // w is type double
decltype(rx) u = y; // u is type double &
decltype(pd) v; // v is type const double *

// Stage 2: If expression is a function call, then var has the type of the function
return type:
long indeed(int);
decltype (indeed(3)) m; // m is type int

// Stage 3: If expression is an lvalue, then var is a reference to the expression type.
// This might seem to imply that earlier examples such as w should have been reference
// types, given that w is an lvalue. However, keep in mind that case was already captured in
// Stage 1. For this stage to apply, expression can’t be an unparenthesized identifier. So
// what can it be? One obvious possibility is a parenthesized identifier:
double xx = 4.4;
decltype ((xx)) r2 = xx; // r2 is double &
decltype(xx) w = xx; // w is double (Stage 1 match)

// Stage 4: If none of the preceding special cases apply, var is of the same type as
// expression:
int j = 3;
int &k = j
int &n = j;
decltype(j+6) i1; // i1 type int
decltype(100L) i2; // i2 type long
decltype(k+n) i3; // i3 type int;
```

### Alternative Function Syntax (C++11 Trailing Return Type)

The decltype mechanism by itself leaves another related problem unsolved. Consider this
incomplete template function:

```cpp
template<class T1, class T2>
?type? gt(T1 x, T2 y)
{
    ...
    return x + y;
}
```

C++11 allows a new syntax for declaring and defining
functions. Here’s how it works using built-in types.The prototype

```cpp
double h(int x, float y);
```

can be written with this alternative syntax:

```cpp
auto h(int x, float y) -> double;
```

This moves the return type to after the parameter declarations.The combination ->
double is called a `trailing return type`.

```cpp
template<class T1, class T2>
auto gt(T1 x, T2 y) -> decltype(x + y)
{
...
return x + y;
}
```

### Chapter 8 Review

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

### Chapter 8: Programming Exercises

[1.](./exercises/exercise_ch8_1.cpp)
Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.

[2.](./exercises/exercise_ch8_2.cpp)
The `CandyBar` structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an `int` and
uses the last three values to set the corresponding members of the structure. The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a `CandyBar` as an
argument and displays the contents of the structure. Use `const` where appropriate.

[3.](./exercises/exercise_ch8_3.cpp)
Write a function that takes a reference to a `string` object as its parameter and that
converts the contents of the `string` to uppercase. Use the `toupper()` function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.A sample run might look like this:

```sh
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.
```

[4.](./exercises/exercise_ch8_4.cpp)
The following is a program skeleton:

```cpp
#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy
{
    char *str; // points to a string
    int ct;    // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing); // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    show(beany);    // prints member string once
    show(beany, 2); // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);    // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    return 0;
}
```

Complete this skeleton by providing the described functions and prototypes. Note
that there should be two `show()` functions, each using default arguments. Use
`const` arguments when appropriate. Note that `set()` should use `new` to allocate
sufficient space to hold the designated string.The techniques used here are similar
to those used in designing and implementing classes. (You might have to alter the
header filenames and delete the `using` directive, depending on your compiler.)

[5.](./exercises/exercise_ch8_5.cpp)
Write a template function `max5()` that takes as its argument an array of five items
of type `T` and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.

[6.](./exercises/exercise_ch8_6.cpp)
Write a template function `maxn()` that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template
with an array of six int value and an array of four double values.The program
should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.

[7.](./exercises/exercise_ch8_7.cpp)
Modify Listing 8.14 (tempover) so that it uses two template functions called `SumArray()` to
return the sum of the array contents instead of displaying the contents.The program
now should report the total number of things and the sum of all the debts

## Chapter 9 Memory Models and Namespaces

<details><summary>
        List of what you will learn
</summary>

```cpp
- Separate compilation of programs
- Storage duration, scope, and linkage
- Placement new
- Namespaces
```

</details>

### Separate Compilation

Unix and Linux systems, for example, have make programs, which keep track of which files a program depends on and when
they were last modified. If you run make, and it detects that you’ve changed one or more source files since the last compilation,
make remembers the proper steps needed to reconstitute the program. Most integrated development environments (IDEs),
including Embarcadero C++ Builder, Microsoft Visual C++,Apple Xcode, and Freescale CodeWarrior, provide similar
facilities with their Project menus.

`#include` - Instead of placing the structure declarations
in each file, you can place them in a header file and then include that header file in each source code file.

You can divide the original program into three parts:

- A header file that contains the structure declarations and prototypes for functions
that use those structures
- A source code file that contains the code for the structure-related functions
- A source code file that contains the code that calls the structure-related functions

Things commonly found in header files:

- Function prototypes
- Symbolic constants defined using `#define` or `const`
- Structure declarations
- Class declarations
- Template declarations
- Inline functions

It’s okay to put structure declarations in a header file because they don’t create variables;

`"coordin.h"` - if the filename is enclosed in double quotation marks, the compiler first looks at the current working
directory or at the source code directory

`<coordin.h>` - filename is enclosed in angle brackets, the C++ compiler looks at the part of the host system’s
file system that holds the standard header files

<details><summary>
     <a href="./programs/coordin.h">
     coordin.h - structure templates and function prototypes. </a>
    </summary>
<figure>
        <iframe
        src="./programs/coordin.h"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Header File Management
</summary>

You should include a header file just once in a file. That might seem to be an easy thing to
remember, but it’s possible to include a header file several times without knowing you did
so. For example, you might use a header file that includes another header file. There’s a
standard C/C++ technique for avoiding multiple inclusions of header files. It’s based on the
preprocessor `#ifndef` (for if not defined) directive. A code segment like the following
means “process the statements between the `#ifndef` and #endif only if the name
`COORDIN_H_` has not been defined previously by the preprocessor #define directive”:

```cpp
#ifndef COORDIN_H_
...
#endif
```

Normally, you use the #define statement to create symbolic constants, as in the following:

```cpp
#define MAXIMUM 4096
```

But simply using `#define` with a name is enough to establish that a name is defined, as in
the following:

```cpp
#define COORDIN_H_
```

The technique that Listing 9.1 uses is to wrap the file contents in an #ifndef:

```cpp
#ifndef COORDIN_H_
#define COORDIN_H_
// place include file contents here
#endif
```

The first time the compiler encounters the file, the name `COORDIN_H_` should be undefined.
(I chose a name based on the include filename, with a few underscore characters tossed
in to create a name that is unlikely to be defined elsewhere.) That being the case, the compiler
looks at the material between the #ifndef and the `#endif`, which is what you want.
In the process of looking at the material, the compiler reads the line defining `COORDIN_H_`.
If it then encounters a second inclusion of `coordin.h` in the same file, the compiler notes
that `COORDIN_H_` is defined and skips to the line following the `#endif`. Note that this
method doesn’t keep the compiler from including a file twice. Instead, it makes the compiler
ignore the contents of all but the first inclusion. Most of the standard C and C++ header
files use this guarding scheme. Otherwise you might get the same structure defined twice in
one file, and that will produce a compile error.

</details><br>

Link it `g++ .\Notes\C++PrimerPlus\programs\file1.cpp .\Notes\C++PrimerPlus\programs\file2.cpp`

<details><summary>
     <a href="./programs/file1.cpp">
     file1.cpp - example of a three-file program </a>
    </summary>
<figure>
        <iframe
        src="./programs/file1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/file2.cpp">
     file2.cpp - contains functions called in file1.cpp </a>
    </summary>
<figure>
        <iframe
        src="./programs/file2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<img src="./assets/_ch9CompileMultipleFiles.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

C++ Standard uses the term `translation unit` instead of `file` in order to preserve greater generality;
the file metaphor is not the only possible way to organize information for a computer. For
simplicity, this book will use the term file, but feel free to translate that to `translation unit`.

<details><summary>
Multiple Library Linking
    </summary>
<figure>

The C++ Standard allows each compiler designer the latitude to implement name decoration
or mangling (see the sidebar “What Is Name Decoration?” in Chapter 8, “Adventures in
Functions”) as it sees fit, so you should be aware that binary modules (object-code files)
created with different compilers will, most likely, not link properly. That is, the two compilers
will generate different decorated names for the same function. This name difference will
prevent the linker from matching the function call generated by one compiler with the function
definition generated by a second compiler. When attempting to link compiled modules,
you should make sure that each object file or library was generated with the same compiler.
If you are provided with the source code, you can usually resolve link errors by recompiling
the source with your compiler.
    </figure>
</details><br>

### Storage Duration, Scope, and Linkage

memory. C++ uses three separate schemes (four under C++11) for storing data, and the schemes differ in how long they preserve
data in memory:

- Automatic storage duration—Variables declared inside a function definition—
including function parameters—have automatic storage duration.They are created
when program execution enters the function or block in which they are defined,
and the memory used for them is freed when execution leaves the function or
block. C++ has two kinds of automatic storage duration variables.
- Static storage duration—Variables defined outside a function definition or else
by using the keyword `static` have static storage duration.They persist for the entire
time a program is running. C++ has three kinds of static storage duration variables.
- Thread storage duration (C++11)—These days multicore processors are common.
These are CPUs that can handle several execution tasks simultaneously.This
allows a program to split computations into separate threads that can be processed
concurrently.Variables declared with the `thread_local` keyword have storage that
persists for as long as the containing thread lasts.This book does not venture into
concurrent programming.
- Dynamic storage duration—Memory allocated by the `new` operator persists
until it is freed with the `delete` operator or until the program ends, whichever
comes first.This memory has dynamic storage duration and sometimes is termed
the free store or the heap.

### Scope and Linkage

`Scope` describes how widely visible a name is in a file (translation unit).
`Linkage` describes how a name can be shared in different units.

A name with external linkage can be shared across files, and a name with internal linkage can be shared by functions
within a single file. Names of automatic variables have no linkage because they are not shared. A C++ variable can
have one of several scopes.A variable that has local scope (also termed block scope) is known only within the block
in which it is defined.

#### Automatic Storage Duration

Function parameters and variables declared inside a function have, by default, automatic storage duration.
They also have local scope and no linkage.That is, if you declare a variable called texas in `main()` and you declare
another variable with the same name in a function called `oil()`, you’ve created two independent variables, each known
only in the function in which it’s defined. Anything you do to the texas in `oil()` has no effect on the texas in main(),
and vice versa.

<details><summary>
     <a href="./programs/autoscp.cpp">
     autoscp.cpp - illustrating scope of automatic variables </a>
    </summary>
<figure>
        <iframe
        src="./programs/autoscp.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Changes to auto in C++11
    </summary>
<figure>

In C++11, the keyword auto is used for automatic type deduction, as you have seen in
Chapters 3, 7, and 8. But in C and in prior versions of C++, `auto` has an entirely different
meaning. It’s used to explicitly identify a variable as having automatic storage:

```cpp
int froob(int n)
{
    auto float ford; // ford has automatic storage
    ...
}
```

Because programmers can use the `auto` keyword only with variables that are already automatic
by default, they rarely bother using it. Its main function is to document that you really
wanted to use a local automatic variable.
In C++11, this usage no longer is valid. The people who prepare standards are reluctant to
introduce new keywords because doing so might invalidate existing code that already uses
that word for other purposes. In this case, it was felt that the old use of `auto` was rare
enough that it was better to repurpose this keyword rather than introduce a new one.
</details><br>

#### Automatic Variables and the Stack

The usual means is to set aside a section of memory and treat it as a stack for managing
the flow and ebb of variables. It’s called a stack because new data is figuratively
stacked atop old data (that is, at an adjacent location, not at the same location) and then
removed from the stack when a program is finished with it.The default size of the stack
depends on the implementation, but a compiler typically provides the option of changing
the size.The program keeps track of the stack by using two pointers. One points to the
base of the stack, where the memory set aside for the stack begins, and one points to the
top of the stack, which is the next free memory location.When a function is called, its
automatic variables are added to the stack, and the pointer to the top points to the next
available free space following the variables

A stack is a LIFO (last-in, first-out) design, meaning the last variables added to the
stack are the first to go.The design simplifies argument passing

#### Register Variables

C originally introduced the `register` keyword to suggest that the compiler use a CPU
register to store an automatic variable:

```cpp
register int count_fast; // request for a register variable
```

The idea was that this would allow faster access to the variable.
Prior to C++11, C++ used the keyword in the same fashion, except that as hardware
and compilers developed in sophistication, the hint was generalized to mean that the variable
was heavily used and perhaps the compiler could provide some sort of special treatment.

With C++11, that hint is being deprecated, leaving `register` as just a way to
explicitly **identify a variable as being automatic**.

#### Static Duration Variables

storage duration variables with three kinds of linkage: external
linkage (accessible across files), internal linkage (accessible to functions within a single
file), and no linkage (accessible to just one function or to one block within a function). All
three last for the duration of the program; they are less ephemeral than automatic variables.
Because the number of static variables doesn’t change as the program runs, the program
doesn’t need a special device such as a stack to manage them. Instead, the compiler
allocates a fixed block of memory to hold all the static variables, and those variables stay
present as long as the program executes. Also if you don’t explicitly initialize a static variable,
the compiler sets it to 0. Static arrays and structures have all the bits of each element
or member set to 0 by default.

<img src="./assets/_ch9VariableStorage.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

##### Initializing Static Variables

Static variables may be zero-initialized, they may undergo constant expression initialization,
and they may undergo dynamic initialization.As you may have surmised, zero-initialization
means setting the variable to the value zero

`Zero-initialization` and `constant-expression` initialization collectively are called `static initialization`.
This means the variable is initialized when the compiler processes the file (or
translation unit). Dynamic initialization means the variable is initialized later

```cpp
#include <cmath>
int x; // zero-initialization
int y = 5; // constant-expression initialization
long z = 13 * 13; // constant-expression initialization
const double pi = 4.0 * atan(1.0); // dynamic initialization
```

C++11 introduces a new keyword, `constexpr`, to expand the options for creating constant
expressions; this is one of the new C++11 features that this book does not pursue
further

#### Static Duration, External Linkage

Variables with external linkage are often simply called `external variables`
You can use an external variable in any function that follows
the external variable’s definition in the file.Thus, external variables are also termed global
variables, in contrast to automatic variables, which are local variables.

##### The One Definition Rule

On the one hand, an external variable has to be declared in each file that uses the variable.
On the other hand, C++ has the “one definition rule” (also known as odr), which states
that there can be only one definition of a variable.
To satisfy these requirements, C++ has two kinds of variable declarations. One is the `defining declaration` or, simply,
a `definition`. The second is the referencing declaration or, simply, a declaration. It does not cause storage to be
allocated because it refers to an existing variable.

A referencing declaration uses the keyword extern and does not provide initialization.
Otherwise, a declaration is a definition and causes storage to be allocated:

```cpp
double up; // definition, up is 0
extern int blem; // blem defined elsewhere
extern char gr = 'z'; // definition because initialized
```

<img src="./assets/_ch9Extern.png" alt="Image description"
style="display: block; margin: auto; width: 60%; height: auto; border-radius: 8px;">
<br>

<details><summary>
     <a href="./programs/_ch9_external.cpp">
     _ch9_external.cpp - external variables </a>
    </summary>
<figure>
        <iframe
        src="./programs/_ch9_external.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/_ch9_support.cpp">
     _ch9_support.cpp - use external variable </a>
    </summary>
<figure>
        <iframe
        src="./programs/_ch9_support.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Global Versus Local Variables
    </summary>

Now that you have a choice of using global or local variables, which should you use? At first,
global variables have a seductive appeal—because all functions have access to a global
variable, you don’t have to bother passing arguments. But this easy access has a heavy
price: unreliable programs. Computing experience has shown that the better job your program
does of isolating data from unnecessary access, the better job the program does in
preserving the integrity of the data. Most often, you should use local variables and pass
data to functions on a need-to-know basis rather than make data available indiscriminately
by using global variables. As you will see, OOP takes this data isolation a step further.
Global variables do have their uses, however. For example, you might have a block of data
that’s to be used by several functions, such as an array of month names or the atomic
weights of the elements. The external storage class is particularly suited to representing
constant data because you can use the keyword `const` to protect the data from change:

```cpp
const char * const months[12] =
{
    "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October",
    "November", "December"
};
```

In this example, the first `const` protects the strings from change, and the second `const`
makes sure that each pointer in the array remains pointing to the same string to which it
pointed initially.
</details><br>

#### Static Duration, Internal Linkage

Applying the static modifier to a file-scope variable gives it internal linkage.The difference
between internal linkage and external linkage becomes meaningful in multifile programs.
In that context, a variable with internal linkage is local to the file that contains it.
But a regular external variable has external linkage, meaning that it can be used in different
files, as the previous example showed.

Declaration of a static external variable that has the same name as an ordinary
external variable declared in another file, the static version is the one in scope for that file:

<details><summary>
     <a href="./programs/_ch9_twofile1.cpp">
     _ch9_twofile1.cpp - variables with external and internal linkage </a>
    </summary>
<figure>
        <iframe
        src="./programs/_ch9_twofile1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/_ch9_twofile2.cpp">
     _ch9_twofile2.cpp - variables with internal and external linkage </a>
    </summary>
<figure>
        <iframe
        src="./programs/_ch9_twofile2.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

```cpp
// file1
int errors = 20; // external declaration
...
---------------------------------------------
// file2
static int errors = 5; // known to file2 only
void froobish()
{
cout << errors; // uses errors defined in file2
...
```

This doesn’t violate the one definition rule because the keyword static establishes
that the identifier errors has internal linkage, so no attempt is made to bring in an external
definition.

#### Static Storage Duration, No Linkage

You create such a variable by applying the static modifier
to a variable defined inside a block.When you use it inside a block, static causes a local
variable to have static storage duration.This means that even though the variable is known
within that block, it exists even while the block is inactive.Thus a static local variable can
preserve its value between function calls.

<details><summary>
     <a href="./programs/static.cpp">
     static.cpp - variables with external and internal linkage </a>
    </summary>
<figure>
        <iframe
        src="./programs/static.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Specifiers and Qualifiers

Certain C++ keywords, called `storage class specifiers` and `cv-qualifiers`, provide additional
information about storage. Here’s a list of the storage class specifiers:

```cpp
auto (eliminated as a specifier in C++11)
register
static
extern
thread_local (added by C++11)
mutable
```

A `thread_local` variable is to a thread much as a regular static variable is to the whole program.The keyword `mutable`
is explained in terms of `const`, so let’s look at the cv-qualifiers first before returning to `mutable`.

#### Cv-Qualifiers

```cpp
const
volatile
```

(As you may have guessed, cv stands for `const` and `volatile`.) The most commonly used
cv-qualifier is `const`, and you’ve already seen its purpose: It indicates that memory, after initialized,
should not be altered by a program.

The `volatile` keyword indicates that the value in a memory location can be altered
even though nothing in the program code modifies the contents.

#### `mutable`

```cpp
struct data
{
    char name[30];
    mutable int accesses;
    ...
};
const data veep = {"Claybourne Clodde", 0, ... };
strcpy(veep.name, "Joye Joux"); // not allowed
veep.accesses++; // allowed
```

The `const` qualifier to `veep` prevents a program from changing veep’s members, but
the `mutable` specifier to the `accesses` member shields `accesses` from that restriction.
This book doesn’t use `volatile` or mutable, but there is more to learn about const

#### More About `const`

In C++ (but not C), the const modifier alters the default storage classes slightly.Whereas
a global variable has external linkage by default, a const global variable has internal linkage
by default.That is, C++ treats a global const definition, such as in the following code
fragment, as if the static specifier had been used:

```cpp
const int fingers = 10; // same as static const int fingers = 10;
int main(void)
{

// extern would be required if const had external linkage
extern const int fingers; // can't be initialized
extern const char * warning;

// If, for some reason, you want to make a constant have external linkage, you can use the
// extern keyword to override the default internal linkage:
extern const int states = 50; // definition with external linkage
...
```

<details><summary>
Where C++ Finds Functions
</summary>
<figure>
Suppose you call a function in a particular file in a program. Where does C++ look for the
function definition? If the function prototype in that file indicates that the function is static,
the compiler looks only in that file for the function definition. Otherwise, the compiler (and
the linker, too) looks in all the program files. If it finds two definitions, the compiler sends
you an error message because you can have only one definition for an external function. If it
fails to find any definition in the files, the function then searches the libraries. This implies
that if you define a function that has the same name as a library function, the compiler
uses your version rather than the library version. (However, C++ reserves the names of the
standard library functions, so you shouldn’t reuse them.) Some compiler-linkers need
explicit instructions to identify which libraries to search.
**One definition rule** - use one definition for function.
</figure>
</details><br>

#### Language Linking

suppose you want to use a precompiled function from a C library in a C++ program?
For example, suppose you have this code:

```cpp
spiff(22); // want spiff(int) from a C library
```

Its hypothetical symbolic name in the C library file is `_spiff`, but for our hypothetical
linker, the C++ look-up convention is to look for the symbolic name `_spiff_i`. To get
around this problem, you can use the function prototype to indicate which protocol to use:

```cpp
extern "C" void spiff(int); // use C protocol for name look-up
extern void spoff(int); // use C++ protocol for name look-up
extern "C++" void spaff(int); // use C++ protocol for name look-up```
```

### The Placement `new` Operator

With `new` header file, you can create your own memory-management
procedures or to deal with hardware that is accessed via a particular address or to construct objects in a particular
memory location.

```cpp
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

char buffer1[50];
char buffer2[500];

int main()
{
    chaff *p1, *p2;
    int *p3, *p4;
    // first, the regular forms of new
    p1 = new chaff; // place structure in heap
    p3 = new int[20]; // place int array in heap
    // now, the two forms of placement new
    p2 = new (buffer1) chaff; // place structure in buffer1
    p4 = new (buffer2) int[20]; // place int array in buffer2
    ...

// ----
// Just as regular new invokes a new function with one argument, the 
// standard placement new invokes a new function with two arguments:
int * pi = new int; // invokes new(sizeof(int))
int * p2 = new(buffer) int; // invokes new(sizeof(int), buffer)
int * p3 = new(buffer) int[40]; // invokes new(40*sizeof(int), buffer)
```

<details><summary>
     <a href="./programs/newplace.cpp">
     newplace.cpp - using placement new </a>
    </summary>
<figure>
        <iframe
        src="./programs/newplace.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

### Namespaces

You might want the `List` class from one library and the `Tree` from the other,
and each might expect its own version of Node.
Such conflicts are termed `namespace problems`.

`declarative region` - region in which declarations can be made
`potential scope` - for a variable it begins at its point of declaration and extends to the end of its declarative region.
So the potential scope is more limited than the declarative region because you can’t use a variable above the point
where it is first defined. However, a variable might not be visible everywhere in its potential scope.
`scope` - The portion of the program that can actually see the variable

#### Traditional C++ Namespaces

C++’s rules about global and local variables define a kind of namespace hierarchy. Each
declarative region can declare names that are independent of names declared in other
declarative regions. A local variable declared in one function doesn’t conflict with a local
variable declared in a second function.

#### New Namespace Features

C++ now adds the ability to create named namespaces by defining a new kind of declarative
region, one whose main purpose is to provide an area in which to declare names.

New keyword `namespace` to create two namespaces, `Jack` and `Jill`:

```cpp
namespace Jack {
    double pail;    // variable declaration
    void fetch();   // function prototype
    int pal;        // variable declaration
    struct Well { ... }; // structure declaration
}

namespace Jill {
    double bucket(double n) { ... } // function definition
    double fetch;   // variable declaration
    int pal;        // variable declaration
    struct Hill { ... }; // structure declaration
}
```

The simplest way is to use `::`, the `scope-resolution operator`, to qualify a name with its namespace:

```cpp
Jack::pail = 12.34; // use a variable
Jill::Hill mole;    // create a type Hill structure
Jack::fetch();      // use a function
```

An unadorned name, such as `pail`, is termed the `unqualified name`, whereas a name with
the namespace, as in `Jack::pail`, is termed a `qualified name`.

One thing to keep in mind about using directives and using declarations is that they
increase the possibility of name conflicts

```cpp
using jack::pal;
using jill::pal;
pal = 4; // which one? now have a conflict
```

##### `using` Declarations and `using` Directives

A `using` declaration, then, makes a single name available. In contrast, the `using` directive
makes all the names available

Having to qualify names every time they are used is not always an appealing prospect, so
C++ provides two mechanisms—the `using declaration` and the `using directive` — to simplify
`using` namespace names.

`using` directive in a function treats the
namespace names as being declared outside the function, it doesn’t make those names
available to other functions in the file.

###### `using` Declaration

For example, the using declaration of `Jill::fetch` in `main()` adds fetch to the
declarative region defined by `main()`.

After making this declaration, you can use the name `fetch` instead of `Jill::fetch`.

```cpp
namespace Jill {
    double bucket(double n) { ... }
    double fetch;
    struct Hill { ... };
}
char fetch;
int main()
{
using Jill::fetch;  // put fetch into local namespace
    double fetch;   // Error! Already have a local fetch
    cin >> fetch;   // read a value into Jill::fetch
    cin >> ::fetch; // read a value into global fetch
    ...
}
```

###### `using` Directive

```cpp
using namespace Jack; // make all the names in Jack available
```

##### More Namespace Features

You can nest namespace declarations, like this:

```cpp
namespace elements
{
    namespace fire
    {
        int flame;
        ...
    }
    float water;
}
```

Also you can use using directives and using declarations inside namespaces, like this:

```cpp
namespace myth
{
    using Jill::fetch;
    using namespace elements;
    using std::cout;
    using std::cin;
}
```

Suppose you want to access `Jill::fetch`. Because `Jill::fetch` is now part of the
`myth` namespace, where it can be called `fetch`, you can access it this way:

```cpp
std::cin >> myth::fetch;
std::cout << Jill::fetch; // display value read into myth::fetch
```

`unnamed namespace`:

```cpp
namespace // unnamed namespace
{
    int ice; // internal linkage
    int bandycoot;
}
```

This code behaves as if it were followed by a using directive; that is, the names
declared in this namespace are in potential scope until the end of the declarative region
that contains the unnamed namespace

##### Namespace's Program Example

<details><summary>
Explanation:
</summary>

The first file in this example (see Listing 9.11) is a header file that contains some
items normally found in header files—constants, structure definitions, and function prototypes.
In this case, the items are placed in two namespaces.The first namespace, pers, contains
a definition of a Person structure, plus prototypes for a function that fills a structure
with a person’s name and a function that displays the structure’s contents.The second
namespace, debts, defines a structure for storing the name of a person and the amount of
money owed to that person.This structure uses the Person structure, so the debts namespace
has a using directive to make the names in the pers namespace available in the
debts namespace.The debts namespace also contains some prototypes.

The second file in this example (see Listing 9.12) follows the usual pattern of having a
source code file provide definitions for functions prototyped in a header file.The function
names, which are declared in a namespace, have namespace scope, so the definitions need
to be in the same namespace as the declarations.This is where the open nature of namespaces
comes in handy.The original namespaces are brought in by including namesp.h
(refer to Listing 9.11).The file then adds the function definitions to the two namespaces,
as shown in Listing 9.12.Also the namesp.cpp file illustrates bringing in elements of the
std namespace with the using declaration and the scope-resolution operator.

Finally, the third file of this program (see Listing 9.13) is a source code file that uses
the structures and functions declared and defined in the namespaces. Listing 9.13 shows
several methods of making the namespace identifiers available.

</details><br>

<details><summary>
     <a href="./programs/namesp.h">
     namesp.h </a>
    </summary>
<figure>
        <iframe
        src="./programs/newplace.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/namesp.cpp">
     namesp.cpp - namespaces </a>
    </summary>
<figure>
        <iframe
        src="./programs/namesp.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/usenmsp.cpp">
     usenmsp.cpp - using namespaces </a>
    </summary>
<figure>
        <iframe
        src="./programs/usenmsp.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

##### Namespace's using guidlines

- Use variables in a named namespace instead of using external global variables.
- Use variables in an unnamed namespace instead of using static global variables.
- If you develop a library of functions or classes, place them in a namespace. Indeed,
C++ currently already calls for placing standard library functions in a namespace
called std.This extends to functions brought in from C. For example, the `math.c`
header file, which is C-compatible, doesn’t use namespaces, but the C++ `cmath`
header file should place the various math library functions in `the` std namespace.
- Use the `using` directive only as a temporary means of converting old code to
namespace usage.
- Don’t use `using` directives in header files; for one thing, doing so conceals which
names are being made available.Also the ordering of header files may affect
behavior. If you use a `using` directive, place it after all the preprocessor `#include`
directives.
- Preferentially import names by using the scope-resolution operator or a `using`
declaration.
- Preferentially use local scope instead of global scope for `using` declarations.

Bear in mind that the main motivation for using namespaces is to simplify management
of large programming projects. For simple, one-file programs, using a `using` directive
is no great sin.

---

### Chapter 9: Review

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

### Chapter 9: Programming Exercises

1. [Main](./exercises/exercise_ch9_1_main.cpp) [golf.cpp - Prototypes](./exercises/exercise_ch9_1_golf.cpp) [holf.h - Headers](./exercises/exercise_ch9_1_golf.h)

(compile: `g++ exercise_ch9_1_golf.cpp exercise_ch9_1_main.cpp`)

Here is a header file:

```cpp
// golf.h -- for pe9-1.cpp
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc);

// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);

// function resets handicap to new value
void handicap(golf & g, int hc);

// function displays contents of golf structure
void showgolf(const golf & g);
```

Note that setgolf() is overloaded. Using the first version of setgolf() would
look like this:

```cpp
golf ann;
setgolf(ann, "Ann Birdfree", 24);
```

The function call provides the information that’s stored in the ann structure. Using
the second version of setgolf() would look like this:

```cpp
golf andy;
setgolf(andy);
```

The function would prompt the user to enter the name and handicap and store
them in the `andy` structure. This function could (but doesn’t need to) use the first
version internally.

Put together a multifile program based on this header. One file, named `golf.cpp`,
should provide suitable function definitions to match the prototypes in the header
file. A second file should contain `main()` and demonstrate all the features of the
prototyped functions. For example, a loop should solicit input for an array of golf
structures and terminate when the array is full or the user enters an empty string
for the golfer’s name. The `main()` function should use only the prototyped functions
to access the golf structures.

[2.](./exercises/exercise_ch9_2.cpp)

Redo Listing 9.9 (`static.cpp`), replacing the character array with a string object. The program
should no longer have to check whether the input string fits, and it can compare
the input string to "" to check for an empty line.

[3.](./exercises/exercise_ch9_3.cpp)

Begin with the following structure declaration:

```cpp
struct chaff
{
    char dross[20];
    int slag;
};
```

Write a program that uses placement new to place an array of two such structures in
a buffer. Then assign values to the structure members (remembering to use
strcpy() for the char array) and use a loop to display the contents. Option 1 is to
use a static array, like that in Listing 9.10 ([newplace.cpp](./programs/newplace.cpp)), for the buffer. Option 2 is to use regular
new to allocate the buffer.

[4.](./exercises/exercise_ch9_4.cpp) [Prototypes](./exercises/exercise_ch9_4_sales.cpp) [Headers](./exercises/exercise_ch9_4_sales.h)

Write a three-file program based on the following namespace:

```cpp
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    // copies the lesser of 4 or n items from the array ar
    // to the sales member of s and computes and stores the
    // average, maximum, and minimum values of the entered items;
    // remaining elements of sales, if any, set to 0
    void setSales(Sales & s, const double ar[], int n);
    // gathers sales for 4 quarters interactively, stores them
    // in the sales member of s and computes and stores the
    // average, maximum, and minimum values
    void setSales(Sales & s);
    // display all information in structure s
    void showSales(const Sales & s);
}
```

The first file should be a header file that contains the namespace.The second file
should be a source code file that extends the namespace to provide definitions for
the three prototyped functions. The third file should declare two Sales objects. It
should use the interactive version of setSales() to provide values for one structure
and the non-interactive version of setSales() to provide values for the second
structure. It should display the contents of both structures by using
showSales().

## Chapter 10

<details><summary>
List of what you will learn
</summary>

```sh
 - Procedural and object-oriented programming
 - The concept of classes
 - How to define and implement a class
 - Public and private class access
 - Class data members
 - Class methods (also called class function members)
 - Creating and using class objects
 - Class constructors and destructors
 - const member functions
 - The this pointer
 - Creating arrays of objects
 - Class scope
 - Abstract data types
```

</details><br>

Object-oriented programming (OOP) is a particular conceptual approach to designing
programs, and C++ has enhanced C with features that ease the way to applying that
approach.The following are the most important OOP features:

- Abstraction
- Encapsulation and data hiding
- Polymorphism
- Inheritance
- Reusability of code

### Abstraction and Classes

Abstraction is the crucial step of representing information in terms of its interface with the user. That is, you
abstract the essential operational features of a problem and express a solution in those
terms. In the softball statistics example, the interface describes how the user initializes,
updates, and displays the data. From abstraction, it is a short step to the user-defined type,
which in C++ is a class design that implements the abstract interface

---

Basic data type does three things:

- It determines how much memory is needed for a data object.
- It determines how the bits in memory are interpreted. (A long and a float might
use the same number of bits in memory, but they are translated into numeric values
differently.)
- It determines what operations, or methods, can be performed using the data object.

`class` is a C++ vehicle for translating an abstraction to a user-defined type. It combines
data representation and methods for manipulating that data into one neat package.

`Interface` - shared framework for interactions between two systems—for instance,
between a computer and a printer or between a user and a computer program.

### Access Control

Also new are the keywords private and public. These labels describe access control for
class members.Any program that uses an object of a particular class can access the public
portions directly. A program can access the private members of an object only by using the
public member functions.
This insulation of data from direct access by a pro-
gram is called `data hiding`

### Implementing Class Member Functions

Member function
definitions are much like regular function definitions. Each has a function header and a
function body. Member function definitions can have return types and arguments. But
they also have two special characteristics:

- When you define a member function, you use the scope-resolution operator (::) to
identify the class to which the function belongs.
- Class methods can access the private components of the class.

This notation means you are defining the `update()` function that is a member of the `Stock` class:

```cpp
void Stock::update(double price)
```

Method can access the private members of a class.

Any function with a definition in the class declaration automatically becomes an inline function.

You can define a member function outside the class declaration and still
make it inline.To do so, you just use the inline qualifier

---

-- 001 png 

<details><summary>
The Client/Server model
</summary>

OOP programmers often discuss program design in terms of a client/server model. In this
conceptualization, the client is a program that uses the class. The class declaration, includ-
ing the class methods, constitute the server, which is a resource that is available to the pro-
grams that need it. The client uses the server through the publicly defined interface only.
This means that the client’s only responsibility, and, by extension, the client’s programmer’s
only responsibility, is to know that interface. The server’s responsibility, and, by extension,
the server’s designer’s responsibility, is to see that the server reliably and accurately per-
forms according to that interface.

</details>

Change of precision for vars

```cpp
void Stock::show()
{
    using std::cout;
    using std::ios_base;

    // set format to #.###
    ios_base::fmtflags orig =
    cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Company: " << company
    << " Shares: " << shares << ‘\n’;
    cout << " Share Price: $" << share_val;

    // set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_val << ‘\n’;

    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
```

### Class Constructors and Destructors

you need to devise an appropriate member function if you’re to suc-
ceed in initializing an object. (You could initialize a class object as just shown if you made
the data members public instead of private, but making the data public goes against one of
the main justifications for using classes: data hiding.)

C++ uses a class constructor whenever you create an object of that class, even when
you use new for dynamic memory allocation. Here’s how to use the constructor with new:

```cpp
Stock *pstock = new Stock("Electroshock Games", 18, 19.0);
```

A `default constructor` is a constructor that is used to create an object when you don’t provide
explicit initialization values.That is, it’s a constructor used for declarations like this:

```cpp
Stock fluffy_the_cat;
// uses the default constructor
```

The `destructor` should clean
up any debris, so it actually serves a useful purpose. For example, if your constructor uses
`new` to allocate memory, the `destructor` should use delete to free that memory.

A destructor must have no arguments. Thus, the prototype for a Stock
destructor must be this:

```cpp
~Stock();
```

Because a Stock destructor has no vital duties, you can code it as a do-nothing function:

```cpp
Stock::~Stock()
{
}
```

<details><summary>
Member Names and Parameter Names
</summary>
Often those new to constructors try to use the class member names as parameter names
in the constructor, as in this example:

```cpp
// NO!
Stock::Stock(const string & company, long shares, double share_val)
{...}
```

This is wrong. The constructor arguments don’t represent the class members; they repre-
sent values that are assigned to the class members. Thus, they must have distinct names,
or you end up with confusing code like this:

```cpp
shares = shares;
```

</details>

<details><summary>
     <a href="./programs/stock10.cpp">
     stock10.cpp - Implementation of a Stock class program file </a>
    </summary>
<figure>
        <iframe
        src="./programs/stock10.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
     <a href="./programs/usestock1.cpp">
     usestock1.cpp - Client file </a>
    </summary>
<figure>
        <iframe
        src="./programs/usestock1.cpp"
            frameborder="10"
            allowfullscreen="true"
            height="300px"
            width="100%">
        </iframe>
    </figure>
</details><br>

<details><summary>
Note
</summary>

You may have noticed that `Client file` has an extra brace at the beginning and near the end
of main(). Automatic variables such as stock1 and stock2 expire when the program exits
the block that contains their definitions. Without the extra braces, that block would be the
body of main(), so the destructors would not be called until after main() completed execu-
tion. In a windowing environment, this would mean that the window would close before the
last two destructor calls, preventing you from seeing the last two messages. But with the
braces, the last two destructor calls occur before the return statement is reached, so the
messages are displayed.
</details>

### C++11 List Initialization

With C++11, can you use the list-initialization syntax with classes? Yes, you can, providing
the brace contents match the argument list of a constructor:

```cpp
Stock hot_tip = {"Derivatives Plus Plus", 100, 45.0};
Stock jock {"Sport Age Storage, Inc"};
Stock temp {};
```

The braced lists in the first two declarations match the following constructor:
Therefore, that constructor will be used to create the two objects.

```cpp
Stock::Stock(const std::string & co, long n = 0, double pr = 0.0);
```

### const Member Functions

Consider the following code snippet:

```cpp
const Stock land = Stock("Kludgehorn Properties");
land.show();
```

With current C++, the compiler should object to the second line.Why? Because the
code for show() fails to guarantee that it won’t modify the invoking object, which,
because it is const, should not be altered.

That is, the show() declaration should look like this:

```cpp
void show() const;          // promises not to change invoking object
```

Similarly, the beginning of the function definition should look like this:

```cpp
void stock::show() const    // promises not to change invoking object
```

Class functions declared and defined this way are called const member functions.

### The `this` Pointer

Suppose, then, that you want to compare the Stock objects stock1 and stock2 and
assign the one with the greater total value to the object top.You can use either of the fol-
lowing statements to do so:

```cpp
top = stock1.topval(stock2);
top = stock2.topval(stock1);
```

Here’s a partial implementation that highlights the problem:

```cpp
const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;       // argument object
    else
        return ?????;   // invoking object -> should be *this
}
```

`*this` is as an alias for the invoking object.
The fact that the return type is a reference means that the returned object is the
invoking object itself rather than a copy passed by the return mechanism.

### An Array of Objects

```cpp
Stock mystuff[4]; // creates an array of 4 Stock object
const Stock * tops = mystuff[2].topval(mystuff[1]);
    // compare 3rd and 2nd elements and set tops
    // to point at the one with a higher total value

    // You can use a constructor to initialize the array elements
const int STKS = 4;
Stock stocks[STKS] = {
    Stock("NanoSmart", 12.5, 20),
    Stock("Boffo Objects", 200, 2.0),
    Stock("Monolithic Obelisks", 130, 3.25),
    Stock("Fleep Enterprises", 60, 6.5)
};
```

### Abstract Data Types

Using classes is a good way to implement what computer scientists describe as abstract data types (ADTs)
ADT describes a data type in a general fashion without bringing in language or implementa-
tion details.

---

### Chapter 10: Review

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


<!-- --------------------------------------------------------------------------------- -->
```sh
./programs/

# str 447 Begin (ch 9) 501 -> 497 Summary 
# Chapter 9 Review : 7
Chapter 9 Exercises: 4

str 505 Begin (ch 10) -> 557 Summary 
Chapter 10 Review : 10
Chapter 10 Exercises: 8

str 563 Begin (ch 11) -> 621 Summary 
Chapter 11 Review : 7
Chapter 11 Exercises: 7

ch 12 - dynamic memory
ch 13 - class inheritance 
ch 14 - reusing code in c++ 
ch 15 - friends, exemptions, and more
ch 16 - string class and STL 
ch 17 - input, output and files 
ch 18 - the new c++ standard


## Chapter 4

<details><summary>
        List of what you will learn
</summary>

```cpp

```

</details>

### Chapter Review

<!-- -------------------------------------------- -->

Notes\C++PrimerPlus\exercises\

<details><summary>
!!!!!Question!!!!!
</summary>
!!!!!Answer!!!!!
</details>

### Programming Exercises

[1.](./exercises/exercise_ch4_1.cpp)
