#include <iostream>
#include "Train.hpp"

int Train::Accelerer()
{
    return (Vehicule::vitesse_ += 80);
}

Train::~Train()
{
    std::cout << "destruction de la classe fille Train : " << this << std::endl;
}