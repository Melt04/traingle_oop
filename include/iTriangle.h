#ifndef ITRI_H
#define ITRI_H
#include <iostream>
#include "triangle.h"
class ITriangle : public Triangle
{
private:
    float m_equalSide, m_diffSide;

public:
    ITriangle(float equalSide, float diffSide);
    ~ITriangle();
    virtual float getPerimeter();
    virtual float getArea();
};

#endif