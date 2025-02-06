#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    std::cout<<"Make ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& others) : ClapTrap(others.name)
{
    this->Hit_point = others.Hit_point;
    this->Energy_point = others.Energy_point;
    this->Attack_damage = others.Attack_damage;
    std::cout<<"Make ScavTrap"<<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& others)
{
    if (this != &others)
    {
        this->name = others.name;
        this->Hit_point = others.Hit_point;
        this->Energy_point = others.Energy_point;
        this->Attack_damage = others.Attack_damage;
    }
    std::cout<<"Make ScavTrap"<<std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout<<"Good bye ScavTrap : "<<this->name<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Check_point() == false)
        return;
    std::cout<<"ScavTrap "<<this->name<<" attacks "<<target<<", causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
    this->Energy_point -= 1;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<this->name<<" is now in Gate keeper mode."<<std::endl;
}
