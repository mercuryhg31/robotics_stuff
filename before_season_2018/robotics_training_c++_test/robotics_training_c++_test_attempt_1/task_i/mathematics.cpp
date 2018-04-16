#include "mathematics.h"

int main() {
    int sum = 0;
    for (int i = 0; i < 3001; i++){
        if (isPrime(i)) {
            sum += i;
        }
    }
    cout << "The total sum of the first 3000 prime numbers is " << sum << "." << endl;
    
    return 0;
}