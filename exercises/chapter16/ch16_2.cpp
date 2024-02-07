#include <iostream>
#include <string>
#include <cctype>

/// @brief Palindrome checker functor
struct stPalindromeFUN
{
    // Overload the function call operator to check for palindromes
    bool operator()(std::string &str) const
    {
        // Remove non alpha characters simple loop
        int i = 0;
        while (i < str.length())
        {
            if (!isalpha(str[i]))
            {
                str.erase(i, 1); // remove  1 found non alphabetic data from `i` index
                // the next iteration will skip one character since the index `i` has been incremented
            }
            else if (!islower(str[i]))
            {
                str[i] = tolower(str[i]);
                i++; // Only increment i if we didn't erase a character
            }
            else
            {
                i++; // Only increment i if we didn't erase a character
            }
        }

        std::cout << " reduced to word `" << str << "`";
        std::string strRev(str.rbegin(), str.rend()); // Reverse the string
        return (str == strRev);                       // Check if the original string is equal to its reversed version
    }
};
// std::vector<std::string> words = {"racecar", "hello", "madam"};
// auto it = std::find_if(words.begin(), words.end(), palindromeChecker);
// if (it != words.end()) { std::cout << *it << " is a palindrome.\n"; }

/// @brief Palindrome checker functor
struct stPalindromeITR
{
    // Overload the function call operator to check for palindromes
    bool operator()(const std::string &org) const
    {
        std::string str;
        // Remove non alpha characters loop with ierators
        for (auto iter = org.begin(); iter != org.end(); iter++)
        {
            if (isalpha(*iter))
            {
                if (isupper(*iter))
                {
                    str.push_back(tolower(*iter));
                }
                else
                {
                    str.push_back(*iter);
                }
            }
        }

        std::cout << " reduced to word `" << str << "`";
        std::string strRev(str.rbegin(), str.rend()); // Reverse the string
        return (str == strRev);                       // Check if the original string is equal to its reversed version
    }
};

int main()
{
    std::cout << "\nWrite a word (q to quit):\t";

    std::string sDataIN;
    while (std::getline(std::cin, sDataIN) && sDataIN != "q")
    {
        stPalindromeITR stChi; //Constant string - invoke first
        stPalindromeFUN stChk; //Changes string

        std::cout << "Word " << sDataIN << " is"
                  << (stChi(sDataIN) ? " is a palindrome" : " is not a palindrome") << "\n";

        std::cout << "Word " << sDataIN << " is"
                  << (stChk(sDataIN) ? " is a palindrome" : " is not a palindrome") << "\n";

        std::cout << "\nWrite another word: ";
    }
    std::cout << "\nBye!";
}
