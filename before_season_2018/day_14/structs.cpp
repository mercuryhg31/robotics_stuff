#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct RGB {
    // Start each color channel with a value of 0
    int red = 0;
    int green = 0;
    int blue = 0;
};

struct Student {
    string first;
    string last;
    int grade;
    double gpa;
};

int main() {
    // This is inefficient
    int r = 0;
    int g = 0;
    int b = 0;
    
    // This is better
    // This defines an RGB struct named "yellow"
    RGB yellow;
    yellow.red = 125;
    yellow.green = 125;
    
    // Defines a Student struct named "Student1"
    // Only valid in C++11
    // Sets
    Student bestStudent = {"Emily", "Granville", 10, 934};
    cout << "Hewwo?\n\n\nSample Text\n\n\n";
    // var letter = (int) bestStudent.first[0];
    cout << bestStudent.first[0] << bestStudent.last << "@ucvts.org" << endl;
    
    var first;
    var last;
    cout << "Enter first name in all lowercase: ";
    cin >> first;
    cout << "Enter last name in all lowercase: ";
    cin >> last;
    
    return 0;
}