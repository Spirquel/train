#include <iostream>
#include <string>

struct player //ça permet de créer une sorte de boite que l'on peut réutiliser (au lieu de faire int play1;int play2;..)
{            //surtout que le int est général dans tout le fichier alors qu'ici en mettant palyer on le range dans une boîte appart//
    std::string name;
    int hp;
    int damages;

    bool isdead() //le bool est dans la boite de structure//
    {
        return hp <= 0;
    }

    void attack(player& other)
    {
        other.hp -= damages;
    }

};

int main()
{
    player play1;
    player play2;
    player play3;

    play1.name = "jt";
    play1.hp = 5;

    std::cout << "nom du joueur 1 = " << play1.name << std::endl; //name/hp/damages sont visibles et donc utilisables//

    if (play1.isdead())
    {
        std::cout << "joueur 1 est mort" << std::endl;
    }
    else
    {
        std::cout << "joueur 1 en vie" << std::endl;
    }

    play1.damages = 3;
    play2.hp = 5;
    play1.attack(play2);
    std::cout << "hp du joueur 2 = " << play2.hp << std::endl;

    std::cin.ignore();
    return 0;
}