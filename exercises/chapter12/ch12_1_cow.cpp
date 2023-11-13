#include "ch12_1_cow.h"
#include <cstring>

Cow::Cow(){
    name[0] = '\0';
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt){
    if(std::strlen(nm) < 20)
        std::strcpy(name, nm);
    else
        name[0] = '\0';

    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);

    weight = wt;
}

Cow::Cow(const Cow &c)
{
    std::strcpy(name, c.name);

    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;
}

Cow::~Cow()
{
    std::cout << "\nDelete: " << hobby;
    delete[] hobby;
}

Cow &Cow::operator=(const Cow &c){
    if (this == &c)
        return *this;

    std::strcpy(name, c.name);

    delete[] hobby;
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;

    return *this;
}

void Cow::ShowCow() const{
    std::cout << "\nName: " << name;
    std::cout << "\nHobby: " << hobby;
    std::cout << "\nWeight: " << weight;
}