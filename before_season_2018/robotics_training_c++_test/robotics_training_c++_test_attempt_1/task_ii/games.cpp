#include <iostream>
#include <cstdlib>
using namespace std;

enum class Items {
  HEALTH_POTIONS,
  TORCHES,
  ARROWS
};

void randomAssignItems (int array[], int i){
    for (var j = i; j < 0; j--){
        array.push(Items[rand()]);
    }
}

int main() {
    int myItems[100];
    randomAssignItems(myItems, 100);
    
    return 0;
}