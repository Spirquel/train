#include <iostream>
#include "Rectangle2.hpp"

Rectangle2::Rectangle2(float _longueur, double _largeur, std::string _couleur) : longueur_(_longueur), largeur_(_largeur), couleur_(_couleur)
{}

Rectangle2::~Rectangle2()
{
    std::cout << "destruction de l'objet: " << this << std::endl;
}

void Rectangle2::setLongueur(float _longueur)
{
    longueur_ = _longueur;
}

void Rectangle2::setLargeur(double _largeur)
{
    largeur_ = _largeur;
}

void Rectangle2::setCouleur(std::string _couleur)
{
    couleur_ = _couleur;
}

void Rectangle2::get()
{
    std::cout << "Valeur longueur: " << longueur_ << std::endl;
    std::cout << "Valeur largeur: " << largeur_ << std::endl;
    std::cout << "Valeur couleur: " << couleur_ << std::endl;
}