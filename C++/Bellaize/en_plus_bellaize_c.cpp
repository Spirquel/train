#include <iostream>
//pointeur//
//méthode en C//

int main()
{
    int a = 0;
    int *ptri = 0;
    ptri = (int*) malloc(sizeof(int)); //pointeur (sert à stocker les réference/adresse), malloc = fonction renvoyant un pointeur/référence dans l'espace mémoire//
                               //sizeof = opérateur permettant de renvoyer un entier indiquant le nombre d'octets de la variable fournie ou du type de variable fournie//
                             //malloc = renvoit une réference/adresse sur un espace mémoire de la taille indiqué en argument (montre l'endroit où est la place montré par sinzeof)//
                            // sizeof(int) montre/renvoit la valeur/la taille que prend l'argument donné (ici int) (en octet)//
    *ptri = 8;

    std::cout << *(ptri) << std::endl; //ici on affiche la place que prend int a sur mon pc (en octet)//
                                      //si a=0 ou 15 il prend toujours la même place (a=n)//
    free(ptri);
    return 0;
}