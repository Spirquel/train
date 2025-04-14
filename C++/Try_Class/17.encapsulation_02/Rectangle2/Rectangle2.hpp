#ifndef _RECTANGLE_
    #define _RECTANGLE_

    #include <string>

class Rectangle2
{
    public:
    Rectangle2(float _longueur, double _largeur, std::string _couleur);
    ~Rectangle2();
    void setLongueur(float _longueur);
    void setLargeur(double _largeur);
    void setCouleur(std::string _couleur);
    void get();

    private:
    float longueur_;
    double largeur_;
    std::string couleur_;    
};

#endif