#include <iostream>
#include "Chat.hpp"

void Chat::FaireUnBruit()
{
    std::cout << "Miaou" << std::endl;
}

Chat::~Chat()
{
    std::cout << "Destruction de la classe fille Chat : " << this << std::endl;
}