#include <iostream>
#include <string>
/*chaine de caractere est un type de conteneur*/

/*une chaine de caractere est un tableau (ex : 'h', 'e', 'l', 'l', 'o', '\0')*/

/*string utilise la chaine de caractere pour stocker du texte, mais elle crée la chaine d'elle-même
std::string = std::basic_string<char>*/

/*on peut utiliser : empty, at, front, back, push_front/back, pop_front/back, append, clear, size
starts_with = sert à verifier si la premiere case commence par ce qu'on lui indique (c'est du bool)
ends_with = sert à verifier si la derniere case commence par ce qu'on lui indique (c'est du bool)
contains = verifier si un caractere est present (ex : s.contains('W') ou s.contains("World"))
substr = lire le caractere selon la case du tableau choisi (ex : s.substr(5, 3) /*cela affichera la valeur à la case 5 et celle à la case 3)*/

int main()
{
    std::string s{"hello world"};
    std::string_view sv{s}; /*ici on aura ce qui est dans s, mais sv ne peut pas etre modifier (const par defaut)*/
    std::cout << s << std::endl;
    std::cout << "premiere et derniere case de la chaine de caractere (qui fonctionne comme tableau) : " << std::endl;
    std::cout << s.front() << " - " << s.back() << std::endl;
    std::cout << "ajout d\'un point d\'exclamation : " << std::endl;
    s.push_back('!');
    std::cout << s << std::endl;
    std::cout << "ajout d\'une phrase et de point d\'exclamation" << std::endl;
    s.append(" And hello new york"); /*on ne peut pas faire "s.apprend(5, "hello new york")" car il faudrait définir chaque caractere, cependant on peut incrustrer une phrase*/
    s.append(6, '!');/*append(nombre d'apparition, 'caractere')*/
    std::cout << s << std::endl;

    /*if(s.starts_with("Hello")) /*" = ligne de caractere; '' = caractere 
    {
        std::cout << "le premier caractere est bien H" << std::endl;
    }
    else
    {
        std::cout << "le dernier caractere n'est pas H" << std::endl;
    }

    if(s.starts_ends('!'))
    {
        std::cout << "le dernier caractere est bien !" << std::endl;
    }
    else
    {
        std::cout << "le dernier caractere n'est pas H" << std::endl;
    }*/
    

    for(const auto& c : s) /*affichage de chaque caractere*/
    {
        std::cout << c << std::endl;
    }

/*std::cout << "\n" << std::endl; faut version gcc > 12

    std::cout << "inversion de chaine de caractere" << std::endl;
    std::string a{aaa};
    std::string b{bbb};

    std::cout << " a = " << a << std::endl;
    std::cout << " b = " << b << std::endl;

    a.swap(b); /*on inverse les deux chaines

    std::cout << " a = " << a << std::endl;
    std::cout << " b = " << b << std::endl;*/

    return 0;
}