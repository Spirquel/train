#ifndef _BAG_
    #define _BAG_

    #include <string>
    #include "Cahier.hpp"

    class Bag
    {
        public :
            Bag();
            void RangerCahier(Cahier c);
            void FindCahier(std::string find);
            void Nb_Cahier_in_bag();
            void Display_cahier();
            ~Bag();

        private :

    };

#endif