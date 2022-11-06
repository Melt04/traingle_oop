#ifndef TRI_H
#define TRI_H
#include <iostream>
#include "Shape.h"
class Triangle : public Shape
{
private:
    /* data */
public:
    Triangle(/* args */);
    ~Triangle();
    virtual float getPerimeter() = 0;
    virtual float getArea() = 0;
};

#endif