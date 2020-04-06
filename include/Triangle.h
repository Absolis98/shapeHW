#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "RegularShape.h"

using namespace std;

class Triangle : public RegularShape
{
    public:
        Triangle(double l, double h);
        ~Triangle();
        double calcArea();

    protected:

    private:
};

#endif // TRIANGLE_H
