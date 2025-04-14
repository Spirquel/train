#include <iostream>
#include <list>
#include "Bag.hpp"

Bag::Bag()
{
    std::list<Cahier> cahier_sac;
}

void Bag::RangerCahier(Cahier c)
{
    cahier_sac.insert(c);std::cout << cahier_sac.
}

void Bag::FindCahier(std::string find)
{

}

void Bag::Nb_Cahier_in_bag()
{
    if(cahier_sac.empty())
    {
        std::cout << "Le sac est vide" << std::endl;
    }
    else
    {
        std::cout << "Nombre de cahiers dans le sac : " << cahier_sac.size() << std::endl;
    }
}

void Bag::Display_cahier()
{
    for(const auto& c : cahier_sac)
    {
        std::cout << c << std::endl;
    }
}

Bag::~Bag()
{
    std::cout << "destruction de la classe Bag : " << this << std::endl;
}