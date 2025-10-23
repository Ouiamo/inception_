// #include "test.hpp"


// void bigint::removeLeadingZeros()
// {
//     while (digits.size() > 1 && digits[0] == '0')
//         digits.erase(0, 1);
// }

// bigint::bigint() : digits("0") {}

// bigint::bigint(unsigned int number)
// {
//     std::ostringstream out;
//     out << number;
//     digits = out.str();
// }

// bigint::bigint(const std::string &number) : digits(number)
// {
//     this->removeLeadingZeros();
// }

// bigint::bigint(const bigint& other) : digits(other.digits) {}

// bigint &bigint::operator=(const bigint& other)
// {
//     if (this != &other)
//         digits = other.digits;
//     return *this;
// }

// bigint::~bigint(){}

// //==============================================================================

// std::string addstring(const std::string a, const std::string b)
// {
//     std::string res;
//     int exp = 0;
//     int i = a.size() - 1;
//     int j = b.size() - 1;
//     while (i >= 0 || j >= 0 || exp)
//     {
//         int sum = exp;
//         if (i >= 0) sum += a[i--] - '0';
//         if (j >= 0) sum += b[j--] - '0';
//         exp = sum / 10;
//         res.push_back(sum % 10 + '0');
//     }
//     for (size_t k = 0; k < res.size() / 2; k++)
//     {
//         char tmp = res[k];
//         res[k] = res[res.size() - 1 - k];
//         res[res.size() - 1 - k] = tmp;
//     }
//     return res;
// }

// bigint bigint::operator+(const bigint& other) const
// {
//     bigint tmp;
//     tmp.digits = addstring(digits, other.digits);
//     tmp.removeLeadingZeros();
//     return tmp;
// }
// bigint &bigint::operator+=(const bigint& other)
// {
//     *this = *this + other;
//     return *this;
// }

// //==============================================================================

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

// //=============================================================================

// bigint bigint::operator<<(unsigned int n) const
// {
//     if (digits == "0")
//         return *this;
//     bigint tmp(*this);
//     tmp.digits.append(n, '0');
//     tmp.removeLeadingZeros();
//     return tmp;
// }
// bigint bigint::operator>>(unsigned int n) const
// {
//     bigint tmp(*this);
//     if (n >= tmp.digits.size())
//     {
//         tmp.digits = "0";
//         return tmp;
//     }
//     tmp.digits.erase(tmp.digits.size() - n);
//     tmp.removeLeadingZeros();
//     return (tmp);
// }
// bigint &bigint::operator<<=(unsigned int n)
// {
//     *this = *this << n;
//     return *this;
// }
// bigint &bigint::operator>>=(unsigned int n)
// {
//     *this = *this >> n;
//     return *this;
// }

// //===================================================================================

// bigint bigint::operator<<(const bigint& other) const
// {
//     unsigned int n = std::atof(other.digits.c_str());
//     return *this << n;
// }
// bigint bigint::operator>>(const bigint& other) const
// {
//     unsigned int n = std::atof(other.digits.c_str());
//     return *this >> n;
// }
// bigint &bigint::operator<<=(const bigint& other)
// {
//     unsigned int n = std::atof(other.digits.c_str());
//     return *this <<= n;
// }
// bigint &bigint::operator>>=(const bigint& other)
// {
//     unsigned int n = std::atof(other.digits.c_str());
//     return *this >>= n;
// }

// //===============================================================================

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


// //==================================================================================

// const std::string &bigint::get_digit() const
// {
//     return digits;
// }

// std::ostream &operator<<(std::ostream &out,const bigint& n)
// {
//     out << n.get_digit();
//     return out;
// }


// #include "test.hpp"

// void bigint::remove()
// {
//     while (digits.size() > 1 && digits[0] == '0')
//         digits.erase(0, 1);
// }

