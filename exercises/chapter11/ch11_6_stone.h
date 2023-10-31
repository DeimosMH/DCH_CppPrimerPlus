// stonewt1.h -- revised definition for the Stonewt class
#ifndef STONEWT1_H_
#define STONEWT1_H_
#include <iostream>

class Stonewt
{
private:
    enum
    {
        Lbs_per_stn = 14
    };               // pounds per stone
    int stone;       // whole stones
    double pds_left; // fractional pounds
    double pounds;   // entire weight in pounds
public:
    Stonewt(double lbs);          // construct from double pounds
    Stonewt(int stn, double lbs); // construct from stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void show_lbs() const; // show weight in pounds format
    void show_stn() const; // show weight in stone format
    // conversion functions
    operator int() const;
    operator double() const;
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &stn);

    inline bool operator>(const Stonewt &s) const
    {
        return (pounds > s.pounds) ? true : false;
    }

    inline bool operator<(const Stonewt &s) const
    {
        return (pounds < s.pounds) ? true : false;
    }

    inline bool operator>=(const Stonewt &s) const
    {
        return (pounds >= s.pounds) ? true : false;
    }

    inline bool operator<=(const Stonewt &s) const
    {
        return (pounds <= s.pounds) ? true : false;
    }

    inline bool operator==(const Stonewt &s) const
    {
        return (pounds == s.pounds) ? true : false;
    }

    inline bool operator!=(const Stonewt &s) const
    {
        return (pounds != s.pounds) ? true : false;
    }

};
#endif