#include "mathematics.h"
using namespace std;

int main() {
    int sum = 0;
    int total = 0;
    int testNum = 0;
    // while numPrimes < 3000
    // test is i prime
    // if yes add to sum
    
    while (total < 3000){
        if (isPrime(testNum)){
            sum += testNum;
            total++;
        }
        testNum++;
    }
    
    cout << endl;
    cout << "Sum: " << sum;
}
// 38645211