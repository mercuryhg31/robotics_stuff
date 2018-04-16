#ifndef MATH
#define MATH

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    if (num <= 1){
        return false;
    }
    if (num % 2 == 0){
        return false;
    } else if (num == 2){
        return true;
    }
    
    for (int i = 2; i < sqrt(num) + 1; i++){
        if (num % i == 0){
            return false;
            cout << "I am invisibleeeeeee" << endl;
        }
    }
    // If the number isn't divisible by any of the possible factors, return true
    return true;
}
#endif