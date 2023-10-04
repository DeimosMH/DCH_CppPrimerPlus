# Exercises

<button id="toggle-admonitions" class="md-button">Collapse All/Expand All Code</button>
<button id="collapse-all-code" class="md-button">Collapse All</button>

<script>
document.getElementById('toggle-admonitions').addEventListener('click', function(event) {
  event.preventDefault();
  var admonitions = document.querySelectorAll('.note');
  var anyOpen = false;
  admonitions.forEach(function(admonition) {
    if (admonition.hasAttribute('open')) {
      admonition.removeAttribute('open');
    } else {
      admonition.setAttribute('open', '');
      anyOpen = true;
    }
  });
  var button = document.getElementById('toggle-admonitions');
  if (anyOpen) {
    button.textContent = 'Toggle - Collapse All';
  } else {
    button.textContent = 'Toggle - Expand All';
  }
});

document.getElementById('collapse-all-code').addEventListener('click', function(event) {
  event.preventDefault();
  var admonitions = document.querySelectorAll('.note');
    admonitions.forEach(function(admonition) {
        if (admonition.hasAttribute('open')) {
        admonition.removeAttribute('open');
        }
    });
});
</script>

## Chapter 2 Programming Exercises

1 -
Write a C++ program that displays your name and address (or if you value your
privacy,a fictitious name and address).

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch2_1.cpp)
    <!--/codeinclude-->

2 - Write a C++ program that asks for a distance in furlongs and converts it to yards.
(One furlong is 220 yards.)
??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch2_2.cpp)
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
    [](../exercises/exercise_ch2_3.cpp)
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
    [](../exercises/exercise_ch2_4.cpp)
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
    [](../exercises/exercise_ch2_5.cpp)
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
    [](../exercises/exercise_ch2_6.cpp)
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
    [](../exercises/exercise_ch2_7.cpp)
    <!--/codeinclude-->

## Chapter 3 Programming Exercises

1 -
Write a short program that asks
for your height in integer inches and then converts your height to feet and inches.
Have the program use the underscore character to indicate where to type the response.
Also use a const symbolic constant to represent the conversion factor.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch3_1.cpp)
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
    [](../exercises/exercise_ch3_2.cpp)
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
    [](../exercises/exercise_ch3_3.cpp)
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
    [](../exercises/exercise_ch3_4.cpp)
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
    [](../exercises/exercise_ch3_5.cpp)
    <!--/codeinclude-->

6 -
Write a program that asks how many miles you
have driven and how many gallons of gasoline you have used and then reports the miles
per gallon your car has gotten. Or, if you prefer, the program can request distance
in kilometers and petrol in liters and then report the result European style,
in liters per 100 kilometers.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch3_6.cpp)
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
    [](../exercises/exercise_ch3_7.cpp)
    <!--/codeinclude-->

## Chapter 4 Programming Exercises

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
    [](../exercises/exercise_ch3_7.cpp)
    <!--/codeinclude-->

2 -
Rewrite Listing 4.4, using the C++ string class instead of char arrays.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch4_2.cpp)
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
    [](../exercises/exercise_ch4_3.cpp)
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
    [](../exercises/exercise_ch4_4.cpp)
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
    [](../exercises/exercise_ch4_5.cpp)
    <!--/codeinclude-->

6 -
The CandyBar structure contains three members,
as described in Programming Exercise 5.Write a program that creates an array of
three CandyBar structures, initializes them to values of your choice, and then
displays the contents of each structure.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch4_6.cpp)
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
    [](../exercises/exercise_ch4_7.cpp)
    <!--/codeinclude-->

8 -
Do Programming Exercise 7 but use new to allocate a structure instead of
declaring a structure variable. Also have the program request the pizza
diameter before it requests the pizza company name.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch4_8.cpp)
    <!--/codeinclude-->

9 -
Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch4_9.cpp)
    <!--/codeinclude-->

10 -
Write a program that requests the user to enter three times for the 40-yd dash
(or 40-meter, if you prefer) and then displays the times and the average.
Use an array object to hold the data. (Use a built-in array if array is not available.)

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch4_10.cpp)
    <!--/codeinclude-->

## Chapter 5 Programming Exercises

1 -
Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch5_1.cpp)
    <!--/codeinclude-->

2 -
Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch5_2.cpp)
    <!--/codeinclude-->

3 -
Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch5_3.cpp)
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
    [](../exercises/exercise_ch5_4.cpp)
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
    [](../exercises/exercise_ch5_5.cpp)
    <!--/codeinclude-->

6 -
Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch5_6.cpp)
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
    [](../exercises/exercise_ch5_7.cpp)
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
    [](../exercises/exercise_ch5_8.cpp)
    <!--/codeinclude-->

9 -
Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch5_9.cpp)
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
    [](../exercises/exercise_ch5_10.cpp)
    <!--/codeinclude-->

## Chapter 6 Programming Exercises

1 -
Write a program that reads keyboard input to the @ symbol and that echoes the input except for digits,
converting each uppercase character to lowercase, and vice versa. (Don’t forget the `cctype` family.)

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch6_1.cpp)
    <!--/codeinclude-->

2 -
Write a program that reads up to 10 donation values into an array of double.
(Or, if you prefer, use an array template object.) The program should terminate
input on non-numeric input. It should report the average of the numbers and also
report how many numbers in the array are larger than the average.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch6_2.cpp)
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
    [](../exercises/exercise_ch6_3.cpp)
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
    [](../exercises/exercise_ch6_4.cpp)
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
    [](../exercises/exercise_ch6_5.cpp)
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
who contributed $10,000 or more.This list should be headed by the label
Grand Patrons.After that, the program should list the remaining donors.
That list should be headed Patrons. If there are no donors in one of the categories,
the program should print the word “none.”Aside from displaying two categories,
the program need do no sorting.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch6_6.cpp)
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
    [](../exercises/exercise_ch6_7.cpp)
    <!--/codeinclude-->

8 -
Write a program that opens a text file, reads it character-by-character to the
end of the file, and reports the number of characters in the file.

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch6_8.cpp)
    <!--/codeinclude-->

9 -
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

??? note "Code"
    <!--codeinclude-->
    [](../exercises/exercise_ch6_9.cpp)
    <!--/codeinclude-->