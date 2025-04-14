#include <iostream>
#include "Vehicule/Vehicule.hpp"
#include "Vehicule/Train/Train.hpp"
#include "Vehicule/Velo/Velo.hpp"
#include "Vehicule/Voiture/Voiture.hpp"

int main()
{
    Vehicule ve;
    ve.Accelerer();
    ve.getVitesse();

    Train tr;
    tr.Accelerer();
    tr.getVitesse();

    Velo vel;
    vel.Accelerer();
    vel.getVitesse();

    Voiture vo;
    vo.Accelerer();
    vo.getVitesse();

    return 0;
}