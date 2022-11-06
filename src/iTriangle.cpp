#include <iostream>
#include "../include/iTriangle.h"
using namespace std;

ITriangle::ITriangle(float equalSide, float diffSide)
{
    this->m_equalSide = equalSide;
    this->m_diffSide = diffSide;
}

ITriangle::~ITriangle()

{
}

float ITriangle::getPerimeter()
{
    return this->m_equalSide * 2 + this->m_diffSide;
};

float ITriangle::getArea()
{
    return (this->m_diffSide * (sqrt(pow(this->m_equalSide, 2) - (pow(this->m_equalSide, 2) / 4)))) / 2;
};