#include <iostream>
using namespace std;

int main()
{
	//test 0//
	std::cout << "test 0 condition true ou false" << std::endl;
	bool condition = false; //on peut mettre soit true ou false.

	if (condition == true)
	{
		std::cout << "la condition est valide " << std::endl;
	}
	else
	{
		std::cout << "le condition n'est pas valide" << std::endl;
	}		

	std::cout << "\n" << std::endl;

	//test 1//
	std::cout << "test 1 joueur en vie ou mort (hp) : " << std::endl;
	int hp = 10;

	if (hp <= 0) //si on met == alors avec "int hp = -1" le programme affiche "le joueur est en vie".
	{
		std::cout << "le joueur est mort" << std::endl;
	}
	else
	{
		std::cout << "le joueur est en vie" << std::endl;
	}

	std::cout << "\n" << std::endl;

	//test 2//
	std::cout << "test 2 mention (average) : " << std::endl;
	float average = 0.0f;
	std::cout << "note = " << std::endl;
	std::cin >> average;

	if (average == 20)
	{
		std::cout << "felicitation" << std::endl;
	}

	else if (average >= 16.0f)
	{
		std::cout << "tres bien" << std::endl;
	}

	else if (average >= 14.0f)
	{
		std::cout << "bien" << std::endl;
	}

	else if (average >= 12.0f)
	{
		std::cout << "assez bien" << std::endl;
	}

	else
	{
		std::cout << "pas de mention" << std::endl;
	}

	std::cout << "\n" << std::endl;

	//test 3//
	std::cout << "test 3 age : " << std::endl;
	int age = 0;
	std::cout << "age = " << std::endl;
	std::cin >> age;
	std::cin.ignore();

	if (age < 18)
	{
		std::cout << "mineur" << std::endl;
	}
	else
	{
		std::cout << "majeur" << std::endl;
	}

	std::cout << "vous etes " << (age < 18 ? "mineur" : "majeur") << std::endl; //on met if et else ensemble via ":" ça se nomme "Inline-if//

	std::cout << "\n" << std::endl;

	//test 4//
	std::cout << "test 4 age et parent : " << std::endl;
	int age2 = 16;
	std::cout << "saisir l'age : " << std::endl;
	std::cin >> age2;
	bool parent = true; 

	if (age2 >= 16 || parent && age2 > 10) // || = ou // // si parent true alors ce sera "possible" même si inférieur à 16 mais si > 10 //
	{
		std::cout << "possible" << std::endl;
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}


	std::cin.ignore(); //permet de ne pas afficher le message moche en bas//
	return 0;

}