#ifndef _VELO_
    #define _VELO_

    #include "../Vehicule.hpp"

class Velo : public Vehicule
{
    public:
        Velo() = default;
        ~Velo();
        int Accelerer() override;
};

#endif