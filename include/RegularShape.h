#ifndef REGULARSHAPE_H
#define REGULARSHAPE_H

using namespace std;

class RegularShape
{
    public:
        RegularShape(double l, double h);
        RegularShape(double r);
        ~RegularShape();


        double area;
        double getLength();
        double getHeight();
    protected:

    private:
        double length;
        //height, radius and width will be synonymous
        double height;

};

#endif // REGULARSHAPE_H
