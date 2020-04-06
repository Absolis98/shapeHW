#include "Rectangle.h"

Rectangle::Rectangle(double l, double h)
:RegularShape(l, h)
{

}

Rectangle::~Rectangle()
{
    //dtor
}

double Rectangle::calcArea()
{
    return area = (*this).getLength() * (*this).getHeight();
}
