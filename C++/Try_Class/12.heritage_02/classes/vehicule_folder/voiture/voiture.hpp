#ifndef _VOITURE_
    #define _VOITURE_

    #include <tuple>
    #include "../../vehicule.hpp"

class Voiture : public Vehicule
{
    public:
        Voiture() = default;
        ~Voiture();
        std::tuple<double, double> Drifter();
        void getCasseMoteur();

    private:
        double casse_moteur_;
};

#endif