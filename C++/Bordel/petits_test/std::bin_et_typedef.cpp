#include <iostream>
#include <functional>
#include <string>

typedef std::string Hello; //Hello devient un type string et peut définir des variables en type string (comme une rallonge ou un changement de nom)
typedef int Entier; //Entier devient un type int et peut définir des variables en type int (comme une rallonge ou un changement de nom)

int add(int a, int b)
{
    return a + b;
}

int main()
{
    using namespace std::placeholders;
    auto add_2 = std::bind(&add, _1, 2); //permet de créer une autre fonction à partir d'une fonction existante
    std::cout << add_2(128) << std::endl;
    
    Hello mot{"hello world"};
    std::cout << mot << std::endl;
    
    Entier number{22};
    Entier number2{25};
    
    std::cout << add_2(number) << std::endl;
    std::cout << add(number, number2) << std::endl;
    
    return 0;
}

