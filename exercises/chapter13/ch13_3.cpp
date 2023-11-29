// usebrass2.cpp -- polymorphic example - modified for exercise
// compile with brass.cpp
#include <iostream>
#include <string>
#include "ch13_3_dma.h"

const int ALBUMS = 2;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    baseDMA *p_albums[ALBUMS];
    std::string tmp_lbl, temp_color;
    long tmp_rtg;
    char kind;
    for (int i = 0; i < ALBUMS; i++)
    {
        cout << "Enter name of " << i + 1 << " music album: ";
        getline(cin, tmp_lbl);
        cout << "Enter rating of the album: ";
        cin >> tmp_rtg;
        cout << "Enter 1 for baseDMA (Album with Dynamic Music Arrangement filter) album or "
             << "2 for lacksDMA (Album without Dynamic Music Arrangement filter) album : ";
        while (cin >> kind && (kind != '1' && kind != '2'))
            cout << "Enter either 1 or 2: ";
        if (kind == '1')
        {
            cout << "Enter dominating color of the album: $";
            cin >> temp_color;
            p_albums[i] = new lacksDMA(temp_color, tmp_lbl, tmp_rtg);
        }
        else
        {
            std::string tmp_style;
            cout << "Enter the style of " << i << " the album ";
            cin >> tmp_style;
            p_albums[i] = new hasDMA(tmp_style, tmp_lbl, tmp_rtg);
        }
        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < ALBUMS; i++)
    {
        p_albums[i]->View();
        cout << endl;
    }
    for (int i = 0; i < ALBUMS; i++)
    {
        delete p_albums[i]; // free memory
    }
    cout << "Done.\n";
    return 0;
}