#include <iostream>
#include <string>

    struct product 
    {
        std::string name;/*attribut*/
        float price;/*attribut*/
        bool avaible;/*attribut*/
    };
    
int main()
{  
    struct product p{"produit", 13.9F, true};

    std::cout << "prix : " << p.price << std::endl;
    p.price = 15.9F;
    std::cout << "prix : " << p.price << std::endl;

    return 0;
}