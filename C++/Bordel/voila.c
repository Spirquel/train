#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valeur_mysteres = 0;
    unsigned int valeur_entrer = 0;
    valeur_mysteres = rand () %101;
    
    printf("Valeur à deviner : ");
    printf("%d", valeur_mysteres);
    
    while (1)
    {
        printf("\n");
        do
        {
        printf("Entrez votre valeur : ");
        scanf("%d", &valeur_entrer);
        }while(valeur_entrer < 0 || valeur_entrer > 100);
        
        if(valeur_entrer == valeur_mysteres)
        {
            printf("\n");
            printf("Bravo, C\'est gagne !");
        }
        
        else if (valeur_entrer > valeur_mysteres)
        {
            printf("\n");
            printf("C\'est moins !");
        }
        
        else if (valeur_entrer < valeur_mysteres)
        {
            printf("\n");
            printf("C\'est plus !");
        }
    printf("\n");  
    break;
    }  
    return 0;
}