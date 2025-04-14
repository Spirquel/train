#include <iostream>
#include <vector>
#include <array>

template<typename T>
T equals(T a, T b)
{
    for(int i = 0; i < 6; i++)
    {
        a[i];
        b[i];
        
        if(a[i] == b[i])
        {
            std::cout << "equal dans case : " << i << " le nombre est : " << a[i] << std::endl;
        }
    }
}

int main()
{
    std::vector<int> a{5, 2, 8, 7, 9}; //POUR VECTOR IL METTRE 0 APRÈS 5
    std::vector<int> b{4, 6, 2, 7, 3};
    
    std::array<int, 5> c{5, 2, 8, 7, 9}; //POUR ARRAY IL NE MET RIEN (MÊME PAS 0) APRÈS 5
    std::array<int, 5> d{4, 6, 2, 7, 3};
    
    equals(a, b);
    equals(c, d);
}