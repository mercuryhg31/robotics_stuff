#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void assignRandomVals(vector<int> &array, int size){
    int randNum;
    for (int i = 0; i < size; i++){
        // Define my random value
        randNum = rand();
        // Append it to the end of the array
        array.push_back(randNum);
    }
    
    // array = {35, 73} push_back
    // VS
    // array = {73, 35} push_front
}
// References do not copy values. It's not going to copy every single value in the array and send it into the function. I just have all this data stored in this place. You're only passing in a name, or like a memory adress or something like that. Why not? It's expensive.
void printArray(vector<int> &array) {
    for (int i = 0; i < array.size(); i++){
        cout << array [i];
        // cout << array [i] << " ";
        // cout << array [i] << endl;
    }
    cout << array[array.size() - 1];
}

int main() {
    // Start the random number generator using a seed of 900
    srand (900);
    
    vector<int> largeArray;
    
    // int largeArray[1000] = {};
    // srand(1000);
    
    // How do we call this function?
    assignRandomVals(largeArray, 99999);
    printArray(largeArray);
    
    return 0;
}