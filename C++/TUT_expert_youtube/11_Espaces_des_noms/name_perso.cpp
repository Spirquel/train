#include "name_perso.hpp"
#include <iostream>

void name_perso::test() /*on utilise la bibliotheque name_perso et on y extrait le void (etant la seule chose créé à ce moment là.)*/
{
    std::cout << "test namespace name_perso" << std::endl;
}

void test()
{
    std::cout << "test namespace standard" << std::endl;
}