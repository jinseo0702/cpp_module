#ifndef AMETERIA_HPP
#define AMETERIA_HPP

#include <string>
#include <iostream>
#include "./ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);
    virtual ~AMateria();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif