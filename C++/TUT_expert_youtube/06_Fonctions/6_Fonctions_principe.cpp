#include <iostream>

void hop() /*ici on crée sa fonction*//*on ne renvoit pas*/
{
    std::cout << "hop" << std::endl; /*on implémente à l'interieur ce que l'on souhaite*/
}


int sum(int a, int b) /*ici on crée une fonction via un entier*/
{
    return a + b; /*on lui adresse de calculer a+b que l'on indiquera dans le "int main()"*//*on peut mettre plus de ligne si souhaité (idem pour void)*/
}


void sous(int& c, int& d)/*si on ne met pas &int (reference de c et d) alors en faisant "sous(y,h)" nous n'aurions pas -c et +d
car, sans la reference, c serait = à y et d = à h*/
{
    c -= 5;/*ici on soustrait 5*/ /*sans references ces valeurs seraient detruite car elle ne sont que des copies de c et d*/
    d += 6;/*ici on ajoute 6*/ /*sans references ces valeurs seraient detruite car elle ne sont que des copies de c et d*/
}


/*Surchage de fonction, cela permet ici de calculer des valeur entière ou à virgule.*/
void addi(int v, int s)
{
    std::cout << v + s << std::endl;
}

void addi(float v, float s)
{
    std::cout << v + s << std::endl;
}



int main()
{
/*void hop*/
    hop(); /*la chose implémenté sera affiché*/

    //code...

    hop(); /*de même ici.*/

std::cout << "\n" << std::endl;

/*int sum*/
    sum(4,6); /*on indique a = 4 et b = 6, donc ça affichera 10*/

    int n{15};
    int m{36};

    sum(n,m); /*ici a = n = 15 et b = m =36, donc ça affichera 51 (ça n'a pas d'incidence sur la fonction)*/

std::cout << "\n" << std::endl;

/*references*/
    int j{25};
    int &ref{j}; /*on créer une references*/

    std::cout << j << std::endl;
    std::cout << &ref << std::endl;

std::cout << "\n" << std::endl;

/*void sous*/
    int y {25};
    int h{30};

    std::cout << y << " " << h << std::endl; /*on aura les valeurs 25 et 30*/

    sous(y,h); /*via cette fonction on fait y-c et h+d*/

    std::cout << y << " " << h << std::endl; /*on aura les valeurs 25-5 = 20 et 30+6 = 36*/

std::cout << "\n" << std::endl;

/*void addi*/
    addi(25, 66); /*ici le compilateur prendra en compte void addi(int)*/
    addi(45.6F, 69.5F);/*ici le compilateur prednre en compte void addi(float)*/
    /*sans void(float) les valeur à virgule ne seraient pas pris en compte*/

std::cout << "\n" << std::endl;

/*revoir expression lamba*/

/* dans une fonction/void si on indique :
la varibale = passage par copie
&variable = passage par references

= : tout passe par copie
& tout pas par references
(ex : a = 56;
    [&a], a = 56;
&a cahngera la valeur même apres le void mais a = ne changera la valeur que dans le void.    )*/
    int q{67};
    int w{34};

    std::cout << n << " - " << m << std::endl;

    auto funct = [&n, m]() mutable -> void /*mutable sert à dire que les champs indiqué seront muable (peuvent changer dans le void)*/
    {
        n += 3;
        m -= 4;

         std::cout << n << " - " << m << std::endl;
    };

    funct();

     std::cout << n << " - " << m << std::endl;

    return 0;
}