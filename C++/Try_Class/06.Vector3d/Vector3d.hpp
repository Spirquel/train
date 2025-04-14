#ifndef _VECTOR3D_
    #define _VECTOR3D_

    #include <iomanip>

    class Vector3d 
    {
        public:
            Vector3d(double x, double y, double z);
            void display();
            static Vector3d add(Vector3d &va, Vector3d &vb);
            static double dot(Vector3d &v1, Vector3d &v2);
            double length();
            static Vector3d mul(Vector3d &va, double t);
            void normalize();

            void print(int a);

        private:
            double _x;
            double _y;
            double _z;
    };

#endif