#include <iostream>
using namespace std;

int main()
{
    //how do i make the fibonacci sequence?!?!?! ;-;
    
    
    int first = 1;
    int second = 2;
    int sequence = 0;
    
    // for (int range = 0; range < 4000001; range++){
    //     if (range)
    // }
    
    while (sequence < 4000001) {
        cout << sequence << endl;
        sequence += second + first;
        second = sequence;
    }
    
    
    return 0;
}