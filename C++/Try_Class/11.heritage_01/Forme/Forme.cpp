#include <iostream>
#include "Forme.hpp"

Forme::Forme() {}

Forme::~Forme()
{
    std::cout << "destruction de la classe mere (forme) : " << this << std::endl;
}