// bigint::bigint() : digits("0"){}
// bigint::bigint(unsigned int number)
// {
//     std::stringstream out;
//     out << number;
//     digits = out.str();
// }
// bigint::bigint(const std::string& number) : digits(number)
// {
//     this->remove();
// }
// bigint::bigint(const bigint& other) : digits(other.digits){}
// bigint &bigint::operator=(const bigint& other)
// {
//     if (this == &other)
//         return *this;
//     digits = other.digits;
//     return *this;
// }
// bigint::~bigint(){}

// //==============================================================================================

// bool bigint::operator==(const bigint& other) const
// {
//     return digits == other.digits;
// }
// bool bigint::operator!=(const bigint& other) const
// {
//     return !(*this == other);
// }
// bool bigint::operator>(const bigint& other) const
// {
//     if (digits.size() != other.digits.size())
//         return digits.size() > other.digits.size();
//     return digits > other.digits;
// }
// bool bigint::operator<(const bigint& other) const
// {
//     return other > *this;
// }
// bool bigint::operator>=(const bigint& other) const
// {
//     return (*this == other || *this > other);
// }
// bool bigint::operator<=(const bigint& other) const
// {
//     return (other >= *this);
// }

// //===============================================================================================

// std::string add_string(const std::string& a, const std::string& b)
// {
//     std::string res;
//     int exp = 0;
//     int i = a.size() - 1;
//     int j = b.size() - 1;
//     while (i >= 0 || j >= 0 || exp)
//     {
//         int sum = exp;
//         if (i >= 0 ) sum += a[i--] - '0';
//         if (j >= 0 ) sum += b[j--] - '0';
//         exp = sum / 10;
//         res.push_back(sum % 10 + '0');
//     }
//     for(size_t k = 0; k < res.size() / 2; k++)
//     {
//         char tmp = res[k];
//         res[k] = res[res.size() - 1 - k];
//         res[res.size() - 1 - k] = tmp;
//     }
//     return res;
// }

// bigint bigint::operator+(const bigint& other) const
// {
//     bigint tmp;
//     tmp.digits = add_string(digits, other.digits);
//     tmp.remove();
//     return tmp;

// }
// bigint &bigint::operator+=(const bigint& other)
// {
//     *this = *this + other;
//     return *this;
// }

// //=============================================================================================
// bigint bigint::operator<<(unsigned int n) const
// {
//     if (digits == "0")
//         return *this;
//     bigint tmp(*this);
//     tmp.digits.append(n, '0');
//     tmp.remove();
//     return tmp;
// }
// bigint bigint::operator>>(unsigned int n) const
// {
//     bigint tmp(*this);
//     if (n >= digits.size())
//     {
//         tmp.digits = "0";
//         return tmp;
//     }
//     tmp.digits.erase(tmp.digits.size() - n);
//     tmp.remove();
//     return tmp;
// }
// bigint &bigint::operator<<=(unsigned int n)
// {
//     *this = *this << n;
//     return *this;
// }
// bigint &bigint::operator>>=(unsigned int n)
// {
//     *this = *this >> n;
//     return *this;
// }

// //===============================================================================================

// bigint bigint::operator<<(const bigint& other) const
// {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this << n;
// }
// bigint bigint::operator>>(const bigint& other) const
// {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this >> n;
// }
// bigint &bigint::operator<<=(const bigint& other)
// {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this <<= n;
// }
// bigint &bigint::operator>>=(const bigint& other)
// {
//     unsigned int n = std::atoi(other.digits.c_str());
//     return *this >>= n;
// }

// //===============================================================================================

// bigint &bigint::operator++()
// {
//     return *this += bigint(1);
// }
// bigint bigint::operator++(int)
// {
//     bigint tmp(*this);
//     ++(*this);
//     return tmp;
// }

// //===============================================================================================

// const std::string bigint::get_digits() const
// {
//     return digits;
// }

// std::ostream &operator<<(std::ostream &out, const bigint& n)
// {
//     out << n.get_digits();
//     return out;
// }


