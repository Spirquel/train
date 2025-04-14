#include <stdio.h>

void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

int main()
{
    int size = 5;
    int tab[size];

    affiche(tab, size);

    return 0;
}