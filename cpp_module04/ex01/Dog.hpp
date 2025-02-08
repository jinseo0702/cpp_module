#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
    Brain *Brain_Dog;
public:
    Dog();
    Dog(const Dog& others);
    Dog& operator=(const Dog& others);
    virtual ~Dog();
public:
    virtual void makeSound(void) const;
};


#endif