#include <iostream>
#include <typeinfo>
using namespace std;

// namespace myfn {
//     int cout
// }

void printInfo(int num, int &referenceToNum){
    cout << "num = " << num << endl;
    cout << "referenceToNum = " << referenceToNum << endl << endl;
}

// void printRef(int &ref){
//     cout << ref << endl;
// }

void changeRef(int &ref){
    cout << ref << endl;
}

int main(){
    int num = 9;
    // Creates a reference to num
    // A reference is just like an alias
    int &referenceToNum = num;
    
    printInfo(num, referenceToNum);
    
    // // Type of array
    // int array[9];
    // cout << typeid(array).name() << endl; // A9_i means array, 9 integers
    
    // Change the value of the reference
    referenceToNum = 5;
    
    // What happens to num?
    printInfo(num, referenceToNum);
    
    // what if we change num?
    num = 3;
    printInfo(num, referenceToNum); // This is essentially just another name for one.
    
    printRef(num);
    
    return 0;
}