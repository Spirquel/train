#ifndef _PHYSICIST_
    #define _PHYSICIST_

    #include <string>

    //refaire une fois vu le cours sur les dates

    class Physicist
    {
        public:
            Physicist(std::string name, int birth_year, int birth_month, int birth_day, std::string country);
            Physicist(std::string name, int birth_year, int birth_month, int birth_day);
            Physicist(std::string name);
            void methode_day(int a);
            void methode_month(int b);
            void methode_year(int c);
            void Introduce();
            void Modif_birth(int year, int month, int day);
            ~Physicist();

        private:
            std::string _name;
            int _birth_year, _birth_month, _birth_day;
            std::string _country;

    };

#endif