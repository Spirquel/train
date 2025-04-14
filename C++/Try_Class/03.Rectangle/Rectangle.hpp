#ifndef _Rectangle_
    #define _Rectangle_

    class Rectangle
    {
        public:
            Rectangle(double width, double height);
            double getPerimeter();
            double getArea();
            void scale(double zoom);
            void print();
            void print2(int a);

        private:
            double _width;
            double _height;
    };

#endif