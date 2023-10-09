#include <iostream>

int main(){
    using namespace std;
    char cMenu;

    cout << "Please enter one of the following choices:" << endl 
         << "c) carnivore\t p) pianist" << endl 
         << "t) tree\t\t g) game" << endl;

    cin >> cMenu;

    while(true){
        switch (cMenu)
        {
        case 'c':        
            cout << "Cat is a carnivore.";
            break;
        case 'p':        
            cout << "Beethoven is a pianist";
            break;
        case 't':        
            cout << "A maple is a tree.";
            break;
        case 'g':        
            cout << "Rain World is a good game.";
            break;
        default:
            cout << "Please enter a: c, p, t, or g: ";
            break;
        }
        cin >> cMenu;
    }
    
    return 0;
}