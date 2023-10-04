#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char word[100];
    int count{};

    cout << "Enter words (to stop, type the word done):\n";
    do
    {
        cin >> word;
        ++count;
    } while (strcmp(word, "done"));
    cout << endl
         << "You entered a total of " << count << " words\n";

    return 0;
}