#ifndef IS_PRIME
#define IS_PRIME

#include <iostream>

bool isPrime(int num)
{
    // 6 * num +- 1
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num == 1) return false;
    
    for (int i = 3; i < num; i+=2){
        if (num % i == 0) {
            // std::cout << "found even number";
            return false;
        }
    }
    return true;
}

#endif