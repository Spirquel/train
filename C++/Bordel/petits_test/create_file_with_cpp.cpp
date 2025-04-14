#include <fstream>

int main(int argc, char **argv)
{
    std::ofstream file("ofstream.srv"); //crée un fichier srv là ou le code est changé (on peut le créé où on veut en mettant le chemin par exemple : "/home/user/ofstream.txt")
    //file est juste un nom, on peut le nommer d'une autre façon (souvent nommé ofs) et evidemment le format peut être celui souhaiter (txt, cpp, csv, srv, etc.)
    file << "hello world"; //va écrire hello world dans le fichier (evidemment faire un int a = 5; puis file << a; affichera 5)
    std::remove("ofstream.srv"); //efface le fichier (c'est comme ça que fonctionne les save de jeux vidéo)
}

