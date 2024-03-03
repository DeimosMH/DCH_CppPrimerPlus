# Exercises

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

1 -
Write a C++ program that displays your name and address (or if you value your
privacy,a fictitious name and address).

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_1.cpp)
    <!--/codeinclude-->

2 - Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)
??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_2.cpp)
    <!--/codeinclude-->

3 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_3.cpp)
    <!--/codeinclude-->

4 -
Write a program that asks the user to enter his or her age.
The program then should display the age in months:

```sh
Enter your age: 29
Your age in months is 384.
```

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_4.cpp)
    <!--/codeinclude-->

5 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_5.cpp)
    <!--/codeinclude-->
6 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_6.cpp)
    <!--/codeinclude-->

7 -
Write a program that asks the user to enter an hour value and a minute value.
The `main()` function should then pass these two values to a type `void`
function that displays the two values in the format shown in the following
sample run:

```sh
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
```

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter2/ch2_7.cpp)
    <!--/codeinclude-->

## Chapter 3

1 -
Write a short program that asks
for your height in integer inches and then converts your height to feet and inches.
Have the program use the underscore character to indicate where to type the response.
Also use a const symbolic constant to represent the conversion factor.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_1.cpp)
    <!--/codeinclude-->
2 -
Write a short program that asks for your
height in feet and inches and your weight in pounds. (Use three variables to store
the information.) Have the program report your body mass index (BMI).To calculate
the BMI, first convert your height in feet and inches to your height in inches
(1 foot = 12 inches). Then convert your height in inches to your height in meters
by multiplying by 0.0254.Then convert your weight in pounds into your mass in kilograms
by dividing by 2.2. Finally, compute your BMI by dividing your mass in kilograms
by the square of your height in meters. Use symbolic constants to represent the
various conversion factors.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_2.cpp)
    <!--/codeinclude-->

3 -
Write a program that asks the user to enter
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_3.cpp)
    <!--/codeinclude-->

4 -
Write a program that asks the user to enter
the number of seconds as an integer value (use type long, or, if available, long long)
and that then displays the equivalent time in days, hours, minutes, and seconds.
Use symbolic constants to represent the number of hours in the day, the number of
minutes in an hour, and the number of seconds in a minute.The output should look
like this:

```cpp
Enter the number of seconds: 31600000 
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
```

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_4.cpp)
    <!--/codeinclude-->

5 -
Write a program that requests the user to
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_5.cpp)
    <!--/codeinclude-->

6 -
Write a program that asks how many miles you
have driven and how many gallons of gasoline you have used and then reports the miles
per gallon your car has gotten. Or, if you prefer, the program can request distance
in kilometers and petrol in liters and then report the result European style,
in liters per 100 kilometers.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_6.cpp)
    <!--/codeinclude-->

7 -
Write a program that asks you to enter an
automobile gasoline consumption figure in the European style (liters per 100 kilometers)
and converts to the U.S. style of miles per gallon. Note that in addition to using
different units of measurement, the U.S. approach (distance / fuel) is the
inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.
Thus, 19 mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_7.cpp)
    <!--/codeinclude-->

## Chapter 4

1 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter3/ch3_7.cpp)
    <!--/codeinclude-->

2 -
Rewrite Listing 4.4, using the C++ string class instead of char arrays.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_2.cpp)
    <!--/codeinclude-->

3 -
Write a program that asks the user to enter his or her first name and then last name,
and that then constructs, stores, and displays a third string, consisting of the
user’s last name followed by a comma, a space, and first name. Use char arrays and
functions from the cstring header file.A sample run could look like this:

```cpp
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
```

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_3.cpp)
    <!--/codeinclude-->

4 -
Write a program that asks the user to enter his or her first name and then last name,
and that then constructs, stores, and displays a third string consisting of the user’s
last name followed by a comma, a space, and first name. Use string objects and methods
from the string header file. A sample run could look like this:

```cpp
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip
```

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_4.cpp)
    <!--/codeinclude-->

5 -
The CandyBar structure contains three members. The first member holds the brand name of a candy bar.
The second member holds the weight (which may have a fractional part) of the candy bar,
and the third member holds the number of calories (an integer value) in the candy bar.
Write a program that declares such a structure and creates a CandyBar variable called snack,
initializing its members to "Mocha Munch", 2.3, and 350, respectively.The initialization should
be part of the declaration for snack.
Finally, the program should display the contents of the snack variable.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_5.cpp)
    <!--/codeinclude-->

6 -
The CandyBar structure contains three members,
as described in Programming Exercise 5.Write a program that creates an array of
three CandyBar structures, initializes them to values of your choice, and then
displays the contents of each structure.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_6.cpp)
    <!--/codeinclude-->

7 -
William Wingate runs a pizza-analysis service.
For each pizza, he needs to record the following information:

- The name of the pizza company, which can consist of more than one word
- The diameter of the pizza
- The weight of the pizza

Devise a structure that can hold this information and write a program that uses
a structure variable of that type.The program should ask the user to enter
each of the preceding items of information, and then the program should display
that information. Use cin (or its methods) and cout.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_7.cpp)
    <!--/codeinclude-->

8 -
Do Programming Exercise 7 but use new to allocate a structure instead of
declaring a structure variable. Also have the program request the pizza
diameter before it requests the pizza company name.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_8.cpp)
    <!--/codeinclude-->

9 -
Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_9.cpp)
    <!--/codeinclude-->

10 -
Write a program that requests the user to enter three times for the 40-yd dash
(or 40-meter, if you prefer) and then displays the times and the average.
Use an array object to hold the data. (Use a built-in array if array is not available.)

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter4/ch4_10.cpp)
    <!--/codeinclude-->

## Chapter 5

1 -
Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_1.cpp)
    <!--/codeinclude-->

2 -
Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_2.cpp)
    <!--/codeinclude-->

3 -
Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_3.cpp)
    <!--/codeinclude-->

4 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_4.cpp)
    <!--/codeinclude-->

5 -
You sell the book C++ for Fools. Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_5.cpp)
    <!--/codeinclude-->

6 -
Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_6.cpp)
    <!--/codeinclude-->

7 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_7.cpp)
    <!--/codeinclude-->

8 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_8.cpp)
    <!--/codeinclude-->

9 -
Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_9.cpp)
    <!--/codeinclude-->

10 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter5/ch5_10.cpp)
    <!--/codeinclude-->

## Chapter 6

1 -
Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits,
converting each uppercase character to lowercase, and vice versa. (Don’t forget the <code>cctype</code> family.)

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_1.cpp)
    <!--/codeinclude-->

2 -
Write a program that reads up to 10 donation values into an array of double.
(Or, if you prefer, use an array template object.) The program should terminate
input on non-numeric input. It should report the average of the numbers and also
report how many numbers in the array are larger than the average.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_2.cpp)
    <!--/codeinclude-->

3 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_3.cpp)
    <!--/codeinclude-->

4 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_4.cpp)
    <!--/codeinclude-->

5 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_5.cpp)
    <!--/codeinclude-->

6 -
Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter
the number of contributors and then solicit the user to enter the name and
contribution of each contributor.The information should be stored in a dynamically
allocated array of structures. Each structure should have two members:
a character array (or else a `string` object) to store the name and a `double`
member to hold the amount of the contribution.After reading all the data,
the program should display the names and amounts donated for all donors
who contributed $10,000 or more. This list should be headed by the label
Grand Patrons.After that, the program should list the remaining donors.
That list should be headed Patrons. If there are no donors in one of the categories,
the program should print the word “none”. Aside from displaying two categories,
the program need do no sorting.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_6.cpp)
    <!--/codeinclude-->

