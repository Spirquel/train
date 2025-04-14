#include <iostream>
#include <string>

#include "ConsolePrinter.hpp"

void ConsolePrinter::print(int i)
{
    std::cout << i << std::endl;
}

void ConsolePrinter::print(std::string s)
{
    std::cout << s << std::endl;
}

void ConsolePrinter::print(std::string s, int n)
{
    for(int i{0}; i < n; i++)
    {
        std::cout << s << std::endl;
    }
}

void ConsolePrinter::print(std::string s, int n, int m)
{
    for(int j{0}; j < n; j++)
    {
        std::cout << s << std::endl;

        for(int k{0}; k < m; k++)
        {
            std::cout << " " << std::endl;
        }
    }
}