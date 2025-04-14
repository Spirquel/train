#ifndef _INDONESIAN_
    #define _INDONESIAN_

    #include <string>
    #include "someone.hpp"

    class Indonesian : public Someone 
    {
        using Someone::Someone;
        public :
            void sayGoodNight() const noexcept override;/*on cherche à dire bonne nuit en indonesian et à le ratacher à someone pour que "n'importe qui anglais disent bonne nuit en indonesian"*/
            /*override = redéfinition de la méthode (pour dire que si c'est "sayGoofNight" de la classe indonesian, tu appelle celle d'indonesian et non de someone)*/
    };

#endif