#include <iostream>

double addition(int a, int b)
{
    return a*b;
}

int main()
{
    int nb1{0};
    int nb2{0};
    
    std::cout << "entrez un premier chiffre : ";
    std::cin >> nb1; //apres un cin y a un retour à la ligne
    
    
    
    std::cout << "entrez un deuxieme chiffre : ";
    std::cin >> nb2; 
    
    std::cout << "voici le resultat de multiplication de " << nb1 << " et " << nb2 << " resultat : " << addition(nb1, nb2) << std::endl;
    
    return 0;
}