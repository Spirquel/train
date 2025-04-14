#ifndef _CHIEN_
    #define _CHIEN_

    #include "../Animal.hpp"

class Chien : public Animal
{
    public:
        Chien() = default;
        ~Chien();
        void FaireUnBruit() override;
};

#endif