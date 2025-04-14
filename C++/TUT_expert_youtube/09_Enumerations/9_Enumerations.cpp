#include <iostream>

enum Natural_Element /*énumeration*/ /*si on crée un autre enum, il ne faut pas remettre les mêmes énumération (fire,water...)
sinon le programme ne saura pas auquel il est fait référencces*/ /*On prend le nom de l'énumeration*/
{
    earth,
    fire,
    air,
    water /*enumérateurs/constantes intégrales/Valeurs de l'énumeration*/
};

enum class Instrument /*énumération étendue*/
{
    Piano,
    Guitare,
    Violon,
    Harmonica
};

enum class Question : bool /*on peut changer le type, un énumérateur est par défaut en entier (int) mais on peut le chnager en bool
(que deux valeur car 0/1), en long, en short, en char...*/
{
    non,
    ok
};

int main()
{
/*énumeration*/
    Natural_Element a{water}; /*si a{earth} alors = 0, si a{fire} = 1, a{air} = 2, a{water} = 3*/
    /*on peut écrire dans l'enum que earth = 3, alors water sera = à 0, c'est à eviter*/ /*la portée est global*/

    std::cout << a << std::endl; /*afficher un conversion inplicite*/

    if(a == water)
    {
        std::cout << "vous utilisez l\'eau" << std::endl;
    }

/*énumération étendue*/
    Instrument b{Instrument::Violon}; /*on peut aussi mettre directement b{2}, mais cela n'affichera que la valeur mise
    (exemeple : b{5} -> affcihera 5 alors que 5 est pas dans l'énum)*//*ici on met Instrument:: car la portée n'est pas global*/
    std::cout << static_cast<int>(b) << std::endl; /*afficher une conversion explicite*/ /*pour énulération étendue*/

    if (b == Instrument::Violon)
    {
        std::cout << "vous avez pris le violon" << std::endl;
    }

/*énumération étendue bool*/
    Question c{Question::ok};
    
    if (c == Question::ok)
    {
        std::cout << "C'est vrai" << std::endl;
    }

    
    return 0;
}