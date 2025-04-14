#include <iostream>

void foo(const int* a)
{
    std::cout << *a << std::endl; //avec const int on ne peut pas modifer la valeur de a (car il est cst)//
}
void too(int* b)
{
    *b = 56;
}
void foo(const int& a)
{
    std::cout << a << std::endl;
}
void too(int& b)
{
    b = 56;
}

int main()
{
    int a = 7;
    int b = 6;
    foo(a);
    too(b);//si je reprend foo(b) alors b = 6 mais a = 56//

    //pointeur//
    int* ptri = &a; //adresse de a// // si int* ptri; le programme fonctionne//

    //réferences//
    int& ref = a; //réference de a// //si int& ref; le programme fonctionne pas, il faut lui assigner une valeure//

    std::cout << "valeur de a = " << ref << std::endl; 
    std::cout << "taille de a = " << sizeof(ref) << std::endl; //la taille que prend a dans le pc (en octet) //
    std::cout << "valeur de b = " << b << std::endl;
    std::cout << "taille de b = " << sizeof(b) << std::endl;
    std::cin.ignore();

    return 0;
}