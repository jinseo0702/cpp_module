#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "./Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& others);
    Dog& operator=(const Dog& others);
    virtual ~Dog();
public:
    virtual void makeSound(void) const;
};


#endif