#include "ch14_2_wine.h"

/// Constructors ///
Wine::Wine() :  std::string("")
{
}

Wine::Wine(const char *l, int y) : std::string(l), PairArray(ArrayInt(y),ArrayInt(y))
{
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l), PairArray(ArrayInt(y),ArrayInt(y))
{
    for (int i{}; i < y; i++)
    {
        PairArray::first[i] = yr[i];
        PairArray::second[i] = bot[i];
    }
}

/// Destructors ///
Wine::~Wine()
{
}

/// Methods ///
void Wine::GetBottles()
{
    std::cout << "Enter " << std::string(*this) << " data for "
              << PairArray::first.size() << " year(s): " << std::endl;
    for (int i = 0; i < PairArray::first.size(); ++i)
    {
        std::cout << "Enter year: ";
        std::cin >> PairArray::first[i];
        std::cout << "Enter bootles for that year: ";
        std::cin >> PairArray::second[i];
    }
}

const std::string &Wine::Label() const
{
    return (const std::string &)(*this);
}

void Wine::Show()
{
    std::cout << "Wine: " << std::string(*this) << std::endl;
    std::cout << "Year  Bottles" << std::endl;
    for (int i = 0; i < PairArray::first.size(); ++i)
    {
        std::cout << PairArray::first[i] << "  ";
        std::cout << PairArray::second[i] << std::endl;
    }
}

int Wine::sum()
{
    int _sum{};
    for (int i = 0; i < PairArray::first.size(); ++i)
    {
        _sum += PairArray::second[i];
    }
    return _sum;
}
