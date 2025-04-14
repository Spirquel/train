#ifndef _STATEFULOBJECT_
    #define _STATEFULOBJECT_

    #include <string>

    class StatefulObject
    {
        public:
            StatefulObject(std::string name); 
            void Use();
            static void displayObjectInUse();
            ~StatefulObject();

        private:
            std::string _name;
            static StatefulObject _ObjectInUse;
    };

#endif