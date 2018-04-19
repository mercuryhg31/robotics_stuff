#ifndef COOL_THING
#define COOL_THING

class Human
{
    // m_ --> member variable
    double m_heightInches;
    
public:
    Human(double height); // ~Human();
    void SetHeight(double height);
};

#endif