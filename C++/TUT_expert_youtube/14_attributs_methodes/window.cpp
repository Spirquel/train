#include "window.hpp"
#include <iostream>
#include <string>

window::window(std::string t, int w, int h) : title(t) , width(w), height(h) /*constructeur*/
/*dans l'attribut privé title de ma class windows on injecte le contenu de la variable t (idem pour les deux autres)*/
{
    std::cout << "ma fenetre : " << title << " largeur : " << width << " hauteur : " << height << std::endl;
} 

void window::run() const /*ne pas oublier le window et le const doit être à la même place que le const dans .hpp*/
{
    std::cout << "affiche" << std::endl;
}

