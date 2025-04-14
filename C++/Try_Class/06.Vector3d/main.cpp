#include <iostream>
#include "Vector3d.hpp"

int main()
{
    Vector3d h{1.1, 2.2, 3.3};
    h.display();

    Vector3d h1{1.1, 2.2, 3.3};
    Vector3d h2{1.0, 2.0, 3.0};

    Vector3d res = Vector3d::add(h1, h2);
    res.display();

    return 0;
}