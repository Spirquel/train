#include <iostream>
#include <string>
#include "english.hpp"

void English::sayGoodNight() const noexcept
{
    std::cout << _name << " : Good Night"  << std::endl;
}