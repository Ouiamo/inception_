#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <string>

class bigint {
private:
    std::string digits; // store as string for arbitrary length

    void removeLeadingZeros();

public:
    // Constructors
    bigint();
    bigint(unsigned int n);
    bigint(const std::string &s);
    bigint(const bigint &other);
    bigint &operator=(const bigint &other);
    ~bigint();

    // Arithmetic
    bigint operator+(const bigint &other) const;
    bigint &operator+=(const bigint &other);

    // Comparison
    bool operator==(const bigint &other) const;
    bool operator!=(const bigint &other) const;
    bool operator<(const bigint &other) const;
    bool operator<=(const bigint &other) const;
    bool operator>(const bigint &other) const;
    bool operator>=(const bigint &other) const;

    // Digit shifts (base 10)
    bigint operator<<(unsigned int n) const;
    bigint operator>>(unsigned int n) const;
    bigint &operator<<=(unsigned int n);
    bigint &operator>>=(unsigned int n);

    // Shift by bigint
    bigint operator<<(const bigint &other) const;
    bigint operator>>(const bigint &other) const;
    bigint &operator<<=(const bigint &other);
    bigint &operator>>=(const bigint &other);

    // Increment / decrement
    bigint operator++(int);
    bigint &operator++();
    bigint operator--(int);
    bigint &operator--();

    // Stream output
    friend std::ostream &operator<<(std::ostream &os, const bigint &n);
};

#endif
