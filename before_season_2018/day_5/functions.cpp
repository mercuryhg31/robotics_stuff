#include <iostream>
using namespace std;

// //define greet here
// void greet(string username = "Harry"){
//         cout << username << ", yer a wizard!" << endl;
// }


int main(){
    // //Greeting
    // string username;
    // cout << "Hi, what's your name? ";
    // cin >> username;
    
    // greet();
    
    //Random number generation
    
    srand(1);
    int guess;
    int number = rand()%100;
    
    // srand(time(NULL));
    // cout << n << endl;
    
    cout << endl;
    cout << "Let's play a game! Guess a number between 1 and 100" << endl;
    cout << endl;
    while (guess != number){
        cout << "What is your guess? ";
        cin >> guess;
        if (guess < number){
            cout << endl;
            cout << "Too low!" << endl;
            cout << endl;
            
        }
        else if (guess > number){
            cout << endl;
            cout << "Too high!" << endl;
            cout << endl;
        }
        // else if (guess = NULL){
        //     cout << "Thou art an idiot." << endl;
        // }
    }
    if (guess = number){
        // number += 1;
        cout << endl;
        cout << "You've got it!" << endl;
    }
    
    
    return 0;
}