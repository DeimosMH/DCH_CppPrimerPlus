// >>>>> D <<<<<
#include "ch13_4_vport.h"

VintagePort::VintagePort() 
    : Port()
{
    nickname = new char[1];
    nickname[0] = '\0';

    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y) 
    : Port(br, "none", b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    nickname[strlen(nn)]  = '\0';

    year = y;
}

VintagePort::VintagePort(const VintagePort &vp)
    : Port(vp)
{
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    nickname[strlen(vp.nickname)] = '\0';

    year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if(this == &vp)
        return *this;

    Port::operator=(vp);
    
    delete[] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    nickname[strlen(vp.nickname)] = '\0';

    year = vp.year;

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "Nickname: "   << nickname << endl;
    cout << "Year"         << year << endl;
}

ostream &operator<<(ostream &os, const VintagePort &vp)
{
    os << (const Port &)vp;
    os << ", " << vp.nickname << ", " << vp.year;
    return os;
}
