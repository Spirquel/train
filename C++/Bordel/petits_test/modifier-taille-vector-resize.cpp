#include <iostream>
#include <vector>
#include <array>

int main()
{
    std::vector<int> a{1, 2, 5};
    
    std::cout << "taille de a : " << a.size() << std::endl;
    
    for(const auto& e : a)
    {
        std::cout << e << std::endl;
    }
    
    a.resize(15);
    
    std::cout << "taille de a : " << a.size() << std::endl;
    
    for(const auto& c : a)
    {
        std::cout << c << std::endl;
    }
    
    std::array<int, 3> b{4, 8, 3}; //si on met pas de chiffre il mettra un 0 à la place
    
    std::cout << "taille de b : " << b.size() << std::endl;
    
    for(const auto& m : b)
    {
        std::cout << m << std::endl;
    }
    
    //b.resize(15); on peut pas modif la taille d'un array
    
    std::cout << "taille de b : " << b.size() << std::endl;
    
    for(const auto& u : b)
    {
        std::cout << u << std::endl;
    }
    
    return 0;
}