#include <iostream>
#include <ctime> /*la classe des chiffre aleatoire*/

using namespace std;

int main()
{
	/*le jeu du plus ou moins*/
	/*test 1 */
	srand(time(nullptr));/*ça sert à générer des listes de nombre pseudo aléatoire*/

	cout << "jeu du plus ou moins :\n" << endl;
	int max_try = 0;
	cout << "entrez le nombre d'essaie :\n" << endl;
	cin >> max_try;
	cin.ignore();

	int number = rand() %100; /*génère un nombre aléatoire de 0 à 100*/

	for (int i = 0; i < max_try; ++i)
	{
		cout << "entrer un nombre : " << endl;

		int number_enter = 0;
		cin >> number_enter;
		cin.ignore();

		if (number == number_enter)
		{
			cout << "effectivement c\'est bien " << number << "." << endl;
			break;
		}
		else if (number_enter > number)
		{
			cout << "\nplus bas \n" << endl;
		}
		else if (number_enter < number)
		{
			cout << "\nplus haut \n" << endl;
		}

		cout << "il vous reste " << max_try - i -1 << " essaie \n" << endl;

		if (i == max_try - 1)
		{
			cout << "perdu dommage, c\'etait " << number << ". \n" << endl;
		}
	}


	cin.ignore();
	return 0;

}