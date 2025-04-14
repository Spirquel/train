#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream f{"10_Fichier.txt"}; /* ifstream = flux de fichiers (i = input, f = flux, stream = flux)*/
    /*std::ios(input output stream)::in*/

    if (f.is_open())
    {
        std::string line{" "};
        
        std::getline(f >> std::ws, line); /*std::ws enleve le retour à la ligne, ce qui permet de tout lire*/
        std::cout << line << std::endl;

        std::getline(f >> std::ws, line); /*std::ws enleve le retour à la ligne, ce qui permet de tout lire*/
        std::cout << line << std::endl;

        std::getline(f >> std::ws, line); /*std::ws enleve le retour à la ligne, ce qui permet de tout lire*/
        std::cout << line << std::endl;
    }

    f.close(); /*cela permet de fermer le fichier avant la fin du programme*/

    return 0;
}