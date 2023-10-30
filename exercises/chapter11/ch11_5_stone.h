// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
    enum Mode{
        STONE,
        POUND,      // integer pounds
        POUND_FP    // floating-point pounds
    };

private:
    enum
    {
        Lbs_per_stn = 14
    };               // pounds per stone
    int stone;       // whole stones
    double pds_left; // fractional pounds
    double pounds;   // entire weight in pounds
    Mode mode;       // Stone, integer pounds or floating-point pounds
public:
    Stonewt(double in, Mode form);// constructor for Stonewt with mode object
    Stonewt(int in, Mode form) : Stonewt(static_cast<double>(in), form) {};

    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();

    void changeMode(Mode form);

    Stonewt operator+(const Stonewt &s) const;
    Stonewt operator-(const Stonewt &s) const;
    Stonewt operator*(const Stonewt &s) const;

    friend std::ostream &operator<<(std::ostream &os, const Stonewt &stn);
    // void show_lbs() const; // show weight in pounds format
    // void show_stn() const; // show weight in stone format
};
#endif