7 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_7.cpp)
    <!--/codeinclude-->

8 -
Write a program that opens a text file, reads it character-by-character to the
end of the file, and reports the number of characters in the file.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_8.cpp)
    <!--/codeinclude-->

9 -
Do Programming Exercise 6 but modify it to get information from a file. The first
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter6/ch6_9.cpp)
    <!--/codeinclude-->

## Chapter 7

1 -
Write a program that repeatedly asks the user to enter pairs of numbers until at least one of the pair is 0.
For each pair, the program should use a function to calculate the harmonic mean of the numbers.
The function should return the answer to `main()`, which should report the result. The harmonic mean of the
numbers is the inverse of the average of the inverses and can be calculated as follows:
$$HarmonicMean = 2.0 × x × y / (x + y)$$

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_1.cpp)
    <!--/codeinclude-->

2 -
Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_2.cpp)
    <!--/codeinclude-->

3 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_3.cpp)
    <!--/codeinclude-->

4 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_4.cpp)
    <!--/codeinclude-->

5 -
Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_5.cpp)
    <!--/codeinclude-->

6 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_6.cpp)
    <!--/codeinclude-->

7 -
Redo Listing 7.7 (arrfun3), modifying the three array-handling functions to each use two
pointer parameters to represent a range. The `fill_array()` function, instead of
returning the actual number of items read, should return a pointer to the location
after the last location filled; the other functions can use this pointer as the second
argument to identify the end of the data.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_7.cpp)
    <!--/codeinclude-->

8 -
Redo Listing 7.15 (arrobj) without using the array class. Do two versions:

a. Use an ordinary array of `const char *` for the strings representing the season
names, and use an ordinary array of double for the expenses.

b. Use an ordinary array of `const char *` for the strings representing the season
names, and use a structure whose sole member is an ordinary array of
double for the expenses. (This design is similar to the basic design of the
array class.)

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_8.cpp)
    <!--/codeinclude-->

9 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_9.cpp)
    <!--/codeinclude-->

10 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter7/ch7_10.cpp)
    <!--/codeinclude-->

## Chapter 8

1 -
Write a function that normally takes one argument, the address of a string, and
prints that string once. However, if a second, type int, argument is provided and is
nonzero, the function should print the string a number of times equal to the number
of times that function has been called at that point. (Note that the number of
times the string is printed is not equal to the value of the second argument; it is
equal to the number of times the function has been called.) Yes, this is a silly function,
but it makes you use some of the techniques discussed in this chapter. Use the
function in a simple program that demonstrates how the function works.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_1.cpp)
    <!--/codeinclude-->

2 -
The `CandyBar` structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that uses a function that takes
as arguments a reference to CandyBar, a pointer-to-char, a double, and an `int` and
uses the last three values to set the corresponding members of the structure. The last
three arguments should have default values of “Millennium Munch,” 2.85, and 350.
Also the program should use a function that takes a reference to a `CandyBar` as an
argument and displays the contents of the structure. Use `const` where appropriate.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_2.cpp)
    <!--/codeinclude-->

3 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_3.cpp)
    <!--/codeinclude-->

4 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_4.cpp)
    <!--/codeinclude-->

5 -
Write a template function `max5()` that takes as its argument an array of five items
of type `T` and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_5.cpp)
    <!--/codeinclude-->

6 -
Write a template function `maxn()` that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template
with an array of six int value and an array of four double values.The program
should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_6.cpp)
    <!--/codeinclude-->

7 -
Modify Listing 8.14 (tempover) so that it uses two template functions called `SumArray()` to
return the sum of the array contents instead of displaying the contents.The program
now should report the total number of things and the sum of all the debts

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter8/ch8_7.cpp)
    <!--/codeinclude-->

## Chapter 9

1 -
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

(compile: `g++ ch9_1_golf.cpp ch9_1_main.cpp`)

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_1_golf.cpp)
    <!--/codeinclude-->

??? note "Code - headers"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_1_golf.h)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_1_main.cpp)
    <!--/codeinclude-->

2 -
Redo Listing 9.9 (`static.cpp`), replacing the character array with a string object. The program
should no longer have to check whether the input string fits, and it can compare
the input string to "" to check for an empty line.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_2.cpp)
    <!--/codeinclude-->

3 -
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
use a static array, like that in:

??? note "Listing 9.10:"
    <!--codeinclude-->
    [newplace.cpp](../programs/newplace.cpp)
    <!--/codeinclude-->

, for the buffer. Option 2 is to use regular
new to allocate the buffer.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_3.cpp)
    <!--/codeinclude-->

4-
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

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_4_sales.cpp)
    <!--/codeinclude-->

??? note "Code - headers"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_4_sales.h)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter9/ch9_4.cpp)
    <!--/codeinclude-->

## Chapter 10

1 -
Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_1.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_1.cpp)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_1_main.cpp)
    <!--/codeinclude-->

2 -
Here is a rather simple class definition:

```cpp
class Person {
private:
    static const LIMIT = 25;
    string lname; // Person’s last name
    char fname[LIMIT]; // Person’s first name
public:
    Person() {lname = ""; fname[0] = ‘\0’; } // #1
    Person(const string & ln, const char * fn = "Heyyou"); // #2
    // the following methods display lname and fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};
```

(It uses both a string object and a character array so that you can compare how
the two forms are used.)

Write a program that completes the implementation by
providing code for the undefined methods. The program in which you use the class
should also use the three possible constructor calls (no arguments, one argument,
and two arguments) and the two display methods. Here’s an example that uses the
constructors and methods:

```cpp
Person one;                         // use default constructor
Person two("Smythecraft");          // use #2 with one default argument
Person three("Dimwiddy", "Sam");    // use #2, no defaults
one.Show();
cout << endl;
one.FormalShow();
// etc. for two and three
```

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_2.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_2.cpp)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_2_main.cpp)
    <!--/codeinclude-->

3 -
Do Programming Exercise 1 from Chapter 9 but replace the code shown there with
an appropriate golf class declaration. Replace <code>setgolf(golf &, const char*,int)</code>
with a constructor with the appropriate argument for providing initial values.
Retain the interactive version of setgolf() but implement it by using the constructor.
(For example, for the code for <code>setgolf()</code>, obtain the data, pass the data to
the constructor to create a temporary object, and assign the temporary object to the
invoking object, which is <code>*this</code>.)

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_3_golf.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_3_golf.cpp)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_3_main.cpp)
    <!--/codeinclude-->

4 -
Do Programming Exercise 4 from Chapter 9 but convert the <code>Sales</code> structure and
its associated functions to a class and its methods. Replace the <code>setSales(Sales &, double [], int)</code>
function with a constructor. Implement the interactive <code>setSales(Sales &)</code> method by using the constructor.
Keep the class within the namespace <code>SALES</code>.

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_4_sales.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_4_sales.cpp)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_4.cpp)
    <!--/codeinclude-->

5 -
Consider the following structure declaration:

```cpp
struct customer {
    char fullname[35];
    double payment;
};
```

Write a program that adds and removes customer structures from a stack, represented
by a Stack class declaration. Each time a customer is removed, his or her
payment should be added to a running total, and the running total should be
reported.

Note: You should be able to use the Stack class unaltered; just change the
typedef declaration so that Item is type customer instead of unsigned long.

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_5_buisness.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_5_buisness.cpp)
    <!--/codeinclude-->

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_5.cpp)
    <!--/codeinclude-->

6 -
Here’s a class declaration:

