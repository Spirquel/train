#include<iostream>
//pour le test 2,3,4 je prends un "type de retour nom(parametres)" ://
int power_custom(int number_v2, int n2); //prototype de la fonction// //il faut toujours la d�clarer avant le int main 
                                        //sinon il ne prendra pas les variables
int addition(int a, int b);

float addtion_v2(float h, float g); //float pour les chiffres � virgules//


//les corps de nos int au-dessus, ce qu'ils renferment//

int power_custom(int number_v2, int n2) //le corps de la fonction//
{
	//test 2 next gent//

	int resultat = 1;

	for (int i = 0; i < n2; ++i)
	{
		resultat *= number_v2;
	}
	
	
	return resultat; //d�s que le return rencontre resultat c'est la fin de la fonction//
}

int addition(int a, int b)
{
	return a + b;
}

float addition_v2(float h, float g)
{
	return h + g;
}


//pour changer d'int main il suffit d'enlever le 2 et de le mettre � l'autre//

int main3()
{
	//on va apprendre � faire des additions avec des chiffres � virgules (5.5f)//
	std::cout << "bonus test 4 5+10 (avec addition_v2): \n" << addition_v2(5, 10) << std::endl; //h = 5, g= 10//
	std::cout << "bonus test 4 5.5+10.6 (avec adddition_v2) : \n" << addition_v2(5.5f, 10.6f) << std::endl; //h = 5.5, g = 10.6//
	std::cout << "bonus test 3 5.5+10.6 (avec adddition qui ne prend pas en compte les float) : \n" << addition(5.5f, 10.6f) << std::endl; //a = 5.5, b = 10.6//
	std::cin.ignore();
	return 0;
} 

int main2()
{
	//ici on multiplis via des puissance et on additionne des nombres entiers)//
	
	std::cout << "test puissance en plus court : \n" << std::endl;

	std::cout << "voici au carrer (power custom) : \n" << power_custom(2, 2) << std::endl; //number_v2 = 2(nombre choisit) et n2(puissance choisit) = 2// //on fait 2 au carrer//
	std::cout << "voici au cube (power custum) : \n" << power_custom(3, 3) << std::endl; //number_v2 = 3(nombre choisit) et n2(puissance choisit) = 3// //on fait 3 au cube//
	
	std::cout << "bonus test (5+10) (avec addition) : \n" << addition(5, 10) << std::endl; //a = 5 et b = 10, donc 5+10 = 15// 
	
	std::cin.ignore();		
	return 0;
		
}

int main() 
{
	//on ne fait que des puissance via plusieurs �tapes//
	//test 1 � l'ancienne//

	std::cout << "test 1 (methode a l\'ancienne) puissance carree : \n" << std::endl;

	int n = 2;
	int number = 0;
	std::cout << "selectionner le nombre : \n " << std::endl;
	std::cin >> number;
	int resultat = 1;

	for (int i = 0; i < n; ++i)
	{
		resultat *= number;
	}
	std::cout << "voici le nombre choisi : \n" << number << std::endl;
	std::cout << "voici le resultat au carree : \n" << resultat << std::endl;

	//test 2 � la puissance choisie//
	std::cout << "test 2 choisir sa puissance : \n";

	int pui = 0;
	std::cout << "inserez la puissance voulue : \n" << std::endl;
	std::cin >> pui;
	int num = 0;
	std::cout << "inserez le nombre : \n" << std::endl;
	std::cin >> num;
	int result = 1;

	for (int t = 0; t < pui; ++t)
	{
		result *= num;
	}
	std::cout << "voici le nombre choisi : \n" << num << std::endl;
	std::cout << "voici le resultat a la puissance " << pui << " :\n" << result << std::endl;

	std::cin.ignore();
	return 0;
}