#include <iostream>

//une reference existe que si une valeur est donné
//un pointeur peut etre créé et vivre sa vie sans valeur

void change_value(int* n) //version c 
{
    *n = 45;
}

void change_value(int& c) //version c++ (on travaille avec une reference)
{
    c = 56;
}

int main()
{
    //version c
    int n = 35;
    int* ptr_n = &n; //'&' symbolyse l'adresse de n et on point vers celle-ci
    change_value(&n); //comme on a * en argument alors on doit transmettre l'adresse
    std::cout << "n = " << n << std::endl; //valeur de n

    //bonus
    std::cout << "&n = " << &n << std::endl; //addresse de n
    std::cout << "ptr_n = " << ptr_n << std::endl; //addresse de n
    std::cout << "&ptr_n = " << &ptr_n << std::endl; // addresse de ptr_n
    std::cout << "*ptr_n = " << *ptr_n << std::endl; //valeur de n

    //version c++
    int c = 0;
    change_value(c);
    std::cout << "c = " << c << std::endl;

    return 0;
}