#include <iostream>

int main()
{
	//for//
	std::cout << "test sur FOR : \n" << std::endl;

	//test 1//
	//for de 0 à 10 le plus basique de basique//
	std::cout << "test 1 for de 0 a 10 le plus basique de basique : \n" << std::endl;

	for (int i = 0; i <= 10; ++i) //ici ça fait i+1 (=) ++i (ingrémentation)//
	{
		std::cout << i << std::endl;
	}

	std::cout << "\n" << std::endl; //pour sauter un ligne c'est plus beau.//

	//test 2// 
	//for de 0 à n mais avec implatation (cin) de la variable n//
	std::cout << "test 2 for de 0 a n mais avec implatation (cin) de la variable n : \n" << std::endl;

	int n = 0;
	std::cout << "jusqu'ou voulez vous compter (n =) : " << std::endl;
	std::cin >> n;
	std::cin.ignore();

	for (int j = 0; j <= n; ++j) //ici j ira jusqu'à atteindre n, et j = j+1 avec j=0 (ex : si n=3 alors j ira jusqu'a 3)//
	{
		std::cout << j << std::endl;
	}

	std::cout << "\n" << std::endl; //pour sauter un ligne c'est plus beau.//

	//test 3//
	//table de multipliation jusqu'à x//
	std::cout << "test 3 table de multipliation jusqu\'a x : \n" << std::endl;

	int l = 0;
	std::cout << "saisir la table de multiplication voulue (l=) : " << std::endl;
	std::cin >> l;
	std::cin.ignore();
	int x = 0;
	std::cout << "saisir la limite de la table de multiplication (x =) : " << std::endl;
	std::cin >> x;
	std::cin.ignore();

	std::cout << "voici la table de " << l << "jusqu'a" << x << " : " << std::endl;
	
	for (int k = 0; k <= x; ++k) //ici k ira jusq'à x, avec k+1 (donc la table avancera de 1 (ex : l=5, k*l = 0*5, 1*5,...)//
	{
		std::cout << k*l << std::endl;
	}

	std::cout << "\n" << std::endl; //pour sauter un ligne c'est plus beau.//

	//test 4//
	//suite géométrique//
	std::cout << "test 4 suite geometrique : \n" << std::endl;

	int a = 4;
	int r = 3;

	int m = 0;
	std::cin >> m;
	std::cin.ignore();

	for (int h = 0; h < m; ++h)
	{
		a *= r; // <=> à "a = a * r", en gros on motre le résultat correspondant à la suite m //
	}

	std::cout << a << std::endl;

	std::cout << "\n" << std::endl; //pour sauter un ligne c'est plus beau.//




	//while//
	std::cout << "test sur WHILE : \n" << std::endl;

	//test 1//
	std::cout << "test 1 : \n " << std::endl;

	int g = 0;
	std::cout << "g = \n " << std::endl;
	while (g == 0) //while(true) est une boucle infinie qui fait que le programme ne sortrira pas//
	{
		std::cin >> g; //si on n'écrit pas autre chose que 0 la boucle ne s'arrête pas//
		std::cin.ignore(); 
	}

	//ou :do 
	//     {
	//        std::cin >> g;
	//        std::cin.ignore();
	//     } while(n==0).//
	
	//test 2//
	std::cout << "test 2 mot cle 'break' (pour quitter la boucle) : \n" << std::endl;
	int y = 0;
	while (true)
	{
		int y = 0;
		std::cin >> y;
		std::cin.ignore();

		if (y == 0)
		{
			std::cout << "sortie de boucle" << std::endl; //il faut entrer 0 pour sortir de la boucle)
			break; 
		}

		std::cout << "dans la boucle" << std::endl;
	}

	std::cout << " \n" << std::endl;

	//test 3//
	std::cout << "test 3 mot cle 'continue'" << std::endl;
	int p = 0;
	while (true)
	{
		int p = 0;
		std::cin >> p;
		std::cin.ignore();

		if (p == 0)
		{
			std::cout << "retour au debut de la boucle" << std::endl; //ici on ne peut pas sortir de la boucle.//
			continue;
		}

		std::cout << "dans la boucle" << std::endl;
	}



	std::cin.ignore();
	return 0;
}