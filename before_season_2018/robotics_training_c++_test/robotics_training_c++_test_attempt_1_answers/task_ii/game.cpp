#include <iostream>
#include <cstdlib> // for rand and srand
using namespace std;

enum class ItemType {
    HEALTH_POTION,
    TORCH,
    ARROWS,
    GEMS
};

void assignRandomItems(ItemType items[], unsigned int arraySize){ // This will change the original array at it's memory address. Also, you cannot return an array.
    
    // Loop through all of the array elements
    for (int i = 0; i <= arraySize; i++){
        // for each array element:
        int randomNumber = rand() % 4; // seed rand first
        
        // assign random ItemType to each index of array
        
        // items[i] = ItemType::ItemType[randomNumber];
        // ^^^^^^^^^^^^^^^ NOT RIGHT ^^^^^^^^^^^^^^^^^^
        
        // if rand() % 4 = 0 then itmes[i] = HEALTH_POTION
        // if rand() % 4 = 1 then itmes[i] = TORCH
        // if rand() % 4 = 2 then itmes[i] = ARROWS
        // if rand() % 4 = 3 then itmes[i] = GEMS
        // Next step vegqn cheese <<-------- ETHAN
        
        switch (randomNumber){
            case 0:
                items[i] = ItemType::HEALTH_POTION;
                cout << "Health Potion" << endl;
                break;
            case 1:
                items[i] = ItemType::TORCH;
                cout << "Torch" << endl;
                break;
            case 2:
                items[i] = ItemType::ARROWS;
                cout << "Arrows" << endl;
                break;
            case 3:
                items[i] = ItemType::GEMS;
                cout << "Gems" << endl;
                break;
            default:
                cout << "What the heck mate?!" << endl;
        }
    }
}

int main() {
    srand(1000);
    
    int size = 1000; ItemType firstItem[size];
    assignRandomItems(firstItem, size);
    
    return 0;
}