#ifndef _QUEST_
    #define _QUEST_ 

    #include <string>
    #include "queststatus.hpp"

    class Quest /*on va créer un pnj qui va donner une quête*/
    {
        public :
            Quest() = delete;
            Quest(const std::string& name, const std::string& description, int unitId); /*int permet de dire d'ou vient la variable (d'ou vient la quête)*/
            void show() const;

        private :
            std::string _name;
            std::string _description;
            /*int unitId n'est pas un attribut mais une information*/
            QuestStatus _status; /*on affiche le statut de le quete (en cours/terminé/pas activé..)*//*composition (different d'heritage)*/
    };

#endif