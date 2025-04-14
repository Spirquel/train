#include <iostream>
#include "voiture.hpp"

std::tuple<double, double> Voiture::Drifter()
{
    Vehicule::usure_pneus_ += 0.1;
    casse_moteur_ += 0.2;
    return std::make_tuple(Vehicule::usure_pneus_, casse_moteur_);
}

void Voiture::getCasseMoteur()
{
    std::cout << "Usure de la casse moteur actuelle : " << casse_moteur_ << std::endl;
}

Voiture::~Voiture()
{
    std::cout << "destruction de la classe fille Voiture : " << this << std::endl;
}