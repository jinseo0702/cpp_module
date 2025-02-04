#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->beRepaired(100);
    this->takeEnergy(50);
    this->takeDamage(20);
    this->name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
    std::cout<<"Make ScavTrap"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& others)
{
    this->name = others.name;
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
        this->beRepaired(others.get_Hit_p());
        this->takeEnergy(others.get_E_p());
        this->takeDamage(others.get_A_D());
    }
    std::cout<<"Make ScavTrap"<<std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout<<"Good bye ClapTrap"<<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Check_point() == false)
        return;
    std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
    this->get_E_p() -= 1;
}
