// #include "test.hpp"
// #include <algorithm>
// #include <sstream>

// void bigint::removeLeadingZeros() 
// {
//     while (digits.size() > 1 && digits[0] == '0')
//         digits.erase(0, 1);
// }

// // Constructors
// bigint::bigint() : digits("0") {}
// bigint::bigint(unsigned int n) {
//     std::ostringstream oss;
//     oss << n;
//     digits = oss.str();
// }
// bigint::bigint(const std::string &s) : digits(s) {
//     removeLeadingZeros();
// }
// bigint::bigint(const bigint &other) : digits(other.digits) {}
// bigint::~bigint() {}

// bigint &bigint::operator=(const bigint &other) {
//     if (this != &other)
//         digits = other.digits;
//     return *this;
// }


// // Helper: add two numeric strings
// static std::string addStrings(const std::string &a, const std::string &b) {
//     std::string res;
//     int carry = 0;
//     int i = a.size() - 1;
//     int j = b.size() - 1;
//     while (i >= 0 || j >= 0 || carry) {
//         int sum = carry;
//         if (i >= 0) sum += a[i--] - '0';
//         if (j >= 0) sum += b[j--] - '0';
//         carry = sum / 10;
//         res.push_back((sum % 10) + '0');
//     }
//     for (size_t k = 0; k < res.size() / 2; ++k) {
//         char tmp = res[k];
//         res[k] = res[res.size() - 1 - k];
//         res[res.size() - 1 - k] = tmp;
//     }

//     return res;
// }


// // Arithmetic
// bigint bigint::operator+(const bigint &other) const {
//     bigint result;
//     result.digits = addStrings(this->digits, other.digits);
//     result.removeLeadingZeros();
//     return result;
// }

// bigint &bigint::operator+=(const bigint &other) {
//     *this = *this + other;
//     return *this;
// }

// // ========================================================Comparison
// bool bigint::operator==(const bigint& other) const
// {
//     return digits == other.digits;
// }
// bool bigint::operator!=(const bigint& other) const
// {
//     return !(*this == other);
// }
// bool bigint::operator<(const bigint& other) const
// {
//     if (digits.size() != other.digits.size())
//         return digits.size() < other.digits.size();
//     return digits < other.digits;
// }
// bool bigint::operator>(const bigint& other) const
// {
//     return other < *this;
// }
// bool bigint::operator<=(const bigint& other) const
// {
//     return *this == other || *this < other;
// }
// bool bigint::operator>=(const bigint& other) const
// {
//     return other <= *this;
// }
// // ===================================================================================Shifts with int
// bigint bigint::operator<<(unsigned int n) const {
//     if (*this == bigint(0)) return *this;
//     bigint result(*this);
//     result.digits.append(n, '0');
//     result.removeLeadingZeros();
//     return result;
// }

// bigint bigint::operator>>(unsigned int n) const {
//     bigint result(*this);
//     if (n >= result.digits.size()) {
//         result.digits = "0";
//         return result;
//     }
//     result.digits.erase(result.digits.size() - n);
//     result.removeLeadingZeros();
//     return result;
// }

// bigint &bigint::operator<<=(unsigned int n) {
//     if (*this == bigint(0)) return *this;
//     digits.append(n, '0');
//     return *this;
// }

// bigint &bigint::operator>>=(unsigned int n) {
//     if (n >= digits.size()) {
//         digits = "0";
//         return *this;
//     }
//     digits.erase(digits.size() - n);
//     removeLeadingZeros();
//     return *this;
// }

// // Shifts with bigint
// bigint bigint::operator<<(const bigint &other) const {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this << n;
// }
// bigint bigint::operator>>(const bigint &other) const {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this >> n;
// }
// bigint &bigint::operator<<=(const bigint &other) {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this <<= n;
// }
// bigint &bigint::operator>>=(const bigint &other) {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this >>= n;
// }

// // Increment / Decrement
// bigint &bigint::operator++()
// {
//     *this = *this + bigint(1);
//     return *this;
// }

// bigint bigint::operator++(int)
// {
//     bigint tmp(*this);
//     ++(*this);
//     return (tmp);
// }

// const std::string &bigint::get_digit() const
// {
//     return this->digits;
// }

// // Output
// std::ostream &operator<<(std::ostream &os, const bigint &n) {
//     os << n.get_digit();
//     return os;
// }
