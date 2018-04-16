#ifndef STUDENT_HEADER
#define STUDENT_HEADER

#include <iostream>
#include <string>
using namespace std;
// #define print()
// make a class with a first name, last name, gpa, attendance
class student{
    private:
        string s_f_name;
        string s_l_name;
        string s_school; // for nerds
        double s_gpa;
        bool s_attendance;
        // int id;
    public:
        Student(string first = "Harry", string last = "Potter", string school = "Hogwarts", double gpa = 0, bool attendance = false){
            // constructor
            s_f_name = first;
            s_l_name = last;
            s_school = school;
            s_gpa = gpa;
            s_attendance = attendance;
        }
        void print() {
            cout << "Student(" << s_f_name << " " << s_l_name << ")" << endl;
        }
        void toggleAttendance() {
            // changes true -> false -> true
            s_attendance = !(s_attendance);
        }
        void compareStudents (Student otherStudents){
            // break for 5 minutes
            cout << s_f_name << " has a GPA of " << s_gpa << endl << otherStudents.s_f_name << " has a GPA of " << otherStudents.s_gpa << "." << endl;  
            if (s_gpa > otherStudents.s_gpa){
                cout << s_f_name << " is a better student than " << otherStudents.s_f_name << endl;
            } else if (s_gpa < otherStudents.s_gpa){
                cout << s_f_name << " is a worse student than " << otherStudents.s_f_name << endl;
            } else if (s_gpa == otherStudents.s_gpa){
                cout << s_f_name << " is eqally bad a student as " << otherStudents.s_f_name << endl;
            } else {
                cout << "wut" << endl;
            }
        }
};

#endif