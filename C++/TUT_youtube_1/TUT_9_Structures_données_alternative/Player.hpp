#pragma once

#include <string>

struct player //ça permet de créer une sorte de boite que l'on peut réutiliser (au lieu de faire int play1;int play2;..)
{            //surtout que le int est général dans tout le fichier alors qu'ici en mettant palyer on le range dans une boîte appart//
    std::string m_Name; 
    int m_hp;
    int m_damages;

    bool isdead() //le bool est dans la boite de structure//

    void attack(player& other)
    {
        other.hp -= damages;
    }

};
