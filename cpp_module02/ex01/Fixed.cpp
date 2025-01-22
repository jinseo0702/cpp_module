#include "./Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout<<"Default constructor called"<<std::endl;
    this->f_p_num = 0;
}

Fixed::Fixed(const int num)
{
    std::cout<<"Int constructor called"<<std::endl;
    this->f_p_num = num;
}

Fixed::Fixed(const float num)
{
    std::cout<<"Float constructor called"<<std::endl;
    this->f_p_num = num;
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
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->f_p_num);
}

void Fixed::setRawBits( int const raw )
{
    std::cout<<"setRawBits member function called"<<std::endl;
    this->f_p_num = raw;
}