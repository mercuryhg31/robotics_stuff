#ifndef PRIME
#define PRIME

#include <iostream>
using namespace std;

bool isPrime(int num) {
    bool condition = true;
    for (int i = num--; i > 1; i--){
        if (num % i == 0) {
            condition = false;
        } else {
            condition = true;
        }
    }
    if (num == 1){
        condition = false;
    }
    return condition;
}
#endif