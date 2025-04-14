#include <iostream> /*en-tête inclue de base (dans le mingw32)*//*en cherchant dans le dossier "include"de mingw32 on peut trouver
les "extern" étant les variables pouvant être utiliser en programmation et inclue dans la bibliothèque choisi
(exemple : cout dans iostream (istream = entrer et ostream = sortie ?) lien : C:\Program Files (x86)\mingw32\include\c++\13.1.0)*/
#include "module_1.hpp"/*en-tête crée par soi-même*/ /*toujours .hpp et non .cpp !!!!*/

int main()
{
    hello();
    return 0;
}