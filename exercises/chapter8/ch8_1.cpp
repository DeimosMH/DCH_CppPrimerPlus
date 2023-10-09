#include <iostream>
#include <string>
#include <cstring>

using namespace std;

static int iNum{};

void fnFun(string *cStr, int iPrint = 1);
void fnFun(char *cStr, int iPrint = 1);

int main()
{
    char *cSthChar = new char[50];
    string *cSthString = new string;

    int iSth{};
    char cChoice{};

    cout << "\nWrite words to call finction and print it";
    cout << "\nthe number of times function was called";
    cout << "\nWrite 'done' to quit";

    cout << "\nType: A - use *std::string, B - use *char[]: ";

    cin >> cChoice;
    switch (cChoice)
    {
    case 'A':
        do
        {
            cout << "\nWrite words: ";
            cin.getline(cSthChar, 50);

            cout << "\nEnter nonzero number to print words: ";
            while (!(cin >> iSth))
            {
                std::cout << "Not a number. Try again: ";
                std::cin.clear();
                while (std::cin.get() != '\n')
                    continue;
            }

            fnFun(cSthChar, iSth);

            cin.get();
        } while (strcmp(cSthChar, "done"));

        delete[] cSthChar;
        break;

    case 'B':
        do
        {
            cout << "\nWrite words: ";
            getline(cin, *cSthString);

            cout << "\nEnter nonzero number to print words: ";
            while (!(cin >> iSth))
            {
                std::cout << "Not a number. Try again: ";
                std::cin.clear();
                while (std::cin.get() != '\n')
                    continue;
            }

            fnFun(cSthString, iSth);

            cin.get();
        } while (!(*cSthString == "done"));

        delete[] cSthString;
        break;
    default:
        break;
    }

    return 0;
}

void fnFun(string *cStr, int iPrint)
{
    ++iNum;

    if (!iPrint)
        return;

    for (int i{}; i < iNum; i++)
        cout << *cStr << endl;
}

void fnFun(char *cStr, int iPrint)
{
    ++iNum;

    if (!iPrint)
        return;

    for (int i{}; i < iNum; ++i)
        cout << cStr << endl;
}