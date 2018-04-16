#include <iostream>
using namespace std;

// Enums
enum class Color
{
    RED,
    BLUE,
    GREEN = 100, // You can explicitly assign integer values, like this
    MAGENTA,
    HOT_DOG_RED,
    VEGAN_CHEESE_YELLOW
};

enum Monster
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
    Color myFavoriteColor = Color::MAGENTA;
    // Declare jeff as an ORC
    Monster jeff = ORC;
    
    // What does it print out?
    cout << "myFavoriteColor: " << (int)myFavoriteColor << endl;
    cout << "jeff: " << (int)jeff << endl;
    
    // // What happens here?
    // if (myFavoriteColor == jeff) {
        
    //     // This one prints becuase both jeff and myFavoriteColor equals 4
    //     cout << "Colors and monsters can be equal" << endl;
    // } else {
    //     cout << "Colors and monsters can't be equal" << endl;
    // }
    
    return 0;
}