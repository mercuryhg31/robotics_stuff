#include <iostream>
using namespace std;

int main()
{
    float num1;
    float num2;
    char operate;
    float result;
    
    cout << "What would you like your first number to be? ";
    cin >> num1;
    
    cout << "What operator would you like to use? ";
    cin >> operate;
    
    cout << "What would you like your second number to be? ";
    cin >> num2;
    
    if (operate == '+')
    {
        result = num1 + num2;
        cout << num1 << ' ' << operate << ' ' << num2 << ' ' << '=' << ' ' << result << endl;
    }
    else if (operate == '-')
    {
        result = num1 - num2;
        cout << num1 << ' ' << operate << ' ' << num2 << ' ' << '=' << ' ' << result << endl;
    }
    else if (operate == '*')
    {
        result = num1 * num2;
        cout << num1 << ' ' << operate << ' ' << num2 << ' ' << '=' << ' ' << result << endl;
    }
    else if (operate == '/')
    {
        result = num1 / num2;
        cout << num1 << ' ' << operate << ' ' << num2 << ' ' << '=' << ' ' << result << endl;
    }
    else {
        cout << "Thou art an idiot." << endl;
    }
    /*if (operate == '^')
    {
        result = pow(num1,num2);
        cout << num1 << operate << num2 << '=' << result << endl;
    }*/
    
    return 0;
}