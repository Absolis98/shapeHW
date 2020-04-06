#include "Triangle.h"

Triangle::Triangle(double l, double h)
: RegularShape(l, h)
{

}

Triangle::~Triangle()
{
    //dtor
}

double Triangle::calcArea()
{
    return area = 0.5 * (*this).getLength() * (*this).getHeight();
}
