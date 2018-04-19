#include <iostream>
#include "multipleChoice.h"

Human::Human(double height)
{
    m_heightInches = height;
}

void Human::SetHeight(double height)
{
    m_heightInches = height;
}