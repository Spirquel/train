#ifndef _NAME_PERSO_
    #define _NAME_PERSO_

    namespace name_perso /*on dit que dans la bibliotheque "name_perso" il y a un void inscrit  */
    {
        void test(); /*ici on a name_perso::test()*/

        /*namesapce subname_perso
        {
            name_perso::test();
        }
        On peut créer un sous espace de nom dans un espace de nom.*/

       
    }

    void test(); /*ici on a std::test()*/

    /*namespace A
    {
        inline namespace B /*donnée membre de l'espace namespace A, sans inline les deux sont distinctes
        {

        }
    }*/

    /*On peut raccourcir le nom d'un namespace :
    
    namespace TooLongNamesspaceName
    {        
    }
    
    namespace TLNN = TooLongNamesspaceName; (on peut aussi utiliser using au lieu de namespace)

    et voila le nom est raccourci
    */

   /*on peut aussi changer l'écriture du code :
   using entier = int;
   entier a;
   ici entier remplace int, on ecrit le code en français (autre ex string = chaine)*/

#endif 