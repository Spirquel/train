#include <iostream>
#include "Velo.hpp"

int Velo::Accelerer()
{
    return (Vehicule::vitesse_ += 4);
}

Velo::~Velo()
{
    std::cout << "destruction de la classe fille Velo : " << this << std::endl;
}