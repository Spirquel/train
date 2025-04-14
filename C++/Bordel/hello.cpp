#include <iostream>

int main()
{
    int a{5};
    int b{15};

    std::cout << "hello" << std::endl;

    std::cout << "=========" << std::endl;

    std::cout << a << "\n" << std::endl;
    std::cout << b << "\n" << std::endl;

    int bou = a + b;
    
    std::cout << a << " + " << b << " = "<< bou << std::endl;



    return 0;
}