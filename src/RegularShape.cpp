#include "RegularShape.h"

RegularShape::RegularShape(double l, double h)
{
    length = l;
    height = h;
}

RegularShape::RegularShape(double r)
{
    height = r;
}

RegularShape::~RegularShape()
{
    //dtor
}

double RegularShape::getLength()
{
    return length;
}

double RegularShape::getHeight()
{
    return height;
}
