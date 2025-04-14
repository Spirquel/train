#include <iostream>
//pointeur//
int main()
{
    int* ptry = 0;

    ptry = new(int);

    *ptry = 9;

    std::cout << *(ptry) << std::endl;

    delete ptry;
    return 0;
}