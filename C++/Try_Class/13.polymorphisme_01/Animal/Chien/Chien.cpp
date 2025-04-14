#include <iostream>
#include "Chien.hpp"

void Chien::FaireUnBruit()
{
    std::cout << "Wouf" << std::endl;
}

Chien::~Chien()
{
    std::cout << "Destruction de la classe fille Chien : " << this << std::endl;
}