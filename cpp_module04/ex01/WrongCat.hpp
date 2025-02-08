#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "./WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat& others);
    WrongCat& operator=(const WrongCat& others);
    virtual ~WrongCat();
public:
    void makeSound(void) const;
};


#endif