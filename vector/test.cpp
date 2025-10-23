#include "vect2.hpp"

vect2::vect2() : x(0), y(0){}

vect2::vect2(int x, int y) : x(x), y(y){}

//====================================================

int& vect2::operator[](int index)
{
    if (index == 0)
        return x;
    return y; 
}
const int& vect2::operator[](int index) const
{
    if (index == 0)
        return x;
    return y;
}

//======================================================

vect2 vect2::operator+(const vect2& other) const
{
   vect2 tmp;
   tmp.x = x + other.x;
   tmp.y = y + other.y;
   return tmp;
}
vect2 vect2::operator-(const vect2& other) const
{
    vect2 tmp;
    tmp.x = x - other.x;
    tmp.y = y - other.y;
    return tmp;
}
vect2 vect2::operator*(const vect2& other) const
{
    vect2 tmp;
    tmp.x = x * other.x;
    tmp.y = y * other.y;
    return tmp;
}
vect2 vect2::operator+(int scalar) const
{
    vect2 tmp;
    tmp.x = x + scalar;
    tmp.y = y + scalar;
    return tmp;
}

vect2 vect2::operator-(int scalar) const
{
    vect2 tmp;
    tmp.x = x - scalar;
    tmp.y = y - scalar;
    return tmp;

}
vect2 vect2::operator*(int scalar) const
{
    vect2 tmp;
    tmp.x = x * scalar;
    tmp.y = y * scalar;
    return tmp;
}

//======================================================

    
vect2& vect2::operator+=(const vect2& other)
{
    *this = *this + other;
    return *this;
}
vect2& vect2::operator-=(const vect2& other)
{
    *this = *this - other;
    return *this;
}
vect2& vect2::operator*=(int scalar)
{
    *this = *this * scalar;
    return *this;
}
vect2& vect2::operator+=(int scalar)
{
    *this = *this + scalar;
    return *this;
}
vect2& vect2::operator-=(int scalar)
{
    *this = *this - scalar;
    return *this;
}

//======================================================

vect2& vect2::operator++()
{
    return *this += 1;
}  
vect2 vect2::operator++(int)
{
    vect2 tmp(this->x, this->y);
    ++(*this);
    return tmp;
} 
vect2& vect2::operator--()
{
    return *this -= 1;
}  
vect2 vect2::operator--(int)
{
    vect2 tmp(this->x, this->y);
    --(*this);
    return tmp;
} 

//============================================================

bool vect2::operator==(const vect2& other) const
{
    return (x == other.x && y == other.y);
}
bool vect2::operator!=(const vect2& other) const
{
    return !(*this == other);
}

//============================================================

vect2 operator+(int scalar, const vect2& v)
{
    return v + scalar;
}
vect2 operator-(int scalar, const vect2& v)
{
    return v * - 1 + scalar;
}
vect2 operator*(int scalar, const vect2& v)
{
    return v * scalar;
}
std::ostream& operator<<(std::ostream& os, const vect2& v)
{
    os << "{" << v[0] << ", " << v[1] << "}";
    return os;
}