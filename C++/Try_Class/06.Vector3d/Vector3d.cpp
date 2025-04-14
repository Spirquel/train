#include <iostream>
#include <cmath>
#include "Vector3d.hpp"

Vector3d::Vector3d(double x, double y, double z) : _x(x), _y(y), _z(z)
{
    
}

void Vector3d::display()
{
    std::cout << "(" << std::setprecision(3) << this->_x << "," << std::setprecision(3) << this->_y << std::setprecision(3) << "," << this->_z << ") \n" << std::endl;
    
}

Vector3d Vector3d::add(Vector3d &va, Vector3d &vb)
{
    double v1 = (va._x) + (vb._x);
    double v2 = (va._y) + (vb._y);
    double v3 = (va._z) + (vb._z);

    return Vector3d(v1, v2, v3);
}

double Vector3d::dot(Vector3d &v1, Vector3d &v2)
{
    double result = (v1._x * v2._x) + (v1._y * v2._y) + (v1._z * v2._z);
    return result;
}

double Vector3d::length()
{
    double res = std::sqrt((this->_x * this->_x) + (this->_y * this->_y) + (this->_z * this->_z));
    return res;
}

Vector3d Vector3d::mul(Vector3d &va, double t)
{
    double vxx = va._x * t;
    double vyy = va._y * t;
    double vzz = va._z * t;

    return Vector3d(vxx, vyy, vzz);
}

void Vector3d::normalize()
{
    double res2 = std::sqrt((this->_x * this->_x) + (this->_y * this->_y) + (this->_z * this->_z));
    double xx = _x/res2;
    double yy = _y/res2;
    double zz = _z/res2;
}

/*void Vector3d::print(int a)
{
    if(a == 1)
    {
        std::cout << add() << "\n" << std::endl;
    }
    else if(a == 2)
    {
        std::cout << dot() << "\n" << std::endl;
    }
    else if(a == 3)
    {
        std::cout << length() << "\n" << std::endl;
    }
    else if( a == 4)
    {
        std::cout << mul() << "\n" << std::endl;
    }
    else if(a == 5)
    {
        std::cout << normalize() << "\n" << std::endl;
    }
}*/