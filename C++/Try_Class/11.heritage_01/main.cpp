#include <iostream>
#include "Rectangle/Rectangle.hpp"
#include "Cercle/Cercle.hpp"

int main()
{
    Rectangle r{10.0, 5.0};
    Cercle c{10.0};

    std::cout << c.getArea() << std::endl;
    std::cout << r.getArea() << std::endl;
    std::cout << r.getPerimeter() << std::endl;

    return 0;
}
