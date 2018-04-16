#include <iostream>
using namespace std;

struct DateStruct
{
    // The "m_" signifies a member variable
    int m_month;
    int m_day;
    int m_year;
};

void print(DateStruct &date)
{
    cout << date.m_month << "/" << date.m_day << "/" << date.m_year << endl;
}

int main()
{
    DateStruct today = {12, 4, 2017};
    print(today);
    
    return 0;
}