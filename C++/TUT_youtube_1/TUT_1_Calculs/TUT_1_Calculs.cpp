#include <iostream>
int main()

{
	// char (character), int (integrer valeur), float (floating point, nombre à virgule), double (double precision).
	int age = 42;
	float jul = 18.5;
	double height =200.5;
	age = 25;
	jul = 18.5f;
	height = 200.5;

	int a = 1;
	int b = 2;
	int c = a + b;
	int d = a - b;
	int y = a / b;
	int k = a * b;
	int h = a % b;
	int o = a & b;
	int r = a | b;
	int z = a * b + 15 - 26;

	float p = a * 1.5;
	
	std::cout << "hi" << std::endl;
	std::cout << c << std::endl;
	std::cout << 50 + 2 << std::endl;
	std::cout << "age init = " << age << std::endl;
	std::cin >> age;
	std::cout << "age = " << age << std::endl;
	std::cout << "entrer a dans b = ";
	std::cin >> a >> b;
	std::cout << "a + b =" << a + b << std::endl;

	std::cin.ignore(); //permet de ne pas afficher le message moche en bas//

	return 0;
}