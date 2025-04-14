#include <iostream>
#include "function.h"


int main()
{
	//ici on fusionne le function.h, fonction.cpp et TUT 5 en plus simple.//
	//Pour avoir un fichier plus simple lire//
	std::cout << "bonus test 4 5+10 (avec addition_v3): \n" << addition_v3(5, 10) << std::endl; //y = 5, f = 10//
	std::cout << "bonus test 4 5.5+10.6 (avec adddition_v3) : \n" << addition_v3(5.5f, 10.6f) << std::endl; //y = 5.5, f = 10.6//
	std::cout << "voici au carrer (power custom2) : \n" << power_custom2(2, 2) << std::endl; //number_v3 = 2(nombre choisit) et n3(puissance choisit) = 2// //on fait 2 au carrer//
	std::cout << "voici au cube (power custum2) : \n" << power_custom2(3, 3) << std::endl; //number_v3 = 3(nombre choisit) et n3(puissance choisit) = 3// //on fait 3 au cube//
	std::cin.ignore();
	return 0;
}