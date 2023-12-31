// mytime2.h -- Time class after operator overloading
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time &t_inp, const Time &t);
    friend Time operator-(const Time &t_inp, const Time &t);
    friend Time operator*(double mult, const Time &t);
    friend Time operator*(const Time &t,double mult){
        return mult*t;
    }
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};
#endif