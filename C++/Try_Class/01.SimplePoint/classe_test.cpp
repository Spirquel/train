#include <iostream>
#include "classe_test.hpp"

SimplePoint::SimplePoint(char nom, double abscisse) : _nom(nom), _abscisse(abscisse)
{

}

void SimplePoint::display()
{
    std::cout << "Nom : " << _nom << " abscisse : " << _abscisse << std::endl;
}

void SimplePoint::translate(double arg)
{
    this->_abscisse = this->_abscisse + arg;
}