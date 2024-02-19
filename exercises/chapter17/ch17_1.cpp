#include <iostream>
#include <ctime>

int main()
{
    int counter{};
    char ctmp;
    clock_t start = clock();

    std::cout << "\nYou can write anything till the `$` character... try it!" << std::endl;

    // while ((ctmp = std::cin.get()) != '$') // it wont work if the first character will be $ directly after newline, because std::cin.get() does not skip newline character,

    std::cin.get(ctmp);
    while (ctmp != '$')
    {
        counter++;
        // std::cin.get(ctmp);  // Reads a single character from the input stream and stores it in ctmp. It wont skip any character (including whitespaces)
        std::cin >> ctmp; // It skips any leading whitespace (spaces, newlines, tabs) - int this case for counting
    }

    std::cout << "\nYou have killed this program with " << ctmp << std::endl
              << "It counted " << counter << " characters before " << ctmp << " and the next character would be " << (char) std::cin.get() << std::endl 
              << "It lived only for " << (double)(clock() - start) / CLOCKS_PER_SEC << " seconds!";

    std::cout << "\n\nBye!";

    return 0;
}