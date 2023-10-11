#ifndef _PLORG_H_
#define _PLORG_H_

class Plorg
{
private:
    int MAX = 19;
    std::string name;
    int CI;

public:
    Plorg(std::string newName = "Plorga", int newCI = 50);
    void ChangeCI(int newCI);
    void Report();
};

#endif