#include <iostream>
#include <string>
#include <list>

/*type de contener*/
/*diff avec pile : ici on peut accéder aux éléments du début ou de la fin de la liste*/
/* .front() : premier element de la list; .back() : dernier element de la liste; .size() : taille de la list; .empty() : si la liste est vide;
   .push_front() : ajout d'un mot au début; .push_back() : ajout d'un mot à la fin; .pop_front() : enleve premier element de la liste; .pop_back() : enleve dernier element de la liste
   .clear() : supprime elements tableau; .sort() : rangement alphabethique de maniere croissante; .reverse() : rangement alphabethique de maniere decroissante*/

int main()
{
    std::list<std::string> li{"loi", "batman"}; /*on définit une liste de type string, celle-ci se nomme "li" et comporte deux elements de character*/
    

    /*for(const auto& i : li) for each, i ira jusqu'à la taille de li (si taille li = 2, for each = for(int i =0; i < 2; i++) et ici i change selon la liste)
    {
        std::cout << i << std::endl;
    }*/

    std::cout << "Premier de la liste: " << li.front() << std::endl;
    std::cout << "Dernier de la liste: " << li.back() << std::endl;
    std::cout << "Taille de la liste: " << li.size() << std::endl;

    /*if(li == li.empty())
    {
        std::cout << "la liste est vide" << std::endl;
    }*/

std::cout << "\n" << std::endl;

    li.push_front("fefe"); /*ajoute*/
    li.push_back("fifi");

    std::cout << "Premier de la liste: " << li.front() << std::endl;
    std::cout << "Dernier de la liste: " << li.back() << std::endl;
    std::cout << "Taille de la liste: " << li.size() << std::endl;

std::cout << "\n" << std::endl;

    li.pop_front(); /*enleve*/
    li.pop_back();

    std::cout << "Premier de la liste: " << li.front() << std::endl;
    std::cout << "Dernier de la liste: " << li.back() << std::endl;
    std::cout << "Taille de la liste: " << li.size() << std::endl;

std::cout << "\n" << std::endl;

    std::list<std::string> lo{"jules", "britney", "fabjul", "oris", "camille"};

    for(const auto& element : lo)
    {
        std::cout << element << std::endl;
    }

    std::cout << "=======================" << std::endl;

    lo.sort(); /*rangement alphabethique de maniere croissante*/

    for(const auto& element : lo)
    {
        std::cout << element << std::endl;
    }

    std::cout << "=======================" << std::endl;

    lo.reverse(); /*rangement alphabethique de maniere decroissante*/

    for(const auto& element : lo)
    {
        std::cout << element << std::endl;
    }


    return 0;
}
