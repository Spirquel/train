#ifndef _MOTO_
    #define _MOTO_

    #include "../../vehicule.hpp"

class Moto : public Vehicule
{
    public:
        Moto() = default;
        ~Moto();
        double RoueArriere();
};

#endif