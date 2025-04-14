#include <iostream>
#include "Cahier.hpp"

Cahier::Cahier(std::string name_cahier, std::string color_cahier, std::string format_cahier, std::string feuille_cahier) : _name_cahier(name_cahier), _color_cahier(color_cahier), _format_cahier(format_cahier), _feuille_cahier(feuille_cahier)
{}

Cahier::~Cahier()
{
    std::cout << "destruction de la classe Cahier : " << this << std::endl;
}