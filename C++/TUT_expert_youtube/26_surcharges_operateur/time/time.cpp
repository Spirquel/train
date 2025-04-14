#include "time.hpp"

namespace t
{
    time::time(std::size_t _h, std::size_t _m, std::size_t _s) : hours_(_h), minutes_(_m), secondes_(_s) 
    {}

    time time::operator+(const time& other) const //return une addition de deux temps //time time:: est une copie de time
    {
        return time{hours_ + other.hours_, minutes_ + other.minutes_, secondes_ + other.secondes_};
    }

    std::ostream& operator<<(std::ostream& os, const time& t0) //on est en dehors de la classe
    {
        os << t0.hours_ << ":" << t0.minutes_ << ":" << t0.secondes_; //en faisant ça, on affichera en sortie "hours:minutes:secondes" 
        return os;
    }
}