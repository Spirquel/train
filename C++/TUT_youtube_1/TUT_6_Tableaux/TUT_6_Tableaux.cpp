#include<iostream>

void ComputeTable(int Tabel, int Table[11]) // table[11] = table de 0 à 10,  table[10] = table de 0 à 9//
{
    for (int i=0; i <= 10; ++i) //on met 9 car si on 10 on ira de 0 à 11//
    {
        Table[i] = i*Tabel; //on va donc ajouter i de 0 à 10// //ex : Table[0] = 0*5, Table[1] = 1*5...//
    }

}   

void DisplayTable(int Table[11])
{
     for (int i=0; i <= 10; ++i) //on met 9 car si on est 10 on ira de 0 à 11//
    {
        std::cout << Table[i] << std::endl;
    }
}

int main()
{
    int Tabel[11] = {0}; // si {0} alors un tableau rempli de 0, si {0,1} alors rempli de 0 et ligne 1 = 1, si {0,1,2}...// 
    // autre méthode : Tabel[0] = 0; Tabel[1] = 1... servant à remplir chaque case (à noté que Tabel[10] est la 11 ème case car le tableau commence à 0)//

    int n = 0;
    std::cout << "entrer le numero de la table : " << std::endl; 
    std::cin >> n; 
    std::cin.ignore();
    std::cout << "table de " << n << std::endl;

    ComputeTable(n, Tabel); //on à donc la table et 5 = numéro de la table//

    DisplayTable(Tabel);

    int* p_d = Tabel;

    std::cout << *(p_d + 1) << std::endl; //affiche la deuxieme case du tableau (donc ce qui est inclu dans l'adresse de cette case)//
    

    std::cin.ignore();
    return 0;
}