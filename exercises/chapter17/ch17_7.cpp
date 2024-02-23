/*
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

*/
#include <iostream>
#include <string> 
#include <vector>
#include <algorithm> // for_each

using namespace std;

// Store functor // functor that writes string information to a file.
// operator()(const string &)

void ShowStr(const string &) // function that displays a string object followed by a newline character.
{

}

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