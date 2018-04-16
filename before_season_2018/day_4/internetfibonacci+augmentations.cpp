#include <iostream>
using namespace std;

int main ()
{
    int first  = 1;
    int second = 2;
    int fibonacci = 0;
    int sum = 0;
    
    while (fibonacci <= 4000000){
        
        fibonacci = second;
        cout << fibonacci << endl;
        fibonacci = first + second;
        first = second;
        second = fibonacci;
        cout << fibonacci << endl;
        
        sum += fibonacci;
        
        
    }
    
    cout << sum << endl;
    
    return 0;
}