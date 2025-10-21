#include <iostream>
#include <string>

void doTask(std::string name)
{
    // show name with idx
    for(int i=0; i < 5; i++)
        std::cout << name << " : " << i << std::endl;
}

int main()
{
    // one by one
    doTask("salut");
    doTask("hola");

    return 0;
}