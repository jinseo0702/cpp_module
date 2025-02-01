#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    std::cout<<"Make ClapTrap"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& others)
{
    this->name = others.name;
    this->Hit_point = others.Hit_point;
    this->Energy_point = others.Energy_point;
    this->Attack_damage = others.Attack_damage;
    std::cout<<"Make ClapTrap"<<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& others)
{
    if (this != &others)
    {
        this->name.assign(others.name);
        this->Hit_point = others.Hit_point;
        this->Energy_point = others.Energy_point;
        this->Attack_damage = others.Attack_damage;
    }
    std::cout<<"Make ClapTrap"<<std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Good bye ClapTrap : "<<this->name<<std::endl;
}

std::string ClapTrap::getname(void) const
{
    std::cout<<"get name!"<<std::endl;
    return (this->name);
}

unsigned int ClapTrap::get_Hit_p(void) const
{
    std::cout<<"get Hit Point!"<<std::endl;
    return (this->Hit_point);
}

unsigned int ClapTrap::get_E_p(void) const
{
    std::cout<<"get Energy Point!"<<std::endl;
    return (this->Energy_point);
}

unsigned int ClapTrap::get_A_D(void) const
{
    std::cout<<"get Attack Point!"<<std::endl;
    return (this->Attack_damage);
}

bool ClapTrap::Check_point(void)
{
    if (this->Hit_point == 0)
    {
        std::cout<<"point is not enough hit point is : "<<this->Hit_point<<std::endl;
        return (false);
    }
    else if(this->Energy_point == 0)
    {
        std::cout<<"point is not enough Energy point is : "<<this->Hit_point<<std::endl;
        return (false);
    }
    return (true);
}

void ClapTrap::attack(const std::string& target)
{
    if (Check_point() == false)
        return;
    std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->Attack_damage<<" points of damage!"<<std::endl;
    this->Energy_point -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Check_point() == false)
        return;
    std::cout<<"ClapTrap "<<this->name<<" take damage"<<std::endl;
    this->Attack_damage = amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Check_point() == false)
        return;
    std::cout<<"ClapTrap "<<this->name<<" be repaired"<<std::endl;
        this->Hit_point = amount;
    this->Energy_point -= 1;
}