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
    
    cout << "What operator would you like to use?kkyghhbbhj ";
    cin >> operate;
    
    cout << "What would you like your second number to be? ";
    cin >> num2;
    
    if (operate == '+')
    {
        result = num1 + num2;
        cout << num1 << ' ' << operate << ' ' << num2 << '=' << result << endl;
    }
    else if (operate == '-')
    {
        result = num1 - num2;
        cout << num1 << operate << num2 << '=' << result << endl;
    }
    else if (operate == '*')
    {
        result = num1 * num2;
        cout << num1 << operate << num2 << '=' << result << endl;
    }
    else if (operate == '/')
    {
        result = num1 / num2;
        cout << num1 << operate << num2 << '=' << result << endl;
    }
    else {
        cout << "That is not a valid input." << endl;
    }
    
    return 0;
}for (auto i = i.begin(); i != i.end(); ++i) {
    std::cout << *i << std::endl;
}