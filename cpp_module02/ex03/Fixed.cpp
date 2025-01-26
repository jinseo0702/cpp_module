#include "./Fixed.hpp"

Fixed::Fixed(void)
{
    this->f_p_num = 0;
}

Fixed::Fixed(const int num)
{
    this->f_p_num = num << this->frac_bit;
}


Fixed::Fixed(const float num)
{
    this->f_p_num = roundf(num * (1 << this->frac_bit));
}

Fixed::Fixed(const Fixed &others)
{
    *this = others;
}

Fixed& Fixed::operator=(const Fixed& others)
{
    if (this != &others)
    {
        this->f_p_num = others.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits(void) const
{
    return (this->f_p_num);
}

void Fixed::setRawBits( int const raw )
{
    this->f_p_num = raw;
}

float Fixed::toFloat(void) const
{
    float temp = static_cast<float>(this->f_p_num) / (1 << this->frac_bit);
    return (temp);
}

int Fixed::toInt(void) const
{
    int temp = this->f_p_num / (1 << this->frac_bit);
    return (temp);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fix)
{
    out << fix.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed& others)
{
    if(this->f_p_num > others.f_p_num)
        return (true);
    return(false);
}

bool Fixed::operator<(const Fixed& others)
{
    if(this->f_p_num < others.f_p_num)
        return (true);
    return(false);
}

bool Fixed::operator>=(const Fixed& others)
{
    if(this->f_p_num >= others.f_p_num)
        return (true);
    return(false);
}

bool Fixed::operator<=(const Fixed& others)
{
    if(this->f_p_num >= others.f_p_num)
        return (true);
    return(false);
}

bool Fixed::operator==(const Fixed& others)
{
    if(this->f_p_num == others.f_p_num)
        return (true);
    return(false);
}

bool Fixed::operator!=(const Fixed& others)
{
    if(this->f_p_num != others.f_p_num)
        return (true);
    return(false);
}

Fixed Fixed::operator+(const Fixed& others)
{
    Fixed temp;
    temp.f_p_num = this->f_p_num + others.f_p_num;
    return (temp);
}

Fixed Fixed::operator-(const Fixed& others)
{
    Fixed temp;
    temp.f_p_num = this->f_p_num - others.f_p_num;
    return (temp);
}

Fixed Fixed::operator*(const Fixed& others)
{
    Fixed temp;
    temp.f_p_num = (this->f_p_num * others.f_p_num) / (1 << this->frac_bit);
    return (temp);
}

Fixed Fixed::operator/(const Fixed& others)
{
    Fixed temp;
    temp.f_p_num = (this->f_p_num / others.f_p_num) * (1 << this->frac_bit);
    return (temp);
}

Fixed& Fixed::operator++()
{
    this->f_p_num += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->f_p_num += 1;
    return (temp);
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if (fix1.f_p_num > fix2.f_p_num)
        return(fix2);
    return(fix1);
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1.f_p_num > fix2.f_p_num)
        return(fix2);
    return(fix1);
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
    if (fix1.f_p_num > fix2.f_p_num)
        return(fix1);
    return(fix2);
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1.f_p_num > fix2.f_p_num)
        return(fix1);
    return(fix2);
}