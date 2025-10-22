// #ifndef BIGINT_HPP
// #define BIGINT_HPP


// #include <iostream>
// #include <ostream>
// #include <string>
// #include <sstream>


// class bigint
// {
//     private:
//         std::string digits;
//         void removeLeadingZeros();
//     public:
//         bigint();
//         bigint(unsigned int number);
//         bigint(const std::string &number);
//         bigint(const bigint& other);
//         bigint &operator=(const bigint& other);
//         ~bigint();

//     //comparaison
//         bool operator==(const bigint& other) const;
//         bool operator!=(const bigint& other) const;
//         bool operator>=(const bigint& other) const;
//         bool operator<=(const bigint& other) const;
//         bool operator>(const bigint& other) const;
//         bool operator<(const bigint& other) const;

//     //adding
//         bigint operator+(const bigint& other) const;
//         bigint &operator+=(const bigint& other);

//     //shefting withe 10
//         bigint operator<<(unsigned int n) const;
//         bigint operator>>(unsigned int n) const;
//         bigint &operator<<=(unsigned int n);
//         bigint &operator>>=(unsigned int n);
    
//     //shefting withe bigint
//         bigint operator<<(const bigint& other) const;
//         bigint operator>>(const bigint& other) const;
//         bigint &operator<<=(const bigint& other);
//         bigint &operator>>=(const bigint& other);
        
//     //increment
//         bigint operator++(int);
//         bigint &operator++();
//     //
//         const std::string &get_digit() const;
// };

// std::ostream &operator<<(std::ostream &out, const bigint& n);

// #endif



#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <ostream>

class bigint
{
    private:
        std::string digits;
        void remove();
    public:
        bigint();
        bigint(unsigned int number);
        bigint(const std::string& number);
        bigint(const bigint& other);
        bigint &operator=(const bigint& other);
        ~bigint();
        //=======================================comparaison
        bool operator==(const bigint& other) const;
        bool operator!=(const bigint& other) const;
        bool operator>(const bigint& other) const;
        bool operator<(const bigint& other) const;
        bool operator>=(const bigint& other) const;
        bool operator<=(const bigint& other) const;
        //=========================================add
        bigint operator+(const bigint& other) const;
        bigint &operator+=(const bigint& other);
        //=========================================shifting_10
        bigint operator<<(unsigned int n) const;
        bigint operator>>(unsigned int n) const;
        bigint &operator<<=(unsigned int n);
        bigint &operator>>=(unsigned int n);
        //=========================================shifting_bigint
        bigint operator<<(const bigint& other) const;
        bigint operator>>(const bigint& other) const;
        bigint &operator<<=(const bigint& other);
        bigint &operator>>=(const bigint& other);
        //=========================================increment
        bigint operator++(int);
        bigint &operator++();
        //=========================================geter
        const std::string get_digits() const;

};

std::ostream &operator<<(std::ostream& out, const bigint& n);

#endif