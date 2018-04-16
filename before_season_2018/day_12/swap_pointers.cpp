#include <iostream>
using namespace std;

void swap(int &firstref, int &secondref, int num1, int num2){
    firstref = num2;
    secondref = num1;
}

void print (int ref1, int ref2){
    cout << "reference 1 = " << ref1 << endl;
    cout << "reference 2 = " << ref2 << endl << endl;
}

int main() {
    int num1 = 1;
    int num2 = 2;
    int &reftoNum1 = num1;
    int &reftoNum2 = num2;
    
    print(reftoNum1, reftoNum2);
    swap(reftoNum1, reftoNum2, num1, num2);
    print(reftoNum1, reftoNum2);
    
    return 0;
}