#ifndef CIRCLE_H
#define CIRCLE_H

#include "RegularShape.h"

using namespace std;

class Circle : public RegularShape
{
    public:
        Circle(double r);
        ~Circle();
        double calcArea();

    protected:

    private:
};

#endif // CIRCLE_H
