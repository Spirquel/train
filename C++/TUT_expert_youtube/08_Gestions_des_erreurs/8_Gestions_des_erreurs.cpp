#include <iostream>
#include <string>
#include <cassert> /*fichier d'en-tête pour les assertions*/



void player (std::string name, int level)
{
    assert(level > 0 && "niveau minimumu est 1"); /*assert(<expression> && <message>)*//*cela permet d'interrompre le programme si 
    quelqu'un met un niveau <à 1 (ça permet d'éviter d'écrire des bêtises)*/ /*pour enlever les assertions et lancer le programme
    on peut ajouter "-DNDEBUG" (ex : g++ -DNDEBUG -o main ....cpp) cependant si erreur dans le programme, cela sera afficher (c'est pas bien.)*/    
    std::cout << "creation de personnage : " << "nom : " << name << " niveau : " << level << std::endl;
}

int main()
{
    player("robert", 26);
    
/*exception erreur*/

    try
    {
        /* code qui pourrait déclencher une exception */
    }
    catch(const std::exception& err) /*on capture tous les types d'exceptions, on peut aussi en mettre des specifiques et les cumuler
    en faisant plusieurs catch. (exceptions individuelles : https://en.cppreference.com/w/cpp/error/exception)*/
    {
        std::cerr << err.what() << '\n'; /*afin d'afficher l'erreur en compilant*/
    }

/*déclencher/lever une exception*/
    
    try
    {
        throw std::invalid_argument("pas le bon argument"); /*throw = lever*/
        throw std::exception();/*comme il y a une exception au-dessus (invalid_argument) alors seul "pas le bon argument"
        s'affichera */
    }
    catch (const std::invalid_argument& err)
    {
        std::cout << err.what() << std::endl;
    }
    catch(const std::exception& err)
    {
        std::cout << "erreur produite" << std::endl;
    }
    

    return 0;
}