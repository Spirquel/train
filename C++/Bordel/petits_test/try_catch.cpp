#include <iostream>

int main()
{
    int age;
    int taille;
    
    std::cout << "entrez votre age : ";
    std::cin >> age;
    
    std::cout << "entrez votre taille : ";
    std::cin >> taille;
    
    try
    {
        if(age >= 18 && taille >= 160)
        {
            std::cout << "Acces accepte" << std::endl;
        }
        else
        {
            throw(505);
        }
    }
    catch(int num)
    {
        std::cout << "Acces pas accepte" << std::endl;
        std::cout << "error : " << num << std::endl;
    }
   
    
    return 0;
}
