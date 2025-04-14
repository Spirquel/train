#include <iostream>
#include "StatefulObject.hpp"

int main()
{
    StatefulObject obj{"obj1"}; 
    StatefulObject obj2{"obj2"}; 

    obj2.Use();
    StatefulObject::displayObjectInUse();
    StatefulObject obj3{"obj3"}; 
    StatefulObject::displayObjectInUse();

    return 0;
}