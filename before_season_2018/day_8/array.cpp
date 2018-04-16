#include <iostream>
using namespace std;

// // Returns the size of an array as an integer
// int size(int array[]){
//     return sizeof(array) / sizeof(array[1]);
// }

// Print every value in an array
void printArrayVals(int array, unsigned int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << endl;
    }
}

int main(){
    
    //Declare an array (fixed-width)
    int numbers[3];
    numbers[0] = 17; // Sets the first value in the numbers
    numbers[1] = 15; // Sets the second value to 15
    numbers[2] = -100; //Sets the third value to -100
    // numbers[3] = 10; // ??
    
    printArrayVals(numbers, 3);
    
    //Printing our -100
    // cout << numbers[2] << endl;
    
    // Whta's the size of numbers
    // cout << size(numbers) << endl;
    
    // What's the length of the numbers array
    
    // cout << numbers[3] << endl;
    
    // What happens when we try to access an arry out of bounds/.'cout
    // numbers[1000];
    
    // // Creates a list of 10 zeros
    // int scores[10] = {};
    
    // // Creates a list of names
    // string names[] = {
    //     "Jeff",
    //     "Zach",
    //     "Harsh",
    //     "Karen",
    //     "Kenya"
    // };
    
    // cout << name1 << name2 << name3 << name4 << name5 << endl;
    
    return 0;
}