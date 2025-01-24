#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
private:
    int f_p_num;
    static const int frac_bit = 8;
public:
    Fixed(void);
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& others);
    ~Fixed(void);
    Fixed& operator=(const Fixed& others);
public:
    bool operator>(const Fixed& others);
    bool operator<(const Fixed& others);
    bool operator>=(const Fixed& others);
    bool operator<=(const Fixed& others);
    bool operator==(const Fixed& others);
    bool operator!=(const Fixed& others);
public:
    Fixed operator+(const Fixed& others);
    Fixed operator-(const Fixed& others);
    Fixed operator*(const Fixed& others);
    Fixed operator/(const Fixed& others);
    Fixed& operator++();
    Fixed operator++(int);
public:
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed& min(Fixed& fix1, Fixed& fix2);
    static const Fixed& min(const Fixed& fix1, const Fixed& fix2);
    static Fixed& max(Fixed& fix1, Fixed& fix2);
    static const Fixed& max(const Fixed& fix1, const Fixed& fix2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fix);

#endif