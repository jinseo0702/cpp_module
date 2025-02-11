#include "./Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout<<"Cure Make default constructor 1 option"<<std::endl;
    std::cout<<"Cure d is :"<<this<<std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other.getType())
{
    std::cout<<"Cure Make Copy constructor 2 option"<<std::endl;
    std::cout<<"Cure d is :"<<this<<std::endl;
}

Cure &Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        *this = other;
    }
    std::cout<<"Cure Make Assignment operator constructor 3 option"<<std::endl;
    std::cout<<"Cure d is :"<<this<<std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout<<"Destrutor do delete Cure"<<std::endl;
    std::cout<<"Cure d is :"<<this<<std::endl;
}

Cure *Cure::clone() const
{
    Cure *temp = new Cure();
    return (temp);
}

void Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}