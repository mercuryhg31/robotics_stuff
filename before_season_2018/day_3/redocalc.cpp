#include <iostream>
using namespace std;

int main() {
    //Variable declarations
    double num1;
    double num2;
    char operation;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operation: ";
    cin >> operation;
    cout << "Enter the second number: ";
    cin >> num2;
    if (operation == '/'&& num2 == 0) {
        cout << "Thou art an idiot." << endl;
        return 1;
    }
    else {
    switch (operation) {
        case '+': 
            cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
            break;
        case '-': 
            cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
            break;
        case '*': 
            cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
            break;
        case '/': 
            cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
            break;
        default:
            cout << "Thou art an idiot." << endl;
            return 1;
    }
    }
    /*
    
    And : &&
    Equals : ==
    Or : ||
    Not equal : !=
    
    */
    
    /*
    
    if ((num1 > 4 OR num1 > 10)&& operation == '+'){}
    if (!(num1 > 4 OR num1 > 10)&& operation == '+'){}
    
    */
    
    
    return 0;
}