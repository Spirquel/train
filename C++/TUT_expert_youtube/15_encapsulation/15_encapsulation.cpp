#include <iostream> 
#include "way.hpp"

int main()
{
    Way app{"Mon application graphique"}; /*j'envoi dans le constructeur je crois*/

    std::cout << app.getTitle() << std::endl; /*on appelle donc une variable/attribut bien qu'elle soit privée. grâce à l'accesseur*/ 

    app.setTitle("Nouveau titre"); /*on remplace l'ancien title par le nouveau alors que celui-ci est privé(modificateur)*/ /* dû à methode*/
    std::cout << app.getTitle() << std::endl;

    app.setTitle("wowwowowowowowowowowwowowowowowowowowowowowowowo");/*je crée un code long pour afficher le message d'erreur de if*/ /*dû à methode*/
    std::cout << app.getTitle() << std::endl;

    return 0;
}