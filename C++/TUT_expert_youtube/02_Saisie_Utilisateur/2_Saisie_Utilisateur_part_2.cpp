#include <iostream>
#include <string>

int main()
{
    /*utilisation de string + cin*/
    std::cout << "string + getline + cin \n" << std::endl;

    std::cout << "entrer un nombre : " << std::endl;
    int number; /*c'est un entier donc on ne peut y mettre que des chiffres (si lettre alors number = 0 et le programme s'arrete)*/
    std::cin >> number; /*cin = lecture de flux d'entrer*/ /*si on met un espace, ce qui suivra cet espace ne sera pa pris en compte*/
    
    std::string nom_prenom;
    std::getline(std::cin, nom_prenom); /*apres un cin on a un retour à la ligne (\n), il faut donc mettre un getline ici
    afin de pourvoir rerevenir à la ligne et pouvoir ecrire dans l'autre getline (sinon nous ne pourrons pas entrer de nom)*/
    /*mise mémoire tampon*/ 
    /*AUTRE METHODE : std::cin.ignore()*//*std::cin.ignore(nombre de craractere, delimiteur)*/

    std::cout << "\nentrer nom prenom : " << std::endl;
    std::getline(std::cin, nom_prenom); /*avec seulement cin on ne peut pas entrer un nom après un espace (donc nom prenom impossible)*/
    /*std::getline(le flux sur lequel lire, chaine de caractere dans laquelle memoriser l'information, delimiteur ((' ', :,\n) que des caracteres)*/
    
    std::cout << "\nnombre saisi : " << number << std::endl;
    std::cout << "nom prenom saisi : " << nom_prenom << std::endl;

    return 0;
}