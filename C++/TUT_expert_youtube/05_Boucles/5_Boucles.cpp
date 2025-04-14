#include <iostream>
#include <string>

int main()
{
    /*while la base*/
    std::string a{"j\'affiche : "};
    int i{0};

    while(i < 10)
    {
        std::cout << a << i << "\n" << std::endl;
        i++; /*lorsque i sera >= à 10, alors la boucle s'arrêtera (ça équivaut à un break)*/ 
    }

    std::cout << "plus d'affichage pour i" << std::endl; /*aprés les 10 affichage de a, ce message s'affiche*/
std::cout << "\n" << std::endl;

    /*while et if*/
    int j{0};

    while (j < 10)
    {
        j++;

        if (j == 2 || j== 4 || j == 6)
        {
            continue; /*elle va passer le message en dessous*/
        }

        std::cout << a << j << "\n" << std::endl;
    
    }

    std::cout << "plus d'affichage pour j" << std::endl;
std::cout << "\n" << std::endl;

    /*for la base*/
    for(auto k{0}; k < 10; ++k) /*for(initialisation; expression evalué; incrémentation/décrémentation)*/
    {
        std::cout << a << k << "\n"<< std::endl;
    }
    
    std::cout << "plus d'affichage pour k" << std::endl;
std::cout << "\n" << std::endl;

    /*for et string*/
    std::string p{"bien le bonsoir"};

    for(const auto letter : p) /*for(pour chaque letter de p)*//*"const auto" car "bien le bonsoir" on ne souhiate pas le changer*/
    {
        std::cout << letter << "\n" << std::endl; /*on va afficher les lettres une à une*/
    }
    return 0;
}