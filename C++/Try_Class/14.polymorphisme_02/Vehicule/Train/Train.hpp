#ifndef _TRAIN_
    #define _TRAIN_

    #include "../Vehicule.hpp"

class Train : public Vehicule
{
    public:
        Train() = default;
        ~Train();
        int Accelerer() override;
};

#endif