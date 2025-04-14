#include <iostream>
#include "unit.hpp"
#include "character.hpp"
#include "quest.hpp"

int main()
{
    Unit pnj{114, "Forgeron Bonbon"}; 

    std::cout << "classe mere : " << std::endl;
    std::cout << pnj.getId() << std::endl;
    std::cout << pnj.getName() << std::endl; 

    Character c{38, "Laveur vibreur", 1}; 

    std::cout << "classe enfant : " << std::endl;
    std::cout << c.getId() << std::endl;
    std::cout << c.getName() << std::endl; 
    std::cout << c.getLevel() << std::endl; 

    Quest q{"mission chasse", "Ramener 5 viandes", pnj.getId()}; /*nom quete, quete, source de la quete*/
    q.show();
    
    return 0;
}