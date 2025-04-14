#include <iostream>
#include <string>

int main()
{
    char nom[50];
    char prenom[50];

    printf("Entrez votre nom : ");
    scanf ("%s", nom);

    printf("Entrez votre prenom : ");
    scanf ("%s", prenom);

printf("\n");

    printf("voici votre nom : ");
    printf("%s", nom);

    printf(", ");

    printf("voici votre prenom : ");
    printf("%s", prenom);


    return 0;
}