#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    using namespace std;
    char cInput[100];
    int iNumOther{}, iNumVowels{}, iNumConsonants{};

    cout << "\nEnter words (q to quit):\n";

    do
    {
        cin >> cInput;
        if (!isalpha(cInput[0]))
        {
            ++iNumOther;
        }
        else if (cInput[0] == 'A' || cInput[0] == 'E' ||
                 cInput[0] == 'I' || cInput[0] == 'O' ||
                 cInput[0] == 'U' || cInput[0] == 'Y' ||
                 cInput[0] == 'a' || cInput[0] == 'e' ||
                 cInput[0] == 'i' || cInput[0] == 'o' ||
                 cInput[0] == 'u' || cInput[0] == 'y')
        {
            ++iNumVowels;
        }
        else if (cInput[0] == 'A' || cInput[0] == 'C' || cInput[0] == 'D' ||
                 cInput[0] == 'F' || cInput[0] == 'G' || cInput[0] == 'J' ||
                 cInput[0] == 'K' || cInput[0] == 'L' || cInput[0] == 'M' ||
                 cInput[0] == 'N' || cInput[0] == 'P' || cInput[0] == 'Q' ||
                 cInput[0] == 'S' || cInput[0] == 'T' || cInput[0] == 'V' ||
                 cInput[0] == 'X' || cInput[0] == 'Z' ||
                 cInput[0] == 'a' || cInput[0] == 'c' || cInput[0] == 'd' ||
                 cInput[0] == 'f' || cInput[0] == 'g' || cInput[0] == 'j' ||
                 cInput[0] == 'k' || cInput[0] == 'l' || cInput[0] == 'm' ||
                 cInput[0] == 'n' || cInput[0] == 'p' || cInput[0] == 'q' ||
                 cInput[0] == 's' || cInput[0] == 't' || cInput[0] == 'v' ||
                 cInput[0] == 'x' || cInput[0] == 'z')
        {
            ++iNumConsonants;
        }
        else
        {
            ++iNumOther;
        }

    } while (strcmp(cInput, "q"));
    --iNumConsonants; // q  - at the end detected as word(consonant)

    cout << iNumVowels << " words beginning with vowels\n";
    cout << iNumConsonants << " words beginning with consonants\n";
    cout << iNumOther << " others\n";

    return 0;
}

// Different method - pseudocode
/*

    char sConsonants[]{'b', 'c', 'd', 'f', 'g', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 's', 't', 'v', 'x', 'z',
                      'B', 'C', 'D', 'F', 'G', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'S', 'T', 'V', 'X', 'Z'};
    char sWovels[]{'a', 'e', 'i', 'o', 'u',
                  'A', 'E', 'I', 'O', 'U'};

        cin >> cInput;
        if (!isalpha(cInput[0]))
        {
            ++iNumOther;
        }
        else{
            for (size_t i = 0; i < 12; i++)
            {
                if(cInput[0] == sConsonants[i] || cInput[0] == sConsonants[i+11] || cInput[0] == sConsonants[i + 22]){
                    ++iNumConsonants;
                    break;
                }
                else (cInput[0] == sWovels[i]){
                    ++iNumVowels;
                    break;
                }
            }
        }
*/