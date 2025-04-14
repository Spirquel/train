#ifndef _UNIT_
    #define _UNIT_

    #include <string>

    class Unit /*classe mère*/ /*sert à créer une unité*/
    {
        public :
            Unit() = delete;
            Unit(int id, const std::string& name) noexcept;/*id = identifiant, name = nom*/
            int getId() const noexcept; /*accesseur*/
            std::string getName() const noexcept; /*accesseur*/
        private :
            int _id;
            std::string _name;
    };

#endif