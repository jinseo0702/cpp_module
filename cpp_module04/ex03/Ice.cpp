#include "./Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout<<"ICE Make default constructor 1 option"<<std::endl;
    std::cout<<"ICE addr is :"<<this<<std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other.getType())
{
    std::cout<<"ICE Make Copy constructor 2 option"<<std::endl;
    std::cout<<"ICE addr is :"<<this<<std::endl;
}

Ice &Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        *this = other;
    }
    std::cout<<"ICE Make Assignment operator constructor 3 option"<<std::endl;
    std::cout<<"ICE addr is :"<<this<<std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout<<"Destrutor do delete Ice"<<std::endl;
    std::cout<<"ICE addr is :"<<this<<std::endl;
}

Ice *Ice::clone() const
{
    Ice *temp = new Ice();
    return (temp);
}

void Ice::use(ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}