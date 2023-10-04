#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    string word;
    int count{};

    cout << "Enter words (to stop, type the word done):\n";
    do
    {
        cin >> word;
        ++count;
    } while (word != "done");
    cout << endl
         << "You entered a total of " << count << " words\n";

    return 0;
}