#include "test.hpp"

bigint::bigint() : digit("0"){}

bigint::bigint(unsigned int number) 
{
    std::ostringstream out;
    out << number;
    digit = out.str();
}

void bigint::remove()
{
    while (digit.size() > 1 && digit[0] == '0')
        digit.erase(0, 1);
}

bigint::bigint(const std::string& number) : digit(number)
{
    this->remove();
}

bigint::bigint(const bigint& other) : digit(other.digit) {}

bigint& bigint::operator=(const bigint& other)
{
    if ( this != &other)
        digit = other.digit;
    return *this;
}

bigint::~bigint(){}

//===========================================================================

std::string add_str(const std::string a, const std::string b)
{
    std::string res;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int exp = 0;

    while (i >= 0 || j >= 0 || exp)
    {
        int sum = exp;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        exp = sum / 10;
        res.push_back(sum % 10 + '0');
    }
    for (size_t k = 0; k < res.size() / 2; k++)
    {
        char tmp = res[k];
        res[k] = res[res.size() - 1 - k];
        res[res.size() - 1 - k] = tmp;
    }
    return res;
}

bigint bigint::operator+(const bigint& other) const
{
    bigint tmp;
    tmp.digit = add_str(digit, other.digit);
    tmp.remove();
    return tmp;
}
bigint &bigint::operator+=(const bigint& other)
{
    *this = *this + other;
    return *this;
}

//====================================================================================

bool bigint::operator==(const bigint& other) const
{
    return digit == other.digit;
}
bool bigint::operator!=(const bigint& other) const
{
    return !(*this == other);
}
bool bigint::operator>(const bigint& other) const
{
    if (digit.size() != other.digit.size())
        return digit.size() > other.digit.size();
    return digit > other.digit;
}
bool bigint::operator<(const bigint& other) const
{
    return other > *this;
}
bool bigint::operator>=(const bigint& other) const
{
    return (*this == other || *this > other);
}
bool bigint::operator<=(const bigint& other) const
{
    return other >= *this;
}

//========================================================================================

bigint bigint::operator<<(unsigned int n) const
{
    if (digit == "0")
        return *this;
    bigint tmp(*this);
    tmp.digit.append(n, '0');
    // std::cout<<"======>>>>>"<<tmp.digit<<std::endl;
    tmp.remove();
    return tmp;
}
bigint bigint::operator>>(unsigned int n) const
{
    bigint tmp(*this);
    if (n >= digit.size())
    {
        tmp.digit = "0";
        return tmp;
    }
    tmp.digit.erase(tmp.digit.size() - n);
    return tmp;
}
bigint &bigint::operator<<=(unsigned int n)
{
    *this = *this << n;
    return *this;
}
bigint &bigint::operator>>=(unsigned int n)
{
    *this = *this >> n;
    return *this;
}

//=================================================================================================

bigint bigint::operator<<(const bigint& other) const
{
    unsigned int n = std::atoi(other.digit.c_str());
    return *this << n;
}
bigint bigint::operator>>(const bigint& other) const
{
    unsigned int n = std::atoi(other.digit.c_str());
    return *this >> n;
}
bigint &bigint::operator<<=(const bigint& other)
{
    unsigned int n = std::atoi(other.digit.c_str());
    return *this <<= n;
}
bigint &bigint::operator>>=(const bigint& other)
{
    unsigned int n = std::atoi(other.digit.c_str());
    return *this >>= n;
}

//==================================================================================================

bigint &bigint::operator++()
{
    return *this += bigint("1");
}
bigint bigint::operator++(int)
{
    bigint tmp(*this);
    ++(*this);
    return tmp;
}

//=================================================================================================

const std::string bigint::get_degit() const
{
    return digit;
}

//=================================================================================================

std::ostream &operator<<(std::ostream &out, const bigint& n)
{
    out << n.get_degit();
    return out;
}