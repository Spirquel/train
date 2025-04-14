#include "Physicist.hpp"

int main()
{
    Physicist ob{"pierre", 2001, 9, 2, "New York"};

    ob.Introduce();

    ob.Modif_birth(1534, 2, 13);

    ob.Introduce();

    return 0;
}
