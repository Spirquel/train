#include <iostream>
#include <string>
#include "someone.hpp"
#include "english.hpp"
#include "indonesian.hpp"

/*polymorphisme d'heritage*/

int main()
{
    English en{"English"}; /*'en' est un objet*/
    en.sayGoodNight();

    Indonesian id{"Bunda"}; /*'id' est un objet*/
    id.sayGoodNight();

    return 0;
}