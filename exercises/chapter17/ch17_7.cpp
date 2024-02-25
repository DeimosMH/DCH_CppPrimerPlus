#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for_each
#include <fstream>

using namespace std;

// Store functor // functor that writes string information to a file.
class Store
{
    ostream &os; // ofstream &os; // also correct -

public:
    Store(ofstream &o) : os(o) {}

    // Binary output
    void operator()(const string &str)
    {
        size_t len = str.size();
        os.write((char *)&len, sizeof(size_t));
        os.write(str.data(), len);
    }
};

void GetStrs(std::ifstream &is, std::vector<std::string> &vstr) {
    // The function reads the length of each string as a size_t from the binary file
    // in any other cases there can be artefacts, because it was written in size_t
    size_t len; 
    char ch;
    std::string temp;

    while (is.read((char*)(&len), sizeof(len))) {
        temp.clear();
        // reads len characters into a temporary string temp
        for (size_t i =  0; i < len; ++i) { 
            if (is.read(&ch,  1)) { // byte after byte
                temp += ch;
            } else {
                break;
            }
        }
        if (is) { // Check if the stream is still good
            vstr.push_back(temp);
        }
    }
}

// function that displays a string object followed by a newline character.
void ShowStr(string &s)
{
    cout << s << "\n";
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