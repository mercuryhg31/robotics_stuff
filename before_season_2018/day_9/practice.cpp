// #include <iostream>
// using namespace std;

// void randomAssign() {
    
// }

// int main() {
    
//     int size;
//     cout << "How big do you want the array?";
//     cin >> size;
//     int numbers[size];
//     srand((unsigned)time(0));
//     for(int i = 0; i < size; i++){
//         array[1] = (rand()%100)+1;
//         cout << array[1] << endl;
//     }
    
//     return 0;
// }
#include <iostream>
#include <ctime>
using namespace std;
 
//prototypes
void printFunc(int[]);
void fillFunc(int[]);
 
int main()
{
int random[25]; //0-24 is 25 remember array indeices
srand((unsigned)time(NULL));
fillFunc(random)
printFunc(random);
return 0;
}
 
void fillFunc(int[] arr)
{
        for (int i = 1; i < 25; i++)
        {
                    arr[i] = 1+ rand() % 10;
         }
 
}
