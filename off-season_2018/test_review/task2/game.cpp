#include <iostream>
#include <cstdlib>
using namespace std;

enum Item
{
    TORCH,
    HEALTH_POTIONS,
    ARROW
};

void randomAssignItems(Item item[], int size)
{
    for(int i = 0; i < size; i++){
        Item randomItem;
        double random = (double) rand() / RAND_MAX; // RAND_MAX is an actual thing in C++, it's hardcoded into the language
        
        if(random < 0.333) randomItem = HEALTH_POTIONS;
        else if (random < 0.666) randomItem = TORCH;
        else randomItem = ARROW;
        
        item[i] = randomItem;
    }
}

void printArray(Item items[], int size)
{
    for (int i = 0; i < size; i++){
        switch(items[i]){
            case HEALTH_POTIONS:
                cout << "Health potion" << endl;
                break;
            case TORCH:
                cout << "Torch" << endl;
                break;
            case ARROW:
                cout << "Arrow" << endl;
                break;
            default:
                cout << "Black hole that sucks you into oblivion" << endl;
        }
    }
}

int main() {
    srand(1000);
    Item items[100];
    randomAssignItems(items, 100);
    
    printArray(items, 100);
    
    cout << "Finished printing" << endl;
    
    return 0;
}