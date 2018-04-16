#include "mathematics.h"

int main() {
    int sum = 0;
    int primes = 0;
    for (int i = 2; primes < 3000; i++){
        if (isPrime(i)){
            sum += i;
            primes++;
            // cout << "Prime " << primes << ": " << i << endl;
        }
    }
    cout << sum << endl;
    
    return 0;
}