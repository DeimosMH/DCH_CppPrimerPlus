
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <memory> // std::shared_ptr
#include <random> //  std::random_device; std::mt19937

struct Review
{
    std::string title;
    double price;
    int rating;
};

bool operator<(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2);
bool worseThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2);
bool costmThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2);

bool FillReview(std::shared_ptr<Review> &rr);
void ShowReview(const std::shared_ptr<Review> &rr);
void fnPrintMenu();

int main()
{
    std::vector<std::shared_ptr<Review>> books;
    while (true)
    {
        std::shared_ptr<Review> temp(new Review());
        if (!FillReview(temp))
        {
            break;
        }
        books.push_back(temp);
    }

    if (!(books.size() > 0))
    {
        std::cout << "No entries. ";
        std::cout << "Bye.\n";
        return 0;
    }

    std::cout << "Thank you. You entered the following "
              << books.size() << " books:\n"
              << "Rating\tPrice\tBook\n";
    for_each(books.begin(), books.end(), ShowReview);

    // copy vector to not modify original by sorting
    std::vector<std::shared_ptr<Review>> books_cpy = books;

    fnPrintMenu();
    char option;
    bool invoption = false;
    while (std::cin >> option && option != 'q')
    {
        invoption = false;
        switch (option)
        {
        case 'w':
            std::cout << "In original order:\nRating\tPrice\tBook\n";
            for_each(books.begin(), books.end(), ShowReview);
            break;
        case 'e':
            sort(books_cpy.begin(), books_cpy.end());
            std::cout << "Sorted in alphabetical order:\nRating\tPrice\tBook\n";
            break;
        case 'r':
            sort(books_cpy.begin(), books_cpy.end(), worseThan);
            std::cout << "Sorted in order of increasing ratings:\nRating\tPrice\tBook\n";
            break;
        case 't':
            sort(books_cpy.rbegin(), books_cpy.rend(), worseThan);
            std::cout << "Sorted in order of decreasing ratings:\nRating\tPrice\tBook\n";
            break;
        case 'y':
            sort(books_cpy.begin(), books_cpy.end(), costmThan);
            std::cout << "Sorted in order of increasing price:\nRating\tPrice\tBook\n";
            break;
        case 'u':
            sort(books_cpy.rbegin(), books_cpy.rend(), costmThan);
            std::cout << "Sorted in order of decreasing price:\nRating\tPrice\tBook\n";
            break;
        default:
            invoption = true;
            std::cout << "\nInvalid option\n";
            break;
        }

        if (option != 'w' && !invoption)
        {
            for_each(books_cpy.begin(), books_cpy.end(), ShowReview);
        }

        fnPrintMenu();
    }

    std::cout << "Bye.\n";
    return 0;
}

void fnPrintMenu()
{
    std::cout
        << "\nPlease select:\n"
        << "\tw) display books in original order\n"
        << "\te) display in alphabetical order\n"
        << "\tr) display in order of increasing ratings\n"
        << "\tt) display in order of decreasing ratings\n"
        << "\ty) display in order of increasing price\n"
        << "\tu) display in order of decreasing price\n"
        << "\tq) quit" << std::endl;
}

bool operator<(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool costmThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}


bool FillReview(std::shared_ptr<Review> &rr)
{
    std::cout << "Enter book title (q to stop): ";
    std::getline(std::cin, rr->title);
    if (rr->title == "q")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr->rating;
    if (!std::cin)
        return false;
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    std::cout << "Enter book price: ";
    std::cin >> rr->price;
    if (!std::cin)
        return false;
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const std::shared_ptr<Review> &rr)
{
    std::cout << rr->rating << "\t" << rr->price << "\t" << rr->title << std::endl;
}

/*
    random_shuffle(books.begin(), books.end()); // random_shuffle function is deprecated in C++14 and removed in C++17. Replaced with std::shuffle

    // std::shuffle function is expecting a Uniform Random Number Generator (URBG) as its third argument (rand() wont work)
    // Create a random device and a generator // needs #include <random>
    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister engine
    shuffle(books.begin(), books.end(), gen);

std::random_shuffle deprecation and removal:
- Global State Dependency: std::random_shuffle might rely on the global state, using functions like rand() which is not thread-safe and can lead to less randomness in multi-threaded programs.
- Unspecified Random Number Generator (RNG): The RNG used by std::random_shuffle was not specified by the standard, which meant that its behavior could vary across different implementations, potentially leading to inconsistent results.
- Replacement by Better Alternatives: The introduction of the <random> header in C++11 provided better mechanisms for generating random numbers, including Uniform Random Number Generators (URBGs) that do not depend on global state. The std::shuffle function, introduced in C++11, takes advantage of these improvements, offering better randomness and thread safety.
- Removal in C++17: As a result of these issues, std::random_shuffle was removed entirely in C++17, and programmers were encouraged to use std::shuffle instead, which requires explicitly providing a URBG, thus ensuring consistent behavior across different implementations and environments.
*/

