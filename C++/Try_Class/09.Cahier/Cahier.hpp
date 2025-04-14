#ifndef _CAHIER_
    #define _CAHIER_

    #include <string>

    class Cahier
    {
        public :
            Cahier(std::string name_cahier, std::string color_cahier, std::string format_cahier, std::string feuille_cahier);
            ~Cahier();

        private :
            std::string _name_cahier;
            std::string _color_cahier;
            std::string _format_cahier;
            std::string _feuille_cahier;
    };

#endif