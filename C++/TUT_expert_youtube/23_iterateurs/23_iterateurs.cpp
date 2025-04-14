#include<iostream>
#include<string>
#include<vector>
/*#include <iterator> existe*/

/*represente un objet qui itere sur les éléments d'un conteneur (comme un pointeur), possède plusieurs types*/
/*begin()/end() : iterateur debut ou fin du conteneur; cbegin()/cend() : iterateur constant debute ou fin du conteneur (*it ne pourra modif); rbegin/rend : rbegin = end et rend = begin*/
/*next() et prev()*/

int main()
{
    using namespace std::literals;
    std::string setence{"Hello Everyone"s}; /*le s vient de la biblio literals afin de dire 'considere hello everyone comme une instance de string et non comme un chaine de caractere*/
    std::vector<int> vec{1, 2, 3, 4, 5};

    std::string::iterator it{std::begin(setence)}; /*iterateur standard (non constante)*/ /*iterator commence (begin) au début de mon string setence*/ /*std::end() existe mais il n'affichera rien car fin de la chaine (\0)*/
    //std::string::const_iterator : on peut afficher mais on ne peut pas modifier ce vers quoi itere it
    //const std::string::const_iterator : on peut pas modifier it mais on peut modifier *it
    //faire les deux en même temps existe

    std::cout << *it << std::endl; /*affiche la premiere valeur stocker dans le tableau caractère (comme un pointeur)*/
    *it = 'V'; /*'' et pas ""*/
    std::cout << *it << std::endl; /*on a changé H en V, principe pointeur aussi*/

    std::vector<int>::iterator itt{std::begin(vec)};

    std::cout << *itt << std::endl;
    itt = std::next(itt); /*on avance d'une case dans vec*/ /*ou faire itt++ (pas *itt comme pour les pointeurs)*/
    std::cout << *itt << std::endl;

    for(auto ittt = std::begin(vec); i != std::end(vec); ittt++) /*meme principe pour string*/
    {
        std::cout << *ittt << std::endl;
    }


    return 0;
}