/*
Enter book title (quit to quit): The Cat Who Can Teach You Weight Loss
Enter book rating: 8
Enter book title (quit to quit): The Dogs of Dharma
Enter book rating: 6
Enter book title (quit to quit): The Wimps of Wonk
Enter book rating: 3
Enter book title (quit to quit): Farewell and Delete
Enter book rating: 7
Enter book title (quit to quit): quit
Thank you. You entered the following 4 ratings:
Rating Book
8 The Cat Who Can Teach You Weight Loss
6 The Dogs of Dharma
3 The Wimps of Wonk
7 Farewell and Delete
Sorted by title:
Rating Book
7 Farewell and Delete
8 The Cat Who Can Teach You Weight Loss
6 The Dogs of Dharma
3 The Wimps of Wonk
Sorted by rating:
Rating Book
3 The Wimps of Wonk
6 The Dogs of Dharma
7 Farewell and Delete
8 The Cat Who Can Teach You Weight Loss
After shuffling:
Rating Book
7 Farewell and Delete
3 The Wimps of Wonk
6 The Dogs of Dharma
8 The Cat Who Can Teach You Weight Loss
Bye.
*/

/*
// Listing 16.9 vect3.cpp
// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review
{
    std::string title;
    int rating;
};

bool operator<(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2);
bool worseThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2);
bool FillReview(std::shared_ptr<Review> &rr);
void ShowReview(const std::shared_ptr<Review> &rr);

int main()
{
    using namespace std;
    vector<Review> books;
    Review temp;
    while (FillReview(temp))
        books.push_back(temp);
    if (books.size() > 0)
    {
        std::cout << "Thank you. You entered the following "
             << books.size() << " ratings:\n"
             << "Rating\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
        sort(books.begin(), books.end());
        std::cout << "Sorted by title:\nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
        sort(books.begin(), books.end(), worseThan);
        std::cout << "Sorted by rating:\nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
        random_shuffle(books.begin(), books.end());
        std::cout << "After shuffling:\nRating\tPrice\tBook\n";
        for_each(books.begin(), books.end(), ShowReview);
    }
    else
        std::cout << "No entries. ";
    std::cout << "Bye.\n";
    return 0;
}

bool operator<(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool worseThan(const std::shared_ptr<Review> &r1, const std::shared_ptr<Review> &r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool FillReview(std::shared_ptr<Review> &rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin, rr->title);
    if (rr->title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr->rating;
    if (!std::cin)
        return false;
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const std::shared_ptr<Review> &rr)
{
    std::cout << rr->rating << "\t" << rr->title << std::endl;
}
*/

/*
Enter book title (quit to quit): The Cat Who Can Teach You Weight Loss
Enter book rating: 8
Enter book title (quit to quit): The Dogs of Dharma
Enter book rating: 6
Enter book title (quit to quit): The Wimps of Wonk
Enter book rating: 3
Enter book title (quit to quit): Farewell and Delete
Enter book rating: 7
Enter book title (quit to quit): quit
Thank you. You entered the following 4 ratings:
Rating Book
8 The Cat Who Can Teach You Weight Loss
6 The Dogs of Dharma
3 The Wimps of Wonk
7 Farewell and Delete
Sorted by title:
Rating Book
7 Farewell and Delete
8 The Cat Who Can Teach You Weight Loss
6 The Dogs of Dharma
3 The Wimps of Wonk
Sorted by rating:
Rating Book
3 The Wimps of Wonk
6 The Dogs of Dharma
7 Farewell and Delete
8 The Cat Who Can Teach You Weight Loss
After shuffling:
Rating Book
7 Farewell and Delete
3 The Wimps of Wonk
6 The Dogs of Dharma
8 The Cat Who Can Teach You Weight Loss
Bye.
*/