```cpp
class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); // sets x, y to a, b
    showmove() const; // shows current x, y values
    Move add(const Move & m) const;
    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
    reset(double a = 0, double b = 0); // resets x,y to a, b
};
```

Create member function definitions and a program that exercises the class.

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_6_move.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_6_move.cpp)
    <!--/codeinclude-->

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_6.cpp)
    <!--/codeinclude-->

7 -
A Betelgeusean plorg has these properties:

```sh
Data
A plorg has a name with no more than 19 letters.
A plorg has a contentment index (CI), which is an integer.
Operations
A new plorg starts out with a name and a CI of 50.
A plorg’s CI can change.
A plorg can report its name and CI.
The default plorg has the name "Plorga".
```

Write a Plorg class declaration (including data members and member function prototypes)
that represents a plorg. Write the function definitions for the member functions.
Write a short program that demonstrates all the features of the Plorg class.

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_7_plorg.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_7_plorg.cpp)
    <!--/codeinclude-->

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_7.cpp)
    <!--/codeinclude-->

8 -
You can describe a simple list as follows:

- The simple list can hold zero or more items of some particular type.
- You can create an empty list.
- You can add items to the list.
- You can determine whether the list is empty.
- You can determine whether the list is full.
- You can visit each item in the list and perform some action on it.

As you can see, this list really is simple; it doesn’t allow insertion or deletion, for example. <br>
Design a List class to represent this abstract type. You should provide a <code>list.h</code>
header file with the class declaration and a <code>list.cpp</code> file with the class method
implementations. You should also create a short program that utilizes your design.<br>

The main reason for keeping the list specification simple is to simplify this programming
exercise.You can implement the list as an array or, if you’re familiar with
the data type, as a linked list. But the public interface should not depend on your
choice.That is, the public interface should not have array indices, pointers to nodes,
and so on. It should be expressed in the general concepts of creating a list, adding
an item to the list, and so on.The usual way to handle visiting each item and performing
an action is to use a function that takes a function pointer as an argument:

```cpp
void visit(void (*pf)(Item &));
```

Here <code>pf</code> points to a function (not a member function) that takes a reference to <code>Item</code>
argument, where <code>Item</code> is the type for items in the list.The <code>visit()</code> function applies
this function to each item in the list.You can use the <code>Stack</code> class as a general guide.

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_8.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_8_list.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter10/ch10_8_list.cpp)
    <!--/codeinclude-->

## Chapter 11

1 -
Modify Listing 11.15 (randwalk.cpp) so that it writes the successive locations of the random walker
into a file. Label each position with the step number.Also have the program write
the initial conditions (target distance and step size) and the summarized results to
the file.The file contents might look like this:

```cpp
Target Distance: 100, Step Size: 20
0: (x,y) = (0, 0)
1: (x,y) = (-11.4715, 16.383)
2: (x,y) = (-8.68807, -3.42232)
...
26: (x,y) = (42.2919, -78.2594)
27: (x,y) = (58.6749, -89.7309)
After 27 steps, the subject has the following location:
(x,y) = (58.6749, -89.7309)
or
(m,a) = (107.212, -56.8194)
Average outward distance per step = 3.97081
```

??? note "Program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_1.cpp)
    <!--/codeinclude-->

??? note "Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_1_vect.h)
    <!--/codeinclude-->

??? note "Methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_1_vect.cpp)
    <!--/codeinclude-->

2 -
Modify the <code>Vector</code> class header and implementation files (Listings 11.13 and 11.14)
so that the magnitude and angle are no longer stored as data components. Instead,
they should be calculated on demand when the <code>magval()</code> and <code>angval()</code> methods
are called. You should leave the public interface unchanged (the same public methods
with the same arguments) but alter the private section, including some of the
private method and the method implementations. Test the modified version with
Listing 11.15, which should be left unchanged because the public interface of the
<code>Vector</code> class is unchanged.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_2.cpp)
    <!--/codeinclude-->

??? note "Code - prototypes [Test with ch11_2_base.cpp]"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_2_vect.h)
    <!--/codeinclude-->

??? note "Code - methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_2_vect.cpp)
    <!--/codeinclude-->

3 -
Modify Listing 11.15 (randwalk.cpp) so that instead of reporting the results of a single trial for a
particular target/step combination, it reports the highest, lowest, and average number
of steps for N trials, where N is an integer entered by the user.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_3.cpp)
    <!--/codeinclude-->

4 -
Rewrite the final <code>Time</code> class example (`mytime2.h`, `mytime2.cpp`, and `usetime2.cpp`) so that all
the overloaded operators are implemented using friend functions.

??? note "Code - prototypes"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_4_time.h)
    <!--/codeinclude-->

??? note "Code - methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_4_time.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_4.cpp)
    <!--/codeinclude-->

5 -
Rewrite the <code>Stonewt</code> class (`stonewt.h` and `stonewt.cpp`) so that it has a <code>state member</code>
that governs whether the object is interpreted in stone form, integer pounds form,
or floating-point pounds form. Overload the <code><<</code> operator to replace the
<code>show_stn()</code> and <code>show_lbs()</code> methods. Overload the addition, subtraction, and
multiplication operators so that one can add, subtract, and multiply <code>Stonewt</code> values.
Test your class with a short program that uses all the class methods and friends.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_5.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_5_stone.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_5_stone.cpp)
    <!--/codeinclude-->

6 -
Rewrite the <code>Stonewt</code> class (`stonewt.h` and `stonewt.cpp`) so that it overloads all six
relational operators (>, >=, ==, <=, <, and != ). The operators should compare the pounds members and return
a type <code>bool</code> value. Write a program that declares an array of six <code>Stonewt</code> objects and
initializes the first three objects in the array declaration. Then it should use a loop
to read in values used to set the remaining three array elements. Then it should
report the smallest element, the largest element, and how many elements are greater
or equal to 11 stone. (The simplest approach is to create a <code>Stonewt</code> object initialized
to 11 stone and to compare the other objects with that object.)

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_6.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_6_stone.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_6_stone.cpp)
    <!--/codeinclude-->
7 -
A complex number has two parts: a `real part` and an `imaginary part`. One way to
write an imaginary number is this: `(3.0, 4.0)`. Here 3.0 is the real part and 4.0 is
the `imaginary part`. Suppose `a = (A,Bi)` and `c = (C,Di)`. Here are some complex
operations:

- Addition: `a + c = (A + C, (B + D)i)`
- Subtraction: `a - c = (A - C, (B - D)i)`
- Multiplication: `a × c = (A × C - B×D, (A×D + B×C)i)`
- Multiplication: `(x a real number): x × c = (x×C,x×Di)`
- Conjugation: `~a = (A, - Bi)`

Define a complex class so that the following program can use it with correct
results:

```cpp
#include <iostream>
#include "complex0.h" // to avoid confusion with complex.h

using namespace std;
int main()
{
    complex a(3.0, 4.0); // initialize to (3,4i)
    complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}
```

Note that you have to overload the <code><<</code> and <code>>></code> operators. Standard C++ already has
complex support — rather more extensive than in this example — in a complex
header file, so use <code>complex0.h</code> to avoid conflicts. Use <code>const</code> whenever warranted.

Here is a sample run of the program:

```sh
Enter a complex number (q to quit):
real: 10
imaginary: 12
c is (10,12i)
complex conjugate is (10,-12i)
a is (3,4i)
a + c is (13,16i)
a - c is (-7,-8i)
a * c is (-18,76i)
2 * c is (20,24i)
Enter a complex number (q to quit):
real: q
Done!
```

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_7.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_7_complex.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter11/ch11_7_complex.cpp)
    <!--/codeinclude-->

