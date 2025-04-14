#include <iostream>
#include "Animal/Animal.hpp"
#include "Animal/Chien/Chien.hpp"
#include "Animal/Chat/Chat.hpp"
#include "Animal/Coq/Coq.hpp"

int main()
{
    Animal a;
    a.FaireUnBruit();

    Chien c;
    c.FaireUnBruit();

    Chat ca;
    ca.FaireUnBruit();

    Coq co;
    co.FaireUnBruit();

    return 0;
}