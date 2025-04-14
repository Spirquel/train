#ifndef _CHARACTER_
    #define _CHARACTER_

    #include "unit.hpp"
    #include <string>

    class Character : public Unit /*classe enfant*/ /*ici Character sert à créer un personnage via l'unité de unit*/
    /*: public unit = on prend ce qui est mis dans l'attribut de unit sans avoir besoin de les ecrires.*/
    /*si on veut heriter de plusieurs classes cela s'écrit "class name_class : public mere_classe1, public mere_classe2, ..."*/
    {
        using Unit::Unit; /*pour dire que l'on utilise l'entièreté de la classe unit. (OBLIGATOIRE)*/

        public :
            Character() = delete; /*desactiver le constructeur par defaut*/
            Character(int id, const std::string& name, int level) noexcept;
            int getLevel() const;
        private :
            int _level; /*avec l'héritage, on a déjà name et id créé dans Unit*/

    };

     /*sans heritage :(faut tout copier coller) 
     class Character 
    {
        public :
            character() = delete 
            Unit(int id, const std::string& name, int level) noexcept;
        private :
        int _id;
        std::string _name;
        int _level;
    }*/

#endif