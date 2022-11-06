#ifndef ITRI_H
#define ITRI_H
#include <iostream>
#include "triangle.h"
class STriangle : public Triangle
{
private:
    float m_sideOne, m_sideTwo, m_sideThree;

public:
    STriangle(float s1, float s2, float s3);
    ~STriangle();
    virtual float getPerimeter();
    virtual float getArea();
};

#endif