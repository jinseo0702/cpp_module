#include "./AMateria.hpp"

AMateria::AMateria()
{
    std::cout<<"AMateria Make default constructor non type 1 option"<<std::endl;
    std::cout<<"AMateria addr is :"<<this<<std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout<<"AMateria Make default constructor 2 option"<<std::endl;
    std::cout<<"AMateria addr is :"<<this<<std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
    std::cout<<"AMateria Make copy constructor 3 option"<<std::endl;
    std::cout<<"AMateria addr is :"<<this<<std::endl;
}

AMateria &AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout<<"AMateria Make Assignment operator constructor 4 option"<<std::endl;
    std::cout<<"AMateria addr is :"<<this<<std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout<<"AMateria Destructor"<<std::endl;
    std::cout<<"AMateria addr is :"<<this<<std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout<<"maybe not init materia not use for "<<target.getName()<<std::endl;
}