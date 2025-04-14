#include <iostream>
#include <string>
#include "character.hpp"

Character::Character(int id, const std::string& name, int level) noexcept : Unit(id, name), _level(level) /*_id(id), _name(name) sont déjà dans nommé dans Herit donc on les rappels via Herit*/
{

}

int Character::getLevel() const
{
    return _level;
}