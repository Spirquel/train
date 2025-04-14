#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b{1, 2, 3, 4, 5};
    
    for(const auto& c : a)
    {
        std::cout << c << " ";
    }
    
    a.push_back(5);
    
std::cout << "\n";

    for(const auto& d : a)
    {
        std::cout << d << " ";
    }

std::cout << "\n";
    
    for(const auto& e : b)
    {
        std::cout << e << " ";
    }
    
    b.emplace_back(5);
    
std::cout << "\n";

    for(const auto& f : b)
    {
        std::cout << f << " ";
    }
    
    return 0;
}