#include <iostream>

int main()
{
    /*Opérateurs*/
    
    /*Arithmétiques : + (addition), - (soustraction), * (multiplication), / (division), % (modulo/reste d'une division euclidienne)*/

   int result; /*si on met using int alors le calcul ne fonctionne pas car elle n'accepte pas de nombre négatifs*/

   result = 5 -16;
   std::cout << "arithmétiques :" << result << std::endl;
std::cout << "\n" << std::endl;

   /*Booléens (true (1) ou false (0)): ! (not/négation), && (et/avec), || (ou)*/

   bool resulta;

   resulta = true && true; /*true && false = 0, true = 1, !true = 0, false = 0*/
   std::cout << "booleens : " << resulta << std::endl;
std::cout << "\n" << std::endl;

   /*Comparaison (true (1) ou false (0)): < (inferieur), > (superieur), <= (inferieur ou egal), >= (superieur ou egal), == (egal), != (different)*/
   bool resulto;

   resulto = 5 < 9; /*ici true*/
   std::cout << "comparaison : " << resulto << std::endl;
std::cout << "\n" << std::endl;

   /*Affectation (affecter une valeur sans reecrire la variable) : += (ajouter), -= (enlever), *= (multiplier), /= (diviser), %= (le reste)*/

   int player_lvl{34};
   std::cout << "affectation : " << std::endl;
   std::cout << "niveau actuel : " << player_lvl << std::endl;
   player_lvl += 1; /*ancienne methode : player_lvl = player_lvl + 1*/
   /*si addition ou soustraction de 1 : player_lvl++ ou player_lvl--*/ 
   /*Remarque si int data{0}; (avec int result{0}) result = ++data, alors result = 0+1 =1; mais si result = data++, alors result =0*/
   std::cout << "niveau suivant : " << player_lvl << std::endl;

    

    return 0;
}