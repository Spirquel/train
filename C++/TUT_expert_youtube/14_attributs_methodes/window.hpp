#ifndef _WINDOW_
    #define _WINDOW_

    #include <string>

    class window
    {
        public: 
            window() = default; /*généré par defaut par le code*/ /*pour que cet variable existe, il faut de base lui créer un corps
                                    dans le "window.cpp", mais comme = default alors pas besoin et le code accepte.*/

            window(std::string t, int w, int h); /*on crée le corps/attribut dans "window.cpp"*/
                                                /*attribut = corps de l'objet (dimension, couleur,..)*/
            void run() const; /*methode*/

        private :/*comme en privée ces données ne sont pas accessibles ni modifiables*/
            std::string title; /*constructeur/attribut privé*/
            int width; /*constructeur/attribut privé*/
            int height; /*constructeur/attribut privé*/
    };

#endif
