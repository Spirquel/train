#ifndef _COQ_
    #define _COQ_

    #include "../Animal.hpp"

class Coq : public Animal
{
    public:
        Coq() = default;
        ~Coq();
        void FaireUnBruit() override;
};

#endif