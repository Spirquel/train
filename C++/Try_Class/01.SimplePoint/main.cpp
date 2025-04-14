#include <iostream>
#include "classe_test.hpp"

int main()
{
    SimplePoint a{'P', -13};
    a.display();
    a.translate(3);
    a.display();

    return 0;
}