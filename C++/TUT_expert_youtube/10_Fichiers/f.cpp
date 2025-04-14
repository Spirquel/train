#include <iostream>
#include <fstream>
#include <string>
    
    
int main() /*ça ne fonctionne pas, de base c'est censé créer un fichie data.txt*/
{
    std::ofstream f{"data.txt"}; /*flux de sortie*/

    if(f.is_open())
    {
        f << "hello";
    }

    retrun 0;
}