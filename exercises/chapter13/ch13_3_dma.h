// dma.h -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_

#include <iostream>
#include <cstring>
#include <string>

// ABC (Abstract Base Class) class
class absDMA
{
protected:
    char *label;
    int rating;

public:
    absDMA(const std::string &l = "null", int r = 0);
    absDMA(const char *l = "null", int r = 0);
    absDMA(const absDMA &ab);
    virtual void View() = 0; // pure virtual function
    virtual ~absDMA();
};

// Base Class Using DMA - can be deleted and changed into absDMA 
// (left only for sake of double inheritance)
class baseDMA : public absDMA
{
public:
    baseDMA(const std::string &l = "null", int r = 0) : absDMA(l, r) {};
    baseDMA(const char *l = "null", int r = 0) : absDMA(l, r) {};
    baseDMA(const baseDMA &rs) : absDMA(rs) {};
    baseDMA &operator=(const baseDMA &rs);
    friend std::ostream &operator<<(std::ostream &os,
                                    const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public baseDMA
{
private:
    enum
    {
        COL_LEN = 40
    };
    char color[COL_LEN];

public:
    lacksDMA(const std::string &c = "blank", const std::string &l = "null",
                int r = 0);
    lacksDMA(const char *c = "blank", const char *l = "null",
             int r = 0);
    lacksDMA(const char *c, const baseDMA &rs);
    virtual void View();
    friend std::ostream &operator<<(std::ostream &os,
                                    const lacksDMA &rs);
};

// derived class with DMA
class hasDMA : public baseDMA
{
private:
    char *style;

public:
    hasDMA(const std::string &s = "none", const std::string &l = "null",
           int r = 0);
    hasDMA(const char *s = "none", const char *l = "null",
           int r = 0);
    hasDMA(const char *s, const baseDMA &rs);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    virtual void View();
    hasDMA &operator=(const hasDMA &rs);
    friend std::ostream &operator<<(std::ostream &os,
                                    const hasDMA &rs);
};
#endif
