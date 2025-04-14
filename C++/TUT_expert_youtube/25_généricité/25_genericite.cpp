#include <iostream>
#include <string>
#include "number/number.hpp"
#include "Container/Container.hpp"

/*pour compiler "g++ -o main .cpp" suffit*/

// générictié : un code qui fonctionne peu importe le type (int, string, etc.) 

int main()
{
    auto r1 = sum(4, 5);
    auto r2 = sum(4.6, 5.4);
    auto r3 = sum<float> (7, 15.2); //ça permet de dire "prend ce type"

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;

    Container<int> c{25}; //ici K = int
    std::cout << c.getDatan() << std::endl; // K getData = int getData

    Container<std::string> cs{"Hello"}; //ici K = std::string
    std::cout << cs.getDatan() << std::endl; // K getData = std::string getData

    return 0;
}