#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <string>

enum School
{
    MHS,
    AIT,
    UCTECH,
    ALLIED,
    APA
}

class Student {
private:
    string firstName;
    string lastName;
    int id;
    int grade;
    School school;
    int QPA;
    bool inAttendance;
public:
    Student (string firstName = "john", string lastName = "dee", int id = 123456, int grade = 9, School school = MHS, int QPA = 93, bool inAttendance = false) :
        firstName(firstName), lastName(lastName), id(id), grade(grade), school(school), QPA(QPA), inAttendance(inAttendance)
    {
        
    }
    
    void print()
    {
        cout << "Student(" << firstname << " " << lastName << ")" << endl;
    }
    
    void toggleAttendance()
    {
        inAttendance = !inAttendance;
    }
    
    void compareAgainst(Student student)
    {
        cout << firstName << " has a QPA of " << QPA << "\% and " << student.firstName << " has a QPA of " << student.QPA << "\%." << flush;
        if (student.QPA > QPA){
            cout << student.firstName << " is the better student." << endl;
        }
    }
}

#endif