#ifndef _CONTAINER_
    #define _CONTAINER_

/*tester en faisant une vraie classe (hpp et cpp)*/

template <typename K/*, typename U*/> //on crée un type pouvant emprunter celui inserer // on peut faire "template <typename T, int N>" (comme fait std::array) ou autre type

/*on peut faire de la surchage en mode faire (le generateur met en first la fonction non générique (pas celle avec template )):
T add(T a, T b){resultat voulut;} 
int add(int a, int b){resultat2 voulut}; ou bien avec bool, char, string ou autre type.*/

class Container
{
    public:
        Container(K n, /*U m*/) : n_(n)/*, m_(m)*/ {}; //on peut ajouter des types classiques "Container(K n, U m, int e)"
        K getDatan() const {return n_;} 
        //U getDatam() const {return m_;}

    private:
        K n_;
        //U m_;
};

#endif