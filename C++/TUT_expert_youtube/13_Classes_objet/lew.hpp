#ifndef _LEW_
    #define _LEW_

    /*  struct = données publiques
        class = données privées
    
        Niveau d'accès : publiques, privées, protégées*/ 

    class lew
    {
        public: /*tout ce qui sera écrit ici sera publique*/
            lew();
            lew(const lew& p); /*pour copier un objet*/
            ~lew(); /*le destructeur d'objet*/    
            

        /*private: tout ce qui sera écrit ici sera privé*/
    };

#endif
