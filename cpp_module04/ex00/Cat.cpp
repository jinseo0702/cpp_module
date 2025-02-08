#include "./Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Constructors Make Cat Class that inherits animal Class"<<std::endl;
}

Cat::Cat(const Cat &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make Cat Class that inherits animal Class"<<std::endl;
}

Cat &Cat::operator=(const Cat& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make Cat Class that inherits animal Class"<<std::endl;
    return(*this);
}

Cat::~Cat()
{
    std::cout<<"Destructors Destroy Cat Class that inherits animal Class"<<std::endl;
}

void Cat::makeSound(void) const
{
    std::cout<<"Meow Meow ~"<<std::endl;
}