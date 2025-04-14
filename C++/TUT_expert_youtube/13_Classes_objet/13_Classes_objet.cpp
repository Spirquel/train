#include "lew.hpp"
#include <iostream>

int main()
{
    lew p{}; /*comme c'est une classe tous ces objet sont pris en compte (le this compte p1,p2,p3)*/
    lew p2{p};
    lew p3{};

    return 0;
}