Note that <code>cin >> c</code>, through overloading, now prompts for real and imaginary parts.

## Chapter 12

1 -
Consider the following class declaration:

```cpp
class Cow
{
    char name[20];
    char *hobby;
    double weight;

public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow c &);
    Programming Exercises 703 ~Cow();
    Cow &operator=(const Cow &c);
    void ShowCow() const; // display all cow data
};
```

Provide the implementation for this class and write a short program that uses all the member functions.

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_1.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_1_cow.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_1_cow.cpp)
    <!--/codeinclude-->

2 -
Enhance the <code>String</code> class declaration (that is, upgrade <code>string1.h</code> to <code>string2.h</code>) by
doing the following:
    a. Overload the <code>+</code> operator to allow you to join two strings into one.
    b. Provide a <code>stringlow()</code> member function that converts all alphabetic characters
    in a string to lowercase. (Don’t forget the cctype family of character functions.)
    c. Provide a <code>stringup()</code> member function that converts all alphabetic characters in a string to uppercase.
    d. Provide a member function that takes a <code>char</code> argument and returns the number of times the character appears in the string.

Test your work in the following program:

??? note "Code - Program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_2.cpp)
    <!--/codeinclude-->

??? note "Code - Prototypes"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_2_str.h)
    <!--/codeinclude-->

??? note "Code - Methods"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_2_str.cpp)
    <!--/codeinclude-->

Test your work in the following program:

```cpp
// pe12_2.cpp
#include <iostream>
using namespace std;
#include "string2.h"

int main()
{
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2;              // overloaded << operator
    cin >> s3;               // overloaded >> operator
    s2 = "My name is " + s3; // overloaded =, + operators
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup(); // converts string to uppercase
    cout << "The string\n"
         << s2 << "\ncontains " << s2.has('A')
         << " 'A' characters in it.\n";
    s1 = "red"; // String(const char *),
    // then String & operator=(const String&)
    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow(); // converts string to lowercase
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i]) // overloaded == operator
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again!\n";
    }
    cout << "Bye\n";
    return 0;
}
```

Your output should look like this sample run:

```sh
Please enter your name: Fretta Farbo
My name is Fretta Farbo.
The string
MY NAME IS FRETTA FARBO AND I AM A C++ STUDENT.
contains 6 'A' characters in it.
Enter the name of a primary color for mixing light: yellow
Try again!
BLUE
That's right!
Bye
```

3 -
Rewrite the <code>Stock</code> class, as described in Listings 10.7 (stock20.h) and 10.8 (stock20.cpp) in Chapter 10 so
that it uses dynamically allocated memory directly instead of using <code>string</code> class
objects to hold the stock names. Also replace the <code>show()</code> member function with an
overloaded <code>operator<<()</code> definition. Test the new definition program in Listing
10.9 (usestok2.cpp).

??? note "Code - prototypes"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_3_stock.h)
    <!--/codeinclude-->

??? note "Code - methods"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_3_stock.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_3.cpp)
    <!--/codeinclude-->

4 -
Consider the following variation of the <code>Stack</code> class defined in Listing 10.10 (stack.h):

```cpp
// stack.h -- class declaration for the stack ADT
```

typedef unsigned long Item;

```cpp
class Stack
{
private:
    enum
    {
        MAX = 10
    };            // constant specific to class
    Item *pitems; // holds stack items
    int size;     // number of elements in stack
    int top;      // index for top stack item
public:
    Stack(int n = MAX); // creates stack with n elements
    Stack(const Stack &st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item &item); // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item &item); // pop top into item
    Stack &operator=(const Stack &st);
};
```

As the private members suggest, this class uses a dynamically allocated array to hold
the stack items. Rewrite the methods to fit this new representation and write a
program that demonstrates all the methods, including the copy constructor and
assignment operator.

??? note "Code - prototypes"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_4_stack.h)
    <!--/codeinclude-->

??? note "Code - methods"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_4_stack.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_4.cpp)
    <!--/codeinclude-->

5 -
The Bank of Heather has performed a study showing that ATM customers won’t
wait more than one minute in line. Using the simulation from Listing 12.10 (queue.h), find a
value for number of customers per hour that leads to an average wait time of one
minute. (Use at least a 100-hour trial period.)

??? note "Code - prototypes"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_5_queue.h)
    <!--/codeinclude-->

??? note "Code - methods"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_5_queue.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_5.cpp)
    <!--/codeinclude-->

6 -
The Bank of Heather would like to know what would happen if it added a second
ATM. Modify the simulation in this chapter so that it has two queues. Assume that
a customer will join the first queue if it has fewer people in it than the second
queue and that the customer will join the second queue otherwise. Again, find a
value for number of customers per hour that leads to an average wait time of one
minute. (Note:This is a nonlinear problem in that doubling the number of ATMs
doesn’t double the number of customers who can be handled per hour with a oneminute
wait maximum.)

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter12/ch12_6.cpp)
    <!--/codeinclude-->

## Chapter 13

1 -
Start with the following class declaration:

```cpp
// base class
class Cd
{ // represents a CD disk
private:
    char performers[50];
    char label[20];
    int selections;  // number of selections
    double playtime; // playing time in minutes
public:
    Cd(char *s1, char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    ~Cd();
    void Report() const; // reports all CD data
    Cd &operator=(const Cd &d);
};
```

Derive a <code>Classic</code> class that adds an array of <code>char</code> members that will hold a string
identifying the primary work on the `CD`. If the base class requires that any functions
be `virtual`, modify the base-class declaration to make it so. If a declared
method is not needed, remove it from the definition. Test your product with the
following program:

```cpp
#include <iostream>
using namespace std;
#include "classic.h" // which will contain #include cd.h
void Bravo(const Cd &disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
                         "Alfred Brendel", "Philips", 2, 57.17);
    Cd *pcd = &c1;
    cout << "Using object directly:\n";
    c1.Report(); // use Cd method
    c2.Report(); // use Classic method
    cout << "Using type cd * pointer to objects:\n";
    pcd->Report(); // use Cd method for cd object
    pcd = &c2;
    pcd->Report(); // use Classic method for classic object
    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    
    return 0;
}
void Bravo(const Cd &disk)
{
    disk.Report();
}
```

??? note "Code - CD `base` class prototypes"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_1_cd.h)
    <!--/codeinclude-->

??? note "Code - CD methods"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_1_cd.cpp)
    <!--/codeinclude-->

??? note "Code - Classic `derived` class prototypes"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_1_classic.h)
    <!--/codeinclude-->

??? note "Code - Classic methods"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_1_classic.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_1.cpp)
    <!--/codeinclude-->

2 -
Do Programming Exercise 1 but use dynamic memory allocation instead of fixedsize
arrays for the various strings tracked by the two classes.

??? note "Code - CD `base` class prototypes"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_2_cd.h)
    <!--/codeinclude-->

??? note "Code - CD methods"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_2_cd.cpp)
    <!--/codeinclude-->

??? note "Code - Classic `derived` class prototypes"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_2_classic.h)
    <!--/codeinclude-->

??? note "Code - Classic methods"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_2_classic.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_2.cpp)
    <!--/codeinclude-->

3 -
Revise the <code>baseDMA-lacksDMA-hasDMA</code> class hierarchy so that all three classes are
derived from an ABC. Test the result with a program similar to the one in Listing
13.10 (usebrass2.cpp). That is, it should feature an array of pointers to the ABC and allow the user
to make runtime decisions as to what types of objects are created. Add virtual
<code>View()</code> methods to the class definitions to handle displaying the data.

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_3_dma.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_3_dma.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_3.cpp)
    <!--/codeinclude-->

