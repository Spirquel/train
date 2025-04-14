#include <iostream>
#include "StatefulObject.hpp"

StatefulObject::StatefulObject(std::string name) : _name(name)
{

}

StatefulObject StatefulObject::_ObjectInUse("");

void StatefulObject::Use()
{
    _ObjectInUse = *this;
}

void StatefulObject::displayObjectInUse()
{
    std::cout << _ObjectInUse._name << std::endl;
}

StatefulObject::~StatefulObject()
{
    std::cout << "destruction de : " << this << std::endl;
}