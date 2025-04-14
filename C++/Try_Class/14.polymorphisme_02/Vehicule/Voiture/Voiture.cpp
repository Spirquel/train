#include <iostream>
#include "Voiture.hpp"

int Voiture::Accelerer()
{
    return (Vehicule::vitesse_ += 22);
}

Voiture::~Voiture()
{
    std::cout << "destruction de la classe fille Voiture : " << this << std::endl;
}