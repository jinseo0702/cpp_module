#ifndef ICE_HPP
#define ICE_HPP

#include "./AMateria.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
public:
    Ice(/* args */);
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);
    ~Ice ();
    virtual Ice* clone() const;
    virtual void use(ICharacter& target);
};

#endif