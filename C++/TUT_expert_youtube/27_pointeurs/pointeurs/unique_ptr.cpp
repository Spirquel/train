#include <iostream>
#include <memory> //pour unique_ptr

//dans une fonction, un seul objet peut avoir la propriété "unique_ptr"

int main()
{
    std::unique_ptr<int> ptr_int {std::make_unique<int>(38)}; //en sortant de la fonction, ce ptr sera automatiquement effacé

    std::cout << *ptr_int << std::endl;

    *ptr_int = 56;

    std::cout << *ptr_int << std::endl;

    int* ptr_RAW{ptr_int.get()}; //on recupere ce sur quoi il pointe 

    std::unique_ptr<int> ptr_int2 {ptr_int.realease()}; //je transfert la propriété à ptr_int2 (donc ptr_int est nullptr)

    if(ptr_int)
        std::cout << "il existe" << std::endl;
    else 
        std::cout << "il existe pas" << std::endl;

    ptr_int.reset(); //on libere le unique pointeur

    if(ptr_int)
        std::cout << "il existe" << std::endl;
    else 
        std::cout << "il existe pas" << std::endl;

    return 0;
}