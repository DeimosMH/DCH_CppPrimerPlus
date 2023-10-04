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

    cout << "Sadf sadf " << entered << endl;

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

int getinfo(student pa[], int n)
{
    int i{};

    do
    {
        cout << "\nEnter the name of " << i + 1 << " student: ";
        while (!(cin.get(pa[i].fullname, SLEN))) // the only function that reads an empty line and sets failbit
            return i;

        cout << "Enter the hobby of " << i + 1 << " student: ";
        cin.get();
        while (!(cin.get(pa[i].hobby, SLEN)))
        {
            cin.clear();
            while (cin.get() != '\n')
                break;
            break;
        }

        cout << "Enter the oop level of " << i + 1 << " student: ";
        while (!(cin >> pa[i].ooplevel))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }

        // read newlines (in other case you will only read one line,
        // the rest will fill from buffer - chapter 6: Review, 9)
        while (cin.get() != '\n')
            continue;

    } while (++i < n);

    return i;
}

void display1(student st)
{
    cout << "\n\t<display1>";
    cout << "\nName: " << st.fullname;
    cout << "\nHobby: " << st.hobby;
    cout << "\nOOP level: " << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << "\n\t<display2>";
    cout << "\nName: " << ps->fullname;
    cout << "\nHobby: " << ps->hobby;
    cout << "\nOOP level: " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    cout << "\n\t<display3>";
    for (int i{}; i < n; ++i)
    {
        cout << "\nName: " << (pa + i)->fullname;
        cout << "\nHobby: " << (pa + i)->hobby;
        cout << "\nOOP level: " << (pa + i)->ooplevel << endl;
    }
}