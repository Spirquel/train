#ifndef _SOMEONE_
    #define _SOMEONE_

    #include <string>

    class Someone /*classe mere/commune*/ /*virtual = 0; veut dire "virtual pur", avec ça, Someone devient une classe abstaite. Une classe abstraite est une classe non définit (un peu comme un corps inanimé, qui s'anime seulemnt via ses classes enfants.)*/
    {
        public :
            Someone() = delete;
            Someone(const std::string& name);
            virtual void sayGoodNight() const noexcept = 0; /*on cherche à faire en sorte que n'importe qui puisse dire bonne nuit*/
            /*virtual permet d'utiliser le void en plusieurs version*/ 
            
        protected : /*permet d'avoir _name en privée tout en étant utilisable pour les autres classes (si on met en privé on ne peux pas l'utiliser dans les autres classes.)*/
            std::string _name; /*car partagé avec les classes filles*/

    };

#endif