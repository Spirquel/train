#include <iostream>
#include "Rectangle.hpp"

int main()
{
    Rectangle r{10.0, 20.0};
    r.print();

    r.getPerimeter();
    r.print2(1);

    r.getArea();
    r.print2(2);
    
    r.scale(5.0);
    r.print();

    return 0;
}