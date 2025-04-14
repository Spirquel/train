#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double heigth, double width) : _heigth(heigth), _width(width)
{}

double Rectangle::getPerimeter()
{
    return ((_heigth + _width)*2);
}

double Rectangle::getArea()
{
    return (_heigth * _width);
}

Rectangle::~Rectangle()
{
    std::cout << "destruction de la classe fille Rectangle : " << this << std::endl;
}
