#include "./Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->f_p_num = 0;
}

Fixed::Fixed(const int num)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->f_p_num = num << this->frac_bit;
}


Fixed::Fixed(const float num)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->f_p_num = roundf(num * (1 << this->frac_bit));
}

Fixed::Fixed(const Fixed &others)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = others;
}

Fixed& Fixed::operator=(const Fixed& others)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &others)
    {
        this->f_p_num = others.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->f_p_num);
}

void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
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