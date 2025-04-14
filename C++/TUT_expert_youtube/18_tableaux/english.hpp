#ifndef _ENGLISH_
    #define _ENGLISH_

    #include <string>
    #include "someone.hpp"

    class English : public Someone 
    {
        using Someone::Someone;
        public :
            void sayGoodNight() const noexcept override;/*on cherche à dire bonne nuit en anglais et à le ratacher à someone pour que "n'importe qui anglais disent bonne nuit en anglais"*/
            /*override = redéfinition de la méthode (pour dire que si c'est "sayGoofNight" de la classe english, tu appelle celle d'english et non de someone)*/
    };

#endif