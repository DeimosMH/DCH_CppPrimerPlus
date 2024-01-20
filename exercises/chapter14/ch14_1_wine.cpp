#include "ch14_1_wine.h"

/// Constructors ///
Wine::Wine()
{
    s_Name = "";
}

Wine::Wine(const char *l, int y)
{
    s_Name = l;
    pa_Data.first.resize(y);
    pa_Data.second.resize(y);
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    s_Name = l;
    pa_Data.first.resize(y);
    pa_Data.second.resize(y);

    for (int i{}; i < y; i++)
    {
        pa_Data.first[i] = yr[i];
        pa_Data.second[i] = bot[i];
    }
}

/// Destructors ///
Wine::~Wine()
{
}

/// Methods ///
void Wine::GetBottles()
{
    std::cout << "Enter " << s_Name << " data for "
              << pa_Data.first.size() << " year(s): " << std::endl;
    for (int i = 0; i < pa_Data.first.size(); ++i)
    {
        std::cout << "Enter year: ";
        std::cin >> pa_Data.first[i];
        std::cout << "Enter bootles for that year: ";
        std::cin >> pa_Data.second[i];
    }
}

const std::string &Wine::Label()
{
    return s_Name;
}

void Wine::Show()
{
    std::cout << "Wine: " << s_Name << std::endl;
    std::cout << "Year  Bottles" << std::endl;
    for (int i = 0; i < pa_Data.first.size(); ++i)
    {
        std::cout << pa_Data.first[i] << "  ";
        std::cout << pa_Data.second[i] << std::endl;
    }
}

int Wine::sum()
{
    int _sum{};
    for (int i = 0; i < pa_Data.first.size(); ++i)
    {
        _sum += pa_Data.second[i];
    }
    return _sum;
}
