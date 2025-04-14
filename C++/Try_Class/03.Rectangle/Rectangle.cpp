#include <iostream>
#include <iomanip>
#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : _width(width), _height(height)
{

}

double Rectangle::getPerimeter()
{
    return 2*((this->_width) + (this->_height));
}

double Rectangle::getArea()
{
    return ((this->_width) * (this->_height));
}

void Rectangle::scale(double zoom)
{
    this->_width *= zoom;
    this->_height *= zoom;
}

void Rectangle::print()
{
    std::cout << std::setprecision(3) << this->_width << " " << std::setprecision(3) << this->_height << std::endl;
}

void Rectangle::print2(int a)
{
    if(a == 1)
    {
        std::cout << getPerimeter() << std::endl;
    }
    else if(a == 2)
    {
        std::cout << getArea() << std::endl;
    }
}