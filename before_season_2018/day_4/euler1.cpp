#include <iostream>
using namespace std;

int main()
{
    int sum;
    for (int i = 0; i < 1001; i++){
        if (i%3==0 || i%5==0){
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "The sum of all of the numbers divisible by 3 or 5 between 0 and 1000 is " << sum << "." << endl;
}