4 -
The Benevolent Order of Programmers maintains a collection of bottled port.
To describe it, the BOP Portmaster has devised a <code>Port</code> class, as declared here:

```cpp
#include <iostream>
using namespace std;
class Port
{
private:
    char *brand;
    char style[20]; // i.e., tawny, ruby, vintage
    int bottles;

public:
    Port(const char *br = "none", const char *st = "none", int b = 0);
    Port(const Port &p); // copy constructor
    virtual ~Port() { delete[] brand; }
    Port &operator=(const Port &p);
    Port &operator+=(int b); // adds b to bottles
    Port &operator-=(int b); // subtracts b from bottles, if
    available int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream &operator<<(ostream &os, const Port &p);
};
```

The <code>Show()</code> method presents information in the following format:

```sh
Brand: Gallo
Kind: tawny
Bottles: 20
```

The <code>operator<<()</code> function presents information in the following format (with no
newline character at the end):

```sh
Gallo, tawny, 20
```

The Portmaster completed the method definitions for the <code>Port</code> class and then
derived the <code>VintagePort</code> class as follows before being relieved of his position for
accidentally routing a bottle of ’45 Cockburn to someone preparing an experimental
barbecue sauce:

```cpp
class VintagePort : public Port // style necessarily = "vintage"
{
private:
    char *nickname; // i.e., "The Noble" or "Old Velvet", etc.
    int year;       // vintage year
public:
    VintagePort();
    VintagePort(const char *br, int b, const char *nn, int y);
    VintagePort(const VintagePort &vp);
    ~VintagePort() { delete[] nickname; }
    VintagePort &operator=(const VintagePort &vp);
    void Show() const;
    friend ostream &operator<<(ostream &os, const VintagePort &vp);
};
```

You get the job of completing the VintagePort work.

A. Your first task is to re-create the <code>Port</code> method definitions because the former
Portmaster immolated his upon being relieved.
B. Your second task is to explain why certain methods are redefined and others are not.
C. Your third task is to explain why <code>operator=()</code> and <code>operator<<()</code> are not virtual.
D. Your fourth task is to provide definitions for the <code>VintagePort</code> methods.

??? note "Code - class prototypes - Port"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_4_port.h)
    <!--/codeinclude-->

??? note "Code - class methods - Port"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_4_port.cpp)
    <!--/codeinclude-->

??? note "Code - class prototypes - VintagePort"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_4_vport.h)
    <!--/codeinclude-->

??? note "Code - class methods - VintagePort"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_4_vport.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter13/ch13_4.cpp)
    <!--/codeinclude-->

## Chapter 14

1 -
The <code>Wine</code> class has a <code>string</code> class object member (see Chapter 4) that holds the
name of a wine and a <code>Pair</code> object (as discussed in this chapter) of <code>valarray<int></code>
objects (as discussed in this chapter).The first member of each <code>Pair</code> object holds
the vintage years, and the second member holds the numbers of bottles owned for
the corresponding particular vintage year. For example, the first <code>valarray</code> object of
the <code>Pair</code> object might hold the years 1988, 1992, and 1996, and the second
<code>valarray</code> object might hold the bottle counts 24, 48, and 144. It may be convenient
for <code>Wine</code> to have an <code>int</code> member that stores the number of years. Also some
typedefs might be useful to simplify the coding:

```cpp
typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
```

Thus, the <code>PairArray</code> type represents type <code>Pair<std::valarray<int>,
std::valarray<int> </code>. Implement the <code>Wine</code> class by using containment. The class
should have a default constructor and at least the following constructors:

```cpp
// initialize label to l, number of years to y,
// vintage years to yr[], bottles to bot[]
Wine(const char * l, int y, const int yr[], const int bot[]);
// initialize label to l, number of years to y,
// create array objects of length y
Wine(const char * l, int y);
```

The <code>Wine</code> class should have a method <code>GetBottles()</code> that, given a <code>Wine</code> object with
<code>y</code> years, prompts the user to enter the corresponding number of vintage years and
bottle counts. A method <code>Label()</code> should return a reference to the wine name.
A method <code>sum()</code> should return the total number of bottles in the second
<code>valarray<int></code> object in the <code>Pair</code> object.

The program should prompt the user to enter a wine name, the number of elements
of the array, and the year and bottle count information for each array element.
The program should use this data to construct a <code>Wine</code> object and then display
the information stored in the object. For guidance, here’s a sample test program:

```cpp
// pe14-1.cpp -- using Wine class with containment
#include <iostream>
#include "winec.h"
int main(void)
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab, 50);
    
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs); // store label, years, give arrays yrs elements
    holding.GetBottles();   // solicit input for year, bottle count
    holding.Show();         // display object contents

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    // create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() // use Label() method
         << ": " << more.sum() << endl;          // use sum() method
    cout << "Bye\n";
    return 0;
}
```

```sh
And here’s some sample output:
Enter name of wine: Gully Wash
Enter number of years: 4
Enter Gully Wash data for 4 year(s):
Enter year: 1988
Enter bottles for that year: 42
Enter year: 1994
Enter bottles for that year: 58
Enter year: 1998
Enter bottles for that year: 122
Enter year: 2001
Enter bottles for that year: 144
Wine: Gully Wash
Year Bottles
1988 42
1994 58
1998 122
2001 144
Wine: Gushing Grape Red
Year Bottles
1993 48
1995 60
1998 72
Total bottles for Gushing Grape Red: 180
Bye
```

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_1_wine.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_1_wine.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_1.cpp)
    <!--/codeinclude-->


2 -
This exercise is the same as Programming Exercise 1, except that you should use private
inheritance instead of containment. Again, a few <code>typedefs<code> might prove handy.
Also you might contemplate the meaning of statements such as the following:

```cpp
PairArray::operator=(PairArray(ArrayInt(),ArrayInt()));
cout << (const string &)(*this);
```

The class should work with the same test program as shown in Programming
Exercise 1.

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_2_wine.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_2_wine.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_2.cpp)
    <!--/codeinclude-->

3 -
Define a <code>QueueTp</code> template. Test it by creating a queue of pointers-to-Worker (as
defined in Listing 14.10 <workermi.h>) and using the queue in a program similar to that in
Listing 14.12 <workmi.cpp>.

??? note "Code - classes prototypes of listing 14.10"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_3_listing.h)
    <!--/codeinclude-->

??? note "Code - classes methods of listing 14.10"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_3_listing.cpp)
    <!--/codeinclude-->

Methods like below will only work in the same place as prototypes

```cpp
template <typename T>
bool QueueTp<T>::method(){}
```

For template methods in files outside of a header, you need to use `template <>` with specified data recovered via `T`;

```cpp
template <>
QueueTp<Worker*>::Method(){}
``` 

??? note "Code - classes prototypes and methods"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_3_wk.h)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_3.cpp)
    <!--/codeinclude-->

Compile using:
```sh
g++ ch14_3.cpp ch14_3_listing.cpp 
```

4 -
A <code>Person</code> class holds the first name and the last name of a person. In addition to its
constructors, it has a <code>Show()</code> method that displays both names. A <code>Gunslinger</code> class
derives virtually from the Person class. It has a <code>Draw()</code> member that returns a type
double value representing a gunslinger’s draw time. The class also has an int member
representing the number of notches on a gunslinger’s gun. Finally, it has a
<code>Show()</code> function that displays all this information.</br></br>

