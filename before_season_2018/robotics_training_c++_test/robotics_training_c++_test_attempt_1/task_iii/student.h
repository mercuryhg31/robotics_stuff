#ifndef STUDENT_THINGS
#define STUDENT_THINGS

#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
         string m_firstname;
         string m_lastname;
         int m_id;
         int m_grade;
         string m_school;
         int m_qpa;
         bool m_attendance;
    public:
        student (string first, string last, int id, int grade, string school, int qpa, bool attend){
            m_firstname = first;
            m_lastname = last;
            m_id = id;
            m_grade = grade;
            m_qpa = qpa;
            m_attendance = attend;
        }
        print(Student) {
            cout << "Student(" << first << " " << last << ")" << endl;
            cout << "ID(" << id << ")" << endl;
            cout << "Grade(" << grade << ")" << endl;
            cout << "School Name(" << school << ")" << endl;
            cout << "QPA(" << qpa << ")" << endl;
            cout << "Attendance(" << attend << ")" << endl;
        }
        toggleAttendance (bool attend) {
            if (attend) {
                attend = false;
            } else if (!attend) {
                attend = true;
            }
        }
};

#endif