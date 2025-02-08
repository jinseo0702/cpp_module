#ifndef AMIMAL_HPP
#define AMIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& others);
    Animal& operator=(const Animal& others);
    virtual ~Animal();
public:
    std::string getType(void) const;
    virtual void makeSound(void) const;
};

#endif