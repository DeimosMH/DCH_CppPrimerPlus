#include <iostream>
#include <fstream> // ofstream
#include <string>
#include <sstream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "\nNo file argument!" << std::endl;
        std::cout << "Exit program!" << std::endl;
        return 1; // Exit failure - no file
    }
    else if (argc > 2)
    {
        std::cout << "\nToo many arguments!" << std::endl;
        std::cout << "Enter only filename as argument to write data into." << std::endl;
        std::cout << "Exit program!" << std::endl;
        return 1; // Exit failure - no file
    }

    std::ostringstream oss_buff; // more efficient than string, because it does not create temporary objects
    std::string line;

    std::ofstream outfile;
    outfile.open(argv[1]);

    if (!outfile.is_open())
    {
        std::cerr << "Error: file could not be opened" << std::endl;
        return 2;
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
        outfile << line << '\n'; // Append the line in opened file
    }

    outfile.close();

    std::cout << "\nYou have written:" << std::endl;
    std::cout << oss_buff.str(); // Display the accumulated data

    return 0;
}