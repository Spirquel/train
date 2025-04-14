#include <iostream>
#include <string>
#include "quest.hpp"
#include "queststatus.hpp"

Quest::Quest(const std::string& name, const std::string& description, int unitId) : _name(name), _description(description) /*int unitId n'est pas un attribut mais une information*/
{
    _status = QuestStatus::disabled;
}

void Quest::show() const /*sert à obtenir un visuel*/
{
    std::cout << _name << std::endl;
    std::cout << _description << std::endl;
}