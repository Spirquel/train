#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void element(int n) /*pour for_each*/
{
    std::cout << n << std::endl;
}

bool is_pair(int n) /*pour std::all_of(),std::any_of,std::none_of qui ne fonctionnent qu'avec true or false*/
{
    return n % 2 == 0;
}

/*std::fill(),std::equal(),std::find(),std::search(),std::count(),std::sort(),std::reverse(),std::replace(),std::swap(),std::for_each(),std::all_of(),std::any_of,std::none_of*/

int main()
{
    /*std::fill()*/
    std::vector<int> vec0{1, 2, 3, 4, 5}; //un vecteur peut être lu en vec0[i];

    for(const auto& e : vec0)
    {
        std::cout << e << std::endl;
    }

    std::fill(std::begin(vec0), std::end(vec0), 0);/*en prenant fill, on remplira de begin(vec) à end(vec) en 0*/ /*itérateur*/

    for(const auto& e : vec0)
    {
        std::cout << e << std::endl;
    }

    /*std::equal()*/
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};    

    if(std::equal(std::begin(vec1), std::end(vec1), std::begin(vec2), std::end(vec2)))
    {
        std::cout << "equal" << std::endl;
    }

    /*std::find()*/
    std::vector<int> vec3{1, 2, 3, 4, 5};

    if(std::find(std::begin(vec3), std::end(vec3), 3) != std::end(vec3)) /*on recherche dans l'entièreté de vec3 (begin end) la valeur 3*/ /*si après std::end(vec3) pas trouver alors il y est pas*/
    {
        std::cout << "present" << std::endl;
    }

    /*std::search()*/
    std::string s{"hello"};
    std::string chercher{"llo"};

    if(std::search(std::begin(s), std::end(s), std::begin(chercher), std::end(chercher)) != std::end(s)) /*fonctionne comme find()*/
    {
        std::cout << "il y est" << std::endl;
    }

    /*std::count()*/
    std::string k{"kokokok"};

    std::cout << std::count(std::begin(k), std::end(k), 'o') << " est nb occurence de o dans kokokok" << std::endl;

    /*std::sort()*/
    std::vector<int> vect{3, 5, 4, 2, 1};
    std::sort(std::begin(vect), std::end(vect)); /*on tri dans l'ordre*/

    for(const auto& e : vect)
    {
        std::cout << e << std::endl;
    }

    /*std::reverse()*/
    std::vector<int> vect2{1, 2, 3, 4, 5};
    std::reverse(std::begin(vect2), std::end(vect2)); /*affiche dans l'ordre inverse*/

    for(const auto& m : vect2)
    {
        std::cout << m << std::endl;
    }    

    /*std::replace()*/
    std::string w{"lolo lala lolo"};

    std::cout << w << std::endl;
    std::replace(std::begin(w), std::end(w), 'o', 'i'); /*on remplace o par i*/
    std::cout << w << std::endl;

    /*std::swap()*/
    int a{5};
    int b{7};

    std::cout << "a = " << a << " b = " << b << std::endl;
    std::swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;

    /*std::for_each()*/
    std::vector<int> q{1, 5, 8};
    std::for_each(std::begin(q), std::end(q), element); /*methode element*/

    /*std::all/any/none_of()*/
    std::vector<int> c{1, 2, 3, 4, 5};
    std::vector<int> v{2, 4, 8};
    std::vector<int> j{1, 3};

    std::cout << std::all_of(std::begin(c), std::end(c), is_pair) << std::endl; /*tous ne sont pas pair, donc 0*/
    std::cout << std::all_of(std::begin(v), std::end(v), is_pair) << std::endl; /*tous sont pair, donc 1*/
    std::cout << std::all_of(std::begin(j), std::end(j), is_pair) << std::endl; /*aucun pair, donc 0*/

    std::cout << std::any_of(std::begin(c), std::end(c), is_pair) << std::endl; /*au moins 1 pair, donc 1*/
    std::cout << std::any_of(std::begin(v), std::end(v), is_pair) << std::endl; /*au moins 1 pair, donc 1*/
    std::cout << std::any_of(std::begin(j), std::end(j), is_pair) << std::endl; /*aucun pair, donc 0*/

    std::cout << std::none_of(std::begin(c), std::end(c), is_pair) << std::endl; /*tous ne sont pas pair, donc 0*/
    std::cout << std::none_of(std::begin(v), std::end(v), is_pair) << std::endl; /*tous pair, donc 0*/
    std::cout << std::none_of(std::begin(j), std::end(j), is_pair) << std::endl; /*aucun pair, donc 1*/

    return 0;
}
