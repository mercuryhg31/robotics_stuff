#include <iostream>
using namespace std;

class DateClass {
    private: // Also private or protected
        int m_month;
        int m_day;
        int m_year;
    public:
        
        // You can also member functions (methods)
        void print() {
            cout << m_month << "/" << m_day << "/" << m_year << endl;
        }
        // Create a Contructor
        // This is run when the object is declared and initialized
        DateClass(int month, int day, int year) {
            m_month = month;
            m_day = day;
            m_year = year;
        }
};

int main() {
    // // Defining an object "today" that belongs to the class
    // DateClass today;
    // // Setting the attributes
    // today.m_month = 12;
    // today.m_day = 4;
    // today.m_year = 2017;
    // // Run the print method for the today object
    // today.print();
    
    // Defining an object "myBirthday" that belongs to the class "DateClass"
    DateClass myBirthday(8, 28, 1999);
    myBirthday.print();
    
    return 0;
}