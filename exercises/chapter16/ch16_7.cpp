#include <iostream>
#include <vector>
#include <random>
#include <algorithm> // For std::count

std::vector<int> Lotto(int num_spots, int num_sel);

// Define a functor to print the winners
struct PrintWinner
{
    void operator()(int winner) const
    {
        std::cout << winner << " ";
    }
};

int main()
{
    std::vector<int> winners;
    winners = Lotto(51, 6);

    std::cout << "\nAnd the winners of the lottery are!\n";
    std::for_each(winners.begin(), winners.end(), PrintWinner());

    // // Use of std::for_each to print each winner
    // std::for_each(winners.begin(), winners.end(), [](const auto& winner) {
    //     std::cout << winner << " ";
    // });

    return 0;
}

/// @brief Lotto game function
/// @param num_spots number of spots on a lottery card
/// @param num_sel number of spots selected at random
/// @return vector that contains `num_sel` amount of numbers selected randomly from `1` to `num_spots`
std::vector<int> Lotto(int num_spots, int num_sel)
{
    std::vector<int> _win;

    { // _rd and _gen should be only for loop
        bool _uniq_val{false};
        std::random_device _rd;
        std::mt19937 _gen(_rd());
        for (int i = 0; i < num_sel; i++)
        {
            _win.push_back(std::uniform_int_distribution<>(1, num_spots)(_gen));

            if (!_uniq_val && _win[i] > 1) // prevents infinite loop if the same value is assigned
            {
                _win[i]--;
            }

            // Count the occurrences of the value in the vector
            auto count = std::count(_win.begin(), _win.end(), _win[i]);

            _uniq_val = true;
            // Check if the value is unique
            if (count > 1)
            {
                std::cout << "Not unique value occur: " << _win[i] << std::endl;
                i--;
                _uniq_val = false;
            }
        }
    }

    return _win;
}