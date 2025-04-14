#include <iostream>
#include "class.hpp"

Class::Class()
{
    _a = 15;
}

void Class::Affiche()
{
    std::cout << _a << std::endl;
}

/*void Methode(int b) marche pas sans faire "Class::Methode"
{
    b = _b;
}*/