#ifndef CURE_HPP
#define CURE_HPP

#include "./AMateria.hpp"
#include <string>
#include <iostream>

class Cure : public AMateria
{
public:
    Cure(/* args */);
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    ~Cure ();
    virtual Cure* clone() const;
    virtual void use(ICharacter& target);
};

#endif