#include <iostream>
#include <list>
#include <vector>
#include <string>    // getline
#include <algorithm> // sort
#include <fstream>

int read_friends(std::list<std::string> &rd, std::string const &fn)
{
    std::ifstream ifile(fn);
    std::string tmpLine;

    if (!ifile.is_open())
    {
        std::cerr << "\nError opening file";
        return 1;
    }

    while (std::getline(ifile, tmpLine))
    {
        rd.push_back(tmpLine);
    }

    ifile.close();

    return 0;
}

int write_friends(std::list<std::string> &rd, std::string const &fn)
{
    std::ofstream ofile(fn);

    if (!ofile.is_open())
    {
        std::cerr << "\nError opening file";
        return 1;
    }

    for (auto &&i : rd)
    {
        ofile << i << "\n";
    }

    ofile.close();

    return 0;
}

int main()
{
    std::list<std::string> matFriendNames;
    std::list<std::string> patFriendNames;
    std::list<std::string> commonFriendNames;

    std::vector<std::string> fileNames{
        "ch17_5_mat.dat", "ch17_5_pat.dat", "ch17_5_mrg.dat"};

    // Read, sort and display Mat friends
    read_friends(matFriendNames, fileNames[0]);
    matFriendNames.sort();

    std::cout << "\nMat friends: \n";
    for (auto a : matFriendNames)
    {
        std::cout << a << std::endl;
    }

    // Read, sort and display Pat friends
    read_friends(patFriendNames, fileNames[1]);
    patFriendNames.sort();

    std::cout << "\nPat friends: \n";
    for (auto a : patFriendNames)
    {
        std::cout << a << std::endl;
    }

    // Merge, remove duplicates, display and write to file
    commonFriendNames.merge(matFriendNames);
    commonFriendNames.merge(patFriendNames);

    commonFriendNames.unique();

    std::cout << "\nMutual friends: \n";
    for (auto a : commonFriendNames)
    {
        std::cout << a << std::endl;
    }

    write_friends(commonFriendNames, fileNames[2]);

    std::cout << "\nDone!";

    return 0;
}