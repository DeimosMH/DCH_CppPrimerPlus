#include <iostream>
#include <fstream> // ofstream
#include <string>
#include <sstream> // ostringstream
#include <cstring>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "\nNo file argument!" << std::endl;
        std::cerr << "Exit program!" << std::endl;
        return 1; // Exit failure - no file
    }
    else if (argc > 2)
    {
        std::cerr << "\nToo many arguments!" << std::endl;
        std::cerr << "Enter only filename as 1'st argument to write data into." << std::endl;
        return 2;
    }

    std::ostringstream oss_buff; // more efficient than string, because it does not create temporary objects
    std::string line;

    std::ofstream outFile;
    outFile.open(argv[1]);

    if (!outFile.is_open())
    {
        std::cerr << "Error: file could not be opened" << std::endl;
        return 3;
    }

    std::cout << "\nData from keyboard will be written to the file!" << std::endl;
    std::cout << "Write 'exit' in new line to stop the program." << std::endl;

    while (true)
    {
        std::getline(std::cin, line);
        if (line == "exit")
        {
            break; // Exit the loop when "exit" is entered
        }
        oss_buff << line << '\n'; // Append the line and a newline character to the ostringstream
        outFile << line << '\n';  // Append the line in opened file
    }

    outFile.close();

    std::cout << "\nYou have written:" << std::endl;
    std::cout << oss_buff.str(); // Display the accumulated data
    std::cout << "\nInto file:" << (std::string)argv[1] << std::endl; // convert to string and display whole argument 

    // C - like simpler implementation of line above
    /*
    int len = strlen(argv[1]);
    for (size_t i = 0; i < len; i++)
    {
        std::cout << argv[1][i];
    }
    std::cout << std::endl;
    */

    return 0;
}