#include <iostream>

void foo(int* c)
{
    *c = 50; //initialement c=0 mais ici on rentre dans cette adresse la valeur 50, donc c = 50//
}

int main()
{
    int a = 0;
    float b = 0;
    int c = 0;

    int* p_int = &a; //ici on dit que p_int = adresse de a, mais si on a pas de variale on met "nullptr" afin d'avoir un pointeur nul//
    float* p_float = &b; // et donc pas faire crash le programme//
    int* ptrc = &c;

    foo(&c); //&c = adresse de c//

    std::cout << "valeur de a = " << a << std::endl; // valeur de a (valeur stocker dans le int) //
    std::cout << "valeur de b = " << b << std::endl;
    std::cout << "valeur de c = " << c << std::endl; //valeur dans la int changer via l'adresse //

    std::cout << "adresse de a = " << p_int << std::endl; // adresse de a dans le stockage donc son IP//
    std::cout << "adresse de b = " << p_float << std::endl;
    std::cout << "adresse de c = " << ptrc << std::endl;

    std::cout << "valeur de a en p_int = " << *p_int << std::endl; // affiche la valeur stocker à l'adresse du pointeur p_int//
    std::cout << "valeur de b en p_float = " << *p_float << std::endl; // *= à l'adresse de... (ici de p_float)//
    std::cout << "valeur de c en ptrc = " << *ptrc << std::endl;

    std::cin.ignore();
    return 0;
}