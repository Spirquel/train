#include <iostream>
#include <fstream>
#include <string>

/*different mode :
std::ios::out (mode par defaut), std::ios::in
std::ios::binary (mode binaire)
std::ios::trunc
std::ios::ate (ouvre le fichier)
std::ios::app*/

/*si on modifi un fichier sans faie ctrl+S alors on se trouve dans la mémoire vive*/

int main()
{
    std::ifstream f{"10_Fichier.txt"}; /* ifstream = flux de fichiers (flux d'entrée) (i = input, f = flux, stream = flux)*/
    /*std::ios(input output stream)::in*/

    if(f.is_open()) /*si le fichier est ouvert on fait ça*/
    {
        std::string name{" "};
        f >> name;
        std::cout << name << std::endl; /*affiche tigre (premier de la liste)*/

        f >> name;
        std::cout << name << std::endl; /*affiche lion (deuxieme de la liste)*/

        for (int i; i < 11; ++i) /*on affiche tout à la suites*/
        {
            f >>name;
            std::cout << name << "\n" << std::endl;
        }
        
    }
    

    f.close(); /*cela permet de fermer le fichier avant la fin du programme*/
    
    return 0;
}