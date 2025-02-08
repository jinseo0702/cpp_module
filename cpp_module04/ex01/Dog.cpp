#include "./Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->Brain_Dog = new Brain;
    std::cout<<"Constructors Make Dog Class that inherits animal Class default"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Dog::Dog(const Dog &others)
{
    this->type = others.type;
    this->Brain_Dog = new Brain(*others.Brain_Dog);
    std::cout<<"Constructors Make Dog Class that inherits animal Class Copy"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Dog &Dog::operator=(const Dog& others)
{
    if (this != &others)
    {
        this->type = others.type;
        delete this->Brain_Dog;
        this->Brain_Dog = new Brain(*others.Brain_Dog);
    }
    std::cout<<"Constructors Make Dog Class that inherits animal Class operator ="<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
    return(*this);
}

Dog::~Dog()
{
    delete this->Brain_Dog;
    Brain_Dog = NULL;
    std::cout<<"Destructors Destroy Dog Class that inherits animal Class"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

void Dog::makeSound(void) const
{
    std::cout<<"Bow wow ~"<<std::endl;
}