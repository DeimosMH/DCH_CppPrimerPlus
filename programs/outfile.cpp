// outfile.cpp -- writing to a file
#include <iostream>
#include <fstream> // for file I/O
int main()
{
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;            // create object for output
    outFile.open("carinfo.txt"); // associate with a file

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // display information on screen with cout
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // now do exact same things using outFile instead of cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close(); // done with file
    return 0;
}

/*
Sample run of this program:
    Enter the make and model of automobile: Flitz Perky
    Enter the model year: 2009
    Enter the original asking price: 13500
    Make and model: Flitz Perky
    Year: 2009
    Was asking $13500.00
    Now asking $12325.50

Notice that the close() method doesn’t require a filename.That’s because outFile
has already been associated with a particular file.

If you forget to close a file, the program will close it automatically 
if the program terminates normally.

outFile can not only use << operator, but it can use the various formatting methods, such as setf() and
precision()
*/