#ifndef _VEHICULE_
    #define _VEHICULE_

class Vehicule
{
    public:
        Vehicule() = default;
        ~Vehicule();
        double Accelerer();
        void getVitesse();
        void getUsurePneus();
        double usure_pneus_ = 0.0;

    /*protected:
        double usure_pneus_ = 0.0;*/

    private:
        double vitesse_ = 0.0;
        
};

#endif