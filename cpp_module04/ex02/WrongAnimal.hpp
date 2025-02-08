#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& others);
    WrongAnimal& operator=(const WrongAnimal& others);
    virtual ~WrongAnimal();
public:
    std::string getType(void) const;
    void makeSound(void) const;
};

#endif