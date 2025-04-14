#include <iostream>
#include <memory>

//l'objet sera détruit lorsque le dernier proprietaire (shared_ptr) est détruit

int main()
{
    std::shared_ptr<int> ptr_int{std::make_shared<int>(29)};
    std::shared_ptr<int> ptr_int_copy{ptr_int}; 

    std::cout << *ptr_int << std::endl; 
    std::cout << *ptr_int_copy << std::endl;

    return 0;
}