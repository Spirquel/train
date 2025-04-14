#include <iostream>

int main(int argc, char** argv)
{
    unsigned taille_sapin = 0;
    const char corps_sapin = '*';
    const unsigned sapin_min = 5;
    const unsigned sapin_max = 25;

    do{
    std::cout << "entrer la taille du sapin entre " << sapin_min << " et " << sapin_max << std::endl;
    std::cin >> taille_sapin;
    }while(taille_sapin < sapin_min || taille_sapin > sapin_max);

    std::cout << std::endl;
    
    for(int n = 1; n <= taille_sapin; ++n)
    {
        for(int i = 0; i < taille_sapin - n; ++i)
        {
            std::cout << " "; /*si on met "std::endl;" alors la chaine se coupe et on n'aura que les trait en lignes.*/
        }

        for(int j = 0; j < n * 2; ++j)
        {
            std::cout << corps_sapin; /*si on met "std::endl;" alors la chaine se coupe et on n'aura que les trait en lignes.*/
        }
        
        std::cout << std::endl;
        
    }

    return 0;
}

