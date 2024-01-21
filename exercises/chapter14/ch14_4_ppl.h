#ifndef _PPL_H_
#define _PPL_H_

#include <iostream>
#include <string>
#include <random> // for Gunslinger::Draw

// ---------------------------------
class Person
{
private:
    std::string sFirstName;
    std::string sLastName;

public:
    Person(std::string fn = "", std::string ln = ""); // Inefficient constructor but simple
    // Person::Person(std::string&& fn = "", std::string&& ln = "");      // Efficient constructor (pass by ref)
    ~Person();

    virtual void Show() const;
    virtual void Set();
};

// ---------------------------------
class Gunslinger : virtual public Person
{
private:
    int iNotches;

public:
    Gunslinger(int notc = 6, std::string fn = "", std::string ln = "");
    ~Gunslinger(){};

    double Draw();
    virtual void Show() const;
    virtual void Set();
};

// ---------------------------------
class PokerPlayer : virtual public Person
{
public:
    PokerPlayer(std::string fn = "", std::string ln = "") : Person(fn, ln){};
    ~PokerPlayer();

    int Draw();
    virtual void Show() { Person::Show(); std::cout << "Type: Poker player";  }; // PokerPlayer has to use Person::Show according to task;
    virtual void Set(){ Person::Set(); };
};

// ---------------------------------
class BadDude : public Gunslinger, public PokerPlayer
{
private:
    int iNextCard = 1;
    double dDrawTime = (double)(rand() % 1000) / 1000; // Gunslinger is purely random, while BadDude have constant Draw Time
public:
    BadDude(int notc = 6, std::string fn = "", std::string ln = "") : Person(), Gunslinger(), PokerPlayer(){};
    ~BadDude();

    double Gdraw(){ return dDrawTime; };
    int Cdraw(){return iNextCard > 51 ? iNextCard = 0 : ++iNextCard;};
    virtual void Set();
};

#endif