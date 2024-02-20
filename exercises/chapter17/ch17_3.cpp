#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "\nNo file arguments!" << std::endl;
        std::cerr << "Exit program!" << std::endl;
        return 1; // Exit failure - no file
    }
    else if (argc != 3)
    {
        std::cerr << "\nIncorrect number of arguments!" << std::endl;
        std::cerr << "Enter filename to copy data from as 1'st argument" << std::endl;
        std::cerr << "and 2'nd argument the filename to write data into." << std::endl;
        return 2;
    }

    // std::ostringstream oss_linebuff; // more efficient than string, because it does not create temporary objects

    std::ifstream inFile;
    inFile.open(argv[1]);

    if (!inFile.is_open())
    {
        std::cerr << "Error: 1'st file could not be opened" << std::endl;
        return 3;
    }

    std::ofstream outFile;
    outFile.open(argv[2]);

    if (!outFile.is_open())
    {
        std::cerr << "Error: 2'nd file could not be opened" << std::endl;
        return 3;
    }

    std::cout << "\nCopying "
              << (std::string)argv[1] << " file contents into "
              << (std::string)argv[2] << std::endl;

    // copy character by character - least efficient method <==============
    /*
    char tmp;
    while (inFile.get(tmp))
    {
        outFile.put(tmp);
    }
    */

    // More efficient - https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/ <==============
    /*
    std::string tmpLine;
    while (getline(inFile, tmpLine)) {
        outFile << tmpLine << "\n";
    }
    */

    // Approach below is more efficient than copying one character/line at a time, <============== 
    // especially when dealing with larger files.
    /*
    const size_t bufferSize =  1024 * 1024; //  1 MB buffer
    std::vector<char> buffer(bufferSize);

    while (inFile.read(buffer.data(), bufferSize)) {
        outFile.write(buffer.data(), inFile.gcount());
    }

    // Write any remaining data
    outFile.write(buffer.data(), inFile.gcount());
    */

    // Simple fast BINARY copy <==============
    /*
    std::ifstream inFile(argv[1], std::ios::binary);
    std::ofstream outFile(argv[2], std::ios::binary);
    outFile << inFile.rdbuf();
    */

    // simplest and (one of the) fastest way using stream buffer in ios library <==============
    // https://cplusplus.com/reference/ios/ios/rdbuf/ 
    // https://stackoverflow.com/questions/10195343/copy-a-file-in-a-sane-safe-and-efficient-way 
    outFile << inFile.rdbuf(); 

    std::cout << "\nDone!\nExit program!";

    return 0;
}