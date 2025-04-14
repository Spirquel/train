#include <iostream>
#include <memory>

//weak observe la valeur mais en n'est pas proprietaire

int main()
{
    std::shared_ptr<int> ptr_int{std::make_shared<int>(29)};
    std::weak_ptr<int> ptr_weak{ptr_int};

    //std::cout << *ptr_weak << std::endl; //comme il n'a pas la propriété il n'a pas le droit d'afficher la valeur 

    if(auto ob = ptr_weak.lock()) //ici on fait une conversion pour affiché l'objet
        std::cout << *ob << std::endl; 

    return 0;
}