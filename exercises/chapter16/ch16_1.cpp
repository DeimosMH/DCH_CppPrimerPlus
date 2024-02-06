#include <iostream>
#include <string>

/// @brief Palindrome checker via simple loop (C - like)
bool fnPalindrome(const std::string &str)
{
    for (int i = 0, j = str.length() - 1; i < str.length() / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

/// @brief Palindrome checker via reverse iterator
bool fnPalindromeRI(const std::string &str)
{
    std::string strRev(str.rbegin(), str.rend()); // copy str in reverse via reverse iterator
    return (str == strRev);
}

/// @brief Palindrome checker functor
struct stPalindromeFUN
{
    // Overload the function call operator to check for palindromes
    bool operator()(const std::string &str) const
    {
        std::string strRev(str.rbegin(), str.rend()); // Reverse the string
        return (str == strRev);                       // Check if the original string is equal to its reversed version
    }
};
// std::vector<std::string> words = {"racecar", "hello", "madam"};
// auto it = std::find_if(words.begin(), words.end(), palindromeChecker);
// if (it != words.end()) { std::cout << *it << " is a palindrome.\n"; }

int main()
{
    std::cout << "\nWrite a word (q to quit):\t";

    std::string sDataIN;
    while (std::getline(std::cin, sDataIN) && sDataIN != "q")
    {
        std::cout << "Word " << sDataIN << " is a "
                  << (fnPalindrome(sDataIN) ? "palindrome" : "not a palindrome") << "\n";

        std::cout << "Word " << sDataIN << " is a "
                  << (fnPalindromeRI(sDataIN) ? "palindrome" : "not a palindrome") << "\n";

        stPalindromeFUN stChk;
        std::cout << "Word " << sDataIN << " is a "
                  << (stChk(sDataIN) ? "palindrome" : "not a palindrome") << "\n";

        std::cout << "\nWrite another word: ";
    }
    std::cout << "\nBye!";
}
