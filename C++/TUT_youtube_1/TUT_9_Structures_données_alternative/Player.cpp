#include <iostream>
#include "Player.hpp"


bool Player::isdead() //le bool est dans la boite de structure//
    {
        return m_hp <= 0;
    }

    void Player::attack(player& other)
    {
        other.m_hp -= m_damages;
    }
