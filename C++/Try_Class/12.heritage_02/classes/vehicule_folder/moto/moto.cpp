#include <iostream>
#include "moto.hpp"

double Moto::RoueArriere()
{
    return (Vehicule::usure_pneus_ += 0.2);
}

Moto::~Moto()
{
    std::cout << "destruction de la classe fille Moto : " << this << std::endl;
}