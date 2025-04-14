#include "stdio.h"

#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define NOMBRE_PIXELS (LARGEUR_FENETRE * HAUTEUR_FENETRE)
#define COUCOU() printf("Coucou\n");
#define RACONTER_SA_VIE()   printf("salut, je m'appelle Brice\n"); \
                            printf("J'viens de Nice\n"); \
                            printf("J'suis le roi de la glisse\n");
#define MAJEUR(age) if (age >= 18) \
                    printf("Vous etes majeur\n");

/*
    #if condition
        //Code source à compiler si la condition est vraie
    #elif condition2
        //Sinon si la condition 2 est vraie compiler ce code source
    #endif
*/

/*
#define LINUX (define celui où on est)

#ifdef WINDOWS
    //Code source pour Windows
#endif

#ifdef LINUX
    //Code source pour Linux
#endif

#ifdef MAC
    //Code source pour Mac
#endif
*/

//ifndef est utiliser pour eviter de faire une double inclusion dans deux fichiers s'appelant l'un et l'autre

int main()
{
    printf("%d\n", NOMBRE_PIXELS);
    printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
    COUCOU()
    RACONTER_SA_VIE()
    MAJEUR(22)


    return 0;
}