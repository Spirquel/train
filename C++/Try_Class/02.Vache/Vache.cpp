#include <iostream>
#include "Vache.hpp"

Vache::Vache()
{
    this->_lait = 0.0;
}

void Vache::brouter()
{
    this->_lait += 1.0;
}

double Vache::traire()
{
    double save_lait = this->_lait;
    this->_lait = 0.0;
    return save_lait;
}

void Vache::meuh()
{
    std::cout << "Meuh" << std::endl;
}