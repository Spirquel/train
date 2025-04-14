#ifndef _T_TIME_ //time est souvent utilisé par c++, donc il est possible que cette classe existe, donc on nomme notre classe différemment
    #define _T_TIME_

    #include <cstddef> //pour size_t
    #include <ostream>

namespace t //pour différencier de la classe time
{
    class time
    {
        public:
            time(std::size_t _h, std::size_t _m, std::size_t _s);
            time operator+(const time& other) const;

        private:
            std::size_t hours_;
            std::size_t minutes_;
            std::size_t secondes_;

        friend std::ostream& operator<<(std::ostream& os, const time& t0); //on crée un operateur (il n'est pas constant car il modifit le flux de sortie, il n'est pas dans la classe)
        //friend : rend la methode public et laisse acceder le friends accéder aux attribut privée de la méthode
        //cette operateur ne fonctionne que si on fait "<<"
    };
}

#endif