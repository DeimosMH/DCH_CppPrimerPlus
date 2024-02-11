#include <iostream>
#include <list>
#include <string>    // getline
#include <algorithm> // sort

void enter_num(int &num)
{
    while (!(std::cin >> num))
    {
        std::cin.clear(); // reset input
        while (std::cin.get() != '\n')
            continue; // get rid of bad input
        std::cout << "Please enter a number: ";
    }
}

std::string enter_friend(std::string who, int inum)
{
    std::cout << "Enter " << who << " " << inum + 1 << " friend: ";
    std::string _sfriend;

    // Clear any remaining newline character from the input buffer
    if (std::cin.peek() == '\n')
    {
        std::cin.ignore(1, '\n');
    }

    // // broken - newline (enter) not always detected
    // std::cin.clear(); // reset input
    // while (std::cin.get() != '\n')
    //     continue; // get rid of bad input

    std::getline(std::cin, _sfriend);
    return _sfriend;
}

int main()
{
    std::list<std::string> mat_friend_names;
    std::list<std::string> pat_friend_names;
    std::list<std::string> common_friend_names;

    int i_mat{};
    int i_pat{};

    // Allows Mat to enter a list of his friends’ names. The names are stored in a container and then displayed in sorted order.
    std::cout << "\n Enter number of Mat friends: ";
    enter_num(i_mat);
    
    for (int i = 0; i < i_mat; i++)
    {
        mat_friend_names.push_back(enter_friend("Mat", i));
    }

    mat_friend_names.sort();

    std::cout << "\nMat friends: \n";
    for (auto a : mat_friend_names)
    {
        std::cout << a << std::endl;
    }

    // Allows Pat to enter a list of her friends’ names. The names are stored in a second container and then displayed in sorted order.
    std::cout << "\n Enter number of Pat friends: ";
    enter_num(i_pat);

    for (int i = 0; i < i_pat; i++)
    {
        pat_friend_names.push_back(enter_friend("Pat", i));
    }

    pat_friend_names.sort();

    std::cout << "\nPat friends: \n";
    for (auto a : pat_friend_names)
    {
        std::cout << a << std::endl;
    }

    // Third container merges the two lists, eliminates duplicates, and displays the contents of this container.
    common_friend_names.merge(mat_friend_names);
    common_friend_names.merge(pat_friend_names);

    common_friend_names.unique();

    std::cout << "\nMutual friends: \n";
    for (auto a : common_friend_names)
    {
        std::cout << a << std::endl;
    }

    return 0;
}