A <code>PokerPlayer</code> class derives virtually from the Person class. It has a <code>Draw()</code> member
that returns a random number in the range 1 through 52, representing a card
value. (Optionally, you could define a <code>Card</code> class with suit and face value members
and use a Card return value for Draw().) The <code>PokerPlayer</code> class uses the Person
<code>show()</code> function.The <code>BadDude</code> class derives publicly from the <code>Gunslinger</code> and
PokerPlayer classes. It has a <code>Gdraw()</code> member that returns a bad dude’s draw time
and a <code>Cdraw()</code> member that returns the next card drawn. It has an appropriate
<code>Show()</code> function. Define all these classes and methods, along with any other necessary
methods (such as methods for setting object values) and test them in a simple
program similar to that in Listing 14.12.

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_4_ppl.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_4_ppl.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_4.cpp)
    <!--/codeinclude-->

5 -
Here are some class declarations:

```cpp
// emp.h -- header file for abstr_emp class and children
#include <iostream>
#include <string>

class abstr_emp
{
private:
    std::string fname; // abstr_emp's first name
    std::string lname; // abstr_emp's last name
    std::string job;

public:
    abstr_emp();
    abstr_emp(const std::string &fn, const std::string &ln,
              const std::string &j);
    virtual void ShowAll() const; // labels and shows all data
    virtual void SetAll();        // prompts user for values
    friend std::ostream &
    operator<<(std::ostream &os, const abstr_emp &e);
    // just displays first and last name
    virtual ~abstr_emp() = 0; // virtual base class
};
class employee : public abstr_emp
{
public:
    employee();
    employee(const std::string &fn, const std::string &ln,
             const std::string &j);
    virtual void ShowAll() const;
    virtual void SetAll();
};

class manager : virtual public abstr_emp
{
private:
    int inchargeof; // number of abstr_emps managed
protected:
    int InChargeOf() const { return inchargeof; } // output
    int &InChargeOf() { return inchargeof; }      // input
public:
    manager();
    manager(const std::string &fn, const std::string &ln,
            const std::string &j, int ico = 0);
    manager(const abstr_emp &e, int ico);
    manager(const manager &m);
    virtual void ShowAll() const;
    virtual void SetAll();
};

class fink : virtual public abstr_emp
{
private:
    std::string reportsto; // to whom fink reports
protected:
    const std::string ReportsTo() const { return reportsto; }
    std::string &ReportsTo() { return reportsto; }

public:
    fink();
    fink(const std::string &fn, const std::string &ln,
         const std::string &j, const std::string &rpo);
    fink(const abstr_emp &e, const std::string &rpo);
    fink(const fink &e);
    virtual void ShowAll() const;
    virtual void SetAll();
};
class highfink : public manager, public fink // management fink
{
public:
    highfink();
    highfink(const std::string &fn, const std::string &ln,
             const std::string &j, const std::string &rpo,
             int ico);
    highfink(const abstr_emp &e, const std::string &rpo, int ico);
    highfink(const fink &f, int ico);
    highfink(const manager &m, const std::string &rpo);
    highfink(const highfink &h);
    virtual void ShowAll() const;
    virtual void SetAll();
};
```

Note that the class hierarchy uses MI with a virtual base class, so keep in mind the
special rules for constructor initialization lists for that case.Also note the presence
of some protected-access methods.This simplifies the code for some of the
<code>highfink</code> methods. (Note, for example, that if <code>highfink::ShowAll()</code> simply
calls <code>fink::ShowAll()</code> and <code>manager::ShowAll()</code>, it winds up calling
<code>abstr_emp::ShowAll()</code> twice). Provide the class method implementations and test
the classes in a program. Here is a minimal test program:

```cpp
// pe14-5.cpp
// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
using namespace std;
#include "emp.h"
int main(void)
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew"); // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();
        
    return 0;
}
```


<details><summary>

1. Why is no assignment operator defined?
2. Why are <code>ShowAll()</code> and <code>SetAll()</code> virtual?
3. Why is <code>abstr_emp</code> a virtual base class?
4. Why does the <code>highfink</code> class have no data section?
5. Why is only one version of <code>operator<<()</code> needed?
6. What would happen if the end of the program were replaced with this code?

```cpp
abstr_emp tri[4] = {em, fi, hf, hf2};
for (int i = 0; i < 4; i++)
    tri[i].ShowAll();
```

</br></br>

</summary>

1. There is no allocation of data directly in class, thus deep copy is not necessary 
2. Method can be overridden in a derived class, enabling runtime polymorphism. 
"When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method."
3. Because one of the methods (in this case destructor) is a pure virtual function.
4. All necessary data is stored in objects of a 2 base classes, highfink only extend functional part of inherited classes and don't have new data
5. Because it is publicly inherited, thus can be used in any class that inherits it
6. You cannot declare ABC type of class directly.

</details>

```cpp
abstr_emp tri[4] = {em, fi, hf, hf2};
for (int i = 0; i < 4; i++)
    tri[i].ShowAll();
```

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_5_emp.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_5_emp.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter14/ch14_5.cpp)
    <!--/codeinclude-->

## Chapter 15

1 -
Modify the <code>Tv</code> and <code>Remote</code> classes as follows:
    a. Make them mutual friends.
    b. Add a state variable member to the <code>Remote</code> class that describes whether the
    remote control is in normal or interactive mode.
    c. Add a <code>Remote</code> method that displays the mode.
    d. Provide the <code>Tv</code> class with a method for toggling the new <code>Remote</code> member.
    This method should work only if the TV is in the on state.

Write a short program that tests these new features.

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_1_tv.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_1_tv.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_1.cpp)
    <!--/codeinclude-->

2 -
Modify Listing 15.11 (error4.cpp) so that the two exception types are classes derived from the
<code>logic_error</code> class provided by the <code><stdexcept></code> header file. Have each <code>what()</code>
method report the function name and the nature of the problem.The exception
objects need not hold the bad values; they should just support the <code>what()</code> method.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_2.cpp)
    <!--/codeinclude-->

3 -
This exercise is the same as Programming Exercise 2, except that the exceptions
should be derived from a base class (itself derived from <code>logic_error</code>) that stores the
two argument values, the exceptions should have a method that reports these values
as well as the function name, and a single <code>catch</code> block that catches the base-class
exemption should be used for both exceptions, with either exception causing the
loop to terminate.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_3.cpp)
    <!--/codeinclude-->

4 -
Listing 15.16 (use_sales.cpp) uses two <code>catch</code> blocks after each <code>try</code> block so that the <code>nbad_index</code>
exception leads to the <code>label_val()</code> method being invoked. Modify the program so
that it uses a single <code>catch</code> block after each <code>try</code> block and uses RTTI to handle
invoking <code>label_val()</code> only when appropriate.

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_4_sales.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_4_sales.cpp)
    <!--/codeinclude-->

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter15/ch15_4.cpp)
    <!--/codeinclude-->

## Chapter 16

1 -
A *palindrome* is a string that is the same backward as it is forward. For example,“tot”
and “otto” are rather short palindromes.Write a program that lets a user enter a
string and that passes to a <code>bool</code> function a reference to the string. The function
should return <code>true</code> if the string is a palindrome and <code>false</code> otherwise. At this point,
don’t worry about complications such as capitalization, spaces, and punctuation.
That is, this simple version should reject “Otto” and “Madam, I’m Adam.” Feel free
to scan the list of string methods in Appendix F for methods to simplify the task.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_1.cpp)
    <!--/codeinclude-->

