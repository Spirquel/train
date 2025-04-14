#ifndef _VOITURE_
    #define _VOITURE_

    #include "../Vehicule.hpp"

class Voiture : public Vehicule
{
    public:
        Voiture() = default;
        ~Voiture();
        int Accelerer() override;
};

#endif