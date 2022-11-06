#ifndef ETRI_H
#define ETRI_H
#include <iostream>
#include "triangle.h"
class ETriangle : public Triangle
{
private:
    float m_side;

public:
    ETriangle(float side);
    ~ETriangle();
    virtual float getPerimeter();
    virtual float getArea();
};

#endif