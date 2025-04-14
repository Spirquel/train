#include <iostream>
#include <vector>
#include <array>



int main()
{
    int b = 15;
    int c = 35;
    int d = 28;
    int e = 2;
    int f = 12;
    
    std::vector<int> a{b, c, d, e, f};
    
    for(int i = 0; i < 15; i++)
    {
        b += i; c += i; d += i; e += i; f += i;
        std::cout << b << ", " << c << ", " << d << ", " << e << ", " << f << std::endl;
        
        a[0] = b; a[1] = c; a[2] = d; a[3] = e; a[4] = f; //si on fait pas ça le tableau restera celui initial
        
        for(auto& en : a)
        {
            std::cout << en << std::endl;
            //std::cout << a[0] << ", " << a[1] << ", " << a[2] << ", " << a[3] << ", " << a[4] << "\n";
        }
    }

    return 0;
}


