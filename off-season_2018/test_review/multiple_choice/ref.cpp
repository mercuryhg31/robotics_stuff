// Grade &refToMyGrade = myGrade;

// Hella better than pointers

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namestream std;

// DO NOT NEED TO KNOW???////////////////////
class BigDataType
{
    private:
    int m_bigVal[];
    public:
    BigDataType(int num)
    {
        m_bigVal = malloc(sizeof(int) * 100);
    }
    ~BigDataType() {
        free(m_bigVal);
    }
    int getVal(int index)
    {
        return m_bigVal[0];
    }
}
/////////////////////////////////////////////

void Compare(BigDataType &dt1, BigDataType &dt2)
{
    cout << "Hi, " << (dt1.getVal(0) > dt2.getVal(0)) ? "dt1" : "dt2" << "is bigger\n";
}

int main()
{
    BigDataType dt1;
    BigDataType dt2;
    Compare(dt1, dt2);
} // this should return that dt1 is bigger, except I suck at copying stuff down