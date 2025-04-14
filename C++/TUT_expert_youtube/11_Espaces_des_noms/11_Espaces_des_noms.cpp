#include <iostream>
#include "name_perso.hpp"

/*si on fait "using namespace name_perso", le compilateur ne saura pas si test() est std ou name_perso*/
int main()
{
    /*std:: chaine de caracteres standard*/ /*std::string = string de la bibliotheque standard c++*/
    /*namespace::string = string dans la bibliotheque indiqué (idem pour cout,cin..)*/

    name_perso::test(); /*on a donc créé une bibliotheque name_perso*/ /*si using namespace on change name_perso::test() en test()*/
    test(); /*cela équivaut à std::test()*/

    return 0;
}