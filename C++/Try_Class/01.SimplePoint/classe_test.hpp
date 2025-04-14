#ifndef _CLASSE_TEST_
    #define _CLASSE_TEST_

    class SimplePoint 
    {
        public:
            SimplePoint(char nom, double abscisse);
            void display();
            void translate(double arg);

        private:
            char _nom;
            double _abscisse;
    };

#endif