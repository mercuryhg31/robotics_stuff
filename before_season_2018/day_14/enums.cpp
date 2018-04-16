#include <iostream>
using namespace std;

// Enums
enum Color
{
    RED,
    BLUE,
    GREEN,
    MAGENTA,
    HOT_DOG_RED,
    VEGAN_CHEESE_YELLOW
};

enum MonsterType
{
    WYWERN,
    DRAGON,
    SIREN,
    ORC,
    ERAWAN,
    GOBLIN,
    DEMOGORGON,
    HRIBIK,
    MINDFLAYER
};

int main()
{
    // Declare myFavoriteColor as VEGAN_CHEESE_YELLOw
    Color myFavoriteColor = MAGENTA;
    
    // What does it print out?
    cout << "myFavoriteColor: " << myFavoriteColor << endl;
    
    MonsterType jeff = ORC;
    
    // What happens here?
    if (myFavoriteColor == jeff) {
        
        // This one prints becuase both jeff and myFavoriteColor equals 4
        cout << "Colors and monsters can be equal" << endl;
    } else {
        cout << "Colors and monsters can't be equal" << endl;
    }
    
    return 0;
}