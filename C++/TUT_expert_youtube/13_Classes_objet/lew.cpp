#include "lew.hpp"
#include <iostream>

lew::lew()
{
    std::cout << "creation d\'un Point : " << this << std::endl; /*this = instance courante, fais références à l'objet crée (ici p (dans 13_classes_objet.cpp))*/
                                            /*écrire std::cout << p << std::endl; ne donne rien, pour cela on utilise this*/
                                            /*si on crée un "lew p2{};" alors this s'affichera deux fois pour chaque objet*/
}

lew::lew(const lew& p)
{
    std::cout << "copie du point p" << std::endl; /*comme p2 copie p alors "this" n'affiche plus p2 car p2 = p*/
}

lew::~lew()
{
    std::cout << "destruction de l'objet : " << this << std::endl;
}