#include <iostream>
#include <string>

int main()
{
    /*test pour monter le booleens en prog*/
    int number{799};

    if (number < 800 && number >= 400)
    {
        std::cout << "number est entre 800 et 400" << std::endl;
        
        if (number > 500) /*si "number < 800 && number >=400" alors cette conditions ne sera pas lu car on ne rentrera pas dans le bloc de ce if*/
        {
            std::cout << "number superieur a 500" << std::endl;
        }
    }

    else if (number > 800 || number == 600)
    {
        std::cout << "number est au-dessus de 800 ou egal a 600" << std::endl;
    }
    
std::cout << "\n" << std::endl;

    /*remplacement de if/else par switch*/

    int code{0};

    std::cout << "entrez un code : " << std::endl;
    std::cin >> code;

    switch(code) /*on rentre la variabe=le que l'on souhaite vérifier*//*fonctionne avec les entier*/
                /*ça evite de mettre if(code == 0), else if(code == 1), else if(code == 2),...*/
    {
        case 1: /*verification si 1 saisi*/
            std::cout << "code rentrer est 1" << std::endl;
            break; /*afin de quitter le switch*/

        case 2: /*verification si 2 saisi*/
            std::cout << "code rentrer est 2" << std::endl;
            break;

        case 3: /*en if ça donnerai "if(code == 3 || code == 4)"*/
        case 4:
            std::cout << "code rentrer est 3 ou 4" << std::endl;
            break;

        default: /*si le nombre saisi n'est pas 1 ou 2 ou 3 ou 4*//*ça equivaut à else.*/
            std::cout << "code non reconnu" << std::endl;
            break; /*on quitte le switch*/
    }

    /*mettre des 
    {

    }
    permet de creer un bloc, cependant on ne peut lire que ce qui est dans la bloc.
    ex : int main()
        {
            int a = 15;
            std::cout << a << std::endl;
            {
                std::cout << a << std::endl
            }
            return 0;
        }
    ici a sera affiché deux fois.

    maintenant si
    int main()
        {
            int a = 15;
            std::cout << a << std::endl;
            {
                int b = 15
            }
            std::cout << b << std::endl
            return 0;
        } 
    ici b ne sera pas affiché et cela va créer une erreur, car le bloc "b" est appart du block int, c'est ue boite dans une boite.
    pour afficher b il faut 
    int main()
        {
            int a = 15;
            std::cout << a << std::endl;
            {
                int b = 15
                std::cout << b << std::endl
            }
            return 0;
        } 
    cela fonctionne de même pour les conditions (if,else if, else). Cependant on peut créer une affectation dans une condition et cela 
    changera la valeur de la variable.
    exemple :

    int main()
    {
        int num{15}
        std::string a{wow}; /a variable a est créer)
        std::cout << a << std::endl /*ça affiche "wow"

        if (num == 15)
        {
            a = "genial";
        }

        std::cout << a << std::endl; /*ça affiche "genial"

        return 0; /*la variable a est detruite (ainsi que les autres varibales(fin du programme))

    }
    */

    return 0;
}