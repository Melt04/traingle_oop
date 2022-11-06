#include <iostream>
#include "../include/sTriangle.h"
using namespace std;

STriangle::STriangle(float s1, float s2, float s3)
{
    this->m_sideOne = s1;
    this->m_sideTwo = s2;
    this->m_sideThree = s3;
}

STriangle::~STriangle()

{
}

float STriangle::getPerimeter()
{
    return this->m_sideOne + this->m_sideTwo + this->m_sideThree;
};

float STriangle::getArea()
{
    float smiPer = this->getPerimeter() / 2;

    return (sqrt(smiPer * (smiPer - this->m_sideOne) * (smiPer - this->m_sideTwo) * (smiPer - this->m_sideThree)));
};