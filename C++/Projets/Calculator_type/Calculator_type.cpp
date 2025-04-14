#include <iostream>
#include <string>

void valeur(int a)
{
    if(a > 3 || a < 0)
    {
        std::cout << "Type introuvable" << std::endl;
        break;
    }
}

int main()
{
    /*Préfixes : 0b = binaire (0/1), 0 = octal (8), 0x = hexadecimal (16)*/

    int number_entrant;
    std::cout << "Choisir le type du nombre que vous souhaitez convertir : \n" << std::endl;
    std::cout << "[0] Binaire \n" << std::endl;
    std::cout << "[1] Decimal \n" << std::endl;
    std::cout << "[2] Octal \n" << std::endl;
    std::cout << "[3] Flottant \n" << std::endl;
    std::cout << "[4] Hexa \n" << std::endl;
    std::cin >> number_entrant;

    if(number_entrant > 4 || number_entrant < 0)
    {
        std::cout << "Type introuvable" << std::endl;
        break;
    }
    
    switch(number_entrant)
    {
        case 0:
            int binary_number;
            int number_sortant_binaire;
            std::cout << "Vous avez choisit binaire \n" << std::endl;
            std::cout << "Entrez votre nombre : " << std::endl;
            std::cin >> binary_number;

            std::cout << "Choisir la convertion de ce nombre : \n" << std::endl;
            std::cout << "[0] Decimal \n" << std::endl;
            std::cout << "[1] Octal \n" << std::endl;
            std::cout << "[2] Flottant \n" << std::endl;
            std::cout << "[3] Hexa \n" << std::endl;
            std::cin >> number_sortant_binaire;

            valeur(number_sortant_binaire);
            
            switch(number_sortant_binaire)
            {
                case 0:
                    std::cout << "Vous avez choisit Decimal \n" << std::endl;

                case 1:
                    std::cout << "Vous avez choisit Octal \n" << std::endl;

                case 2:
                    std::cout << "Vous avez choisit Flottant \n" << std::endl;

                case 3:
                    std::cout << "Vous avez choisit Hexa \n" << std::endl;
            }

        case 1:
            int Decimal_number;
            int number_sortant_decimal;
            std::cout << "Vous avez choisit Decimal \n" << std::endl;
            std::cout << "Entrez votre nombre : " << std::endl;
            std::cin >> Decimal_number;

            std::cout << "Choisir le type du nombre que vous souhaitez convertir : \n" << std::endl;
            std::cout << "[0] Binaire \n" << std::endl;
            std::cout << "[1] Octal \n" << std::endl;
            std::cout << "[2] Flottant \n" << std::endl;
            std::cout << "[3] Hexa \n" << std::endl;
            std::cin >> number_sortant_decimal;

            valeur(number_sortant_decimal);

            switch(number_sortant_decimal)
            {
                case 0:
                    std::cout << "Vous avez choisit Binaire \n" << std::endl;

                case 1:
                    std::cout << "Vous avez choisit Octal \n" << std::endl;

                case 2:
                    std::cout << "Vous avez choisit Flottant \n" << std::endl;

                case 2:
                    std::cout << "Vous avez choisit Hexa \n" << std::endl;
            }

        case 2:
            float Flottant_number;
            int number_sortant_floattant;
            std::cout << "Vous avez choisit Flottant \n" << std::endl;
            std::cout << "Entrez votre nombre : " << std::endl;
            std::cin >> Flottant_number;

            std::cout << "Choisir le type du nombre que vous souhaitez convertir : \n" << std::endl;
            std::cout << "[0] Binaire \n" << std::endl;
            std::cout << "[1] Decimal \n" << std::endl;
            std::cout << "[2] Octal \n" << std::endl;
            std::cout << "[3] Hexa \n" << std::endl;
            std::cin >> number_sortant_floattant;

            valeur(number_sortant_floattant);

            switch(number_sortant_floattant)
            {
                case 0:
                    std::cout << "Vous avez choisit Binaire \n" << std::endl;

                case 1:
                    std::cout << "Vous avez choisit Decimal \n" << std::endl;

                case 2:
                    std::cout << "Vous avez choisit Octal \n" << std::endl;

                case 3:
                    std::cout << "Vous avez choisit Hexa \n" << std::endl;
            }

        case 3:
            std::string Hexa_number;
            int number_sortant_hexa;
            std::cout << "Vous avez choisit Hexa \n" << std::endl;
            std::cout << "Entrez votre nombre : " << std::endl;
            std::cin >> Hexa_number;

            std::cout << "Choisir le type du nombre que vous souhaitez convertir : \n" << std::endl;
            std::cout << "[0] Binaire \n" << std::endl;
            std::cout << "[1] Decimal \n" << std::endl;
            std::cout << "[2] Octal \n" << std::endl;
            std::cout << "[3] Flottant \n" << std::endl;
            std::cin >> number_sortant_hexa;

            valeur(number_sortant_hexa);

            switch(number_sortant_hexa)
            {
                case 0:
                    std::cout << "Vous avez choisit Binaire \n" << std::endl;

                case 1:
                    std::cout << "Vous avez choisit Decimal \n" << std::endl;

                case 2:
                    std::cout << "Vous avez choisit Octal \n" << std::endl;

                case 3:
                    std::cout << "Vous avez choisit Flottant \n" << std::endl;
            }
    }

    std::cin.ignore();    
    return 0;
}