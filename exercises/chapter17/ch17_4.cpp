#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "\nNo file arguments!" << std::endl;
        std::cerr << "Exit program!" << std::endl;
        return 1; // Exit failure - no file
    }
    else if (argc != 4)
    {
        std::cerr << "\nIncorrect number of arguments!" << std::endl;
        std::cerr << "Enter filename to copy data from as 1'st and 2'nd argument" << std::endl;
        std::cerr << "3'rd argument should be the filename to write data into." << std::endl;
        return 2;
    }

    std::vector<std::string> dataVect;
    std::ifstream inFile[2];

    for (int i = 0; i < 2; i++)
    {
        inFile[i].open(argv[i + 1]);

        if (!inFile[i].is_open())
        {
            std::cerr << "Error: " << i << " input file could not be opened" << std::endl;
            return 3;
        }
    }

    std::ofstream outFile;
    outFile.open(argv[3], std::ios_base::out | std::ios_base::app);

    if (!outFile.is_open())
    {
        std::cerr << "Error: output file could not be opened" << std::endl;
        return 3;
    }

    std::cout << "\nCopying "
              << (std::string)argv[1] << " and " << (std::string)argv[2] << " file contents into "
              << (std::string)argv[3] << std::endl;

    std::string tmpLine;
    int cntData[2]{};

    // Assign data t ovector from 1'st file
    while (std::getline(inFile[0], tmpLine))
    {
        dataVect.push_back(tmpLine);
        cntData[0]++;
    }

    // Append data to vector from 2'nd file
    while (std::getline(inFile[1], tmpLine))
    {
        if (cntData[1] > cntData[0])
        {
            dataVect.push_back(tmpLine);
        }
        else
        {
            dataVect[cntData[1]] += " ";
            dataVect[cntData[1]] += tmpLine;
            cntData[1]++;
        }
    }

    // Write data into file
    for (auto &&i : dataVect)
    {
        outFile << i << "\n";
    }
    
    for (int i = 0; i < 2; i++)
    {
        inFile[i].close();
    }
    outFile.close();

    std::cout << "\nDone!" << std::endl;

    return 0;
}