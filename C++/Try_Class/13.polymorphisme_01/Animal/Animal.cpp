#include <iostream>
#include "Animal.hpp"

void Animal::FaireUnBruit()
{
    std::cout << "?" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destruction de la classe mere Animal : " << this << std::endl;
}