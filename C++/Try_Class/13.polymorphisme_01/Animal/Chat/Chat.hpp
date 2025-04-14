#ifndef _CHAT_
    #define _CHAT_

    #include "../Animal.hpp"

class Chat : public Animal
{
    public:
        Chat() = default;
        ~Chat();
        void FaireUnBruit() override;
};

#endif