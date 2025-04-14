#include <iostream>
#include <string>

#include "ConsolePrinter.hpp"

int main()
{
    ConsolePrinter h{};
    h.print(25);
    h.print("This is a string");
    h.print("boucle", 3);
    h.print("boucle with space", 3, 2);

    return 0;
}