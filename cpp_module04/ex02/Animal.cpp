#include "./Animal.hpp"

Animal::Animal()
{
    std::cout<<"Constructors Make animal Class default"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Animal::Animal(const Animal &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make animal Class Copy"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

Animal &Animal::operator=(const Animal& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make animal Class operator = "<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
    return(*this);
}

Animal::~Animal()
{
    std::cout<<"Destructors Make animal Class"<<std::endl;
    std::cout<<"Adr is : "<<this<<std::endl;
}

std::string Animal::getType(void) const
{
    return (this->type);
}