2 -
Do the same problem as given in Programming Exercise 1 but do worry about
complications such as capitalization, spaces, and punctuation. That is,“Madam, I’m
Adam” should test as a palindrome. For example, the testing function could reduce
the string to “madamimadam” and then test whether the reverse is the same. Don’t
forget the useful <code>cctype</code> library. You might find an STL function or two useful
although not necessary.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_2.cpp)
    <!--/codeinclude-->

3 -
Redo Listing 16.3 (hangman.cpp) so that it gets it words from a file. One approach is to use a
<code>vector<string></code> object instead of an array of string. Then you can use
push_back() to copy how ever many words are in your data file into the
<code>vector<string></code> object and use the <code>size()</code> member to determine the length of
the word list. Because the program should read one word at a time from the file,
you should use the <code>>></code> operator rather than <code>getline()</code>. The file itself should contain
words separated by spaces, tabs, or new lines

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_3.cpp)
    <!--/codeinclude-->

??? note "File"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_3_words.txt)
    <!--/codeinclude-->

4 -
Write a function with an old-style interface that has this prototype:

```cpp
int reduce(long ar[], int n);
```

The actual arguments should be the name of an array and the number of elements
in the array. The function should sort an array, remove duplicate values, and return a
value equal to the number of elements in the reduced array. Write the function
using STL functions. (If you decide to use the general <code>unique()</code> function, note that
it returns the end of the resulting range.) Test the function in a short program.

??? note " "
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_4.cpp)
    <!--/codeinclude-->

5 -
Do the same problem as described in Programming Exercise 4, except make it a
template function:

```cpp
template <class T>
int reduce(T ar[], int n);
```

Test the function in a short program, using both a <code>long</code> instantiation and a string
instantiation.

??? note " "
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_5.cpp)
    <!--/codeinclude-->

6 -
Redo the example shown in Listing 12.12 (bank.cpp), using the STL <code>queue</code> template class
instead of the <code>Queue</code> class described in Chapter 12.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_6.cpp)
    <!--/codeinclude-->

7 -
A common game is the lottery card. The card has numbered spots of which a certain
number are selected at random. Write a <code>Lotto()</code> function that takes two arguments.
The first should be the number of spots on a lottery card, and the second
should be the number of spots selected at random. The function should return a
<code>vector< int ></code> object that contains, in sorted order, the numbers selected at random.
For example, you could use the function as follows:

```cpp
vector<int> winners;
winners = Lotto(51,6);
```

This would assign to <code>winners</code> a vector that contains six numbers selected randomly
from the range 1 through 51. Note that simply using <code>rand()</code> doesn’t quite do the
job because it may produce duplicate values. Suggestion: Have the function create a
vector that contains all the possible values, use <code>random_shuffle()</code>, and then use the
beginning of the shuffled vector to obtain the values. Also write a short program
that lets you test the function.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_7.cpp)
    <!--/codeinclude-->

8 -
Mat and Pat want to invite their friends to a party. They ask you to write a program that does the following:

- Allows Mat to enter a list of his friends’ names. The names are stored in a container and then displayed in sorted order.
- Allows Pat to enter a list of her friends’ names. The names are stored in a second container and then displayed in sorted order.
- Creates a third container that merges the two lists, eliminates duplicates, and displays the contents of this container.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_8.cpp)
    <!--/codeinclude-->

9 -
Compared to an array, a linked list features easier addition and removal of elements
but is slower to sort. This raises a possibility: Perhaps it might be faster to copy a list
to an array, sort the array, and copy the sorted result back to the list than to simply
use the list algorithm for sorting. (But it also could use more memory.) Test the
speed hypothesis with the following approach:

a. Create a large <code>vector<int></code> object vi0, using <code>rand()</code> to provide initial
values.
b. Create a second <code>vector< int ></code> object <code>vi</code> and a <code>list< int ></code> object li of the
same size as the original and initialize them to values in the original vector.
c. Time how long the program takes to sort <code>vi</code> using the STL <code>sort()</code> algorithm,
then time how long it takes to sort <code>li</code> using the list <code>sort()</code> method.
d. Reset <code>li</code> to the unsorted contents of <code>vi0</code>. Time the combined operation of
copying <code>li</code> to <code>vi</code>, sorting <code>vi</code>, and copying the result back to <code>li</code>.

To time these operations, you can use <code>clock()</code> from the <code>ctime</code> library.
As in Listing 5.14 (waiting.cpp), you can use this statement to start the first timing:

```cpp
clock_t start = clock();
```

Then use the following at the end of the operation to get the elapsed time:

```cpp
clock_t end = clock();
cout << (double)(end - start)/CLOCKS_PER_SEC;
```

This is by no means a definitive test because the results will depend on a variety of
factors, including available memory, whether multiprocessing is going on, and the
size of the array or list. (One would expect the relative efficiency advantage of the
array over the list to increase with the number of elements being sorted.) Also if
you have a choice between a default build and a release build, use the release build
for the measurement.With today’s speedy computers, you probably will need to use
as large an array as possible to get meaningful readings.You might try, for example,
100,000 elements, 1,000,000 elements, and 10,000,000 elements.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_9.cpp)
    <!--/codeinclude-->

10 -
Modify Listing 16.9 (vect3.cpp) as follows:

a. Add a <code>price</code> member to the <code>Review</code> structure.
b. Instead of using a vector of Review objects to hold the input, use a <code>vector</code>
of <code>shared_ptr< Review ></code> objects. Remember that a <code>shared_ptr</code> has to be
initialized with a pointer returned by <code>new</code>.
c. Follow the input stage with a loop that allows the user the following options
for displaying books: in original order, in alphabetical order, in order of
increasing ratings, in order of decreasing ratings, in order of increasing price,
in order of decreasing price, and quitting.</br>
Here’s one possible approach. After getting the initial input, create another vector of
<code>shared_ptrs</code> initialized to the original array. Define an <code>operator<()</code> function that
compares pointed-to structures and use it to sort the second vector so that the
<code>shared_ptrs</code> are in the order of the book names stored in the pointed-to objects.
Repeat the process to get vectors of <code>shared_ptrs</code> sorted by <code>rating</code> and by price.
Note that <code>rbegin()</code> and <code>rend()</code> save you the trouble of also creating vectors of
reversed order.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter16/ch16_10.cpp)
    <!--/codeinclude-->

## Chapter 17

1 -
Write a program that counts the number of characters up to the first `$` in input and
that leaves the `$` in the input stream.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_1.cpp)
    <!--/codeinclude-->

2 -
Write a program that copies your keyboard input (up to the simulated end-of-file)
to a file named on the command line.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_2.cpp)
    <!--/codeinclude-->

3 -
Write a program that copies one file to another. Have the program take the filenames
from the command line. Have the program report if it cannot open a file.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_3.cpp)
    <!--/codeinclude-->

4 -
Write a program that opens two text files for input and one for output.The program
should concatenate the corresponding lines of the input files, use a space as a
separator, and write the results to the output file. If one file is shorter than the other,
the remaining lines in the longer file should also be copied to the output file. For
example, suppose the first input file has these contents:

```sh
eggs kites donuts
balloons hammers
stones
```

And suppose the second input file has these contents:

```sh
zero lassitude
finance drama
```

The resulting file would have these contents:

```sh
eggs kites donuts zero lassitude
balloons hammers finance drama
stones
```

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_4.cpp)
    <!--/codeinclude-->

??? note "txt 1'st file"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_4_1.txt)
    <!--/codeinclude-->

??? note "txt 2'nd file"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_4_2.txt)
    <!--/codeinclude-->

5 -
Mat and Pat want to invite their friends to a party, much as they did in Programming
Exercise 8 in Chapter 16, except now they want a program that uses files.
They have asked you to write a program that does the following:

- Reads a list of Mat’s friends’ names from a text file called <code>mat.dat</code>, which lists
one friend per line. The names are stored in a container and then displayed in
sorted order.
- Reads a list of Pat’s friends’ names from a text file called <code>pat.dat</code>, which lists
one friend per line. The names are stored in a container and then displayed in
sorted order.
- Merges the two lists, eliminating duplicates and stores the result in the file
matnpat.dat, one friend per line.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_5.cpp)
    <!--/codeinclude-->

??? note "Pat dat"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_5_mat.dat)
    <!--/codeinclude-->

??? note "Mat dat"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_5_pat.dat)
    <!--/codeinclude-->

6 -
Consider the class definitions of Programming Exercise 5 in Chapter 14,“Reusing
Code in C++”. If you haven’t yet done that exercise, do so now. Then do the
following:

Write a program that uses standard C++ I/O and file I/O in conjunction with data
of types employee, manager, fink, and highfink, as defined in Programming Exercise
5 in Chapter 14. The program should be along the general lines of Listing 17.17
in that it should let you add new data to a file. The first time through, the program
should solicit data from the user, show all the entries, and save the information in a
file. On subsequent uses, the program should first read and display the file data, let the
user add data, and show all the data. One difference is that data should be handled by
an array of pointers to type employee.That way, a pointer can point to an employee
object or to objects of any of the three derived types. Keep the array small to facilitate
checking the program; for example, you might limit the array to 10 elements:

```cpp
const int MAX = 10; // no more than 10 objects
...
employee * pc[MAX];
```

For keyboard entry, the program should use a menu to offer the user the choice of
which type of object to create.The menu should use a switch to use <code>new</code> to create
an object of the desired type and to assign the object’s address to a pointer in the pc
array.Then that object can use the virtual <code>setall()</code> function to elicit the appropriate
data from the user:

```cpp
pc[i]->setall(); // invokes function corresponding to type of object
```

To save the data to a file, devise a virtual writeall() function for that purpose:

```cpp
for (i = 0; i < index; i++)
    pc[i]->writeall(fout);// fout ofstream connected to output file
```

<details><summary>
     Note
    </summary>

Use text I/O, not binary I/O, for Programming Exercise 6. (Unfortunately, virtual objects
include pointers to tables of pointers to virtual functions, and <code>write()</code> copies this information
to a file. An object filled by using <code>read()</code> from the file gets weird values for the function
pointers, which really messes up the behavior of virtual functions.) Use a newline character
to separate each data field from the next; this makes it easier to identify fields on input. Or
you could still use binary I/O, but not write objects as a whole. Instead, you could provide
class methods that apply the <code>write()</code> and <code>read()</code> functions to each class member individually
rather than to the object as a whole. That way, the program could save just the
intended data to a file.

</details>

The tricky part is recovering the data from the file. The problem is, how can the
program know whether the next item to be recovered is an <code>employee</code> object, a
<code>manager</code> object, a <code>fink</code> type, or a <code>highfink</code> type? One approach is, when writing
the data for an object to a file, precede the data with an integer that indicates the
type of object to follow.Then, on file input, the program can read the integer and
then use <code>switch</code> to create the appropriate object to receive the data:

```cpp
enum classkind
{
    Employee,
    Manager,
    Fink,
    Highfink
}; // in class header
... int classtype;
while ((fin >> classtype).get(ch)) // newline separates int from data
{ 
    switch (classtype)
    {
        case Employee:
            pc[i] = new employee;
                    : break;
```

Then you can use the pointer to invoke a virtual <code>getall()</code> function to read the
information:

```cpp
pc[i++]->getall();
```

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_6.cpp)
    <!--/codeinclude-->

??? note "Code - classes prototypes"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_6_emp.h)
    <!--/codeinclude-->

??? note "Code - classes methods"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_6_emp.cpp)
    <!--/codeinclude-->

7 -
Here is part of a program that reads keyboard input into a vector of <code>string</code> objects,
stores the string contents (not the objects) in a file, and then copies the file contents
back into a vector of <code>string</code> objects:

```cpp
int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;
    
    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);
    return 0;
}
```

Note that the file is opened in binary format and that the intention is that I/O be
accomplished with <code>read()</code> and <code>write()</code>. Quite a bit remains to be done:

- Write a <code>void ShowStr(const string &)</code> function that displays a string
object followed by a newline character.

- Write a <code>Store</code> functor that writes string information to a file.The Store
    constructor should specify an <code>ifstream</code> object, and the overloaded
    <code>operator()(const string &)</code> should indicate the string to write. A workable
    plan is to first write the string’s size to the file and then write the string
    contents. For example, if len holds the string size, you could use this:

    ```cpp
    os.write((char *)&len, sizeof(std::size_t)); // store length
    os.write(s.data(), len); // store characters
    ```

    The <code>data()</code> member returns a pointer to an array that holds the characters in
    the string. It’s similar to the <code>c_str()</code> member except that the latter appends a
    null character.

- Write a <code>GetStrs()</code> function that recovers information from the file. It can
use <code>read()</code> to obtain the size of a string and then use a loop to read that
many characters from the file, appending them to an initially empty temporary
string. Because a string’s data is private, you have to use a class method to
get data into the string rather than read directly into it.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter17/ch17_7.cpp)
    <!--/codeinclude-->

## Chapter 18

1 -
Here is part of a short program:

```cpp
int main()
{
    using namespace std;
    // list of double deduced from list contents
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;
    // list of int deduced from list contents
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
    // forced list of double
    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;
    return 0;
}
```

Complete the program by supplying the <code>average_list()</code> function. It should be a
template function, with the type parameter being used to specify the kind of
<code>initialized_list</code> template to be used as the function parameter and also to give
the function return type.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter18/ch18_1.cpp)
    <!--/codeinclude-->

2 -
Here is declaration for the <code>Cpmv</code> class:

```cpp
class Cpmv
{
public:
    struct Info
    {
        std::string qcode;
        std::string zcode;
    };

private:
    Info *pi;

public:
    Cpmv();
    Cpmv(std::string q, std::string z);
    Cpmv(const Cpmv &cp);
    Cpmv(Cpmv &&mv);
    ~Cpmv();
    Cpmv &operator=(const Cpmv &cp);
    Cpmv &operator=(Cpmv &&mv);
    Cpmv operator+(const Cpmv &obj) const;
    void Display() const;
};
```

The <code>operator+()</code> function should create an object whose <code>qcode</code> and <code>zcode</code> members
concatenate the corresponding members of the operands. Provide code that
implements move semantics for the move constructor and the move assignment
operator. Write a program that uses all the methods. For testing purposes, make the
various methods verbose so that you can see when they are used.

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter18/ch18_2.cpp)
    <!--/codeinclude-->

??? note "Code - class"
    <!--codeinclude-->
    [](../exercises/chapter18/ch18_2_cmpv.cpp)
    <!--/codeinclude-->

3 -
Write and test a variadic template function <code>sum_values()</code> that accepts an arbitrarily
long list of arguments with numeric values (they can be a mixture of types) and
returns the sum as a <code>long double</code> value

??? note "Code - program"
    <!--codeinclude-->
    [](../exercises/chapter18/ch18_3.cpp)
    <!--/codeinclude-->

4 -
Redo Listing 16.5 using lambdas. In particular, replace the <code>outint()</code> function with
a named lambda and replace the two uses of a functor with two anonymous lambda
expressions.

??? note " "
    <!--codeinclude-->
    <!-- [](../exercises/chapter18/) -->
    <!--/codeinclude-->
