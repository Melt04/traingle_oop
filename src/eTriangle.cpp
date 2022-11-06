#include <iostream>
#include "../include/eTriangle.h"
using namespace std;

ETriangle::ETriangle(float side)
{
    this->m_side = side;
}

ETriangle::~ETriangle() {}

float ETriangle::getPerimeter()
{
    return m_side * 3;
};

float ETriangle::getArea()
{
    return (pow(m_side, 2) * sqrt(3)) / 4;
};