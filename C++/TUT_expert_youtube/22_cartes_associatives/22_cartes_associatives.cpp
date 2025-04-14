#include <iostream>
#include <string>
#include <unordered_map> /*eléments non ordonées (pas dans l'ordre)*/
#include <map> /*carte ordonnée*/

/* .insert() : ajouter une ou plusieurs associations; .at() : acceder à un element; .erase() : effacer un element de l'asssociation; .empty() : si taille vide; .size() : connaitre la taille
   .contains() : voir si l'association contient bien l'element voulu (C++ 23)*/

int main()
{
    std::unordered_map<int, std::string> mappos{{1, "ruisseau"},{15, "mer"},{35, "nageoire"}};  /*type de la clé (ici int), type de la valeur (ici string)*/
    /*on utilise la lib "unordered", donc tout devrait être afficher dans l'ordre décroissant*/

    for(const auto& [cle, valeur] : mappos) 
    {
        std::cout << cle << " " << valeur << std::endl;
    }   

    std::cout << "======================" << std::endl;

    std::map<int, std::string> maps{{1, "ruisseau"},{15, "mer"},{35, "nageoire"}};  /*type de la clé (ici int), type de la valeur (ici string)*/
    /*on utilise la lib "map", donc tout devrait être afficher dans l'ordre*/

    for(const auto& [cle, valeur] : maps) 
    {
        std::cout << cle << " " << valeur << std::endl;
    }   

    std::cout << "==== test commande ====" << std::endl;

    std::cout << mappos[35] << std::endl; /*affiche le troisième element enregistrer*/

    mappos[35] = "palme"; /*changement de la valeur se trouvant associé à la clé 35*/

    std::cout << mappos[35] << std::endl;

    mappos[6] = "maree"; /*création d'une association dans mappos*/

    std::cout << mappos[6] << std::endl;

    std::cout << "==== tableau nextgen ====" << std::endl;

    mappos.insert({43, "association"});
    mappos.insert({{44, "une"}, {45, "insertion"}});

    for(const auto& [cle, valeur] : mappos) 
    {
        std::cout << cle << " " << valeur << std::endl;
    } 

    std::cout << "==== ecrase ====" << std::endl;

    mappos.erase(35);

    for(const auto& [cle, valeur] : mappos) 
    {
        std::cout << cle << " " << valeur << std::endl;
    } 

    return 0;
}