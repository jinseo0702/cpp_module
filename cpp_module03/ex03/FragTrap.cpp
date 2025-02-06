#include "./FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
    std::cout<<"Make FragTrap"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& others) : ClapTrap(others.name)
{
    this->Hit_point = others.Hit_point;
    this->Energy_point = others.Energy_point;
    this->Attack_damage = others.Attack_damage;
    std::cout<<"Make FragTrap"<<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& others)
{
    if (this != &others)
    {
        this->name = others.name;
        this->Hit_point = others.Hit_point;
        this->Energy_point = others.Energy_point;
        this->Attack_damage = others.Attack_damage;
    }
    std::cout<<"Make FragTrap"<<std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout<<"Good bye FragTrap : "<<this->name<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"FragTrap "<<this->name<<" says : do highfive Guys!"<<std::endl;
}