#include <stdio.h>
#include <string.h>

int main()
{
    char letter = 'A';
    char tab_char[6] = {'s', 'a', 'l', 'u', 't', '\0'}; 
    //termine avec /0 pour chaque lettres pour indiquer la fin du stockage de la lettre
    char tab_auto[] = "bonjour"; //on a la taille calculé avec \0 à la fin

    printf("%c: %d\n", letter, letter);
    printf("%s\n", tab_char);
    printf("%s\n", tab_auto);

    //CONNAITRE TAILLE
    int size_char = 0;
    size_char = strlen(tab_auto); //connaitre a taille de la chaine (ici via string.h)
    //il s'arrete au /0 (indiquant la fin du tableau) mais ne prend pas en compte le /0
    printf("size de tab_auto: %d\n", size_char);

    //COPIER UNE CHAINE
    char chaine[] = "Texte", copie[100] = {0};
    strcpy(copie, chaine); //copie le contenu d'un autre char (avec /0)
    printf("%s, %s\n", chaine, copie);

    //METTRE A LA SUITE DE LAUTRE
    char chaine1[100] = "Salut ", chaine2[] = "Mateo21";
    strcat(chaine1, chaine2); //modifie que chaine1 (deplace le /0)
    printf("chaine1 vaut : %s\n", chaine1);
    printf("chaine2 vaut toujours : %s\n", chaine2);

    //COMPARER DEUX CHAINES 
    char c1[] = "Texte de test", c2[] = "Texte de test";
    int same = strcmp(c1, c2); // Si chaînes identiques
    printf("Same chaine ? %d\n", same); //0 = oui

    //RECHERCHE DUN CARACTERE DANS UNE CHAINE
    char LK[] = "Texte de test", *suiteChaine = NULL;
    suiteChaine = strchr(LK, 'd');
    if (suiteChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaine a partir du premier d : %s\n", suiteChaine);
    }

    char *suitChaine;

    //RECHERCHE DOCCURENCE
    // On cherche la première occurrence de x, d ou s dans "Texte de test" 
    suitChaine = strpbrk("Texte de test", "xds");

    if (suitChaine != NULL)
    {
        printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s\n", suitChaine);
    }

    char *suiChaine;

    //RECHERCHE DUNE SUITE DE CARACTERE DANS UN ENSEMBLE DE CARACTERES
    // On cherche la première occurrence de "test" dans "Texte de test" :
    suiChaine = strstr("Texte de test", "test"); 
    if (suiChaine != NULL)
    {
        printf("Premiere occurrence de test dans Texte de test : %s\n", suiChaine);
    }

    //ECRIRE DANS UNE CHAINE UNE SUITE DE PHRASE
    char chj[100];
    int age = 15;

    sprintf(chj, "Tu as %d ans !\n", age); //insertion dans chj
    printf("%s", chj);

    return 0;
}
