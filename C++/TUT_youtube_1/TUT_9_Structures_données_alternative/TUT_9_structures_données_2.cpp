#include <iostream>
#include <string>
#include "Player.hpp"

int main()
{
    player play1;
    player play2;
    player play3;

    play1.m_name = "jt";
    play1.m_hp = 5;

    std::cout << "nom du joueur 1 = " << play1.m_name << std::endl; //name/hp/damages sont visibles et donc utilisables//

    if (play1.isdead())
    {
        std::cout << "joueur 1 est mort" << std::endl;
    }
    else
    {
        std::cout << "joueur 1 en vie" << std::endl;
    }

    play1.m_damages = 3;
    play2.m_hp = 5;
    play1.m_attack(play2);
    std::cout << "hp du joueur 2 = " << play2.m_hp << std::endl;

    std::cin.ignore();
    return 0;
}