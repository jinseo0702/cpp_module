#include "./Animal.hpp"

Animal::Animal()
{
    std::cout<<"Constructors Make animal Class"<<std::endl;
}

Animal::Animal(const Animal &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make animal Class"<<std::endl;
}

Animal &Animal::operator=(const Animal& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make animal Class"<<std::endl;
    return(*this);
}

Animal::~Animal()
{
    std::cout<<"Destructors Make animal Class"<<std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout<<"silent"<<std::endl;
}