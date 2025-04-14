#include <iostream>
#include <string>
#include <array> /*tableau taille fixe*/
#include <vector> /*tableau taille dynamique (vector = vecteur)*/
#include "someone.hpp"
#include "english.hpp"
#include "indonesian.hpp"

/*tableau est un type conteneur (implementation de differente structure de données en info)*/

/*std::array : fill() = remplir le tableau
               at() = afficher un seul élément
               size() = recuperer taille du tableau
               empty() = verifie si le tableau est vide ou non
               front() = montre le premier element
               back() = montre le dernier element*/
/*std::vector : at() = afficher un seul élément
                size() = recuperer taille du tableau
                empty() = verifie si le tableau est vide ou non
                front() = montre le premier element
                back() = montre le dernier element
                push_back() = entrer une valeure dans la derniere case du tableau
                pop_back() = effacer la valeur dans la derniere case du tableau
                clear(); supprime tout ce qu'il y a dans le tableau (le rend "empty")*/

int main()
{
    std::cout << "tableau taille fixe : " << std::endl;

    std::array<int, 5> arr{1, 2, 3, 4, 5};/*tableau de taille fixe*//*array<type, nombre de valeur à stocker>*/

    std::cout << "tableau fixe : " << std::endl;
    for(const auto& element : arr) /*boucle for-each (java)*/
    {
        std::cout << element << std::endl;
    }

    std::cout << "premiere case du tableau : " << arr[0] << std::endl;
    std::cout << "derniere case du tableau : " << arr[4] << std::endl;
    arr[4] = 25; /*modification de la valeur dans la case*/
    std::cout << "changement de la derniere case du tableau : " << arr[4] << std::endl;

std::cout << "\n" << std::endl;

    /*fill()*/ /*remplissage*/
    std::array<int, 3> three{5, 25, 8};

    std::cout << "fill()" << std::endl;
    std::cout << "tableau original : " << std::endl;
    for(const auto& change : three)
    {
        std::cout << change << std::endl;
    }

    std::cout << "utilisation de at a la case 0 : " << three.at(0) << std::endl;

    three.fill(3); /*on change toutes les valeurs du tableau (on les remplis) par des trois.*/

    std::cout << "tableau apres fill(3) : " << std::endl;
    for(const auto& change : three)
    {
        std::cout << change << std::endl;
    }

std::cout << "\n" << std::endl;

    /*size*//*récuperer automatiquement la taille d'un tableau*/
    std::array<int, 2> tabtaille{15, 25};

    std::cout << "utilisation de size() : " << std::endl;
    for(int i = 0; i < tabtaille.size(); i++) /*plus besoin d'écrire la taille, avec size la taille est automatique (si on la change size changera)*/
    {
        std::cout << tabtaille[i] << std::endl;
    }

    std::cout << "Taille tableau : " << tabtaille.size() << std::endl;/*issue de la biblio array*/
    std::cout << "Taille tableau : " << std::size(tabtaille) << std::endl;/*issue de la biblio standard*//*mieux vaut prendre lui car il fonctionne à coup sur.*/
    
    if(std::empty(tabtaille)) /*voir si le tableau est vide ou non*/
    {
        std::cout << "empty active, tableau vide" << std::endl; /*le tableau est vide si aucun element (si tous = 0 alors cela represente un element (ex tableau sans element : tabtaille{};))*/
    }
    else
    {
        std::cout << "empty non active, tableau non vide" << std::endl;
    }

    std::cout << "premiere case via front() = " << tabtaille.front() << std::endl; /*front pour devant*/
    std::cout << "derniere case via back() = " << tabtaille.back() << std::endl; /*back pour derriere*/



std::cout << "\n" << std::endl;

    std::cout << "tableau a taille dynamique : " << std::endl;

    std::cout << "pusb_back, pop_back, copy et clear." << std::endl;
    std::vector<std::string> dyn{};

    dyn.push_back("hello"); /*ajouter un élément directement à la derniere case*/
    dyn.pop_back(); /*sert à enlever ce qui est contenu dans la derniere case*/

    std::vector<std::string> copy{}; /*pour copier un tableau il faut que cette copie ait le même type que celle qu'elle souhiate copier*/
    copy = dyn;

    dyn.clear(); /*supprime tout ce qu'il y a dans le tableau (le rend "empty")*/

std::cout << "\n" << std::endl;

    std::cout < "tableau de classe english et indonesian: " << std::endl;

    English en1{"rick"};
    English en2{"morty"};
    Indonesian in{"momo"};
    
    std::vector<Someone> people{}; /*indo et engl sont enfants/dérivés de someone, donc ici someone comprend les deux*/ /*avec vector/array, si la classe stocké est abstraite, alors le code ne fonctionnera pas.*/
    people.push_back{en1}; /*en java : someone s = new English{"rick"};*/
    people.push_back{en2};
    people.push_back{in};

    /*for(const auto& p : people)
    {
        std::cout << p.sayGoodNight << std::endl; /*ne fonctionne pas car someone est une classe abstraite 
    }*/

    return 0;
}