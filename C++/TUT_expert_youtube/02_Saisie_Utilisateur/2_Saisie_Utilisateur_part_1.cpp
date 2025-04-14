#include <iostream>
#include <string>

int main()
{
    /*la base des bases en cin*/
    std::cout << "la base du cin \n" << std::endl; 

    std::cout << "entrer un nombre : " << std::endl;
    int number;
    std::cin >> number; /*cin = lecture de flux d'entrer*/ /*si on met un espace, ce qui suivra cet espace ne sera pa pris en compte*/
    std::cout << "nombre saisi : " << number << std::endl;

    std::cout << "\n" << std::endl;



	/*les flags (fonctionne en 0/1)*/
	/*goodbit : indique s'il y a des erreurs ou non.
	failbit : erreur saisi (ecriture du codage)
	badbit : erreur générale pas du au programme (pas rattrapable facilement)*/
    std::cout << "les flags \n" << std::endl;

    std::cout << "etat avant la lecture : " << std::endl;
    std::cout << "good : " << std::cin.good() << std::endl; /*information de l'état du programme*/
    std::cout << "fail : " << std::cin.fail() << std::endl; /*information de l'état du programme*/
    std::cout << "bad : " << std::cin.bad() << std::endl; /*information de l'état du programme*/
    std::cout << "\nentrer un nombre : " << std::endl; /*si on rentre autre chose qu'un entier, alors fail = 1 et good = 0 (ex avec M)*/

    int nombre;
    std::cin >> nombre;
    std::cout << "nombre saisi : " << nombre << std::endl;

    std::cout << "\netat apres saisi : " << std::endl;
    std::cout << "good : " << std::cin.good() << std::endl; /*information de l'état du programme*/
    std::cout << "fail : " << std::cin.fail() << std::endl; /*information de l'état du programme*/
    std::cout << "bad : " << std::cin.bad() << std::endl; /*information de l'état du programme*/

    std::cout << "\n" << std::endl;


    return 0;
}   