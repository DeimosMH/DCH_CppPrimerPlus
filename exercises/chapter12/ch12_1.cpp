#include <iostream>
#include "ch12_1_cow.h"

int main(){
    
    {
        Cow notMyCow;
        Cow Mooo("Moo", "Eat grass",  253);
        Cow Boo("EmBoo", "Scaring cows", 199);

        Cow myCow = Mooo;
        Cow initMyCow(Mooo);

        Boo.ShowCow();
        Mooo.ShowCow();
        notMyCow.ShowCow();
        myCow.ShowCow();
        initMyCow.ShowCow();
    }
    return 0;
}