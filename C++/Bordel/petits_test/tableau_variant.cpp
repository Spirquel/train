#include <iostream>
#include <string>
#include <variant>

int main()
{
    std::variant<std::string, int> data; //std::variant<index_0, index_1,...>
    data = "Chrono";
    std::cout << std::get<std::string>(data) << std::endl; //pour afficher 
    if(auto value = std::get_if<std::string>(&data)) //afin de save la valeur sur c'est un string (si int juste remplacer par int)
    {
        std::string& v = *value;
    }
    data = 3;
    data.index(); // 1
    std::cout << std::get<int>(data) << std::endl;
    
    return 0;
}
