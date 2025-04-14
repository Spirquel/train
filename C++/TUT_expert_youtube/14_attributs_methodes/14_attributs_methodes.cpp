#include "window.hpp"
#include <iostream>

/*attribut = variable que l'on retrouvera dans une classe*/

int main()
{
    window app{"Mon programme Gui", 12, 13}; /*app est un objet au quel on ajoute une valeur string car il existe un attribut string
                                        si je crée un autre objet "window b{"lol"}", alors le code excécutera 
                                        d'une part "ma fenetre : mon programme gui" et en-dessous "ma fenetre : lol".
                                        cependant si j'écris "window b{13};" et que la class n'est que string alors
                                        le code sera en erreur car il excécute un string et non un entier.*/
    app.run(); /*on appelle l'objet*/
    return 0;
}