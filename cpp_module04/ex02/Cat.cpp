#include "./Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->Brain_Cat = new Brain;
    std::cout<<"Constructors Make Cat Class that inherits animal Class default"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Cat::Cat(const Cat &others)
{
    this->type = others.type;
    this->Brain_Cat = new Brain(*others.Brain_Cat);
    std::cout<<"Constructors Make Cat Class that inherits animal Class copy"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Cat &Cat::operator=(const Cat& others)
{
    if (this != &others)
    {
        this->type = others.type;
        delete this->Brain_Cat;
        this->Brain_Cat = new Brain(*others.Brain_Cat);
    }
    std::cout<<"Constructors Make Cat Class that inherits animal Class operator ="<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
    return(*this);
}

Cat::~Cat()
{
    delete this->Brain_Cat;
    Brain_Cat = NULL;
    std::cout<<"Destructors Destroy Cat Class that inherits animal Class"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

void Cat::makeSound(void) const
{
    std::cout<<"Meow Meow ~"<<std::endl;
}