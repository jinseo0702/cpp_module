#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout<<"Constructors Make WrongCat Class that inherits WrongAnimal Class"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &others)
{
    this->type = others.type;
    std::cout<<"Constructors Make WrongCat Class that inherits WrongAnimal Class"<<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& others)
{
    if (this != &others)
    {
        this->type = others.type;
    }
    std::cout<<"Constructors Make WrongCat Class that inherits WrongAnimal Class"<<std::endl;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout<<"Destructors Destroy WrongCat Class that inherits WrongAnimal Class"<<std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout<<"WrongCat Meow Meow ~"<<std::endl;
}