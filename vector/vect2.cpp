#include "vect2.hpp"

// Constructors
vect2::vect2() : x(0), y(0) {}
vect2::vect2(int x, int y) : x(x), y(y) {}

// Access operator
int& vect2::operator[](int index) {
    return (index == 0 ? x : y);
}

const int& vect2::operator[](int index) const {
    return (index == 0 ? x : y);
}

// Arithmetic between vectors
vect2 vect2::operator+(const vect2& other) const {
    return vect2(x + other.x, y + other.y);
}

vect2 vect2::operator-(const vect2& other) const {
    return vect2(x - other.x, y - other.y);
}

vect2 vect2::operator*(const vect2& other) const {
    return vect2(x * other.x, y * other.y);
}

// Arithmetic with scalar (right side)
vect2 vect2::operator+(int scalar) const {
    return vect2(x + scalar, y + scalar);
}

vect2 vect2::operator-(int scalar) const {
    return vect2(x - scalar, y - scalar);
}

vect2 vect2::operator*(int scalar) const {
    return vect2(x * scalar, y * scalar);
}

// Compound assignment
vect2& vect2::operator+=(const vect2& other) {
    x += other.x;
    y += other.y;
    return *this;
}

vect2& vect2::operator-=(const vect2& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

vect2& vect2::operator*=(int scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

vect2& vect2::operator+=(int scalar) {
    x += scalar;
    y += scalar;
    return *this;
}

vect2& vect2::operator-=(int scalar) {
    x -= scalar;
    y -= scalar;
    return *this;
}

// Increment / Decrement
vect2& vect2::operator++() {
    ++x;
    ++y;
    return *this;
}

vect2 vect2::operator++(int) {
    vect2 temp(*this);
    ++(*this);
    return temp;
}

vect2& vect2::operator--() {
    --x;
    --y;
    return *this;
}

vect2 vect2::operator--(int) {
    vect2 temp(*this);
    --(*this);
    return temp;
}

// Comparison
bool vect2::operator==(const vect2& other) const {
    return x == other.x && y == other.y;
}

bool vect2::operator!=(const vect2& other) const {
    return !(*this == other);
}

// Friend operators (scalar on left)
vect2 operator+(int scalar, const vect2& v) {
    return vect2(v[0] + scalar, v[1] + scalar);
}

vect2 operator-(int scalar, const vect2& v) {
    return vect2(scalar - v[0], scalar - v[1]);
}

vect2 operator*(int scalar, const vect2& v) {
    return vect2(v[0] * scalar, v[1] * scalar);
}

// Output
std::ostream& operator<<(std::ostream& os, const vect2& v) {
    os << "{" << v[0] << ", " << v[1] << "}";
    return os;
}
