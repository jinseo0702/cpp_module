#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
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
    Fixed& operator=(const Fixed& others);
    ~Fixed(void);
public:
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif