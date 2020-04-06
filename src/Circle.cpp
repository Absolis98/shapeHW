#include "Circle.h"

Circle::Circle(double r)
:RegularShape(r)
{

}

Circle::~Circle()
{
    //dtor
}

double Circle::calcArea()
{
    double PI = 3.141;
    return area = PI * (*this).getHeight() * (*this).getHeight();
}
