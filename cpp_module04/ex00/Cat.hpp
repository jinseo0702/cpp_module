#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "./Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& others);
    Cat& operator=(const Cat& others);
    virtual ~Cat();
public:
    virtual void makeSound(void) const;
};


#endif