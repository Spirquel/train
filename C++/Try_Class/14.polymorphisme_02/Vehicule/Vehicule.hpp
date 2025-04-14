#ifndef _VEHICULE_
    #define _VEHICULE_

class Vehicule
{
    public:
        Vehicule() = default;
        ~Vehicule();
        int vitesse_ = 0;
        virtual int Accelerer();
        void getVitesse();
};

#endif