// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "ch11_5_stone.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    mode = POUND_FP;
    stone = int(lbs) / Lbs_per_stn; // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    mode = STONE;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(double in, Mode form){
    mode = form;

    if(STONE == mode){
        stone = in;
        pounds = in * Lbs_per_stn;
        pds_left = int(pounds) % Lbs_per_stn + pounds - int(pounds);
    }
    else if(POUND_FP == mode || POUND == mode){
        pounds = in;
        stone = pounds / Lbs_per_stn;
        pds_left = int(pounds) % Lbs_per_stn + pounds - int(pounds);
    }
}

Stonewt::Stonewt() // default constructor, wt = 0
{
    mode = STONE;
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() // destructor
{
}

Stonewt Stonewt::operator+(const Stonewt &s) const{

    Stonewt temp;

    temp.pounds = pounds + s.pounds;
    temp.stone = int(temp.pounds) / Lbs_per_stn;
    temp.pds_left = int(pounds + s.pounds) % Lbs_per_stn + (pds_left + s.pds_left) - int(pds_left + s.pds_left);

    return temp;
}

Stonewt Stonewt::operator-(const Stonewt &s) const{

    Stonewt temp;

    temp.pounds = pounds - s.pounds;
    temp.stone = int(temp.pounds) / Lbs_per_stn;
    temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);

    return temp;
}

Stonewt Stonewt::operator*(const Stonewt &s) const{

    Stonewt temp;

    temp.pounds = pounds * s.pounds;
    temp.stone = int(temp.pounds) / Lbs_per_stn;
    temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(temp.pounds);

    return temp;
}

std::ostream &operator<<(std::ostream &os, const Stonewt &s){
    if(s.STONE == s.mode)
        os << s.stone << " stone, " << s.pds_left << " pounds";
    else if(s.POUND == s.mode)
        os << int(s.pounds) << " pounds";
    else if(s.POUND_FP == s.mode)
        os << s.pounds << " pounds";

    return os;
}


// // show weight in stones
// void Stonewt::show_stn() const
// {
//     cout << stone << " stone, " << pds_left << " pounds\n";
// }

// // show weight in pounds
// void Stonewt::show_lbs() const
// {
//     cout << pounds << " pounds\n";
// }

void Stonewt::changeMode(Mode form){
    mode = form;
}