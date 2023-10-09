#include <iostream>
#include <string.h>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void fnBoxVal(box b1);
void fnBoxAddr(box *b2);

int main(){

    box sBox1;
    box * sBox2 = new box;

    // sBox1 - value 
    strcpy(sBox1.maker, "Oh No!");
    sBox1.height = 123.3;
    sBox1.width = 34;
    sBox1.length = 899;
    sBox1.volume = 500;

    fnBoxVal(sBox1);
    fnBoxAddr(&sBox1);

    // sBox2 - pointer by new
    strcpy(sBox2->maker, "Adress Maker");
    sBox2->height = 23;
    sBox2->width = 45;
    sBox2->length = 65;
    sBox2->volume = 98;    

    fnBoxVal(*sBox2);
    fnBoxAddr(sBox2);

    return 0;
}

void fnBoxVal(box b1){
    cout << "maker: " << b1.maker << endl;
    cout << "height: " << b1.height << endl;
    cout << "width: " << b1.width << endl;
    cout << "length: " << b1.length << endl;
    cout << "volume: " << b1.volume << endl << endl;
}

void fnBoxAddr(box *b2){
    b2->height = b2->volume;
    b2->width = b2->volume;
    b2->length = b2->volume;

    cout << "maker: " << b2->maker << endl;
    cout << "height: " << b2->height << endl;
    cout << "width: " << b2->width << endl;
    cout << "length: " << b2->length << endl;
    cout << "volume: " << b2->volume << endl << endl;
}