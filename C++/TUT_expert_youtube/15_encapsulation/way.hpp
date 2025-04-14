#ifndef _WAY_
    #define _WAY_

    #include <string>

    /* 
    accesseurs : permet d'acceder/lire une information précise.
    modificateurs : permert de modifier un élément.
    */

    class Way
    {
        public : 
            Way(std::string title);
            std::string getTitle() const; /*accesseur : type getInfo_que_l_on_veut_retourner*/
            void setTitle(std::string title); /*modificateur : void setInfo_que_l_on_veut_retourner(l'endroit de modification/varibale à modifier)*/ /*on utilise un void car un void ne retiurne rien*/
        private :
            std::string title; /*comme en privée cette donnée n'est pas accessible ni modifiable*/
    };

#endif
