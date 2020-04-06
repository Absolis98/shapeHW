#include <iostream>
#include "RegularShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Circle c1(3);
    Rectangle r1(2, 4);
    Triangle t1(3, 7);



    cout << "The area of a circle with radius " << c1.getHeight() << " is " << c1.calcArea() << endl;
    cout << "The area of a rectangle with length " << r1.getLength() << " and width " << r1.getHeight() << " is " << r1.calcArea() << endl;
    cout << "The area of a triangle with length " << t1.getLength() << " and width " << t1.getHeight() << " is " << t1.calcArea() << endl;

    return 0;
}
