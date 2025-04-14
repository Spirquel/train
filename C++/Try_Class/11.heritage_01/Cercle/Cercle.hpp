#ifndef _CERCLE_
#define _CERCLE_

#include "../Forme/Forme.hpp"

class Cercle : public Forme
{
    public:
        Cercle(double rayon);
        ~Cercle();
        double getPerimeter();
        double getArea();

    private:
        double _rayon;
};

#endif
