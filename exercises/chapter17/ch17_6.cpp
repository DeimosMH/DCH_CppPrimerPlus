// pe14-5.cpp


/*
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

The tricky part is recovering the data from the file.The problem is, how can the
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
*/

#include <iostream>
#include "ch14_5_emp.h"

using namespace std;

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

    // cout << "Using an abstr_emp * pointer:\n";
    // abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    // for (int i = 0; i < 4; i++)
    //     tri[i]->ShowAll();

   
    // Question tests
    /* array of abstract class "abstr_emp" is not allowed:C/C++(604)
    ch14_5.cpp(35, 15): function "abstr_emp::~abstr_emp" is a pure virtual function */

    // abstr_emp tri[4] = {em, fi, hf, hf2};
    // for (int i = 0; i < 4; i++)
    //     tri[i].ShowAll();

    return 0;
}