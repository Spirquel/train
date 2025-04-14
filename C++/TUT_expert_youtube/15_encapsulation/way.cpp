#include <iostream>
#include <string>
#include "way.hpp"

Way::Way(std::string title) : title(title) /*pourquoi sans ça le compilateur marche pas ?, theo du futur :  C'est le constructeur andouille.*/
{

}

std::string Way::getTitle() const /*permet d'avoir accès à title sans le rendre public. (principe d'encapsulation).*/
{
    return this->title; /*this assure la reference à l'élément (ici title)*/ /*on return la variable/attribut privé*/
}

void Way::setTitle(std::string title)
{
    if(title.length() > 15)
    {
        throw new std::invalid_argument("Le nom est trop long 15 caracteres maxi");/*permet de créer un argument invalide*/
    }
    
    this->title = title; /*this->title renvoit au title d'origine, title = title s'écrit (ancien)title = (nouveau)title (modificateur)*/
}