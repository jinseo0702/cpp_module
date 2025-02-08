#include "./Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Constructors Make Dog Class that inherits animal Class"<<std::endl;
}

Dog::Dog(const Dog &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make Dog Class that inherits animal Class"<<std::endl;
}

Dog &Dog::operator=(const Dog& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make Dog Class that inherits animal Class"<<std::endl;
    return(*this);
}

Dog::~Dog()
{
    std::cout<<"Destructors Destroy Dog Class that inherits animal Class"<<std::endl;
}

void Dog::makeSound(void) const
{
    std::cout<<"Bow wow ~"<<std::endl;
}