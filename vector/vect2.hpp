// #ifndef VECT2_HPP
// #define VECT2_HPP

// #include <iostream>

// class vect2 {
// private:
//     int x;
//     int y;

// public:
//     // Constructors
//     vect2();
//     vect2(int x, int y);

//     // Access operator
//     int& operator[](int index);
//     const int& operator[](int index) const;

//     // Arithmetic operators
//     vect2 operator+(const vect2& other) const;
//     vect2 operator-(const vect2& other) const;
//     vect2 operator*(const vect2& other) const;
//     vect2 operator+(int scalar) const;
//     vect2 operator-(int scalar) const;
//     vect2 operator*(int scalar) const;

//     // Compound assignment
//     vect2& operator+=(const vect2& other);
//     vect2& operator-=(const vect2& other);
//     vect2& operator*=(int scalar);

//     vect2& operator+=(int scalar);
//     vect2& operator-=(int scalar);

//     // Increment / Decrement
//     vect2& operator++();   // prefix ++a
//     vect2 operator++(int); // postfix a++
//     vect2& operator--();   // prefix --a
//     vect2 operator--(int); // postfix a--

//     // Comparison
//     bool operator==(const vect2& other) const;
//     bool operator!=(const vect2& other) const;

//     // Friend operators
//     friend vect2 operator+(int scalar, const vect2& v);
//     friend vect2 operator-(int scalar, const vect2& v);
//     friend vect2 operator*(int scalar, const vect2& v);
//     friend std::ostream& operator<<(std::ostream& os, const vect2& v);
// };

// #endif

#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>
#include <ostream>

class vect2
{
    private :
        int x;
        int y;
    public :
        vect2();
        vect2(int x, int y);

        bool operator==(const vect2& other) const;
        bool operator!=(const vect2& other) const;

        vect2 operator+(const vect2& other) const;
        vect2 operator-(const vect2& other) const;
        vect2 operator*(const vect2& other) const;

        vect2 operator+(int scalar) const;
        vect2 operator-(int scalar) const;
        vect2 operator*(int scalar) const;       

        vect2 &operator+=(const vect2& other);
        vect2 &operator-=(const vect2& other);

        vect2 &operator+=(int scalar);
        vect2 &operator-=(int scalar);
        vect2 &operator*=(int scalar);

        vect2 &operator++();
        vect2 operator++(int);
        vect2 &operator--();
        vect2 operator--(int);

        const int &operator[](int index) const;
        int &operator[](int index);

};

vect2 operator+(int scalar, const vect2& v);
vect2 operator-(int scalar, const vect2& v);
vect2 operator*(int scalar, const vect2& v);

std::ostream &operator<<(std::ostream &out, const vect2 &v);

#endif