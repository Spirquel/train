#include <iostream>
#include <string>

int main()
{
    /*Préfixes : 0b = binaire (0/1), 0 = octal (8), 0x = hexadecimal (16)*/
    
    int a = 0b10011101;
    int b = 0236;
    int c = 0x15bf;
    int d = 14'256'365; /*permet de mieux lire le chiffre dans le codage*/
    std::cout << "prefices \n" << std::endl;
    std::cout << "decimal de 10011101 (binaire) = " << a << std::endl;
    std::cout << "deciaml de 236 (octal) = " << b << std::endl;
    std::cout << "decimal de 15bf (hexadecimal) = " << c << std::endl;
    std::cout << d << std::endl;

    std::cout << "\n" << std::endl;
    
    /*Utilisation de string*/
    std::cout << "utilisation string \n" << std::endl;
    std::string welcome{"Bien le bonsoir"};  /*on déclare une variable de type string (welcome) 
                                             à laquelle on affecte une valeur littérale (Bien le bonsoir)*/
    std::cout << "welcome valeur 1 = "<< welcome << std::endl;

    welcome = "Hello"; /*cela permet de changer la valeur de welcome*/
    std::cout << "welcome valeur 2 = " << welcome << std::endl;

    int const number{2566}; /*cela permet de garder la valeur 2566 constante dans number, 
                            on ne peux donc pas la changer car int constant, le programme interdira le changement de valeurde number*/
    std::cout << "valeur constante = " << number << std::endl;

    std::cin.ignore();
    return 0;
}