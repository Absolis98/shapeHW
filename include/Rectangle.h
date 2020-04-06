#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "RegularShape.h"

using namespace std;

class Rectangle : public RegularShape
{
    public:
        Rectangle(double l, double h);
        ~Rectangle();
        double calcArea();


    protected:

    private:
};

#endif // RECTANGLE_H
