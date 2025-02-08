#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"Constructors Make WrongAnimal Class"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make WrongAnimal Class"<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make WrongAnimal Class"<<std::endl;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"Destructors Make WrongAnimal Class"<<std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout<<"Wrong Wrong Wrong animals not MakeSound"<<std::endl;
}