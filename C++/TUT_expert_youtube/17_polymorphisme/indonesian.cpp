#include <iostream>
#include <string>
#include "indonesian.hpp"

void Indonesian::sayGoodNight() const noexcept
{
    /*Someone::sayGoodNight(); en écrivant ça, le texte afficher sera celui de Someone "..." et pas "selamat malam" de Indonesian*/
    std::cout << _name << " : selamat malam"  << std::endl;
}