#ifndef _RECTANGLE_
#define _RECTANGLE_

#include "../Forme/Forme.hpp"

class Rectangle : public Forme
{
    public:
        Rectangle(double heigth, double width);
        ~Rectangle();
        double getPerimeter();
        double getArea();

    private:
        double _heigth;
        double _width;
};

#endif
