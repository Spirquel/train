#include <iostream>
#include <string>
#include <any>

//auto sert à pouvoir déduire le type de la variable créée, alors que std::any sert à utiliser la même variable et pouvoir lui faire changer de type quand elle veut
std::any ProcessData(const std::any& data) 
{
    if (data.type() == typeid(int)) 
    {
        int value = std::any_cast<int>(data);
        return value * 2;
    } 
    else if (data.type() == typeid(std::string)) 
    {
        std::string value = std::any_cast<std::string>(data);
        return value + " you";
    }
}

void processValue(std::any value) 
{
    if (value.type() == typeid(int)) 
    {
        std::cout << "Received int: " << std::any_cast<int>(value) << std::endl;
    } 
    else if (value.type() == typeid(std::string)) 
    {
        std::cout << "Received string: " << std::any_cast<std::string>(value) << std::endl;
    } 
    else 
    {
        std::cout << "Received unknown type" << std::endl;
    }
}

int main()
{
    std::any a0; //il peut être de tout type
    a0 = 45; //il fonctionne comme auto
    std::cout << std::any_cast<int>(a0) << std::endl;
    a0 = ProcessData(a0);
    processValue(a0);
    
    std::any a1;
    a0 = std::string("alut"); //pour definir un string (sans ça il marche pas ca il cherche le type à définir)
    std::cout << std::any_cast<std::string>(a0) << std::endl;
    a0 = ProcessData(a0);
    processValue(a0);
    
    auto a3 = "lalala";
    std::cout << a3 << std::endl;
    /*a3 = 45; //ne fonctionne pas car il déduit de base que a3 est un int
    std::cout << a3 << std::endl;*/
    
    return 0;
}
