#include <iostream>
#include "Vehicule.hpp"

int Vehicule::Accelerer()
{
    return (vitesse_ += 10);
}

void Vehicule::getVitesse()
{
    std::cout << vitesse_ << std::endl;
}

Vehicule::~Vehicule()
{
    std::cout << "destruction de la classe mere Vehicule : " << this << std::endl;
}