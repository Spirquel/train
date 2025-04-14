#include <iostream>
#include "classes/vehicule.hpp"
#include "classes/vehicule_folder/voiture/voiture.hpp"
#include "classes/vehicule_folder/moto/moto.hpp"

//ligne de commande : g++ -o main *.cpp classes/*.cpp classes/vehicule_folder/moto/*.cpp classes/vehicule_folder/voiture/*.cpp

int main()
{
    Vehicule v;
    v.Accelerer();
    v.Accelerer();
    v.getVitesse();
    v.getUsurePneus();

    Voiture t;
    t.Drifter();
    t.getCasseMoteur();
    t.getUsurePneus();
    t.getVitesse();

    Moto m;
    m.RoueArriere();
    m.getUsurePneus();

    return 0;
}