#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

#include <vector>    // std::vector
#include <fstream>   // std::ifstream / std::ofstream
#include <exception> // s
#include <algorithm> // std::remove
#include <sstream>   // std::istringstream

using std::string;

// Method 2
// Loop to extract words using find and substr
void fnReadFileIS(std::vector<std::string> &wordList, string &strTemp)
{
    int pos{};
    int prev_pos{};
    while ((pos = strTemp.find(',', pos)) != std::string::npos)
    {
        // Extract word from previous position up to current position
        std::string word = strTemp.substr(prev_pos, pos - prev_pos);
        // Skip empty words due to leading comma
        if (!word.empty())
        {
            wordList.push_back(word);
        }
        // Update position to skip comma
        prev_pos = ++pos;
    }
}

// Method 1
// Use istringstream -> #include <sstream>
void fnReadFileSB(std::vector<std::string> &wordList, string &strTemp)
{
    std::string word;
    std::istringstream iss(strTemp);

    // Extract words using getline with ',' as delimiter
    while (std::getline(iss, word, ','))
    {
        // Skip empty words due to trailing comma
        if (!word.empty())
        {
            wordList.push_back(word);
        }
    }
}

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::tolower;

    std::srand(std::time(0));
    std::vector<std::string> wordList;
    int iNumOfWords{};
    std::ifstream inFile;

    inFile.open("./ch16_3_words.txt"); // OR ./ch6_3_words.txt

    if (!inFile.is_open())
    {
        std::cerr << "Could not open the file\n"
                  << "Program terminating.\n";
        std::exit(EXIT_FAILURE);
    }

    // Read wordList from a file
    int iCommas{};
    int iPrvIdx{};
    while (inFile.good())
    {
        std::string strTemp;
        std::getline(inFile, strTemp); // getline

        // Remove spaces if occurs
        // Check ',' as divisions of words
        strTemp.erase(std::remove(strTemp.begin(), strTemp.end(), ' '), strTemp.end());
        if (strTemp.find(',') != std::string::npos)
        {
            fnReadFileSB(wordList, strTemp);
            // fnReadFileIS(wordList, strTemp);
        }
        else
        {
            wordList.push_back(strTemp);
        }

        iPrvIdx = 0;
        iCommas = 0;
        ++iNumOfWords;
    }

    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);

    cout << "\nAll possible words in game: \n";
    {
        int i{};
        cout << "\n";
        for (auto wrd : wordList)
        {
            if (i > 9) // print 10 words per line
            {
                cout << "\n";
                i = 0;
            }
            cout << wrd << ", ";
            i++;
        }
    }
    cout << "\n\n";

    while (play == 'y')
    {
        string target = wordList[std::rand() % iNumOfWords];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
             << " letters, and you guess\n"
             << "one letter at a time. You get " << guesses
             << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;

        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter; // add to string
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                // check if letter appears again
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye\n";

    return 0;
}

/*
// hangman.cpp -- some string methods
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std::string;
const int NUM = 26;
const string wordList[NUM] = {"apiary", "beetle", "cereal",
                              "danger", "ensign", "florid", "garage", "health", "insult",
                              "jackal", "keeper", "loaner", "manage", "nonce", "onset",
                              "plaid", "quilt", "remote", "stolid", "train", "useful",
                              "valid", "whence", "xenon", "yearn", "zippy"};

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::tolower;
    std::srand(std::time(0));
    char play;
    cout << "Will you play a word game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while (play == 'y')
    {
        string target = wordList[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
             << " letters, and you guess\n"
             << "one letter at a time. You get " << guesses
             << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;

        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter; // add to string
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                // check if letter appears again
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye\n";

    return 0;
}
*/

/*
Here’s a sample run of the program in Listing 16.3:
Will you play a word game? <y/n> y
Guess my secret word. It has 6 letters, and you guess
one letter at a time. You get 6 wrong guesses.
Your word: ------
Guess a letter: e
Oh, bad guess!
Your word: ------
Bad choices: e
5 bad guesses left
Guess a letter: a
Good guess!
Your word: a--a--
Bad choices: e
5 bad guesses left
Guess a letter: t
Oh, bad guess!
Your word: a--a--
Bad choices: et
4 bad guesses left
Guess a letter: r
Good guess!
Your word: a--ar-
Bad choices: et
4 bad guesses left
Guess a letter: y
Good guess!
Your word: a--ary
Bad choices: et
4 bad guesses left
Guess a letter: i
Good guess!
Your word: a-iary
Bad choices: et
4 bad guesses left
Guess a letter: p
Good guess!
Your word: apiary
That's right!
Will you play another? <y/n> n
Bye
*/