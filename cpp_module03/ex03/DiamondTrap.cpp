#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
    ClapTrap(name + "_clap_name"), 
    ScavTrap(name + "_clap_name"), 
    FragTrap(name + "_clap_name")
{
    this->name = name;
    this->Energy_point = 50;
    std::cout<<"Make DiamondTrap"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& others) : 
    ClapTrap(others.name + "_clap_name"),
    ScavTrap(others.name + "_clap_name"),
    FragTrap(others.name + "_clap_name")
{
    this->name = others.name;
    this->Hit_point = others.Hit_point;
    this->Energy_point = others.Energy_point;
    this->Attack_damage = others.Attack_damage;
    std::cout<<"Make DiamondTrap"<<std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& others)
{
    if (this != &others)
    {
        this->name = others.name;
        this->Hit_point = others.Hit_point;
        this->Energy_point = others.Energy_point;
        this->Attack_damage = others.Attack_damage;
    }
    std::cout<<"Make DiamondTrap"<<std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"Good bye DiamondTrap : "<<this->name<<std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout<<"Claptrap name is : "<<ClapTrap::name<<std::endl;
    std::cout<<"Diamond name is : "<<this->name<<std::endl;
}